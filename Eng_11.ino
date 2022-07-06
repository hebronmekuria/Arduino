//Adapted from the creators of the code in number 10

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

void loop() {
  // reads the input on analog pin A0 (value between 0 and 1023)
  int analogValue = analogRead(A0);
  int analogValue2 = analogRead(A1);
  int time=millis()

  Serial.println("Analog reading of first = ");
  Serial.print(analogValue); // the raw analog reading
  Serial.println("Analog reading of second = ");
  Serial.print(analogValue2);
  Serial.print("speed = ")
  Serial.print((analogValue2-analogValue)/time)
  


  delay(500);
}
