#include<SoftwareSerial.h>

int LF = 10;
int LB = 11;
int RF = 12;
int RB = 13;


void setup()
{
  Serial.begin(9600);
  Serial.println("Car is Ready");

  pinMode(LF, OUTPUT);
  pinMode(RF, OUTPUT);
  pinMode(LB, OUTPUT);
  pinMode(RB, OUTPUT);

}


void loop()
{

 

  if (Serial.available())
  {
    char a = Serial.read();
    Serial.print("The command is ");
    Serial.println(a);
    if (a == 'F')
      Forward();
    if (a == 'B')
      Backward();
    if (a == 'R')
      Right();
    if (a == 'L')
      Left();
    if (a == 'S')
      Stop();
  }
  
}


void Forward()
{
  Serial.println("Go forward");
  digitalWrite(LF, HIGH);
  digitalWrite(RF, HIGH);
  digitalWrite(RB, LOW);
  digitalWrite(LB, LOW);
}

void Backward()
{
  Serial.println("go back");
  digitalWrite(LB, HIGH);
  digitalWrite(RB, HIGH);
  digitalWrite(RF, LOW);
  digitalWrite(LF, LOW);
}

void Right()
{
  digitalWrite(LF, HIGH);
  digitalWrite(RF, HIGH);
  digitalWrite(RB, LOW);
  digitalWrite(LB, HIGH);
}
void Left()
{
  digitalWrite(LF, HIGH);
  digitalWrite(RF, HIGH);
  digitalWrite(RB, HIGH);
  digitalWrite(LB, LOW);
}

void Stop()
{
  digitalWrite(LF, LOW);
  digitalWrite(RF, LOW);
  digitalWrite(RB, LOW);
  digitalWrite(LB, LOW);
}
