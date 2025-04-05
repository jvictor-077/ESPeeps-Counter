#define ledA 2
#define ledB 3
#define ledC 4
#define ledD 5
#define ledE 6
#define ledF 7
#define ledG 8

int numero = 0; // começa em 0
byte ABCDEFG;

void exibeNumeroNoDisplay() {
  switch(numero){
    case 0:
      ABCDEFG = 0b1111110;
      break;
    case 1:
      ABCDEFG = 0b0110000;
      break;
    case 2:
      ABCDEFG = 0b1101101;
      break;
    case 3:
      ABCDEFG = 0b1111001;
      break;
    case 4:
      ABCDEFG = 0b0110011;
      break;
    case 5:
      ABCDEFG = 0b1011011;
      break;
    case 6:
      ABCDEFG = 0b1011111;
      break;
    case 7:
      ABCDEFG = 0b1110000;
      break;
    case 8:
      ABCDEFG = 0b1111111;
      break;
    case 9:
      ABCDEFG = 0b1111011;
      break;
    default: // Caso algum número não listado
      ABCDEFG = 0b0000000; // Desliga todos os segmentos
      break;
  }
  
  digitalWrite(ledA, bitRead(ABCDEFG, 6));
  digitalWrite(ledB, bitRead(ABCDEFG, 5));
  digitalWrite(ledC, bitRead(ABCDEFG, 4));
  digitalWrite(ledD, bitRead(ABCDEFG, 3));
  digitalWrite(ledE, bitRead(ABCDEFG, 2));
  digitalWrite(ledF, bitRead(ABCDEFG, 1));
  digitalWrite(ledG, bitRead(ABCDEFG, 0));
}

void setup() {
  Serial.begin(9600);
  
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledC, OUTPUT);
  pinMode(ledD, OUTPUT);
  pinMode(ledE, OUTPUT);
  pinMode(ledF, OUTPUT);
  pinMode(ledG, OUTPUT);
  
  exibeNumeroNoDisplay(); // exibe 0 no início
}

void loop() {
  if (Serial.available()) {
    String comando = Serial.readStringUntil('\n');
    comando.trim(); // Remove espaços ou quebras de linha extras

  if (comando.toInt() >= 0 && comando.toInt() <= 9) {
      numero = comando.toInt();
      exibeNumeroNoDisplay();
    }
  }
}