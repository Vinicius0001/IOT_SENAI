


const int sensor_temperatura = A0;
int leitura_sensor;
float temperatura;

void setup() {
  // put your setup code here, to run once:


analogReference (INTERNAL);
Serial.begin (9600);

}

void loop() {
  // put your main code here, to run repeatedly:

leitura_sensor = analogRead (sensor_temperatura);
temperatura = leitura_sensor * 0.1075268817204301;

Serial.print ("Temperatura: ");
Serial.println (temperatura);
delay (1000);

}
