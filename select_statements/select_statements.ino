void setup() {
Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    int val = Serial.parseInt();
    switch (val) {
      case 1: Serial.println("1111");
        break;
      case 2: Serial.println("2222");
        break;
      default: Serial.println("default");
    }
    // if (val == 1 || val == 7) {
    //   Serial.println("You enter 1 or 7");
    // } else {
    //   Serial.println("You didn`t enter 1 or 7");
    // }
  }

}
