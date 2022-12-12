#include "pitches.h"

int speakerPin = 8;

const int melody[][2] = {
  {NOTE_C4, 4},
  {NOTE_G3, 8},
  {NOTE_G3, 8},
  {NOTE_A3, 4},
  {NOTE_G3, 4},
  {NOTE_BLANK, 4},
  {NOTE_B3, 4},
  {NOTE_C4, 4}
};

void setup() {
  int numberOfNotes = sizeof(melody) / sizeof(melody[0]);

  for (int thisNote = 0; thisNote < numberOfNotes; thisNote++) {
    int thisNoteTone = melody[thisNote][0];
    int thisNoteDuration = melody[thisNote][1];

    int noteDurationMS = 1000 / thisNoteDuration;

    tone(speakerPin, thisNoteTone, noteDurationMS);

    delay(noteDurationMS * 1.30);
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
