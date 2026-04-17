int sensor = A0;
int limiar = 500;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int valor = analogRead(sensor);
  if(valor > limiar){
    Serial.println("CLARO");
  } else {
    Serial.println("ESCURO");
  }
  delay(100);
}