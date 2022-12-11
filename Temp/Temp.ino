int lm35pin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int analogValue;
  float temperature;

  analogValue = analogRead(lm35pin);
  temperature = float(analogValue) / 1023;
  temperature = temperature * 500;

  Serial.print("Temp: ");
  Serial.print(temperature);
  Serial.println("C");

  delay(1000);
}