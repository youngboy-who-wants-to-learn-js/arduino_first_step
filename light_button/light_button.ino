boolean btn_flag = false;
boolean current_btn_value = 0;
boolean led_flag = 0;
unsigned long last_press = 0;

void setup() {
  pinMode(3, INPUT_PULLUP);
  pinMode(4, OUTPUT); // светодиод
  Serial.begin(9600);
}

void loop() {
  current_btn_value = !digitalRead(3); // кнопка нажата = 1, не нажата = 0;
  if (current_btn_value == 1 && btn_flag == 0 && millis() - last_press > 1000) {
      btn_flag = 1;
      Serial.println("Button pressed");
      led_flag = !led_flag;
      digitalWrite(4, led_flag); // включить/выключить 
      // delay(50);
      last_press = millis();
      
  }

  if (current_btn_value == 0 && btn_flag == 1) {
    btn_flag = 0;
    Serial.println("Button released");
  }
}
