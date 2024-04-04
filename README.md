Integrantes:
Felipe Megumi Nakama 552821

Iago Diniz Fontes 553776
Micael Santos Azarias 552699
Pedro Henrique de Assunção Lima 552746


Nosso sistema Arduino utiliza um conjunto de códigos que se baseia na cor exibida pelo celular do paciente, que foram enviadas pelo Whatssapp antes do exame. Quando o paciente recebe uma cor específica, ela é transmitida ao sensor, que a reconhece e indica o exame a ser realizado. Nossa ideia é otimizar o tempo de espera dos pacientes, eliminando filas únicas para todos os exames. Cada paciente seguirá apenas para a fila do exame específico que precisa fazer.
Como nosso protótipo foi criado no simulador Wokwi, que não possui sensor de cor, utilizamos temporariamente um sensor de luminosidade (LDR), que se aproxima da função do sensor de cor. Utilizamos também uma tela LCD exibe a área do exame a ser realizado. Além disso, um LED RGB que acende de acordo com a cor captada pelo sensor de cores, neste caso do simulador, o sensor de luz. Por exemplo, se a cor verde for detectada, a luz verde do LED acenderá, e assim sucessivamente para outras cores.
