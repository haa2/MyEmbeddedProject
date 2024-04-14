
const int EnA = 9;
const int EnB = 8;
const int In1 = 4;
const int In2 = 5;
const int In3 = 6;
const int In4 = 7;

void startupMotor()
{
  pinMode(EnA, OUTPUT);
  pinMode(EnB, OUTPUT);
  pinMode(In1, OUTPUT);
  pinMode(In2, OUTPUT);
  pinMode(In3, OUTPUT);
  pinMode(In4, OUTPUT);
 
}


void Neutral()
{
  analogWrite(EnA,0);
  analogWrite(EnB,0);
}
  

void Forward()
{
  analogWrite(EnB,200);
  analogWrite(EnA,200);

  digitalWrite(In4,LOW);

  digitalWrite(In3,HIGH);

  digitalWrite(In2,HIGH);

  digitalWrite(In1,LOW);
}
void backward()
{
  analogWrite(EnA,150);
  analogWrite(EnB,150);

  digitalWrite(In2,LOW);

  digitalWrite(In1,HIGH);

  digitalWrite(In3,LOW);

  digitalWrite(In4,HIGH);
}

void LeftMotor()
{
  analogWrite(EnB,200);




  digitalWrite(In3,HIGH);
  digitalWrite(In4,LOW);
}
void RightMotor()
{
  analogWrite(EnA,200);
  


  digitalWrite(In1,LOW);
  digitalWrite(In2,HIGH);
}
void StopMotor()
{
  analogWrite(EnA,1);
  analogWrite(EnB,1);
  
  digitalWrite(In1,LOW);
  digitalWrite(In2,LOW);

}
