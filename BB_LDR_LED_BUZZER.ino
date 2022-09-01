//Deselvolvido por: BOARDBOX
// www.boardbox.net
// @_boardbox
// 01 de setembro de 2022
// Alarme e Luzes de Emergêncoa

 
int buzzerPin = 7;                    // Piezo no pino 7
int ldrPin = 0;                       // LDR no pino analógico 0
int ledPin = 5;                       // LED no pino digital 5 

int valorLDR = 0;                     // Valor lido do LDR
int freq = 5;                         // altera frequencia do sonorizador

void setup() {
    pinMode(ledPin, OUTPUT);          // configurando pino como saida
    pinMode(buzzerPin, OUTPUT);       // configurando pino como saida
}

void loop() {
  valorLDR = analogRead(ldrPin);      // lê o valor do LDR
  if (valorLDR < 500){                // se o valor do LDR for menor que 500
      tone(buzzerPin,1000);           // toca um tom de 1000 Hz do piezo
      digitalWrite(ledPin, HIGH);     // liga o led
   }else{                             // se não
      noTone(buzzerPin);              // interrompe o tom
      digitalWrite(ledPin, LOW);      // apaga o led
    }

}
