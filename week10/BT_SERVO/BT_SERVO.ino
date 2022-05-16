// http://ai2.appinventor.mit.edu/b/1u59u

#include <Servo.h>
Servo smotor;

void setup() {
    smotor.attach(9);
    smotor.write(0);
    Serial.begin(9600);
}

void loop() {
    if (Serial.available() >= 2) {
        byte angle = Serial.read();
        smotor.write(angle);
        Serial.println(angle);
    }
}
