# 📡 ESPeeps Counter

**ESPeeps Counter** é um projeto open source que transforma seu **ESP8266** em um **hotspot Wi-Fi inteligente**, capaz de **contar em tempo real** o número de dispositivos conectados à rede. Simples, direto e ideal para monitorar a presença de pessoas em eventos, espaços públicos ou qualquer ambiente onde o Wi-Fi esteja presente.

[![Assista a demonstração](https://images.unsplash.com/photo-1603732551658-5fabbafa84eb?q=80&w=2070&auto=format&fit=crop&ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D)](https://firebasestorage.googleapis.com/v0/b/akad-fbe7e.appspot.com/o/github%2Fteste.mp4?alt=media&token=69c5bf15-a115-44fe-9811-7d76ca95528d)

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


![Display de 7 segmentos](https://www.usinainfo.com.br/blog/wp-content/uploads/2020/08/esquema-de-pinagem-do-display-7-segmentos.jpg) <!-- Opcional -->





## 1.3 Conexões para LEDs com ESP8266

| ESP8266 | Resistor | LED  |
|---------|----------|------|
| D1 (GPIO5)  | R (1kΩ) | LED 0 |
| D2 (GPIO4)  | R (1kΩ) | LED 1 |
| D6 (GPIO12) | R (1kΩ) | LED 2 |
| D5 (GPIO14) | R (1kΩ) | LED 3 |



2. Clone este repositório:
   ```bash
   git clone https://github.com/jvictor-077/ESPeeps-Counter.git
