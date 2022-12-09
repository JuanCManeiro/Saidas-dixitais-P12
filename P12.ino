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
/*
Nesta parte volvín poñer como primeira orde 
   o encendido do led integrado e S13 para 
      despois iniciar o proceso xa que creo 
         que o led integrado debe dar señal 
         primeiro para confirmar o funcionamento
         do proceso
         ***********************/

// C++ code
//
void setup()
{
  pinMode(11, OUTPUT); // temos conectado na Saída 11
  pinMode(12, OUTPUT); // conexion S12
  pinMode(LED_BUILTIN, OUTPUT); //conexion en Led integrado que esta asociado coa S13
}

void loop() //despois de encender...
{
  digitalWrite(LED_BUILTIN, HIGH); // Tensionamos led integrado e S13
  delay(10000); // Wait for 10000 millisecond(s)Esperamos 10s 
  digitalWrite(LED_BUILTIN, LOW); // Destensionamos led integrado e S13
  delay(4000); // Wait for 4000 millisecond(s)Esperamos 4s sin tension en saídas
  digitalWrite(12, HIGH); // Damos tension na S12
  digitalWrite(11, HIGH); // Damos tension na S11 
  delay(10000); // Wait for 10000 millisecond(s) Esta orde permanece durante 10s
  digitalWrite(12, LOW); // Quitamos tension de S12
  digitalWrite(11, LOW); // Quitamos tension de S11
  delay(5000); // Wait for 5000 millisecond(s) Esperamos 5s e repetimos o proceso infinitamente

}
