//Functions

void setup()
{
  Serial.begin(9600);
  Serial.println("Arduino functions");
  Serial.println();
}

void loop()
{
  Output1();
  Output2();
  
  while(1);
}

void Output1()
{
  Serial.println("Output1");
}

void Output2()
{
  Serial.println("Output2");
}
