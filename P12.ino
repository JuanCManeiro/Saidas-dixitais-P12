/*
  Nesta primeira parte temos o texto 
     sen incluir os comentarios 
        para ter a seguridade de 
           non perder o traballo 
              feito
************************************/   
# Saidas-dixitais-P12
Añadimos un relé
// C++ code
//
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(LED_BUILTIN, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(4000); // Wait for 4000 millisecond(s)
}
