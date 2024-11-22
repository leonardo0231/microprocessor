#include "pitches.h"
int melody[] = {
  NOTE_C4, NOTE_G3,NOTE_G3, NOTE_GS3, NOTE_G3,0, NOTE_B3, NOTE_C4
};

int noteDurations[] = {
  4, 4, 8, 8, 4, 8, 4, 8
  };
void setup() {

  for (int thisNote = 0; thisNote < 8; thisNote++) {
    int noteDuration = 1000/noteDurations[thisNote];
    tone(8, melody[thisNote],noteDuration);
    delay(noteDuration +30);
  }
}

void loop() {
// no need to repeat the melody.
}
