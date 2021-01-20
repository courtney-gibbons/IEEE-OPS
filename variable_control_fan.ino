#define FAN 3
#define POT A0

void setup() {
  pinMode(FAN, OUTPUT);
  pinMode(POT, INPUT);
  Serial.begin(9600);
}

void loop() {
  int transition_0 = 250;
  int transition_1 = 500;
  int transition_2 = 750;
  int pot_value = analogRead(POT);
  Serial.println(pot_value);
  if (pot_value < transition_0) {
    analogWrite(FAN, 0);
  }
  if (pot_value > transition_0 - 1 && pot_value < transition_1) {
    analogWrite(FAN, 130);
  }
  if (pot_value > transition_1 - 1 && pot_value < transition_2) {
    analogWrite(FAN, 175);
  }
  if (pot_value > transition_2 - 1) {
    analogWrite(FAN, 255);
  }
}
