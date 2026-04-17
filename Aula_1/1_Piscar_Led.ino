void setup() {
  pinMode(13, OUTPUT); // Configura o pino 13 como saida
}

void loop() {
  digitalWrite(13, HIGH); // Liga o LED
  delay(500);             // Espera 500ms
  digitalWrite(13, LOW);  // Desliga o LED
  delay(500);             // Espera 500ms
}