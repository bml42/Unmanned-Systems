#include<Servo.h>

Servo Jim;
int i;

void setup() {
  // put your setup code here, to run once:

Jim.attach(4);  

}

void loop() {
  // put your main code here, to run repeatedly:

Jim.write(0);

delay(1000);

for(i=180; i <= 0; i--);
{
  Jim.write(i);
  delay(10);
}

delay(1000);
  

}
