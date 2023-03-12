unsigned long last_time;

void setup() {
  Serial.begin(9600);
  Serial.println("hi");
  delay(1000);
  Serial.println("1 sec");
  delay(1000);
  Serial.println("2 sec");

}

void loop() {
  if (millis() - last_time > 5000) {
    last_time = millis();
    Serial.println("5sec");
  }

}
