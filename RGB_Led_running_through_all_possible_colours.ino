int redLead = 11;
int greenLead = 10;
int blueLead = 9;

void setup()
{
  Serial.begin(9600);
  pinMode(redLead, OUTPUT);
  pinMode(greenLead, OUTPUT);
  pinMode(blueLead, OUTPUT);
}

void loop()
{
  for (int red = 255; red >= 0; red--)
  {
    for (int green = 255; green >= 0; green--)
    {
      for (int blue = 255; blue >= 0; blue--)
      {
        analogWrite(redLead, red);
        analogWrite(greenLead, green);
        analogWrite(blueLead, blue);
        
        int time = millis(); //debug/check feature to see delay times
        if (time > 900 && time < 950)
        {
        Serial.print(red);
        Serial.print("\t");
        Serial.print(green);
        Serial.print("\t");
        Serial.println(blue);
        }
      }
    }
  }
}
\
