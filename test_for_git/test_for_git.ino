void setup() {
  pinMode(13, OUTPUT);
  ledFlash();
}

void loop() {


}

void ledFlash() {
  for (int i = 0; i < 3; i++) {
    digitalWrite(13, 1);
    delay(100);
    digitalWrite(13, 0);
    delay(100);
  }
}
