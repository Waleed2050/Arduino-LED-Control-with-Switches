const int RED = 8;
const int GREEN = 9;
const int YELLOW =10;
const int BLUE = 11;
const int ORANGE = 12;
const int WHITE = 13;
const int sw1=2;
const int sw2=4;
void setup()
{
  for (int i = 8;i<=13;i++)
  pinMode(i,OUTPUT);
  for (int x = 2;x<=5;x++)
  pinMode(x,INPUT);
}

void loop()
{
  if (digitalRead(sw1)== HIGH)
     {digitalWrite(RED,HIGH);
      digitalWrite(GREEN,HIGH);
      digitalWrite(YELLOW,HIGH);}
  else{digitalWrite(RED,LOW);
      digitalWrite(GREEN,LOW);
      digitalWrite(YELLOW,LOW);}
  if (digitalRead(sw2)== HIGH)
     {digitalWrite(BLUE,HIGH);
      digitalWrite(ORANGE,HIGH);
      digitalWrite(WHITE,HIGH);}
  else{digitalWrite(BLUE,LOW);
      digitalWrite(ORANGE,LOW);
      digitalWrite(WHITE,LOW);}

  
  
}