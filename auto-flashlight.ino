#define LED 8
#define PIN A0

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(PIN, INPUT);
  Serial.begin(9600);

}

void loop() {
  int transition = 650;
  int x = analogRead(PIN);
  Serial.println(x);
  if (x > transition) {
    digitalWrite(LED, HIGH);
  }
  else {
    digitalWrite(LED, LOW);
  }

}
