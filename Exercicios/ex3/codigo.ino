void setup()
{
  pinMode(13, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
}
void loop()
{
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(5, HIGH);
  delay(2000);
 digitalWrite(4, HIGH);
  delay(2000);
  digitalWrite(8, HIGH);
   delay(2000); 
  digitalWrite(12, HIGH);
 delay(2000);
  
  digitalWrite(13, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(8, LOW);
  digitalWrite(12, LOW);
  delay(1000);
}
