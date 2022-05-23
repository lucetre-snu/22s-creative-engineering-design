int BTN = 8;
int LED = 2;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BTN, INPUT);
  Serial.begin(9600);
}

// Floating occurs (disturbed by electro-magnetic pulse): 01010010100111111110
// Solution: use 10kohm
// Why: 5V / 10kohm < V_input_low
void loop() {
  int val = digitalRead(BTN);
  delay(10);
  Serial.println(val);
  if (val == HIGH) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
}
