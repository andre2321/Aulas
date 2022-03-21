int button = 2;
int led1 = 13;
int lastButtonState = 0;
int buttonState = 0;
int count = 0;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(button, INPUT);
}
void loop() {
  buttonState = digitalRead(button);
    if (buttonState != lastButtonState) {
        if (buttonState == HIGH) {
        count++;
        if (count % 4 != 0) {
          digitalWrite(led1, HIGH);
        } else {
          digitalWrite(led1, LOW);
        }
        delay(5);
        }
    }
      lastButtonState = buttonState;
}
