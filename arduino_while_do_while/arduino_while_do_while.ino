//do while

int i=0;

void setup()
{
  Serial.begin(9600);
  Serial.println("while and do while loops");
  Serial.println();
}

void loop()
{
  while(1)
  {
    i++;
    Serial.print(i);
    Serial.println();
    if(i>9) break;
  }
  
  i=0;
  Serial.println();
  
  while(i<10)
  {
    i++;
    Serial.println(i);
    Serial.println();
  }
  
  i=0;
  Serial.println();
  
  do
  {
    i++;
    Serial.println(i);
    Serial.println();
  }while(i<10);
  
  while(1);
}
    
