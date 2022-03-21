int LED = 6;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

// analog read range: 0 ~ 1023
// analog write range: 0 ~ 255
void loop() {
  for (int i = 0; i < 256; i++) {
    analogWrite(LED, i);
    delay(5);
  }
  for (int i = 255; i >= 0; i--) {
    analogWrite(LED, i);
    delay(5);
  }
}
