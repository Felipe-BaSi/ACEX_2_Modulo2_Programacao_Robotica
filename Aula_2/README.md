# Aula 2: Percepção de Dados e Controle de Potência (PWM)

A segunda aula foca na interface entre o robô e o mundo exterior, abordando como sensores captam informações e como o PWM permite um controle refinado dos atuadores.

## 📝 Conteúdo Abordado

* **Sensores de Refletância:** Funcionamento técnico do LDR (divisor de tensão) e sensores Infravermelhos (IR) para identificar superfícies claras e escuras.
* **Sinais Analógicos:** Leitura de tensões variáveis através da função `analogRead()`, resultando em valores entre 0 e 1023.
* **PWM (Modulação por Largura de Pulso):** Estudo aprofundado do **Duty Cycle** para simular tensões intermediárias e controlar a velocidade dos motores de forma proporcional.
* **Calibragem e Telemetria:** Uso do Monitor Serial para definir o **Limiar (Threshold)** ideal para a navegação autônoma.
* **Estabilização de Sinais:** Implementação de técnicas de filtragem, como a média aritmética de leituras, para reduzir ruídos elétricos e garantir movimentos mais estáveis.

## 💻 Códigos de Exemplo

* `1_Leitura_Serial.ino`: Monitoramento de valores brutos dos sensores para entender a escala analógica.
* `2_Sinal_Limiar.ino`: Aplicação prática de lógica condicional para separar estados (claro/escuro) com base em um valor de corte.
* `3_Filtro.ino`: Demonstração da técnica de média de leituras consecutivas para suavizar os dados dos sensores e evitar oscilações desnecessárias no comportamento do robô.