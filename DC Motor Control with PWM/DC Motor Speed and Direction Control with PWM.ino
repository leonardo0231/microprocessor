int IN1 = 9;
int IN2 = 8;
int EnablePin = 10;
void setup() {
  // put your setup code here, to run once:
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(EnablePin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  // Full speed 
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(EnablePin,HIGH);
  delay(1000);
  
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(EnablePin,HIGH);
  delay(1000);


  for(int i=0; i < 256; i = i + 5){
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);
    analogWrite(EnablePin,i);    
    delay(50);
  }
  delay(500);
  
    for(int i=0; i < 256; i= i + 5){
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,HIGH);
    analogWrite(EnablePin,i);    
    delay(50);
  }
  delay(500);
}
