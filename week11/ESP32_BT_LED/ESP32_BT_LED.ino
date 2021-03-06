#include <BluetoothSerial.h>
BluetoothSerial SerialBT;
int LED = 23;
String message = "";

void setup() {
  SerialBT.begin("ESP32_lucetre");
  pinMode(LED, OUTPUT);
}

void loop() {
  if (SerialBT.available()) {
    char incomingChar = SerialBT.read();
    if (incomingChar != '\n') {
      message += String(incomingChar);
    } else {
      message = "";
    }
  }
  if (message == "led_on") {
    digitalWrite(LED, HIGH);
    SerialBT.println("LED TURNED ON");
  } 
  if (message == "led_off") {
    digitalWrite(LED, LOW);
    SerialBT.println("LED TURNED OFF");
  }
  delay(20);
}
