void setup() {
  Serial.begin(9600);
  // Serial.print("Hello world");
  // Serial.println("Test");
  
  // String myStr = "str str str";
  // float pi = 3.14359;
  // Serial.println(pi, 2);
  
  // Serial.println(myStr);
}

void loop() {
  if (Serial.available() > 0) {
    int in_data = Serial.parseInt();
    Serial.println(in_data);
  }

}
