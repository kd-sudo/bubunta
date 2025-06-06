from fastapi import FastAPI, Depends, HTTPException
from fastapi.security import HTTPBasic, HTTPBasicCredentials
from dotenv import load_dotenv
import os
import secrets
import requests

load_dotenv()

app = FastAPI()
security = HTTPBasic()

USERNAME = os.getenv("API_USERNAME")
PASSWORD = os.getenv("API_PASSWORD")

def check_auth(credentials: HTTPBasicCredentials = Depends(security)):
    correct_username = secrets.compare_digest(credentials.username, USERNAME)
    correct_password = secrets.compare_digest(credentials.password, PASSWORD)
    if not (correct_username and correct_password):
        raise HTTPException(status_code=401, detail="Unauthorized")

def format_day(day_data):
    return {
        "date": day_data["date"],
        "avg_temp": f"{day_data['avgtempC']}°C",
        "description": day_data["hourly"][4]["weatherDesc"][0]["value"],
    }

@app.get("/weather/current")
def get_current_weather(city: str = "Kyiv", _: HTTPBasicCredentials = Depends(check_auth)):
    url = f"https://wttr.in/{city}?format=j1"
    try:
        response = requests.get(url)
        response.raise_for_status()
        data = response.json()
        current = data["current_condition"][0]
        return {
            "city": city,
            "temperature": f"{current['temp_C']}°C",
            "humidity": f"{current['humidity']}%",
            "condition": current["weatherDesc"][0]["value"]
        }
    except Exception as e:
        raise HTTPException(status_code=500, detail=f"Weather API error: {str(e)}")

@app.get("/weather/forecast")
def get_forecast(city: str = "Kyiv", _: HTTPBasicCredentials = Depends(check_auth)):
    url = f"https://wttr.in/{city}?format=j1"
    try:
        response = requests.get(url)
        response.raise_for_status()
        data = response.json()
        forecast_days = data["weather"][:3]
        return {
            "city": city,
            "forecast": [format_day(day) for day in forecast_days]
        }
    except Exception as e:
        raise HTTPException(status_code=500, detail=f"Forecast error: {str(e)}")
