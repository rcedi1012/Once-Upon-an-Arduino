#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;

const int switchPin = 11;
int switchState = 0;
int previousSwitchState = 0;

const int buttonPin = 12;
int buttonState = 0;
int previousButtonState = 0;

const int slidePin = 13;
int slideState = 0;
int previousSlideState = 0;

const int spikePin = 13;
int spikeState = 0;
int previousSpikeState = 0;

const int led1 = 6;
const int led2 = 5;
const int led3 = 4;


void setup() {
  servo1.attach(8);
  servo2.attach(9);
  servo3.attach(10);

  pinMode(switchPin, INPUT);
  pinMode(buttonPin, INPUT);
  pinMode(slidePin, INPUT);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  //Servo Reset

  servo1.write(90);
  servo2.write(0);
  servo3.write(0);

}

void loop() {
 
// Baby Godzilla swim to right (manual) and toxic waste can rotate to pour waste on godzilla (servo for can (45) and slide switch)

  switchState = digitalRead(switchPin);

  if (switchState != previousSwitchState) {
    if (switchState == HIGH) {
       servo1.write(180);
    }
  }
  previousSwitchState = switchState;

// Godzilla evolving (button and servo 180)

 buttonState = digitalRead(buttonPin);

  if (buttonState != previousButtonState) {
    if (buttonState == HIGH) {
       servo2.write(180);
    }
  }
  previousButtonState = buttonState;


// Godzilla rising (Manual)
  


// Godzilla breaking through the bridge (servo for tail swish (180))
  
  slideState = digitalRead(slidePin);

  if (slideState != previousSlideState) {
    if (slideState == HIGH) {
       servo3.write(180);
    }
  }
  previousSlideState = slideState;

// Godzilla atomic breath (leds) lights up mouth

  spikeState = digitalRead(spikePin);

  if (spikeState != previousSpikeState) { //will change when i figure out how to make each one light up independently without delay
    if (spikeState == HIGH) {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
    }
  }
  previousSlideState = slideState;

}
