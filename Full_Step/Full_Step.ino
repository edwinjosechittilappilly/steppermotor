//In this method 2 phases are actiavated for higher torque, step angle is same for full step and wave drive
//Minimum delay of 2 ms is required to operate at full speed
int pin[] = {22, 24, 26, 28};
void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(pin[i], OUTPUT);
  }
  //Serial.begin(9600);
}
//This order is for Clockwise direction, for Anti-Clockwise just start from reverse order
void loop() {
  int a = 0, b = 1, c = 2, d = 3;
  /*if (Serial.available() > 0) {
    int x = Serial.parseInt();
    Serial.println(x);
  }*/
  for (int k = 0; k < 10; k++) {
    digitalWrite(pin[a], LOW);
    digitalWrite(pin[b], LOW);
    digitalWrite(pin[c], HIGH);
    digitalWrite(pin[d], HIGH);
    delay(2);
    digitalWrite(pin[a], HIGH);
    digitalWrite(pin[b], LOW);
    digitalWrite(pin[c], LOW);
    digitalWrite(pin[d], HIGH);
    delay(2);
    digitalWrite(pin[a], HIGH);
    digitalWrite(pin[b], HIGH);
    digitalWrite(pin[c], LOW);
    digitalWrite(pin[d], LOW);
    delay(2);
    digitalWrite(pin[a], LOW);
    digitalWrite(pin[b], HIGH);
    digitalWrite(pin[c], HIGH);
    digitalWrite(pin[d], LOW);
    delay(2);
  }
}
