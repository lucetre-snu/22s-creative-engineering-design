int BTN = 2;
int LED = 8;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BTN, INPUT);
  Serial.begin(9600);
}

void loop() {
  int val = digitalRead(BTN);
  delay(10);
  Serial.println(val);
  if (val == LOW) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
}
