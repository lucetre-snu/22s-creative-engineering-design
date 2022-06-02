#include <FirebaseESP32.h>
#include <WiFi.h>
FirebaseData firebaseData;

#define FIREBASE_HOST "FIREBASE_HOST"
#define FIREBASE_AUTH "FIREBASE_AUTH"

const char* ssid = "GECE-B105";
const char* password = "snusnu38";

#define LED 12

String message = "";

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(115200);
  delay(10);
  Serial.println();
  Serial.print("Connecting with ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.print("WiFi connected IP: ");
  Serial.println(WiFi.localIP());

  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
}

void loop() {
  if (Firebase.getString(firebaseData, "/esp32-led/led")) {
    String message_fb = firebaseData.stringData();
    if (message_fb != message) {
      message = message_fb;
      Serial.println(message);
      if (message.indexOf("on") != -1) {
        digitalWrite(LED, HIGH);
      }
      if (message.indexOf("off") != -1) {
        digitalWrite(LED, LOW);
      }
    }
  }
}
