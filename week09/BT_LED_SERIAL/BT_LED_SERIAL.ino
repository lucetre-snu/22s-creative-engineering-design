#include <SoftwareSerial.h>
SoftwareSerial BT_Serial(7, 8);
int led = 13;

void setup() {
    BT_Serial.begin(9600);
    Serial.begin(9600);
    pinMode(led, OUTPUT);
    digitalWrite(led, LOW);
}

void loop() {
    while (BT_Serial.available()) {
        String message = BT_Serial.readStringUntil('\n');
        BT_Serial.println(message);
        Serial.println(message);

        if (message == "ON") {
            digitalWrite(led, HIGH);
        }
        if (message == "OFF") {
            digitalWrite(led, LOW);
        }
    }
}
