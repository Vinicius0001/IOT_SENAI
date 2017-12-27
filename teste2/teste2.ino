
int led = 7;
int botao = 4;

int estadobotao;

void setup() {
  // put your setup code here, to run once:

  pinMode (led, OUTPUT);
  pinMode (botao, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

estadobotao = digitalRead (botao);
 
if (estadobotao == HIGH)
{
digitalWrite (led,HIGH);
}
else
{
digitalWrite (led,LOW);

}
}

