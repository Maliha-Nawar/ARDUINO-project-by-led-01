          //1
           //Name: Maliha Nawar; ID: 17.01.05.131 
void setup() {

pinMode(8,OUTPUT);pinMode(1,OUTPUT);//as x=1
}

void loop() {
  
for (int i=0;i<3;i++)//to blink leds x+2 times
{digitalWrite(1,HIGH);digitalWrite(8,LOW);delay(1000);
digitalWrite(1,LOW);digitalWrite(8,HIGH);delay(1000);}
digitalWrite(8,LOW);delay(1000000000000000000000000);//to blink leds alternatively
}
