#include <ESP8266WiFi.h>

int tempo = 200;
const int ledConexao = 16; // D7

WiFiServer server(80);
int previousClientCount = 0;

void setup() {
  Serial.begin(9600); // Envia dados pro Arduino

  pinMode(5, OUTPUT);   // D1
  pinMode(4, OUTPUT);   // D2
  pinMode(12, OUTPUT);  // D6
  pinMode(14, OUTPUT);  // D5
  pinMode(ledConexao, OUTPUT); // D7

  WiFi.softAP("ESP8266_HOTSPOT");
  server.begin();

  Serial.println("Hotspot ativo: ESP8266_HOTSPOT");
}

void loop() {
  // Verifica se um novo usuário se conectou
  int currentClientCount = WiFi.softAPgetStationNum();

  if (currentClientCount > previousClientCount) {
    Serial.println("Novo usuário conectado!");
    
    // Para o loop, acende o LED e espera 2 segundos
    digitalWrite(ledConexao, HIGH);
    delay(3000);
    digitalWrite(ledConexao, LOW);
  }

  Serial.println(currentClientCount);


  previousClientCount = currentClientCount;

  // Loop de LEDs
  digitalWrite(5, HIGH); delay(tempo); digitalWrite(5, LOW);
  digitalWrite(4, HIGH); delay(tempo); digitalWrite(4, LOW);
  digitalWrite(12, HIGH); delay(tempo); digitalWrite(12, LOW);
  digitalWrite(14, HIGH); delay(tempo); digitalWrite(14, LOW);
  digitalWrite(12, HIGH); delay(tempo); digitalWrite(12, LOW);
  digitalWrite(4, HIGH); delay(tempo); digitalWrite(4, LOW);
}
