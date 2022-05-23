#include <IRremote.h>
#include <Servo.h>
#define min(x, y) (x < y ? x : y)
#define max(x, y) (x > y ? x : y)
Servo smotor;

const int IR_RECV_PIN = 7;
const int SERVO_PIN = 8;
int pos = 90;

unsigned long lastCode;

IRrecv Receive(IR_RECV_PIN);
decode_results Decode;

void setup() {
    Serial.begin(9600);
    Receive.enableIRIn();
    smotor.attach(SERVO_PIN);
    smotor.write(pos);
}

void loop() {
    if (Receive.decode(&Decode)) {
        Serial.println(Decode.value, HEX);
        if (Decode.value == 0xFFFFFFFF) { // REPEAT
            Serial.println(">> REPEAT");
            Decode.value = lastCode;
        }
        if (Decode.value == 0xFFA25D) { // CH-
            Serial.println(">> CH-");
            lastCode = Decode.value;
            pos = min(180, pos + 2);
            smotor.write(pos);
        }
        if (Decode.value == 0xFFE21D) { // CH+
            Serial.println(">> CH+");
            lastCode = Decode.value;
            pos = max(0, pos - 2);
            smotor.write(pos);
        }
        if (Decode.value == 0xFF629D) { // CH
            Serial.println(">> CH");
            lastCode = Decode.value;
            pos = 90;
            smotor.write(pos);
        }
        delay(30);
        Receive.resume();
    }
}
