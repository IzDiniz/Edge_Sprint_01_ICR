Integrantes:

Felipe Megumi Nakama 552821

Iago Diniz Fontes 553776

Micael Santos Azarias 552699

Pedro Henrique de Assunção Lima 552746


Nosso sistema Arduino utiliza um conjunto de códigos que se baseia na cor exibida pelo celular do paciente, que foram enviadas pelo Whatssapp antes do exame. Quando o paciente recebe uma cor específica, ela é transmitida ao sensor, que a reconhece e indica o exame a ser realizado. Nossa ideia é otimizar o tempo de espera dos pacientes, eliminando filas únicas para todos os exames. Cada paciente seguirá apenas para a fila do exame específico que precisa fazer.
Como nosso protótipo foi criado no simulador Wokwi, que não possui sensor de cor, utilizamos temporariamente um sensor de luminosidade (LDR), que se aproxima da função do sensor de cor. Utilizamos também uma tela LCD exibe a área do exame a ser realizado. Além disso, um LED RGB que acende de acordo com a cor captada pelo sensor de cores, neste caso do simulador, o sensor de luz. Por exemplo, se a cor verde for detectada, a luz verde do LED acenderá, e assim sucessivamente para outras cores.


Componentes:

• Arduino Uno R3
• Protoboard
• Sensor TCS230 // Fotoresistor (Temporário)
• Led RGB
• Potenciômetro
• 3 - Resistores de 220 Ohms e 2 - Resistores de 397 Ohms
• Tela LCD 16x2
• Pelo menos 27 Cabos de conexões


Montagem: 

• Comece primeiro conectando a tela LCD na protoboard ou direto nos fios Macho/Fêmea, em seguida utilize um dos cabos para conectar direto ao potenciômetro.

• Ultilize um dos resistores de 397 Ohms na porta LCDA.

• Conecte o Led RGB na protoboard junto de 3 resistores, e deixe apenas a perna maior sem resistor (Perna negativa).

• Interligue os cabos Macho/Fêmea no Fotoresistor, e utilize o último resistor de 397 Ohms na perna GND do Fotoresistor (O mesmo se aplica ao TCS230)

• Conecte todos os cabos e componentes de acordo com o simulador, podendo interligar o Potenciômetro e o LCD direto na protoboard







instruções de uso: 
O principal modo de uso deste sistema, é com base no seu sensor de cor, ou seja, o sensor capta as cores RGB, e envia para o arduino, gerando assim, sinais onde são enviados para o LED RGB, e para o LCD.
O LED RGB é ativado conforme a cor mostrada pelo sensor de cor, sendo assim, a a luz do LED liga conforme a cor.
O LCD mostrar informações sobre o exame, local que deverá ir, e a cor que foi instruído a ser captado.
Por fim temos o potenciômetro, que é responsável pela luminosidade do LCD, que terá por finalidade apenas para ajustes de brilho.


Link do simulador: https://wokwi.com/projects/394054341549709313

Vídeo sobre o Projeto: https://youtu.be/2pMv49kRQCc?si=PYmq4LWX-dGeuyjl 
