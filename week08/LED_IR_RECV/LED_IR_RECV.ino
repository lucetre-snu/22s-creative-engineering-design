#include <IRremote.h>

const int IR_RECV_PIN = 7;
const int LED_PIN = 8;

unsigned long lastCode;

IRrecv Receive(IR_RECV_PIN);
decode_results Decode;

void setup() {
    Serial.begin(9600);
    Receive.enableIRIn();
    pinMode(LED_PIN, OUTPUT);
}

void loop() {
    if (Receive.decode(&Decode)) {
        Serial.println(Decode.value, HEX);
        if (Decode.value == 0xFFFFFFFF) { // REPEAT
            Serial.println(">> REPEAT");
            Decode.value = lastCode;
        }
        if (Decode.value == 0xFFA857) {
            Serial.println(">> +");
            lastCode = Decode.value;
            led_on();
        }
        delay(30);
        Receive.resume();
    }
}

void led_on() {
    digitalWrite(LED_PIN, HIGH);
    delay(2000);
    digitalWrite(LED_PIN, LOW);
}