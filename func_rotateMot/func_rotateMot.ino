int pin[] = {2, 3, 4, 5, 6, 7, 8, 9, 22, 24, 26, 28, 32, 34, 36, 38};
void setup() {
  for (int i = 0; i < 16; i++) {
    pinMode(pin[i], OUTPUT);
  }
  rotate(2, 3, 4, 5 ,500, 6, 7, 8, 9);
}
//This order is for Clockwise direction, for Anti-Clockwise just start from reverse order
void loop() {
  //rotate(2, 3, 4, 5, 1000);

}
//void mA()
void rotate(int a, int b, int c, int d, int s) {
  /*
    pin 1:a
    pin 2:b
    pin 3:c
    pin 4:d
    size:s
  */
  for (int k = 0; k < s; k++) {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    delay(2);
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    delay(2);
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    delay(2);
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    delay(2);
  }
}
void rotate(int a, int b, int c, int d, int s, int a1, int b1, int c1, int d1) {
  /*
    pin 1:a
    pin 2:b
    pin 3:c
    pin 4:d
    size:s
  */
  for (int k = 0; k < s; k++) {
    digitalWrite(a, LOW);
    digitalWrite(a1, LOW);
    digitalWrite(b1, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(c1, HIGH);
    digitalWrite(d1, HIGH);
    digitalWrite(d, HIGH);
    delay(2);
    digitalWrite(a, HIGH);
    digitalWrite(a1, HIGH);
    digitalWrite(b1, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(c1, LOW);
    digitalWrite(d1, HIGH);
    digitalWrite(d, HIGH);
    delay(2);
    digitalWrite(a, HIGH);
    digitalWrite(a1, HIGH);
    digitalWrite(b1, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(c1, LOW);
    digitalWrite(d1, LOW);
    digitalWrite(d, LOW);
    delay(2);
    digitalWrite(a, LOW);
    digitalWrite(a1, LOW);
    digitalWrite(b1, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(c1, HIGH);
    digitalWrite(d1, LOW);
    digitalWrite(d, LOW);
    delay(2);
  }
}


