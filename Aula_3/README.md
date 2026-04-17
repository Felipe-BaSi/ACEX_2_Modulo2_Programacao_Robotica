# Aula 3: Projeto Final - Robô Seguidor de Linha

O encerramento do módulo consiste na integração de todos os conceitos em um projeto funcional simulado no **Tinkercad**.

## 📝 Conteúdo Abordado
* **Ponte H:** Funcionamento do driver de motor como interface de potência indispensável para os atuadores.
* **Lógica de Navegação:** Implementação da hierarquia de decisões (Reta, Curva Esquerda, Curva Direita e Parada).
* **Abstração de Código:** Criação da função `motores(vEsq, vDir)` para simplificar o controle de velocidade e direção via PWM.

## 🛠️ Simulação e Testes
* Calibragem do limiar via Monitor Serial.
* Ajuste de Duty Cycle para evitar movimentos bruscos.
* Verificação de sentido de rotação dos atuadores.

## 💻 Código Principal
* `Robo_Bancada.ino`: Código completo, comentado e otimizado do robô de bancada.