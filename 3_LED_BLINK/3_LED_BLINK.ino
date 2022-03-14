// #define PIN1 8
// #define PIN2 9
// #define PIN3 10

// void setup() {
//   pinMode(PIN1, OUTPUT);
//   pinMode(PIN2, OUTPUT);
//   pinMode(PIN3, OUTPUT);
// }

// void loop() {
//   digitalWrite(PIN1, HIGH);
//   digitalWrite(PIN2, LOW);
//   digitalWrite(PIN3, LOW);
//   delay(500);
//   digitalWrite(PIN1, LOW);
//   digitalWrite(PIN2, HIGH);
//   digitalWrite(PIN3, LOW);
//   delay(500);
//   digitalWrite(PIN1, LOW);
//   digitalWrite(PIN2, LOW);
//   digitalWrite(PIN3, HIGH);
//   delay(500);
// }


void setup() {
  for (int k = 8; k <= 10; k++) {
    pinMode(k, OUTPUT);
  }
}

void loop() {
  for (int k = 8; k <= 10; k++) {
    digitalWrite(k, HIGH);
    delay(500);
    digitalWrite(k, LOW);
    delay(500);
  }
}
