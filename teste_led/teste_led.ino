
int led_verde = 5;
void setup() {
  // put your setup code here, to run once:
  pinMode (led_verde,OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite (led_verde,HIGH);
delay(1000);
digitalWrite (led_verde,LOW);
delay (1000);
}
