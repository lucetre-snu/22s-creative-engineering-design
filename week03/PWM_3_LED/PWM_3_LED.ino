int LED[3] = { 9, 10, 11 };

void setup() {
  for (int i = 0; i < 3; i++) {
    pinMode(LED[i], OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  blink(LED[0]);
  blink(LED[1]);
  blink(LED[2]);
  blink(LED[1]);
}
