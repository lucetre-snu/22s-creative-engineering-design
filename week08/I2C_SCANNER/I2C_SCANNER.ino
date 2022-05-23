#include "I2CScanner.h"
I2CScanner scanner;

void setup() {
    Serial.begin(9600);
    while (!Serial) {};
    scanner.Init();
}

// void debug(byte address) {
//     Serial.println(address);
// }

void loop() {
    scanner.Scan();
    // scanner.Execute(debug);
    delay(5000);
}
