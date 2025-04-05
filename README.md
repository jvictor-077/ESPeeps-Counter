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

## 1.1 Conexões entre Arduino e ESP8266

| Arduino | ESP8266 |
|---------|---------|
| TX      | RX      |
| RX      | TX      |
| GND     | GND     |

## 1.2 Conexões para Display de 7 Segmentos

| Arduino | Resistor | Display de 7 Segmentos |
|---------|----------|------------------------|
| 5V      | R (1kΩ)  | COM+ (Ânodo comum)     |
| GND     | -        | COM- (Cátodo comum)    |
| Pino 2  | -        | Segmento A             |
| Pino 3  | -        | Segmento B             |
| Pino 4  | -        | Segmento C             |
| Pino 5  | -        | Segmento D             |
| Pino 6  | -        | Segmento E             |
| Pino 7  | -        | Segmento F             |
| Pino 8  | -        | Segmento G             |

## 1.3 Conexões para LEDs com ESP8266

| ESP8266 | Resistor | LED  |
|---------|----------|------|
| D1 (GPIO5)  | R (1kΩ) | LED 0 |
| D2 (GPIO4)  | R (1kΩ) | LED 1 |
| D6 (GPIO12) | R (1kΩ) | LED 2 |
| D5 (GPIO14) | R (1kΩ) | LED 3 |



2. Clone este repositório:
   ```bash
   git clone https://github.com/seuusuario/ESPEeps-Counter.git
