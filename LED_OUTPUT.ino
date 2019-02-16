
long duration;
int distance;
int trig = 7;
int echo = 8;
int red = 12;
int blue = 4;
int green = 2;

void setup() {
  // put your setup code here, to run once:

pinMode(trig,OUTPUT); //Trig
pinMode(echo,INPUT); //Echo
pinMode(red, OUTPUT);
pinMode(blue, OUTPUT);
pinMode(green, OUTPUT);


digitalWrite(red, LOW);
digitalWrite(blue, LOW);
digitalWrite(green, LOW);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(trig, LOW);
delay(5);

digitalWrite(trig, HIGH);
delay(5);

digitalWrite(trig, LOW);

duration = pulseIn(echo, HIGH);

distance = ((duration / 29)/2);
Serial.println(distance);


if(distance < 10)                         //red led
{
digitalWrite(red, HIGH);
delay(100);
digitalWrite(blue, LOW);
digitalWrite(green, LOW);
}
  
else if(distance >= 10 && distance < 50)  //blue led
{
digitalWrite(blue, HIGH);
delay(100);
digitalWrite(green, LOW);
digitalWrite(red, LOW);
}

else//(distance >= 50)      //green led
{
digitalWrite(green, HIGH);   
delay(100); 
digitalWrite(red, LOW);
digitalWrite(blue, LOW);
}

}

