int pin_state;
char pin_to_check;
String str1;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(A3,OUTPUT);
  pinMode(A4,OUTPUT);
  pinMode(A5,OUTPUT);
  pinMode(A6,OUTPUT);

}

void loop() {
  if(Serial.available())
  {
    pin_to_check=(char)Serial.read();
    //str1=(String)Serial.readString();
    //Serial.println(str1);

    switch(pin_to_check)
    {
      case '3':
      pin_state=digitalRead(A3);
      if(pin_state==1)
      {
        Serial.write("1");}
        else
        {
          Serial.write("0");
          }
          break;

          case '4':
      pin_state=digitalRead(A4);
      if(pin_state==1)
      {
        Serial.write("1");}
        else
        {
          Serial.write("0");
          }
          break;
          
      

      case '5':
      pin_state=digitalRead(A5);
      if(pin_state==1)
      {
        Serial.write("1");}
        else
        {
          Serial.write("0");
          }
          break;

          case '6':
      pin_state=digitalRead(A6);
      if(pin_state==1)
      {
        Serial.write("1");}
        else
        {
          Serial.write("0");
          }
          break;
    }
    
}
}
