
int contador = 1;

void setup() {
  // put your setup code here, to run once:


Serial.begin (9600);
Serial.println ("Iniciando a Serial...");
 


}



void loop() {
  // put your main code here, to run repeatedly:

for (contador = 1; contador <= 50; contador++)
{
Serial.print ("Contador:");
Serial.println (contador);

} 

}
