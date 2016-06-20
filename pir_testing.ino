//int ledPin = 13;                // choose the pin for the LED
int inputPin = 2;               // choose the input pin (for PIR sensor)
int pirState = LOW;
char str1;// we start, assuming no motion detected
int val = 0;
volatile int count =0;// variable for reading the pin status
 
void setup() {
 // pinMode(ledPin, OUTPUT);      // declare LED as output
 Serial.begin(115200);
  pinMode(inputPin, INPUT);     // declare sensor as input
 
  
  attachInterrupt(digitalPinToInterrupt(2), pin_ISR,FALLING);
}
 
void loop(){
//  val = digitalRead(inputPin); 
//  Serial.println(count);
//  
//  if (val == HIGH) {            // check if the input is HIGH
//    digitalWrite(ledPin, HIGH);
//    count++;// turn LED ON
//    
//    
//      //Serial.println("Motion detected!");
//      // We only want to print on the output change, not state
//      
//    }
//  else {
//    digitalWrite(ledPin, LOW); // turn LED OFF
//    
//      // we have just turned of
//      //Serial.println("Motion ended!");
//      // We only want to print on the output change, not state
//     
//    }
//    
  }

  void pin_ISR() {
  count++;
  //str1=char(count);
  
  //Serial.print("Motion Detected = ");
  //Serial.print(count);
   
    Serial.write(Serial.print(count));
}

