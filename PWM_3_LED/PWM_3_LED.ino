int LED[3] = { 9, 10, 11 };

void setup() {
  for (int i = 0; i < 3; i++) {
    pinMode(LED[i], OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 256; j++) {
      analogWrite(LED[i], j);
      delay(5);
    }
    for (int j = 255; j >= 0; j--) {
      analogWrite(LED[i], j);
      delay(5);
    }
  }
}
