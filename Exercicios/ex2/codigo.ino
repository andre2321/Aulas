void setup()
{
  pinMode(13, OUTPUT);
  pinMode(5, OUTPUT); 
}

void loop()
{ 
  digitalWrite(13, HIGH);
  delay(10000); 
  digitalWrite(13, LOW);
  digitalWrite(5, HIGH);
  delay(10000); 
   digitalWrite(5, LOW);   
}
