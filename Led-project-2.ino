/* souton famous project*/

int speed = 0;
void setup()
{
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void led1()
{
  speed = 400;
  digitalWrite(12, HIGH);
  delay(speed);
  digitalWrite(12, LOW);
  delay(speed);
  digitalWrite(6, HIGH);
  delay(speed);
  digitalWrite(6, LOW);
  digitalWrite(11, HIGH);
  delay(speed);
  digitalWrite(11, LOW);
  delay(speed);
  digitalWrite(7, HIGH);
  delay(speed);
  digitalWrite(7, LOW);
  delay(speed);
  digitalWrite(10, HIGH);
  delay(speed);
  digitalWrite(10, LOW);
  delay(speed);
  digitalWrite(9, HIGH);
  delay(speed);
}

void led2()
{
  speed = 400;
  digitalWrite(6, 12);
  delay(speed);
  digitalWrite(11, 7);
  delay(speed);
  digitalWrite(10, 9);
  delay(speed);
}
void loop()
{
  led1();
  delay(1000);
  led2();
}