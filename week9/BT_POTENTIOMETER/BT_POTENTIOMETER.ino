
void setup() {
    Serial.begin(9600);
    pinMode(A0, INPUT);
}

void loop() {
    int pot = analogRead(A0);
    Serial.println(pot * 5.0 / 1024);
    delay(50);
}
