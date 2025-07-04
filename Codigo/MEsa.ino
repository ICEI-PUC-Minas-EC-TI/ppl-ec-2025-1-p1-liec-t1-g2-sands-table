#include <BluetoothSerial.h>

// Pinos do motor
#define dirPin  25
#define stepPin 33
#define stepsPerRevolution 200

// Bluetooth
BluetoothSerial SerialBT;
int valorRecebido;

void setup() {
  // Inicializa o Bluetooth
  Serial.begin(9600);
  SerialBT.begin("Kingdom");
  Serial.println("O dispositivo já pode ser pareado!");

  // Inicialização dos pinos
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
}

void loop() {
  if (SerialBT.available() > 0) {
    valorRecebido = (int)SerialBT.read();

    if (valorRecebido == 1) {
      circuloCompleto();
    } else if (valorRecebido == 2) {
      meioCirculo();
    } else if (valorRecebido == 3) {
      formatoU();
    }

    delay(50);
  }
}

// Funções de movimento
void circuloCompleto() {
  digitalWrite(dirPin, HIGH);
  for (int i = 0; i < stepsPerRevolution; i++) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(4000);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(4000);
  }
}

void meioCirculo() {
  digitalWrite(dirPin, HIGH);
  for (int i = 0; i < stepsPerRevolution / 2; i++) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(4000);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(4000);
  }
}

void formatoU() {
  digitalWrite(dirPin, HIGH);
  for (int i = 0; i < 50; i++) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(4000);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(4000);
  }

  meioCirculo();

  digitalWrite(dirPin, LOW);
  for (int i = 0; i < 50; i++) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(4000);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(4000);
  }
}
