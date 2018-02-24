int pin[] = {2, 3, 4, 5, 6, 7, 8, 9, 22, 24, 26, 28, 32, 34, 36, 38};
void setup() {
  for (int i = 0; i < 16; i++) {
    pinMode(pin[i], OUTPUT);
  }
  rotate(5, 4, 3, 2, 1000, 6, 7, 8, 9, 22, 24, 26, 28, 32, 34, 36, 38);
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

}
void rotate(int a, int b, int c, int d, int s, int a1, int b1, int c1, int d1, int a2, int b2, int c2, int d2, int a3, int b3, int c3, int d3) {
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
    digitalWrite(a2, LOW);
    digitalWrite(a3, LOW);
    digitalWrite(b, LOW);
    digitalWrite(b1, LOW);
    digitalWrite(b2, LOW);
    digitalWrite(b3, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(c1, HIGH);
    digitalWrite(c2, HIGH);
    digitalWrite(c3, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(d1, HIGH);
    digitalWrite(d2, HIGH);
    digitalWrite(d3, HIGH);
    delay(2);
    digitalWrite(a, HIGH);
    digitalWrite(a1, HIGH);
    digitalWrite(a2, HIGH);
    digitalWrite(a3, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(b1, LOW);
    digitalWrite(b2, LOW);
    digitalWrite(b3, LOW);
    digitalWrite(c, LOW);
    digitalWrite(c1, LOW);
    digitalWrite(c2, LOW);
    digitalWrite(c3, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(d1, HIGH);
    digitalWrite(d2, HIGH);
    digitalWrite(d3, HIGH);
    delay(2);
    digitalWrite(a, HIGH);
    digitalWrite(a1, HIGH);
    digitalWrite(a2, HIGH);
    digitalWrite(a3, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(b1, HIGH);
    digitalWrite(b2, HIGH);
    digitalWrite(b3, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(c1, LOW);
    digitalWrite(c2, LOW);
    digitalWrite(c3, LOW);
    digitalWrite(d, LOW);
    digitalWrite(d1, LOW);
    digitalWrite(d2, LOW);
    digitalWrite(d3, LOW);
    delay(2);
    digitalWrite(a, LOW);
    digitalWrite(a1, LOW);
    digitalWrite(a2, LOW);
    digitalWrite(a3, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(b1, HIGH);
    digitalWrite(b2, HIGH);
    digitalWrite(b3, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(c1, HIGH);
    digitalWrite(c2, HIGH);
    digitalWrite(c3, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(d1, LOW);
    digitalWrite(d2, LOW);
    digitalWrite(d3, LOW);
    delay(2);
  }
}


