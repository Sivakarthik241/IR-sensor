int ir=5,led=12,b;
void setup() {
 pinMode(ir,INPUT);
 pinMode(led,OUTPUT);
Serial.begin(9600); 
}

void loop() {
  b=digitalRead(ir);
  if(b==0)
  {
    digitalWrite(led,HIGH);
    Serial.println("person entered");
     }
  else
  {
    digitalWrite(led,LOW);
    Serial.println("person not entered");
  } 
  delay(1000);   
}
