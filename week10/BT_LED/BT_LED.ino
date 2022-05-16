
// http://ai2.appinventor.mit.edu/b/40crq
String message;
int led = 13;

void setup() {
    Serial.begin(9600);
    pinMode(led, OUTPUT);
    digitalWrite(led, LOW);
}

void loop() {
    while (Serial.available()) {
        delay(50);
        char c = Serial.read();
        message += c;
    }

    if (message.length() > 0) {
        Serial.println(message);
        if (message == "on") {
            digitalWrite(13, HIGH);
        }
        if (message == "off") {
            digitalWrite(13, LOW);
        }
    }
    message = "";
}
