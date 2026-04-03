int button1=8;
int button2=9;
int led=12;

bool state=false;

void setup(){
  Serial.begin(9600);
  pinMode(button1,INPUT_PULLUP);
  pinMode(button2,INPUT_PULLUP);
  pinMode(led,OUTPUT);
  digitalWrite(led,HIGH);
}
void loop(){
// Serial.println(digitalRead(button1));
if(digitalRead(button1)==LOW){// kwows the button is pressed
  delay(50);
  if(digitalRead(button1)==LOW){// confirm
  state=!state;
  digitalWrite(led,state);
while(digitalRead(button1)==LOW){}// untill release
}}// end push button 1

if(digitalRead(button2)==LOW){// kwows the button is pressed
  delay(50);
  if(digitalRead(button2)==LOW){// confirm
  state=!state;
  digitalWrite(led,state);
while(digitalRead(button2)==LOW){}// untill release
}}// end push button 1

}// end void loopvoid setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
