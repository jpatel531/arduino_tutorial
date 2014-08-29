//continue

int i=0;

void setup()
{
  Serial.begin(9600);
  Serial.println("The continue statement");
  Serial.println();
}

void loop()
{
  for (i=0; i<10; i++)
  {
    if(i % 2 == 0)
    {
      continue;
    }
    
    Serial.print(i);
    Serial.print(" is odd");
    Serial.println();
  }
  
  while(1);
}

