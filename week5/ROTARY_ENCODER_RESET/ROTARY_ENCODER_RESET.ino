
int CLK = 3;
int DT = 4;
int SW = 5;

int CLK_last;
int CLK_present;
int Count = 0;

void setup() {
  pinMode(CLK, INPUT);
  pinMode(DT, INPUT);

  // INPUT_PULLUP
  pinMode(SW, INPUT);
  digitalWrite(SW, HIGH);

  CLK_last = digitalRead(CLK);
  Serial.begin(9600);
}

void loop() {
  CLK_present = digitalRead(CLK);
  if (digitalRead(SW) == LOW) {
    Count = 0;
    Serial.print(Count);
    Serial.println("  RESET");
  }
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
