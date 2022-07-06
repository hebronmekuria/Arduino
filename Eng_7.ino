int LED1=9;
int i=0;
void setup() {
  pinMode(LED1, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  analogWrite(LED1, i);
  if (i<254){
   analogWrite(LED1, i);
   i+=2; 
   delay(2000);
  }
  // put your main code here, to run repeatedly:

}
