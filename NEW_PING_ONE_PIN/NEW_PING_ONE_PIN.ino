const int trigEchoPin = 8;
long duration;
int distance;

void setup() {
  Serial.begin(9600);
}

void loop() {
  delay(50);
  
  pinMode(trigEchoPin, OUTPUT);
  digitalWrite(trigEchoPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigEchoPin, HIGH);
  delayMicroseconds(15);
  digitalWrite(trigEchoPin, LOW);

  pinMode(trigEchoPin, INPUT);
  duration = pulseIn(trigEchoPin, HIGH);
  distance = duration*0.034/2;

  if (distance <= 400 && distance >= 2) {
    Serial.print(distance);
    Serial.println(" cm");
  }
  
}