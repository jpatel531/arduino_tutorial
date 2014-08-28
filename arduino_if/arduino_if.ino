//if...

int x;

void setup() 
{
  Serial.begin(9600);
  Serial.println("if & if/else statements");
  Serial.println();
}

void loop() 
{
  x++;
  if (x>10)
  {
    Serial.println("The counter of variable x now has a value of ");
    Serial.println(x);
    while(1);
  }
  else
  {
    Serial.print("X = ");
    Serial.print(x);
    Serial.println();
  }

}
