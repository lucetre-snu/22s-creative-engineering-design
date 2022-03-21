
void blink(int LED) {
  for (int i = 0; i < 256; i++) {
    analogWrite(LED, i);
    delay(5);
  }
  for (int i = 255; i >= 0; i--) {
    analogWrite(LED, i);
    delay(5);
  }
}