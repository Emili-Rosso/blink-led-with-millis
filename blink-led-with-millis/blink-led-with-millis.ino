int LED = 2;
unsigned long tempoAnterior = 0;
const unsigned long intervalo = 500;

void setup()
{
  pinMode(LED, OUTPUT);
}

void loop(){
 unsigned long tempoAtual = millis();
  
  if (tempoAtual - tempoAnterior >= intervalo) {
    tempoAnterior = tempoAtual;
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
}
