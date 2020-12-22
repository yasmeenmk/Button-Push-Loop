const int buttonPin = 2;     // the number of the pushbutton pin

volatile int buttonState = LOW; // variable for reading the pushbutton status

void setup() 
{
  // set up serial communication
  Serial.begin(9600);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() 
{
  buttonState = digitalRead(buttonPin);  

  if (buttonState == HIGH)
  {
  	Serial.println("Button Pushed");
  }
  else
  	Serial.println("Normal Processing");
  delay(2000);
}