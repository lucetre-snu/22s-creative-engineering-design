
void setup() {
  Serial.begin(9600);
}

void loop() {
  int pot = analogRead(A0);
  // Serial.print("pot = ");
  Serial.println(pot);

  float volt = (pot/1023.0)*5.0;
  // Serial.print("volt = ");
  Serial.println(volt);
  delay(50);
}
