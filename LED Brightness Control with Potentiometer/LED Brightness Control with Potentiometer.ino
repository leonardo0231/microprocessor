int led = 3;
int potpin = A0;
int potvalue = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  potvalue = analogRead(potpin);
  int ledvalue = map(potvalue, 0, 1023, 0, 255);
  analogWrite(led, ledvalue);
  delay(250);

}
