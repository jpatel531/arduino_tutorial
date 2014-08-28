// Second Arduino program

int ledPin = 13;

void setup()
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  Serial.println("Second Arduino program");
  Serial.println();
}

void loop()
{
  Serial.print("5 + 188 yields... ");
  Serial.print(5+188);
  while(true)
  {
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(1000);
    continue;
  }
}
  
  
