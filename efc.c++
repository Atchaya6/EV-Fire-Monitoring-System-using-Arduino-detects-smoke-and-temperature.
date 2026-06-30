#include <DHT.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define DHTPIN 4
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

#define GAS_SENSOR A0
#define BUZZER 5
#define LED 6

float tempLimit = 29.5;
int gasLimit = 400;

// Replace 0x27 with your LCD's I2C address if different
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(9600);
  dht.begin();

  pinMode(BUZZER, OUTPUT);
  pinMode(LED, OUTPUT);

  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Temp&Gas Detector");
  lcd.setCursor(0,1);
  lcd.print("Initializing...");
  delay(2000);
  lcd.clear();
}

void loop() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();
  int gasValue = analogRead(GAS_SENSOR);

  lcd.setCursor(0,0);
  lcd.print("T:");
  lcd.print(temperature,1);
  lcd.print((char)223);
  lcd.print("C H:");
  lcd.print(humidity,0);
  lcd.print("%");

  lcd.setCursor(0,1);
  lcd.print("Gas:");
  lcd.print(gasValue);
  lcd.print("    ");

  if(temperature > tempLimit || gasValue > gasLimit){
    digitalWrite(BUZZER,HIGH);
    digitalWrite(LED,HIGH);
  } else {
    digitalWrite(BUZZER,LOW);
    digitalWrite(LED,LOW);
  }

  delay(1000);
}
