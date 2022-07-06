//It seems like hardward issues are preventing me from implementing this code, but I have put it together based on how I logaically think the arduino will work
int button=2;
int LED=13;
int buttonval;
int state=0;
int old_val=LOW;

int i;

void setup()
{
  pinMode(button, INPUT);
  pinMode(LED, OUTPUT);
}

void loop()
{
  buttonval=digitalRead(button);
if ((buttonval == HIGH) && (old_val == LOW)) {


old_val = buttonval; 

digitalWrite(LED, HIGH); // turn LED ON
}
else {

  if (i<254){
   analogWrite(LED, i);
   i+=2; 
   delay(2000);
  }else{
    i=0;
  }
}
}
