int backRightMotorForward = 15;
int backRightMotorReverse = 16;

void setup() {
  pinMode(backRightMotorForward, OUTPUT);
  pinMode(backRightMotorReverse, OUTPUT);  
}

void loop() {
  digitalWrite(backRightMotorForward, HIGH);
  delay(1000);
  digitalWrite(backRightMotorForward, LOW);
  digitalWrite(backRightMotorReverse, HIGH);
  delay(1000);
  digitalWrite(backRightMotorReverse, LOW);
}