int blinking=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(6,INPUT);
  pinMode(7,INPUT);
  pinMode(13,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(7)==HIGH)
  {
    blinking=1;
  }
  if (blinking==1)
  {
    digitalWrite(13,HIGH);
    delay(100);
    digitalWrite(13,LOW);
    delay(100);
  }
  if (digitalRead(6)==HIGH)
  {
    blinking=0;
  }
}
