
int CLK = 3;
int DT = 4;

int CLK_last;
int CLK_present;
int Count = 0;

void setup() {
  pinMode(CLK, INPUT);
  pinMode(DT, INPUT);
  CLK_last = digitalRead(CLK);
  Serial.begin(9600);
}

/*
Hardware errors
630   CW
631   CW
630  CCW
631   CW
632   CW
*/

void loop() {
  CLK_present = digitalRead(CLK);
  if (CLK_present != CLK_last) {
    if (digitalRead(DT) != CLK_present) {
      Count++;
      Serial.print(Count);
      Serial.println("   CW");
    }
    else {
      Count--;
      Serial.print(Count);
      Serial.println("  CCW");
    }
    CLK_last = CLK_present;
  }
}
