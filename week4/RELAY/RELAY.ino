#define RELAY 8

void setup() {
  pinMode(RELAY, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(RELAY, HIGH);
  Serial.println("HIGH");
  delay(2000);

  // Switch on status Low
  digitalWrite(RELAY, LOW);
  Serial.println("LOW");
  delay(2000);
}
