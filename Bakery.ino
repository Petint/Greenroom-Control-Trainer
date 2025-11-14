// C++ code
//
void setup()
{ pinMode(LED_BUILTIN, OUTPUT);
  pinMode(2, INPUT);
  Serial.begin(9600);}

void loop()
{ //digitalWrite(LED_BUILTIN, HIGH);
  //delay(1000); // Wait for 1000 millisecond(s)
  //digitalWrite(LED_BUILTIN, LOW);
  //delay(1000); // Wait for 1000 millisecond(s)
  if (digitalRead(2) == 1) 
  { digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("LED ON"); }
  else
  { digitalWrite(LED_BUILTIN, LOW);
   Serial.println("LED OFF"); }
  
  delay(200); }
