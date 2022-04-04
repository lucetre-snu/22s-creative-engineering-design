int BTN = 2;
int LED = 8;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BTN, INPUT);
  Serial.begin(9600);
}

void loop() {
  // Delayed by prior code execution
  delay(5000);
  int val = digitalRead(BTN);
  Serial.println(val);

  // PULL_DOWN
  if (val == HIGH)
  {
    digitalWrite(LED, HIGH);
  }
  else
  {
    digitalWrite(LED, LOW);
  }
}
