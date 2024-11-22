int segmPins[] = {1, 2, 3, 4, 5, 6, 7}; // A-G
// 0-9
int numberPatterns[][7] = {
  {1,1,1,1,1,1,0}, // 0
  {0,1,1,0,0,0,0}, // 1
  {1,1,0,1,1,0,1}, // 2
  {1,1,1,1,0,0,1}, // 3
  {0,1,1,0,0,1,1}, // 4
  {1,0,1,1,0,1,1}, // 5
  {1,0,1,1,1,1,1}, // 6
  {1,1,1,0,0,1,0}, // 7
  {1,1,1,1,1,1,1}, // 8
  {1,1,1,1,0,1,1}, // 9
};
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for(int i=0; i<7; i++){
    pinMode(segmPins[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
    for(int i = 0; i < 10; i++){
      displayNumber(i);
      Serial.println(i);
      delay(1000);
  }  
}

void displayNumber(int number){
  for(int i = 0; i < 7; i++){
    digitalWrite(1+i, numberPatterns[number][i]);
  }
}

