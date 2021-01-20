#define SPEAKER 6
#define B0 A0
#define B1 A1
#define B2 A2
#define R 11
#define G 10
#define B 9
#include "pitches.h"
//#include basicpitches.h
int NOTE_DUR = 137;

void play(int note, int dur) {
  tone(SPEAKER, note);
  delay(dur * NOTE_DUR);
  noTone(SPEAKER);
  delay(dur * NOTE_DUR / 3);
}

void play_twinkle() {
  play(NOTE_C4, 2);
  play(NOTE_C4, 2);
  play(NOTE_G4, 2);
  play(NOTE_G4, 2);
  play(NOTE_A4, 2);
  play(NOTE_A4, 2);
  play(NOTE_G4, 4);

  play(NOTE_F4, 2);
  play(NOTE_F4, 2);
  play(NOTE_E4, 2);
  play(NOTE_E4, 2);
  play(NOTE_D4, 2);
  play(NOTE_D4, 2);
  play(NOTE_C4, 4);
}

void play_harrypotter() {
  int n = 6;
  play(NOTE_D4, 16/n);
  play(NOTE_G4, 24/n);
  play(NOTE_AS4, 8/n);
  play(NOTE_A4, 16/n);
  play(NOTE_G4, 32/n);
  play(NOTE_D5, 16/n);
  play(NOTE_C5, 40/n);
  play(NOTE_A4, 40/n);
  play(NOTE_G4, 24/n);
  play(NOTE_AS4, 8/n);
  play(NOTE_A4, 16/n);
  play(NOTE_F4, 32/n);
  play(NOTE_GS4, 16/n);
  play(NOTE_D4, 72/n);
  play(NOTE_D4, 16/n);
}

void play_rickroll() {
  int tempo = 114;
  int wholenote = 2000 / tempo;
  delay(wholenote/8);
  play(NOTE_E5, wholenote/8);
  play(NOTE_FS5, wholenote/8);
  play(NOTE_E5, 1.5*wholenote/4);
  play(NOTE_A4, wholenote/16);
  play(NOTE_B4, wholenote/16);
  play(NOTE_D4, wholenote/16);
  play(NOTE_B4, wholenote/16);
  
  play(NOTE_FS5, 1.5*wholenote/8);
  play(NOTE_FS5, 1.5*wholenote/8);
  play(NOTE_E5, 1.5*wholenote/4);
  play(NOTE_A4, wholenote/16);
  play(NOTE_B4, wholenote/16);
  play(NOTE_D5, wholenote/16);
  play(NOTE_B4, wholenote/16);
  
  play(NOTE_E5, 1.5*wholenote/8);
  play(NOTE_E5, 1.5*wholenote/8);
  play(NOTE_D5, 1.5*wholenote/8);
  play(NOTE_CS5, wholenote/16);
  play(NOTE_B4, 1.5*wholenote/8);
  play(NOTE_A4, wholenote/16);
  play(NOTE_B4, wholenote/16);
  play(NOTE_D5, wholenote/16);
  play(NOTE_B4, wholenote/16);
  
  play(NOTE_D5, wholenote/4);
  play(NOTE_E5, wholenote/8);
  play(NOTE_CS5, 1.5*wholenote/8);
  play(NOTE_B4, wholenote/16);
  play(NOTE_A4, wholenote/8);
  play(NOTE_A4, wholenote/8);
  play(NOTE_A4, wholenote/8);
  
  play(NOTE_E5, wholenote/4);
  play(NOTE_D5, wholenote/2);
  play(NOTE_A4, wholenote/16);
  play(NOTE_B4, wholenote/16);
  play(NOTE_D5, wholenote/16);
  play(NOTE_B4, wholenote/16);
  
  play(NOTE_FS5, 1.5*wholenote/8);
  play(NOTE_FS5, 1.5*wholenote/8);
  play(NOTE_E5, 1.5*wholenote/4);
  play(NOTE_A4, wholenote/16);
  play(NOTE_B4, wholenote/16);
  play(NOTE_D5, wholenote/16);
  play(NOTE_B4, wholenote/16);
  
  play(NOTE_A5, wholenote/4);
  play(NOTE_CS5, wholenote/8);
  play(NOTE_D5, 1.5*wholenote/8);
  play(NOTE_CS5, wholenote/16);
  play(NOTE_B4, wholenote/8);
  play(NOTE_A4, wholenote/16);
  play(NOTE_B4, wholenote/16);
  play(NOTE_D5, wholenote/16);
  play(NOTE_B4, wholenote/16);
  
  play(NOTE_D5, wholenote/4);
  play(NOTE_E5, wholenote/8);
  play(NOTE_CS5, 1.5*wholenote/8);
  play(NOTE_B4, wholenote/16);
  play(NOTE_A4, wholenote/4);
  play(NOTE_A4, wholenote/8);
  
  play(NOTE_E5, wholenote/4);
  play(NOTE_D5, wholenote/2);
  delay(wholenote/4);
}

/*
REST,8, NOTE_E5,8, NOTE_FS5,8, NOTE_E5,-4, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,
NOTE_FS5,-8, NOTE_FS5,-8, NOTE_E5,-4, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,
NOTE_E5,-8, NOTE_E5,-8, NOTE_D5,-8, NOTE_CS5,16, NOTE_B4,-8, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,
NOTE_D5,4, NOTE_E5,8, NOTE_CS5,-8, NOTE_B4,16, NOTE_A4,8, NOTE_A4,8, NOTE_A4,8, 
NOTE_E5,4, NOTE_D5,2, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,
NOTE_FS5,-8, NOTE_FS5,-8, NOTE_E5,-4, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,
NOTE_A5,4, NOTE_CS5,8, NOTE_D5,-8, NOTE_CS5,16, NOTE_B4,8, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,
NOTE_D5,4, NOTE_E5,8, NOTE_CS5,-8, NOTE_B4,16, NOTE_A4,4, NOTE_A4,8,
NOTE_E5,4, NOTE_D5,2, REST,4,
*/

void setup() {
  pinMode(SPEAKER, OUTPUT);
  pinMode(B0, INPUT);
  pinMode(B1, INPUT);
  pinMode(B2, INPUT);
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int transition = 500;
  int press_0 = analogRead(B0);
  int press_1 = analogRead(B1);
  int press_2 = analogRead(B2);
  //Serial.println(press_0);
  if (press_0 > transition && press_1 < transition && press_2 < transition) {
    digitalWrite(R, 20);
    digitalWrite(G, 0);
    digitalWrite(B, 20);
    play_twinkle();
    digitalWrite(R, 0);
    digitalWrite(G, 0);
    digitalWrite(B, 0);
  }
  if (press_0 < transition && press_1 > transition && press_2 < transition) {
    digitalWrite(R, 10);
    digitalWrite(G, 0);
    digitalWrite(B, 0);
    play_harrypotter();
    digitalWrite(R, 0);
    digitalWrite(G, 0);
    digitalWrite(B, 0);
  }
  if (press_0 < transition && press_1 < transition && press_2 > transition) {
    digitalWrite(R, 0);
    digitalWrite(G, 20);
    digitalWrite(B, 20);
    play_rickroll();
    digitalWrite(R, 0);
    digitalWrite(G, 0);
    digitalWrite(B, 0);
  }
}
