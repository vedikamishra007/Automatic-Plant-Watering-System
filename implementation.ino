int water_pump = 13;
int sensor = 8;
int val;

void setup()
{
  pinMode(water_pump, OUTPUT);  // Use variable instead of pin number
  pinMode(sensor, INPUT);       // Use variable instead of pin number
}

void loop()
{
  val = digitalRead(sensor);
  if(val == LOW)
  {
    digitalWrite(water_pump, LOW);  // Turn off the water pump if sensor detects moisture
  }
  else
  {
    digitalWrite(water_pump, HIGH);  // Turn on the water pump if soil is dry
  }
  delay(400);  // Delay for stability
}

