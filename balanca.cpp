#include "HX711.h"

const int DOUT_PIN = 23;  // Define o pino DOUT do HX711
const int SCK_PIN = 22;   // Define o pino SCK do HX711

HX711 scale;  // Cria uma instância do objeto HX711

void setup() {
  Serial.begin(9600);
  scale.begin(DOUT_PIN, SCK_PIN);
}

void loop() {
  // Lê o valor da célula de carga
  long rawValue = scale.read();

  // Ajuste da escala e tara, dependendo do seu setup específico
  // Substitua estes valores pelos valores calibrados para a sua célula de carga
  scale.set_scale(1000.0);  // Ajuste o valor de escala para a sua célula de carga
  scale.tare();  // Zera a escala com a tara

  // Obtemos o peso em gramas
  float weight = scale.get_units();

  // Exibe o peso lido no monitor serial
  Serial.print("Peso: ");
  Serial.print(weight);
  Serial.println(" g");

  delay(1000);  // Aguarda 1 segundo antes da próxima leitura
}

