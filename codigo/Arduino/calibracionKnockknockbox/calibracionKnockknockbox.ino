/*
 Calibración de la Knockknockbox - Example code for the knockknockBox.
  Created by Antonio Gomez Garcia and Mª Dolores Nogueras Atance, january 8, 2022.
  Released into the public domain.
*/
#include <Servo.h>
int lectura;
Servo servo_9;

void setup() {
  Serial.begin(9600);
  servo_9.attach(9);
}

void loop() {
  // Ponemos el servo en 0º (posición cerrada)
  servo_9.write(0);
  lectura = analogRead(A0);
  // El valor mínimo a partir del cual salta el monitor serie puede ser menos o mayor que 80. Se puede experimentar.
  if (lectura >= 80) {
    Serial.println(lectura);
    delay(30);
  }

}
