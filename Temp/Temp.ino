int lm35pin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  float temperature = sampleTemp(1000);

  Serial.print("Temp: ");
  Serial.print(temperature);
  Serial.println("C");
  delay(1000);
}

float sampleTemp(int numberOfSamples) {
  float sum = 0.0;
  for (int i = 0; i < numberOfSamples; i++) {
    sum = sum + getTempInCelcius();
  }
  delay(10);
  return sum / numberOfSamples;
}

float getTempInCelcius() {
  int analogValue = analogRead(lm35pin);
  float temp = float(analogValue) / 1023;
  return temp * 500;
}