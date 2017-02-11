int outputpin = 0;
int i=0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
int rawvoltage = analogRead(outputpin);
float millivolts=(rawvoltage/1024.0) * 5000;
float fahrenheit = millivolts/10;
//Serial.println(fahrenheit);

    delay(1000);
    Serial.println(fahrenheit);
  
}

