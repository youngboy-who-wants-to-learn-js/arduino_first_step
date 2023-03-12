void setup() {
  // // аналоговый
  // pinMode(A5, OUTPUT);
  // // цифровые
  // pinMode(12, OUTPUT);
  // pinMode(13, OUTPUT);

  // digitalWrite(13, HIGH);
  // digitalWrite(13, 1);
  // digitalWrite(A5, 0);

  // pinMode(A5, INPUT);
  // pinMode(12, INPUT);
  // pinMode(13, INPUT);
  
  // Serial.begin(9600);

  pinMode(A5, INPUT_PULLUP);
  pinMode(12, INPUT);
  pinMode(13, OUTPUT); // встроенный светодиод
  
  Serial.begin(9600);
}

void loop() {
  // boolean btn1 = digitalRead(A5);
  // boolean btn2 = digitalRead(13);
  
  // Serial.print(" Btn1: ");Serial.println(btn1);
  // Serial.print(" Btn2: ");Serial.println(btn2);

  boolean btn1 = !digitalRead(A5); // инвертировать сигнал
  boolean btn2 = digitalRead(13);

  if (btn1 == 1) {
    digitalWrite(13, 1); // включить светодоид
  } else {
    digitalWrite(13, 0); // выключить светодоид
  }
  
  Serial.print(" Btn1: ");Serial.println(btn1);
  Serial.print(" Btn2: ");Serial.println(btn2);
}
