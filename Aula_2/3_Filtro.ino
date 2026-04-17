int lerMedia(int pino){
  int soma = 0;
  for(int i = 0; i < 5; i++){
    soma += analogRead(pino);
    delay(5);
  }
  return soma / 5;
}

void setup() {
  Serial.begin(9600);
}

void loop() {
  int valorEstavel = lerMedia(A0);
  Serial.println(valorEstavel);
  delay(100);
}