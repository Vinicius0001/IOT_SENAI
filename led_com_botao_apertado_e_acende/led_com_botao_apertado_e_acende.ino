
int led = 7;
int botao = 4;

int estadobotao = LOW;
int ultimoestadobotao = LOW;
int ultimoestadoled = LOW;
int estadoled = LOW;

void setup() {
  // put your setup code here, to run once:

  pinMode (led, OUTPUT);
  pinMode (botao, INPUT);

}


void loop() {
  // put your main code here, to run repeatedly:

  estadobotao = digitalRead (botao);
  if (estadobotao != ultimoestadobotao)
  {
    if (estadobotao == HIGH)
    {
      if (ultimoestadoled == HIGH)
      {
        digitalWrite (led,LOW);
        ultimoestadoled = LOW;
      }
      else
      {
        digitalWrite (led,HIGH);
        ultimoestadoled = HIGH;
      }

    }


  }

  ultimoestadobotao = estadobotao;
}





