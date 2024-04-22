#include <Servo.h>

//add servos
Servo servo1;
Servo servo2;
Servo servo3;

//create button and switch variables
const int switchPin = 13; //1
int switchState = 0;
int previousSwitchState = 0;

const int buttonPin = 12;//2
int buttonState = 0;
int previousButtonState = 0;

/*
Not in use
const int slidePin = 1;
int slideState = 0;
int previousSlideState = 0;
*/

const int spikePin = 11;//3
int spikeState = 0;
int previousSpikeState = 0;

int led1 = (6); //led pin

bool swish = true; //keep the tail swishing indefinitely

void setup() {
  servo1.attach(8); //servo 1 pin on 8
  servo2.attach(9); //servo 2 pin on 9
  servo3.attach(10); //servo 3 pin on 10

  //inputs
  pinMode(switchPin, INPUT);
  pinMode(buttonPin, INPUT);
  pinMode(slidePin, INPUT);

  //output
  pinMode(led1, OUTPUT);

  //Servo and led Reset

  servo1.write(90);
  servo2.write(0);

  digitalWrite(led1, HIGH); //inverted because it wasn't working the correct way

}

void loop() {

  if (swish == true) { //tail swish loop
    servo3.write(170);
    delay(1000);
    servo3.write(10);
    delay(1000);
  }
  
 
// Baby Godzilla swim to right (manual) and toxic waste can rotate to pour waste on godzilla (servo for can (0) and slide switch)

  switchState = digitalRead(switchPin);

  if (switchState != previousSwitchState) { //when the slide mechanism connects the pieces of copper tape, then the servo will rotate to angle 0
    if (switchState == HIGH) {
       servo1.write(0); //rotating to angle 0 makes it look like the toxic waste can is pouring on top of Godzilla
    }
  }
  previousSwitchState = switchState;

// Godzilla evolving (button and servo 180)

 buttonState = digitalRead(buttonPin);

  if (buttonState != previousButtonState) { // when the button is pushed, godzilla flips
    if (buttonState == HIGH) {
       servo2.write(180);
    }
  }
  previousButtonState = buttonState;


// Godzilla rising (Manual)
  
// Godzilla atomic breath (leds)

  spikeState = digitalRead(spikePin);

  if (spikeState != previousSpikeState) { //light up led when spike is pulled out
    if (spikeState == HIGH) {
      digitalWrite(led1, LOW);
    }
  }
  previousSlideState = slideState;

}
//finished code 4/15/2024
