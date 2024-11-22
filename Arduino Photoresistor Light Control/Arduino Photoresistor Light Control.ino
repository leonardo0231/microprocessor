int sensor;
int led=13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensor = analogRead(A0);
  Serial.print("Sensor Value= ");
  Serial.println(sensor);
  delay(300);
  if(sensor > 150){
    digitalWrite(led, LOW);
  } else {
    digitalWrite(led, HIGH);
  }
}
