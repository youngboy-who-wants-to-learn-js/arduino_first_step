#define sound_senso_pin 7 // объявить констану не занимает памяти

int number = 1; // by default = 0; 1 byte
boolean myBool = true; // 1 byte
boolean boolTrue = 1;
boolean boolFalse = 0;

char mySymbol = "a"; // ASCII 1 byte -128...127

const byte myByte = 150; // 1 byte 0..255

int myValue = 2422; // 2 byte -32768... 32767

unsigned int myValue2 = 60000; // 0..65535; 2 byte

// word myValue3 = 342; // == unsigned int

long bigNumber = 342423; // 4 byte -2147483648 ... 2147483648;

float floatNum = 10.25; // 4 byte

double floatNum1 = 10.2;


void setup() {
  int x = 1;
  int y = 2;
  int s = (x * y) + 1;
  sqrt(x);
  abs(x);
  x += 1;
  floor(x);

  float bar = (float) x / 2.0;
}

void loop() {
  // put your main code here, to run repeatedly:

}
