int redLead = 6;
int greenLead = 9;
int blueLead = 3;

void setup()
{
  Serial.begin(9600);
  pinMode(redLead, OUTPUT);
  pinMode(greenLead, OUTPUT);
  pinMode(blueLead, OUTPUT);
}

void loop()
{
  for (int red = 0; red <= 255 ; red++)
  {
    for (int green = 255; green >= 0; green--)
    {
      for (int blue = 0; blue <= 255; blue++)
      {
        analogWrite(redLead, red);
        analogWrite(greenLead, green);
        analogWrite(blueLead, blue);
        delay(50);
        /*
        unsigned long time = millis(); //debug/check feature to see delay times
        if (time > 900 && time < 950)
        {*/
        Serial.print(red);
        Serial.print("\t");
        Serial.print(green);
        Serial.print("\t");
        Serial.println(blue);
        Serial.print("millis is: ");
        Serial.println(millis());
       // }
        
      }
    }
  }
}
\
