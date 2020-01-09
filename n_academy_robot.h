/******************************************************************************
n_academy_robot.h
By Chirawat Nangam @ N Academy
21/11/2019
******************************************************************************/

#define analog(x) analogRead(x)

#define PWMA 3
#define PWMB 5
#define AIN1 6
#define AIN2 7
#define BIN1 8
#define BIN2 9

int in(int ch){
  switch(ch){
    case 0: return digitalRead(A0);
    case 1: return digitalRead(A1);
    case 2: return digitalRead(A2);
    case 3: return digitalRead(A3);
    case 4: return digitalRead(A4);
    case 5: return digitalRead(A5);
    case 6: return digitalRead(A6);
    case 7: return digitalRead(A7);
  }
}

void fd(int speed){
  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, HIGH);
  analogWrite(PWMA, map(speed, 0, 100, 0, 255));

  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, HIGH);
  analogWrite(PWMB, map(speed, 0, 100, 0, 255));
}


void bk(int speed){
  digitalWrite(AIN1, HIGH);
  digitalWrite(AIN2, LOW);
  analogWrite(PWMA, map(speed, 0, 100, 0, 255));

  digitalWrite(BIN1, HIGH);
  digitalWrite(BIN2, LOW);
  analogWrite(PWMB, map(speed, 0, 100, 0, 255));
}

void sl(int speed){
  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, HIGH);
  analogWrite(PWMA, map(speed, 0, 100, 0, 255));

  digitalWrite(BIN1, HIGH);
  digitalWrite(BIN2, LOW);
  analogWrite(PWMB, map(speed, 0, 100, 0, 255));
}

void tl(int speed){
  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, HIGH);
  analogWrite(PWMA, map(speed, 0, 100, 0, 255));
  analogWrite(PWMB, 0);
}

void sr(int speed){
  digitalWrite(AIN1, HIGH);
  digitalWrite(AIN2, LOW);
  analogWrite(PWMA, map(speed, 0, 100, 0, 255));

  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, HIGH);
  analogWrite(PWMB, map(speed, 0, 100, 0, 255));
}

void tr(int speed){
  analogWrite(PWMA, 0);
  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, HIGH);
  analogWrite(PWMB, map(speed, 0, 100, 0, 255));
}

void ao(){
  analogWrite(PWMA, 0);
  analogWrite(PWMB, 0);
}

void motor_init(){
  pinMode(PWMA, OUTPUT);
  pinMode(PWMB, OUTPUT);
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);
}

/*
void setup() {
  Serial.begin(115200);
  Serial.println("Started");
  fd(50);
}

void loop() {
  Serial.println(in());
}
*/
