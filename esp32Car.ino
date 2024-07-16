int backRightMotorForward = 15;
int backRightMotorReverse = 16;
int frontRightMotorForward = 17;
int frontRightMotorReverse = 18;
int backLeftMotorForward = 25;
int backLeftMotorReverse = 26;
int frontLeftMotorForward = 33;
int frontLeftMotorReverse = 32;

void setup() {
  pinMode(backRightMotorForward, OUTPUT);
  pinMode(backRightMotorReverse, OUTPUT);
  pinMode(frontRightMotorReverse, OUTPUT);  
  pinMode(frontRightMotorForward, OUTPUT);
  pinMode(backLeftMotorForward, OUTPUT);
  pinMode(backLeftMotorReverse, OUTPUT);
  pinMode(frontLeftMotorReverse, OUTPUT);  
  pinMode(frontLeftMotorForward, OUTPUT);
}

void loop() {
  // // Right
  // digitalWrite(backRightMotorForward, HIGH);
  // digitalWrite(frontRightMotorForward, HIGH);
  // // Left
  // digitalWrite(backLeftMotorForward, HIGH);
  // digitalWrite(frontRightMotorForward, HIGH);

  // delay(1000);

  // // Right
  // digitalWrite(backRightMotorForward, LOW);
  // digitalWrite(frontRightMotorForward, LOW);
  // digitalWrite(backRightMotorReverse, HIGH);
  // digitalWrite(frontRightMotorReverse, HIGH);

  // //Left
  // digitalWrite(backLeftMotorForward, LOW);
  // digitalWrite(frontLeftMotorForward, LOW);
  // digitalWrite(backLeftMotorReverse, HIGH);
  // digitalWrite(frontLeftMotorReverse, HIGH);
  
  // delay(1000);
  
  // // Right
  // digitalWrite(backRightMotorForward, LOW);
  // digitalWrite(frontRightMotorForward, LOW);
  // // Left
  // digitalWrite(backLeftMotorForward, HIGH);
  // digitalWrite(frontLeftMotorForward, HIGH);

  digitalWrite(backLeftMotorForward, HIGH);
  digitalWrite(frontLeftMotorForward, HIGH);
  digitalWrite(backRightMotorForward, HIGH);
  digitalWrite(frontRightMotorForward, HIGH);
}