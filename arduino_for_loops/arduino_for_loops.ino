//For loops

int x;

void setup()
{
  Serial.begin(9600);
  Serial.println("for statements");
  Serial.println();
}

void loop()
{
  Serial.println("Increment 1");
  for(x=0; x<10; x++)
  {
    Serial.print("X = ");
    Serial.print(x);
    Serial.println();
  }
  Serial.println("Increment 2");
  for(x=0; x<10; x+=2)
  {
    Serial.print("X = ");
    Serial.print(x);
    Serial.println();
  }
  Serial.println("Count down from 10");
  for(x=10; x>0; x--)
  {
    Serial.print("X = ");
    Serial.print(x);
    Serial.println();
  }
  while(1);
}

