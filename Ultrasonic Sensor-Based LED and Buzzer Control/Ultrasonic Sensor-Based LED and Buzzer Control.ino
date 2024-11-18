int led = 11;
int specker = 6;
int trig = 10;
int echo = 9;
int duration;
int distances;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(led, OUTPUT);
  pinMode(specker, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
 
  duration = pulseIn(echo, HIGH);
  distances = (duration / 2) * 0.0343;
  int ledValue = map(distances, 30, 4, 0, 255);
  Serial.println(distances);
  analogWrite(led, ledValue);
  delay(10);
  if (ledValue <= 150){
    digitalWrite(specker, HIGH);
  } else if (ledValue > 150){
    digitalWrite(specker, LOW);
  }
  
}
