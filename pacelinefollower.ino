int highpin=7;
  int mright1=8;
  int mright2=9;
  int mleft1=10;
  int mleft2=11;
int irl,irm,irr;
int count=0;
int i;

  
void setup(){
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(2,INPUT);
   pinMode(3,INPUT);  
    pinMode(4,INPUT); 
}

void loop()
{
  irl=digitalRead(2);
  irm=digitalRead(3);
  irr=digitalRead(4);
  digitalWrite(7,HIGH);
  if(irl==HIGH&&irm==LOW&&irr==HIGH)
  straight();
  else if(irl==HIGH&&irm==HIGH&&irr==LOW)
  pwrright();
  else if(irl==LOW&&irm==HIGH&&irr==HIGH)
  pwrleft();
  else if(irl==LOW&&irm==LOW&&irr==HIGH)
  pwrleft();
  else if(irl==HIGH&&irm==LOW&&irr==LOW)
  pwrright();
  else if(irl==HIGH&&irm==HIGH&&irr==HIGH)
  straight();
  else if(irl==LOW&&irm==LOW&&irr==LOW)
  {
    junction();
  }
  else if(irl==LOW&&irm==HIGH&&irr==LOW)
  pwrleft();
}
void left()
{
  digitalWrite(mleft1,LOW);
  digitalWrite(mleft2,LOW);
  digitalWrite(mright1,HIGH);
  digitalWrite(mright2,LOW);
  delay(40);
  digitalWrite(mleft1,LOW);
  digitalWrite(mleft2,LOW);
  digitalWrite(mright1,LOW);
  digitalWrite(mright2,LOW);
  delay(50);
  
 
}
void right()
{
  digitalWrite(mleft1,HIGH);
  digitalWrite(mleft2,LOW);
  digitalWrite(mright1,LOW);
  digitalWrite(mright2,LOW);
  delay(40);
   digitalWrite(mleft1,LOW);
  digitalWrite(mleft2,LOW);
  digitalWrite(mright1,LOW);
  digitalWrite(mright2,LOW);
  delay(50);
}
void straight()
{
  
  
  digitalWrite(mleft1,HIGH);
  digitalWrite(mleft2,LOW);
  digitalWrite(mright1,HIGH);
  digitalWrite(mright2,LOW);
 delay(90);
   digitalWrite(mleft1,LOW);
  digitalWrite(mleft2,LOW);
  digitalWrite(mright1,LOW);
  digitalWrite(mright2,LOW);
  delay(20);
  
}
void pwrright()
{ 
  i=1;
  digitalWrite(mleft1,HIGH);
  digitalWrite(mleft2,LOW);
  digitalWrite(mright2,HIGH);
  digitalWrite(mright1,LOW);
  delay(50);
  digitalWrite(mleft1,LOW);
  digitalWrite(mleft2,LOW);
  digitalWrite(mright2,LOW);
  digitalWrite(mright1,LOW);
  delay(50);
}
void pwrleft()
{
  i=2;
  digitalWrite(mleft1,LOW);
  digitalWrite(mleft2,HIGH);
  digitalWrite(mright1,HIGH);
  digitalWrite(mright2,LOW);
  delay(50);
  digitalWrite(mleft1,LOW);
  digitalWrite(mleft2,LOW);
  digitalWrite(mright1,LOW);
  digitalWrite(mright2,LOW);
  delay(50);
}
void junction()
{
  if(count==0)
  {
     digitalWrite(mleft1,HIGH);
  digitalWrite(mleft2,LOW);
  digitalWrite(mright1,HIGH);
  digitalWrite(mright2,LOW);
    delay(1000);
    count=count+1;
  }
  else if(count==1)
  {
     digitalWrite(mleft1,HIGH);
  digitalWrite(mleft2,LOW);
  digitalWrite(mright1,HIGH);
  digitalWrite(mright2,LOW);
    delay(1000);
    count=count+1;
  }
  else
  {
    reverse();
  }
}
void reverse()
{
  digitalWrite(mleft1,LOW);
  digitalWrite(mleft2,HIGH);
  digitalWrite(mright1,LOW);
  digitalWrite(mright2,HIGH);
}

  
  
