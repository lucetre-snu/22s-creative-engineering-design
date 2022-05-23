// sh script/install.sh simpleDHT
#include <SimpleDHT.h>
#define DHT11_PIN 5
SimpleDHT11 dht11;

void setup() {
  Serial.begin(9600);
  Serial.println("Type,\tHumidity (%),\tTemperature (C)");
}

void loop() {
  byte temperature = 0;
  byte humidity = 0;
  int result = dht11.read(DHT11_PIN, &temperature, &humidity, 0); 
  Serial.print("result:");
  Serial.print(result); 
  Serial.print(",\t humidity:");
  Serial.print(humidity); 
  Serial.print(",\t temperature:");
  Serial.println(temperature);

  delay(1000);
}

