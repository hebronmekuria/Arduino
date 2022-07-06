int LED1=13;
int buttonPin=2;
int buttonval;

void setup() {
   pinMode(buttonPin, INPUT);
   pinMode(LED1, OUTPUT);
   
}

void loop() {
    pinMode(LED1, OUTPUT);
    
    // put your main code here, to run repeatedly:
    buttonval=digitalRead(buttonPin);


    if (buttonval==0) {
        digitalWrite(LED1, LOW);
    }
    else{
        digitalWrite(LED1, HIGH);
    }
}
