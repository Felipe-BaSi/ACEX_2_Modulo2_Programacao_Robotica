// --- Definição de Pinos ---
const int sensorEsq = A0;
const int sensorDir = A1;

const int in1Esq = 2; const int in2Esq = 4;
const int velEsq = 3; // PWM

const int in3Dir = 7; const int in4Dir = 8;
const int velDir = 5; // PWM

// Ajuste o limiar conforme o que você ler no monitor (Ex: 500)
int limiar = 500; 

void setup() {
  Serial.begin(9600);
  
  pinMode(in1Esq, OUTPUT); pinMode(in2Esq, OUTPUT);
  pinMode(in3Dir, OUTPUT); pinMode(in4Dir, OUTPUT);
  pinMode(velEsq, OUTPUT); pinMode(velDir, OUTPUT);

  Serial.println("--- Sistema Iniciado ---");
}

void loop() {
  int leituraEsq = analogRead(sensorEsq);
  int leituraDir = analogRead(sensorDir);

  // --- LÓGICA DE NAVEGAÇÃO COM MENSAGENS ---

  // 1. RETA: Ambos os sensores fora da linha (ou ambos na linha, dependendo da pista)
  if (leituraEsq < limiar && leituraDir < limiar) {
    Serial.println("MOVIMENTO: RETA");
    motores(150, 150); 
  }
  // 2. CURVA ESQUERDA: Sensor esquerdo detectou a linha
  else if (leituraEsq >= limiar && leituraDir < limiar) {
    Serial.println("MOVIMENTO: CURVA PARA ESQUERDA");
    motores(50, 200); // Motor esquerdo lento, direito rápido
  }
  // 3. CURVA DIREITA: Sensor direito detectou a linha
  else if (leituraDir >= limiar && leituraEsq < limiar) {
    Serial.println("MOVIMENTO: CURVA PARA DIREITA");
    motores(200, 50); // Motor direito lento, esquerdo rápido
  }
  // 4. PARADO / CRUZAMENTO
  else {
    Serial.println("MOVIMENTO: PARADO (Cruzamento ou Fim)");
    motores(0, 0);
  }

  delay(100); // Delay para não inundar o monitor serial
}

// Função auxiliar para simplificar o comando dos motores
void motores(int vEsq, int vDir) {
  digitalWrite(in1Esq, HIGH); digitalWrite(in2Esq, LOW);
  digitalWrite(in3Dir, HIGH); digitalWrite(in4Dir, LOW);
  analogWrite(velEsq, vEsq);
  analogWrite(velDir, vDir);
}