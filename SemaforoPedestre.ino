// Semáforo com Pedestre 
int carroVermelho = 13;
int carroAmarelo = 12;
int carroVerde = 11;
int pedestreVermelho = 7;
int pedestreVerde = 6;

void setup() {
  pinMode(carroVerde, OUTPUT);
  pinMode(carroAmarelo, OUTPUT);
  pinMode(carroVermelho, OUTPUT);
  pinMode(pedestreVerde, OUTPUT);
  pinMode(pedestreVermelho, OUTPUT);
}

void loop() {
  // Verde carros, vermelho pedestre
  digitalWrite(carroVerde, HIGH);
  digitalWrite(carroAmarelo, LOW);
  digitalWrite(carroVermelho, LOW);
  digitalWrite(pedestreVermelho, HIGH);
  digitalWrite(pedestreVerde, LOW);
  delay(5000); // 5s verde para carros

  // Amarelo carros
  digitalWrite(carroVerde, LOW);
  digitalWrite(carroAmarelo, HIGH);
  digitalWrite(carroVermelho, LOW);
  delay(2000); // 2s amarelo

  // Vermelho carros, verde pedestre
  digitalWrite(carroAmarelo, LOW);
  digitalWrite(carroVermelho, HIGH);
  digitalWrite(pedestreVermelho, LOW);
  digitalWrite(pedestreVerde, HIGH);
  delay(5000); // 5s pedestre atravessando

  // Voltar ao estado inicial
  digitalWrite(pedestreVerde, LOW);
  digitalWrite(pedestreVermelho, HIGH);
  digitalWrite(carroVermelho, LOW);
}
