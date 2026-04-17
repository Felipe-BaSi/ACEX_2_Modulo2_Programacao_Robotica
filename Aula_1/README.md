# Aula 1: O Cérebro do Robô e Lógica Fundamental

Nesta primeira etapa do módulo, exploramos a arquitetura do **Arduino Uno** e os fundamentos da programação em C++ voltada para sistemas embarcados. O foco inicial é entender como o código se traduz em ações físicas simples.

## 📝 Conteúdo Abordado

* **Introdução ao Hardware:** Identificação visual da placa, microcontrolador e pinagem básica (digitais, analógicos e alimentação).
* **Ambiente de Desenvolvimento:** Instalação da Arduino IDE e entendimento das funções obrigatórias `setup()` (configuração inicial) e `loop()` (execução contínua).
* **Fundamentos de Programação:** Uso de variáveis do tipo `int`, operadores relacionais e a lógica condicional `if / else if / else` para a tomada de decisões autônomas.
* **Introdução ao PWM:** Conceitos iniciais de modulação por largura de pulso e como o Arduino simula tensões intermediárias para controlar a potência.

## 💻 Códigos de Exemplo

* `1_Piscar_Led.ino`: O "Hello World" da eletrônica, demonstrando o uso básico de `pinMode`, `digitalWrite` e `delay`.
* `2_Brilho_PWM.ino`: Demonstração prática do controle de potência via PWM, utilizando a função `analogWrite` para variar o brilho de um LED e introduzir o conceito de controle de velocidade dos motores.