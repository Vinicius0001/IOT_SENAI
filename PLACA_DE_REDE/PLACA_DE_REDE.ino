

#include <UIPEthernet.h>

//Vetores, ele tem a função de guardar muitos caracteris em uma variavel.

byte mac [] = {0xDE , 0xAD , 0xBE , 0xEF , 0xAA, 0xAF};
char server [] = "www.google.com";

//char a = 'A';
//char b = "abc";


EthernetClient client;


void setup() {
  // put your setup code here, to run once:

  Serial.begin (9600);

  if (Ethernet.begin (mac) == 0)
  {
    Serial.println ("Falhou...");
  }
  delay(1000);

  if (client.connect (server, 80))
  {
    Serial.println ("Funcionou");
    client.println ("GET /search?q=arduino HTTP/1.1");
    client.println ("Host: www.google.com");
    client.println ("Connection: close");
    client.println();
  }

  else
  {
    Serial.println ("Deu merda");

  }



  //int len = strlen (server);
  //int len2 = strlen (a);
  //int len3 = strlen (b);

  //Serial.println (len);
  //Serial.println (len2);
  //Serial.println (len3);



}

void loop() {
  // put your main code here, to run repeatedly:


  if (client.available())
  {

    char c = client.read ();
    Serial.print (c);

  }


  if (!client.connected())
  {
    Serial.println ();
    Serial.println ("DESCONECTADO.");
    client.stop();

    while (true);


  }



}



