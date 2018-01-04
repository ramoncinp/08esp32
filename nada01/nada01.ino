
#define LED 2
#define RETARDO 2000
unsigned long referencia;

void setup()
{
  pinMode (LED, OUTPUT);
  digitalWrite (LED, HIGH);
}

void loop()
{
  if (millis() - referencia > RETARDO)
  {
    referencia=millis();
    int ver=digitalRead(LED);
    if (ver==1)
      digitalWrite (LED, LOW);
    else
      digitalWrite (LED, HIGH);
  }
}
