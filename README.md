# 📡 ESPeeps Counter

**ESPeeps Counter** é um projeto open source que transforma seu **ESP8266** em um **hotspot Wi-Fi inteligente**, capaz de **contar em tempo real** o número de dispositivos conectados à rede. Simples, direto e ideal para monitorar a presença de pessoas em eventos, espaços públicos ou qualquer ambiente onde o Wi-Fi esteja presente.

![ESPeeps Banner](https://your-image-url.com) <!-- Opcional -->

---

## ⚙️ Funcionalidades

✅ Criação de um ponto de acesso Wi-Fi (Access Point)  
✅ Contagem automática de dispositivos conectados  
✅ Exibição via Serial Monitor ou página web (opcional)  
✅ Suporte a atualizações OTA  
✅ Armazenamento de logs com SPIFFS (opcional)  
✅ Leve, rápido e fácil de usar

---

## 📦 Aplicações

- Monitoramento de fluxo de pessoas em:
  - 🏫 Salas de aula
  - 🛍️ Lojas e feiras
  - 🎉 Eventos e reuniões
- Projetos educacionais sobre:
  - 🔐 Segurança de redes
  - 🌐 Internet das Coisas (IoT)
  - ⚡ Sistemas embarcados

---

## 🛠️ Requisitos

- [x] 1x ESP8266 (NodeMCU, Wemos D1 Mini ou similar)  
- [x] Cabo micro USB
- [x] IDE Arduino instalada e configurada  
- [x] Biblioteca ESP8266WiFi instalada  

---

## 🚀 Instalação


1. Conexões:

  | Arduino | ESP8266 |
  |---------|---------|
  |   TX   -->   RX   |        
  |   RX   -->   TX   |
  |  GND   -->   GND  |


  | Arduino | Resistor | display de 7 segmentos |
  |---------|-----------------------------------|
  |   5V    |  R(1k)   |         COM++          |
  |  GND    |          |         COM--          |
  |    2    |          |          A             |
  |    3    |          |          B             |
  |    4    |          |          C             |
  |    5    |          |          D             |
  |    6    |          |          E             |
  |    7    |          |          F             |
  |    8    |          |          G             |



  | ESP8266 | Resistor |         LED            |
  |---------|-----------------------------------|
  |   D1    |  R(1k)   |         LED(0)         |
  |   D2    |  R(1k)   |         LED(1)         |
  |   D6    |  R(1k)   |         LED(2)         |
  |   D5    |  R(1k)   |         LED(3)         |


2. Clone este repositório:
   ```bash
   git clone https://github.com/seuusuario/ESPEeps-Counter.git
