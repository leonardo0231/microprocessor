#define T_C 1000
#define T_D 6500
#define T_E 3600
#define T_F 4000

const int c = 10;
const int d = 9;
const int e = 8;
const int f = 7;

const int Buzz = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(c, OUTPUT);
  digitalWrite(c, HIGH);

  pinMode(d, OUTPUT);
  digitalWrite(d, HIGH);

  pinMode(e, OUTPUT);
  digitalWrite(e, HIGH);

  pinMode(f, OUTPUT);
  digitalWrite(f, HIGH);

  pinMode(Buzz, INPUT);
  digitalWrite(Buzz, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(digitalRead(c) == LOW){
    tone(Buzz, T_C);
  }
  while(digitalRead(e) == LOW){
    tone(Buzz, T_E);
  }
  while(digitalRead(d) == LOW){
    tone(Buzz, T_D);
  }
  while(digitalRead(f) == LOW){
    tone(Buzz, T_F);
  }
  noTone(Buzz);
}
