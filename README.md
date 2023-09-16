# Projeto Lixeira Inteligente ReUse

Bem-vindo ao projeto da Lixeira Inteligente, uma inovação destinada a incentivar a reciclagem e promover a consciência ambiental. Este sistema, construído utilizando Arduino, ESP32 e uma variedade de componentes eletrônicos, transforma a simples ação de descartar resíduos em uma experiência interativa e educativa.

## Objetivo
O objetivo principal deste projeto é motivar as pessoas a adotarem práticas de reciclagem ao tornar o processo de descarte de resíduos mais envolvente e informativo. A lixeira é capaz de interagir com os usuários por meio de um LED LCD, fornecendo informações relevantes sobre a reciclagem e incentivando a participação ativa.

## Funcionalidades Principais
- **Medição de Capacidade em Tempo Real:** A lixeira mede sua capacidade atual e notifica a central de coleta sobre o nível de enchimento em tempo real, otimizando as operações de coleta.
- **Comunicação com Usuários:** Utilizando o LED LCD, a lixeira interage com os usuários, oferecendo mensagens educativas e informativas sobre a importância da reciclagem.
- **Estímulo à Reciclagem:** LEDs são utilizados para criar um sistema de recompensas visuais, incentivando os usuários a fazer a separação adequada dos resíduos e a contribuir para um ambiente mais sustentável.

## Como Utilizar
1. Certifique-se de que todos os componentes estejam devidamente conectados e configurados conforme as instruções deste repositório.
2. Carregue o código-fonte no Arduino ou ESP32.
3. Coloque a lixeira em um local de fácil acesso para os usuários e inicie a interação.

Aproveite esta solução inteligente e engajadora para transformar a reciclagem em um hábito diário e contribuir para um mundo mais limpo e sustentável. Juntos, podemos fazer a diferença! 🌍♻️

## Componentes Utilizados
- **Arduino:** A plataforma de prototipagem utilizada para controlar todos os componentes do sistema.
- **ESP32:** O ESP32 é um microcontrolador com capacidades de conectividade Wi-Fi e Bluetooth, utilizado para ampliar as funcionalidades do projeto e possibilitar a comunicação sem fio.
- **Sensor de Distância:** Este sensor mede a distância de um objeto a partir do ponto de emissão de um sinal.
- **LEDs:** Os LEDs são usados para indicar diferentes estados ou informações, como alertas ou status do sistema.
- **Célula de Carga 50kg:** A célula de carga mede a carga aplicada a ela, neste caso, até 50kg.
- **Módulo HX711:** O módulo HX711 é um conversor analógico-digital (ADC) de alta precisão utilizado para ler os dados da célula de carga.
- **LED LCD 16x2:** Este componente é um display de cristal líquido (LCD) que exibe informações do sistema.
- **Potenciômetro:** Um potenciômetro é utilizado para ajustar ou controlar variáveis no sistema, como a intensidade de uma luz.
- **Resistor:** O resistor é um componente eletrônico que controla a corrente elétrica no circuito.

## Função de Cada Componente
- **Arduino:** O Arduino é a central de controle e executa o código que interage com os componentes e processa os dados.
- **ESP32:** O ESP32 expande as funcionalidades do sistema, possibilitando a comunicação sem fio e outras capacidades avançadas.
- **Sensor de Distância:** Mede a distância entre o sensor e um objeto usando ondas ultrassônicas.
- **LEDs:** Indicam diferentes estados ou informações com base nos dados recebidos ou nas ações realizadas pelo sistema.
- **Célula de Carga 50kg:** Mede a carga aplicada, por exemplo, em uma balança.
- **Módulo HX711:** Amplifica e converte o sinal analógico da célula de carga em um sinal digital que pode ser lido pelo Arduino.
- **LED LCD 16x2:** Exibe informações importantes do sistema, como medições de distância, peso ou outros dados relevantes.
- **Potenciômetro:** Permite ajustar variáveis, como o limiar de detecção do sensor de distância ou a intensidade dos LEDs.
- **Resistor:** Controla a corrente elétrica em certas partes do circuito, garantindo um funcionamento seguro e adequado.

Certifique-se de conectar e configurar corretamente cada componente para garantir o funcionamento adequado do sistema. Consulte a documentação específica de cada componente para obter detalhes sobre sua conexão e uso.
