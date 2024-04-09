#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;

const int swtichPin = 11;
int buttonVal;


void setup() {
  servo1.attach(8);
  servo2.attach(9);
  servo3.attach(10);

  //Servo Reset

  servo1.write(0);
  servo2.write(0);
  servo3.write(0);

}

void loop() {
 
// Baby Godzilla swim to right (manual) and toxic waste can rotate to pour waste on godzilla (servo for can (45) and slide switch)


// Godzilla evolving (switch and servo 180)



// Godzilla rising (Manual)


// Godzilla breaking through the bridge (servo for tail swish (180))



// Godzilla atomic breath (leds)

}
