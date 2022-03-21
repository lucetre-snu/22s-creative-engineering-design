int LED = 9;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}


// Why 2 kohm?
void loop() {
  float volt = (analogRead(A0) / 1023.0) * 5.0;
  Serial.println(volt);
  digitalWrite(LED, volt < 2.5);
  delay(50);
}
