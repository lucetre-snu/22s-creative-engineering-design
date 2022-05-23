#define PIN_NO 8

void setup() {
  pinMode(PIN_NO, OUTPUT);
}

void loop() {
  digitalWrite(PIN_NO, HIGH);
  delay(500);
  digitalWrite(PIN_NO, LOW);
  delay(500);
}
 