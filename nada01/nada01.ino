#define LED 2
#define RETARDO 1000
#define RETARDO2 200

unsigned long referencia;
unsigned long referencia2;

void setup()
{
  pinMode (LED, OUTPUT);
  digitalWrite (LED, HIGH);
}

void loop()
{
  if (millis() - referencia > RETARDO)
  {
    referencia = millis();
    int ver = digitalRead(LED);
    if (ver == 0)
      digitalWrite (LED, HIGH);
  }

  if (millis() - referencia2 > RETARDO2)
  {
    referencia2 = millis();
    int ver = digitalRead(LED);
    if (ver == 1)
      digitalWrite (LED, LOW);
  }  
}
