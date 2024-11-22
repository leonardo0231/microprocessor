const int lm35pin = A0;
int led = 12;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(lm35pin);
  float voltage = sensorValue * (5.0 / 1024.0);
  float temperatureC = voltage * 100;
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" *c");
  if(temperatureC > 25){
    digitalWrite(led, HIGH);
  } else{
    digitalWrite(led, LOW);
  }
  delay(1000);
}
