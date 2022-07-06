int LED=13;
int button=2;
int val;
int old_val=0;
int state=0;

void setup(){
  pinMode(button, INPUT);
  pinMode(LED, OUTPUT);
  
}
void loop(){
val=digitalRead(button);
if ((val == HIGH) && (old_val == LOW)) {
state = 1 - state;
delay(10);
}
old_val = val; // val is now old, let's store it
if (state == 1) {
digitalWrite(LED, HIGH); // turn LED ON
}
else {
digitalWrite(LED, LOW);
}
}
