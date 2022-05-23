#include <Servo.h>
Servo smotor;

void setup() {
    smotor.attach(9);
    Serial.begin(9600);
    smotor.write(0);
}

void loop() {
    for (int angle = 0; angle <= 170; angle++) {
        smotor.write(angle);
        Serial.println(angle);
        delay(20);
    }
    for (int angle = 170; angle >= 0; angle--) {
        smotor.write(angle);
        Serial.println(angle);
        delay(20);
    }
}
