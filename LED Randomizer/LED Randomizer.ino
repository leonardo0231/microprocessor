#define key digitalRead(A0)

void setup() {
  // put your setup code here, to run once:
  for (int i = 8; i <= 13; i++){
    pinMode(i, OUTPUT);
  }
  pinMode(A0, INPUT);
  randomSeed(analogRead(A0));
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (key == 0) {
    int randnum = random(8, 14);
    Serial.println(randnum - 7);
    for (int i = 8; i <= 13; i++) {
      digitalWrite(i, LOW);
    }
    digitalWrite(randnum, HIGH);

    delay(1000);
  }
}
