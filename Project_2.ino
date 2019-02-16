int red = 4;
int green = 13;
int blue = 12;
int PWM = 9;
int dig = 8; 

int mv; //millivolts
float tempc;  //temperature in centigrade


void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);       //allows us to see temperature on the screen
pinMode(red, OUTPUT);
pinMode(green, OUTPUT);
pinMode(blue, OUTPUT);
pinMode(PWM, OUTPUT);
pinMode(dig, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly: 



mv = analogRead(0);
tempc = ((mv * 5000.0)/1024);
tempc = (tempc / 10);

Serial.println(tempc);

if(tempc <= 30)
  digitalWrite(green,HIGH);
else
  digitalWrite(green,LOW); 
       
if(tempc > 30 && tempc <= 50)
  digitalWrite(blue, HIGH);
else
  digitalWrite(blue, LOW);
  
if(tempc > 50)
  {
  digitalWrite(red, HIGH);
  
  //PWM pin
  analogWrite(PWM, 131);
  
  //digital pin    
  digitalWrite(dig, HIGH);
  delay(10);
  digitalWrite(dig, LOW);
  delay(10);
  }
else
  digitalWrite(red, LOW);
  
}
