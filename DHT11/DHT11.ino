#include <dht.h>
// https://github.com/RobTillaart/DHTlib

dht DHT11;

#define DHT11_PIN 5


void setup() {
  Serial.begin(9600);
  Serial.println("Type,\tstatus,\tHumidity (%),\tTemperature (C)");
}


void loop() {
  Serial.print("DHT11, \t");
  int chk = DHT11.read11(DHT11_PIN);
  switch (chk) {
    case DHTLIB_OK:  
    Serial.print("OK,\t"); 
    break;
    case DHTLIB_ERROR_CHECKSUM: 
    Serial.print("Checksum error,\t"); 
    break;
    case DHTLIB_ERROR_TIMEOUT: 
    Serial.print("Time out error,\t"); 
    break;
    case DHTLIB_ERROR_CONNECT:
        Serial.print("Connect error,\t");
        break;
    case DHTLIB_ERROR_ACK_L:
        Serial.print("Ack Low error,\t");
        break;
    case DHTLIB_ERROR_ACK_H:
        Serial.print("Ack High error,\t");
        break;
    default: 
    Serial.print("Unknown error,\t"); 
    break;
  }
  
  Serial.print(DHT11.humidity,1);
  Serial.print(",\t");
  Serial.println(DHT11.temperature,1);

  delay(1000);
}

