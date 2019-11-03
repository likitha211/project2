void setup()
{
  for(int i=10;i<=13;i++)
  {
    pinMode(i,OUTPUT);
  }
}

void loop()
{
  for(int i=10;i<14;i++){
    allLEDsOff();
    if (i!=13){
  digitalWrite(i, HIGH);
  digitalWrite(i+1, HIGH);
  delay(200); // Wait for 1000 millisecond(s)
}
    else
      digitalWrite(i,HIGH);
      digitalWrite(i-3,HIGH);
      delay(200);
    allLEDsOff();
  }
}
void allLEDsOff(void)
{
  for(int i=10;i<=14;i++)
    digitalWrite(i,LOW);
delay(100);
}
