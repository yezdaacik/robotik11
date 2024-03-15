// C++ code
//
void setup() 
{
Serial.begin(9600);
pinMode(6,OUTPUT);
pinMode(7,INPUT);
pinMode(2,OUTPUT);
}

void loop()
{
 digitalWrite(6,1); delay(1);
 digitalWrite(6,0);
 int sure=pulseIn(7,1);
 int mesafe=(sure/2)/28.97;
 Serial.print("Olculen Mesafe=");
 Serial.println(mesafe);
 delay(1);
  
  if (mesafe>200) 
  {
    digitalWrite(2,1);
    delay(2000);
    digitalWrite(2,0);
    delay(2000);
  }
  else if (mesafe>100) 
  {
    digitalWrite(2,1);
    delay(1000);
    digitalWrite(2,0);
    delay(1000);
  }
    else if (mesafe>50) 
  {
    digitalWrite(2,1);
    delay(500);
    digitalWrite(2,0);
    delay(500);
  }
    else if (mesafe>20) 
  {
    digitalWrite(2,1);
    delay(200);
    digitalWrite(2,0);
    delay(200);
  }
      else if (mesafe>10) 
  {
    digitalWrite(2,1);
    delay(100);
    digitalWrite(2,0);
    delay(100);
  }
  else
  {
    digitalWrite(2,1);
  }
  
  }