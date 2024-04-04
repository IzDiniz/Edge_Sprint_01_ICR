#include <LiquidCrystal.h>

// Inicializa o LCD com os pinos conectados
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int ldrPin = A0; // Pino onde o LDR está conectado

const int redPin = 10;  // Pino do LED vermelho
const int greenPin = 8; // Pino do LED verde
const int bluePin = 9; // Pino do LED azul

void setup() {
  lcd.begin(16, 2); // Inicializa a interface com a tela LCD
pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(bluePin, OUTPUT);
}

void loop() {
  // Lê os valores analógicos do LDR e do potenciômetro
int ldrValue = analogRead(ldrPin);

  // Mapeia o valor do LDR para o brilho do backlight do LCD (0-255)
  int backlightBrightness = map(ldrValue, 0, 1023, 255, 0); // Valores LDR
  analogWrite(10, backlightBrightness); // Define o brilho do backlight (assumindo que o pino 10 controla o backlight)

  // Exibe os valores do LDR e do potenciômetro no LCD
lcd.clear();
lcd.setCursor(0, 0);
lcd.print("LDR: ");
lcd.print(ldrValue);

  // Verifica o nome com base na luminosidade
if (ldrValue >= 0 && ldrValue <= 300) {
    lcd.setCursor(0, 1);
    lcd.print("Exame: Raio-X");
    // Acende o LED azul
    digitalWrite(bluePin, HIGH);
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
} else if (ldrValue > 300 && ldrValue <= 450) {
    lcd.setCursor(0, 1);
    lcd.print("Exame: Ultrassom");
    // Acende o LED verde
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, LOW);
    digitalWrite(bluePin, LOW);
} else {
    lcd.setCursor(0, 1);
    lcd.print("Exame: Sangue");
    // Acende o LED vermelho
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
}

  delay(1000); // Aguarda um segundo antes de atualizar a leitura
}

