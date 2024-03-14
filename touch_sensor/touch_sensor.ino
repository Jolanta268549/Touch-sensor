const int switchPin = 3;
const int ledPin = 2;

int state;
int lastState;
int ledState;

void setup() {
  pinMode(ledPin,OUTPUT);
  pinMode(switchPin, INPUT_PULLUP);
}
void loop(){
  state = digitalRead(switchPin);
  if (state != lastState) {
    if (state==HIGH) {
      if (ledState==HIGH) ledState= LOW;
      else ledState = HIGH;
    }
    lastState=state;
  }
  digitalWrite(ledPin,ledState);
  delay(20);
}