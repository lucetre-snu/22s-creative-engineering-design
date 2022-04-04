int BTN = 2;
int LED = 8;
bool LED_state;

void setup() {
  LED_state = 0;
  pinMode(LED, OUTPUT);
  pinMode(BTN, INPUT); // interrupt 0
  Serial.begin(9600);
  attachInterrupt(0, LED_control, CHANGE);
}

void loop() {
  // Delayed by prior code execution
  delay(5000);
  int val = digitalRead(BTN);
  Serial.println(val);
  digitalWrite(LED, digitalRead(BTN));
}

void LED_control() {
  LED_state = !LED_state;
  digitalWrite(LED, LED_state);
  Serial.println("Interrupt");
}