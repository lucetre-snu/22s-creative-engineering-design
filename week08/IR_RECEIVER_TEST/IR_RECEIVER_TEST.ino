#include <IRremote.h>

const int R_pin = 7;
IRrecv Receive(R_pin);
decode_results Decode;

void setup() {
    Serial.begin(9600);
    Receive.enableIRIn();
}

void loop() {
    if (Receive.decode(&Decode)) {
        Serial.println(Decode.value, HEX);
        Receive.resume();
    }
}
