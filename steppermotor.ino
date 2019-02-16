#include<Stepper.h>

int rev = 32;

Stepper motor(rev, 7, 8, 9 ,10);

void setup() {
  // put your setup code here, to run once:

motor.setSpeed(5000);

}

void loop() {
  // put your main code here, to run repeatedly:

motor.step(2040);
//delay(2000);


}
