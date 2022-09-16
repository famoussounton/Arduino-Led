/*-sountonfamous project*/

int speed = 0; // Déclartion de la variable speed et initialisation a zero
void setup() // fonction setup
{
  pinMode(6, OUTPUT); // Initialisation de la pin 6 comme sortie
  pinMode(7, OUTPUT); // Initialisation de la pin 7 comme sortie
  pinMode(9, OUTPUT); // Initialisation de la pin 9 comme sortie
  pinMode(10, OUTPUT); // Initialisation de la pin 10 comme sortie
  pinMode(11, OUTPUT); // Initialisation de la pin 11 comme sortie
  pinMode(12, OUTPUT); // Initialisation de la pin 12 comme sortie
}

void loop() // fonction loop
{
  speed = 400; // ATTRIBUTION DE LA VALEUR 400 A LA VARIABLE SPEED
  digitalWrite(6, HIGH); // Mise au niveau haut de la pin 6
  delay(speed); // Pause de 400ms    
  digitalWrite(7, HIGH); // Mise au niveau haut de la pin 7
  delay(speed); // Pause de 400ms
  digitalWrite(9, HIGH); // Mise au niveau haut de la pin 9
  delay(speed); // Pause de 400ms
  digitalWrite(10, HIGH); // Mise au niveau haut de la pin 10
  delay(speed); // Pause de 400ms
  digitalWrite(11, HIGH); // Mise au niveau haut de la pin 11
  delay(speed); // Pause de 400ms
  digitalWrite(12, HIGH); // Mise au niveau haut de la pin 12
  delay(speed); // Pause de 400ms
  digitalWrite(12, LOW); // Mise au niveau bas de la pin 12
  delay(speed); // Pause de 400ms
  digitalWrite(11, LOW); // Mise au niveau bas de la pin 11
  delay(speed); // Pause de 400ms
  digitalWrite(10, LOW); // Mise au niveau bas de la pin 10
  delay(speed); // Pause de 400ms
  digitalWrite(9, LOW);  // Mise au niveau bas de la pin 9
  delay(speed); // Pause de 400ms
  digitalWrite(7, LOW);  // Mise au niveau bas de la pin 7
  delay(speed); // Pause de 400ms
  digitalWrite(6, LOW);  // Mise au niveau bas de la pin 6
  delay(speed); // Pause de 400ms
}
