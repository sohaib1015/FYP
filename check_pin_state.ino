
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A5,OUTPUT);
  pinMode(A1,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  int state1=digitalRead(A5);
  int state2= digitalRead(A1);

  Serial.print("State of pin A5 = ");
  Serial.println(state1);

  Serial.print("State of pin A1 = ");
  Serial.println(state2);
  

}
