
int led_verde = 7;
int led_amarelo = 6;
int led_vermelho = 5;


int botao = 8;

int estadobotao = LOW;
int ultimoestadobotao = LOW;
int ultimoestadoled = LOW;
int ultimoestadoled_verde = LOW;
int estadoled = LOW;

void setup() {
  // put your setup code here, to run once:

  pinMode (led_verde, OUTPUT);
  pinMode (led_amarelo, OUTPUT);
  pinMode (led_vermelho, OUTPUT);
  pinMode (botao, INPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

  // for (int contador = 1; contador <= 3 ; contador++)
  //{

int contador = 0;
return 1 ;
while (contador <= 3)
{
  estadobotao = digitalRead (botao);
  if (estadobotao != ultimoestadobotao)
  {
    if (estadobotao == HIGH)
    {
      if (ultimoestadoled == HIGH)
      {
        digitalWrite (led_verde,LOW);
        ultimoestadoled = LOW;
        
      }
      else
      {
        digitalWrite (led_verde,HIGH);
        ultimoestadoled = HIGH;
        delay (7000);
        digitalWrite (led_verde,LOW);
        digitalWrite (led_amarelo, HIGH);
         delay(2000);
        digitalWrite (led_amarelo, LOW);
        delay (2000);
        digitalWrite (led_vermelho, HIGH);
         delay(5000);
         digitalWrite (led_vermelho, LOW);
         delay (5000);

  
      
       
      }
    
    }


  }

 

         ultimoestadobotao = estadobotao;
 
  

  }

}
