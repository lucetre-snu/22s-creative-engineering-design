
void setup() {
    Serial.begin(9600);
    pinMode(34, INPUT);
}

void loop() {
    int pot = analogRead(34);
    Serial.println(pot * 5.0 / 4096);
    delay(50);
}
