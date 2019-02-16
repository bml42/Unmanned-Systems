int mv; //millivolts
float tempc;  //temperature in centigrade


void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);       //allows us to see temperature on the screen

}

void loop() {
  // put your main code here, to run repeatedly:

mv = analogRead(0);
tempc = ((mv * 5000.0)/1024);
tempc = (tempc / 10);

Serial.println(tempc);
delay(200);


}
