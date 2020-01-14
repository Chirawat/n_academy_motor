/******************************************************************************
n_academy_robot.h
By Chirawat Nangam @ N Academy
Initial Project: 	21/11/2019
Last Updated:		13/01/2019
******************************************************************************/

#define analog(x) analogRead(x)

int PWMA=3;
int PWMB=5;
int AIN1=6;
int AIN2=7;
int BIN1=8;
int BIN2=9;

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

void motor_init(int PWMA_t, int AIN1_t, int AIN2_t, int PWMB_t, int BIN1_t, int BIN2_t){
  PWMA = PWMA_t;
  AIN1 = AIN1_t;
  AIN2 = AIN2_t;
  PWMB = PWMB_t;
  BIN1 = BIN1_t;
  BIN2 = BIN2_t;
  
  /* initialize ports */
  pinMode(PWMA, OUTPUT);
  pinMode(PWMB, OUTPUT);
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);
}

void motor_init(){
  /* initialize ports */
  pinMode(PWMA, OUTPUT);
  pinMode(PWMB, OUTPUT);
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);
}