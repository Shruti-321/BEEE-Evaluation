const int trigPin=9;
const int echoPin=9;
long duration;
int distance;
void setup()
{
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2); // Wait for 1000 millisecond(s)
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);// Wait for 1000 millisecond(s)
  digitalWrite(trigPin, LOW);
  
  duration=pulseIn(10,HIGH);
  float distance=0.017*duration;
  Serial.println(distance);
  
  if (distance <= 100) {
    digitalWrite(13, HIGH);
    delay(100);                  
    digitalWrite(13, LOW);    
    delay(100);           
}
  else if(distance>100)
  {
    digitalWrite(13,LOW);
  }
}
