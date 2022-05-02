#include <SPI.h>
#include <MFRC522.h>

int RST_PIN = 9;
int SS_PIN = 10;
int LED_PIN = 4;

MFRC522 m522(SS_PIN, RST_PIN);

// TAG RFID
String rfid;
String usr_rfid = "fa482a85";

void setup() {
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(9600);
    while (!Serial);
    SPI.begin();
    m522.PCD_Init();
}

void dump(byte* buffer, byte bufferSize) {
    rfid = "";
    for (byte i = 0; i < bufferSize; i++) {
        rfid = rfid + String(buffer[i], HEX);
    }
}

void loop() {
    if (!m522.PICC_IsNewCardPresent()) return;
    if (!m522.PICC_ReadCardSerial()) return;

    dump(m522.uid.uidByte, m522.uid.size);
    Serial.print(rfid);

    if (rfid == usr_rfid) {
        Serial.println(": Welcome!");
        digitalWrite(LED_PIN, HIGH);
        delay(1000);
    }
    if (rfid != usr_rfid) {
        Serial.println(": Alert!");
        digitalWrite(LED_PIN, HIGH);
        delay(250);
        digitalWrite(LED_PIN, LOW);
        delay(250);
        digitalWrite(LED_PIN, HIGH);
        delay(250);
    }
    digitalWrite(LED_PIN, LOW);
}
