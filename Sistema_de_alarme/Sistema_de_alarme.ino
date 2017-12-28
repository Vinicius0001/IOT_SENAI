
const int sensor_temperatura = A0;
int leitura_sensor;
float temperatura;

int led_verde = 5;
int led_amarelo = 6;
int led_vermelho = 7;

int buzina = 4;

int botao1 = 11;
int botao2 = 12;


int estadobotao2 = LOW;

int estadobotao1 = LOW;
int ultimoestadobotao1 = LOW;
int ultimoestadoled1 = LOW;
int estadoled1 = LOW;

void setup() {
  // put your setup code here, to run once:
  analogReference (INTERNAL);
  Serial.begin (9600);
  pinMode (led_verde, OUTPUT);
  pinMode (buzina, OUTPUT);
  pinMode (botao1, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  leitura_sensor = analogRead (sensor_temperatura);
  temperatura = leitura_sensor * 0.1075268817204301;

  Serial.print ("Temperatura: ");
  Serial.println (temperatura);
  delay (1000);

  estadobotao1 = digitalRead (botao1);
  estadobotao2 = digitalRead (botao2);

  if (temperatura < 28 )
  {
    digitalWrite (led_verde, HIGH);
    digitalWrite (led_amarelo, LOW);
    digitalWrite (led_vermelho, LOW);
    noTone(buzina);
  }

  if ((temperatura > 28 && temperatura < 30))
  {
    digitalWrite (led_amarelo, HIGH);
    digitalWrite (led_verde, LOW);
    digitalWrite (led_vermelho, LOW);
    noTone(buzina);
  }

  if (temperatura > 30)
  {
    digitalWrite (led_vermelho, HIGH);
    digitalWrite (led_verde, LOW);
    digitalWrite (led_amarelo, LOW);
    tone (buzina, 1000);
  }

  Serial.print("estadobotao1: ");
  Serial.println(estadobotao1);
  Serial.print("estadobotao2: ");
  Serial.println(estadobotao2);

  if (estadobotao1 == HIGH)
  {
    while (estadobotao2 == LOW)
    {
      digitalWrite (led_vermelho, HIGH);
      digitalWrite (led_verde, LOW);
      digitalWrite (led_amarelo, LOW);
      tone (buzina, 1000);
      estadobotao2 = digitalRead(botao2);
    }
  }

  /* if (estadobotao2 == HIGH)
  {
    digitalWrite (led_vermelho, LOW);
    digitalWrite (led_verde, HIGH);
    digitalWrite (led_amarelo, LOW);
    noTone (buzina);
  } */
}




