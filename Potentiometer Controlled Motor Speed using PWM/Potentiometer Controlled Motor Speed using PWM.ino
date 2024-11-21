int IN1 = 9;
int IN2 = 8;
int EnablePin = 10;

int potpin = A0;
int potvalue = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(EnablePin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potValue = analogWrite(potpin);
  int motor = map(potValue, 0, 1023, 0, 255);
  
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  analogWrite(EnablePin,motor);    
  delay(50);
}
