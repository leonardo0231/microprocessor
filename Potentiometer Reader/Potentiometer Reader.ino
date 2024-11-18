int led = 3;
int potpin = A2;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  int potvalue = analogRead(potpin);
  int value = map(potvalue, 0, 1023, 0, 5);
  Serial.println(value);
}
