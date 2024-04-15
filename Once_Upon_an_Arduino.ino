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


void setup() {
  servo1.attach(8);
  servo2.attach(9);
  servo3.attach(10);

  pinMode(switchPin, INPUT);
  pinMode(buttonPin, INPUT);

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



// Godzilla atomic breath (leds)

}
