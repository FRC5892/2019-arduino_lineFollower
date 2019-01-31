

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 serial();
}

int sensorArray() {
  int values[5];
  values[0] = analogRead(A0);
  values[1] = analogRead(A1);
  values[2] = analogRead(A2);
  values[3] = analogRead(A3);
  values[4] = analogRead(A4);

  int maxIndex = 0;
  for (int i=1; i<5; i++) {
    if (values[i] > values[maxIndex]) {
      maxIndex = i;
    }
  }

  return maxIndex;
}
void serial() {
  Serial.print(analogRead(A0), DEC);
  Serial.print(", ");
  Serial.print(analogRead(A1), DEC);
  Serial.print(", ");
  Serial.print(analogRead(A2), DEC);
  Serial.print(", ");
  Serial.print(analogRead(A3), DEC);
  Serial.print(", ");
  Serial.print(analogRead(A4), DEC);
  Serial.print(" - ");
  Serial.println(sensorArray(), DEC);
  delay (750);
}

