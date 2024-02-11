
void setup()
{
 for (byte i=2 ; i<=5 ; i++)
   pinMode(i, 1);
  Serial.begin(9600);
}

void loop()
{
  char x=Serial.read();
  for (byte i=0 ; i<4 && x!=-1 ; i++)
    digitalWrite(i+2 , x&1<<i);
}


//A--> right
//B--> left
//C--> frward
//L--> backward
//P--> stop