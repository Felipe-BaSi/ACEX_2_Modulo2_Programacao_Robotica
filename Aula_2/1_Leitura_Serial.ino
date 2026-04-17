int sensor = A0;

void setup() {
  Serial.begin(9600); // Inicia comunicacao serial a 9600 bps
}

void loop() {
  int valor = analogRead(sensor);
  Serial.println(valor); // Exibe o valor lido no Monitor Serial
  delay(200);
}