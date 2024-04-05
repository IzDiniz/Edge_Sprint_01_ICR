Integrantes:

Felipe Megumi Nakama 552821

Iago Diniz Fontes 553776

Micael Santos Azarias 552699

Pedro Henrique de Assunção Lima 552746


Nosso sistema Arduino utiliza um conjunto de códigos que se baseia na cor exibida pelo celular do paciente, que foram enviadas pelo Whatssapp antes do exame. Quando o paciente recebe uma cor específica, ela é transmitida ao sensor, que a reconhece e indica o exame a ser realizado. Nossa ideia é otimizar o tempo de espera dos pacientes, eliminando filas únicas para todos os exames. Cada paciente seguirá apenas para a fila do exame específico que precisa fazer.
Como nosso protótipo foi criado no simulador Wokwi, que não possui sensor de cor, utilizamos temporariamente um sensor de luminosidade (LDR), que se aproxima da função do sensor de cor. Utilizamos também uma tela LCD exibe a área do exame a ser realizado. Além disso, um LED RGB que acende de acordo com a cor captada pelo sensor de cores, neste caso do simulador, o sensor de luz. Por exemplo, se a cor verde for detectada, a luz verde do LED acenderá, e assim sucessivamente para outras cores.


--Componentes--

• Arduino Uno R3.

• Protoboard.

• Sensor TCS230 // Fotoresistor (Temporário).

• Led RGB.

• Potenciômetro.

• 3 - Resistores de 220 Ohms e 2 - Resistores de 397 Ohms.

• Tela LCD 16x2.

• Pelo menos 27 Cabos de conexões.


 --Montagem--

• Comece primeiro conectando a tela LCD na protoboard ou direto nos fios Macho/Fêmea, em seguida utilize um dos cabos para conectar direto ao potenciômetro.

• Ultilize um dos resistores de 397 Ohms na porta LCDA.

• Conecte o Led RGB na protoboard junto de 3 resistores, e deixe apenas a perna maior sem resistor (Perna negativa).

• Interligue os cabos Macho/Fêmea no Fotoresistor, e utilize o último resistor de 397 Ohms na perna GND do Fotoresistor (O mesmo se aplica ao TCS230).

• Conecte todos os cabos e componentes de acordo com o simulador, podendo interligar o Potenciômetro e o LCD direto na protoboard.


--Instalação da IDE e reutilização do código--

• Primeiro, é necessário instalar o software da IDE do arduino uno para que o código seja compilado.

• No segundo passo é necessário instalar a biblioteca LiquidCrystal.h, para instalar é necessário seguir os seguintes passos primeiro vá para "Sketch", em seguida até "Include Library", depois "Manage Libraries" e em seguida procure por, "LiquidCrystal", localize a biblioteca "LiquidCrystal" feita pelo Francisco Malpartida e instale em sua IDE.

• Abra o simulador e copie o código fornecido, cole na área do código de sua IDE.

• Conecte o arduino em seu computador por meio de um cabo USB específico, entre na aba "Tools", depois "Port" e selecione a porta que o arduino estiver conectado.

•Compile o código colado do simulador na IDE do arduino, clique no botão de "Verificar" "☑️", e caso não possua erros, clique no botão "carregar" "➡️".

• Verifique o contraste do LCD pelo potenciômetro, e para finalizar, teste os sensores utilizando as cores, verificando se o LED acenderá e se as informações serão passadas pelo LCD.


Link do simulador: https://wokwi.com/projects/394054341549709313

Vídeo sobre o Projeto: https://youtu.be/2pMv49kRQCc?si=PYmq4LWX-dGeuyjl 
