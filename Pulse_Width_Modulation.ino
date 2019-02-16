int i;
int k=2;


void setup() {
  // put your setup code here, to run once:

pinMode(3, OUTPUT);
pinMode(k, OUTPUT);
digitalWrite(k,LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
//analogWrite(3,0);


//analog 
for(i = 0; i < 256; i++)
{
analogWrite(3,i);
delay(15);
}

for(i = 255; i >= 0; i--)
{
analogWrite(3,i);
delay(15);
}



//digital
/*digitalWrite(k,HIGH);
delay(1);
digitalWrite(k,LOW);
delay(1);
*/

}
