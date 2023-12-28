int a;

void setup() {
pinMode(A2,INPUT);
pinMode(A1,OUTPUT);
Serial.begin(9600);
}
void loop()
{
  a = analogRead(A2);
  Serial.println(a);
  delay(20);
  if(a<60)
  {
    digitalWrite(A1, HIGH);
  }   
  else 
  {
    digitalWrite(A1, LOW);
  }
}
  
