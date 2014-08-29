int x,Res;

void setup()
{
  Serial.begin(9600);
  Serial.println("map(x, fromLow, fromHigh, toLow, toHigh) function");
  Serial.println();
}

void loop()
{
  for(x=0; x<20; x++)
  {
    Res=map(x,0,20,5,15);
    Serial.print(Res);
    Serial.println();
  }
  while(1);
}

