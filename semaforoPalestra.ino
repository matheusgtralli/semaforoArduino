/*
  SEMÁFORO

  Este programa foi apresentado na palestra "Conheça o profissional do futuro"
na Escola Discover por Matheus Gaboardi Tralli.

  Qualquer pessoa pode fazer uso deste código, modificá-lo e distribui-lo sem
aviso prévio.

Modificado em:
 31/10/2017
 */


// Essa é a funçao de inicialização, ela é executada apenas uma vez
void setup() {
  // Inicia o pino 13 do Arduino como saída (Led verde)
  pinMode(13, OUTPUT);
  // Inicia o pino 12 do Arduino como saída (Led Amarelo)
  pinMode(12, OUTPUT);
  // Inicia o pino 11 do Arduino como saída (Led Vermelho)
  pinMode(11, OUTPUT);
}

// Essa função é executada em loop e roda para sempre
void loop() {
  digitalWrite(13, HIGH);   // Acende o Led Vermelho (HIGH é a voltagem alta)
  delay(3000);              // Mantém aceso por 3 segundos
  digitalWrite(13, LOW);    // Apaga o Led Vermelho (LOW é a voltagem baixa)
  digitalWrite(11, HIGH);   // Acende o Led Verde (HIGH é a voltagem alta)
  delay(3000);              // Mantém aceso por 3 segundos
  digitalWrite(11, LOW);    // Apaga o Led Verde (LOW é a voltagem baixa)
  digitalWrite(12, HIGH);   // Acende o Led Amarelo (HIGH é a voltagem alta)
  delay(1500);              // Mantém aceso por 3 segundos
  digitalWrite(12,LOW);     // Apaga o Led Amarelo (LOW é a voltagem baixa)
}
