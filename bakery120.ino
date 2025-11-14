// Knight Rider type effect
//
void setup()
{ 
  for (int i = 9; i<14; i++)
  {pinMode(i, OUTPUT);}
}

void loop()
{ 
  int direction = 1;
  int currentLed = 9;
  while (1)
  {
    digitalWrite(currentLed, HIGH);
    if ((currentLed == 13) || (currentLed == 9))
    {
     direction*=-1;
    }
    digitalWrite(currentLed-direction, LOW);
    currentLed += direction;
    delay(200);
   }
}