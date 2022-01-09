/*
 uentaGolpes. Golpea la pared cinco veces en menos de dos segundos para abrir la caja. - Example code for the knockknockBox.
  Created by Antonio Gomez Garcia and Mª Dolores Nogueras Atance, january 8, 2022.
  Released into the public domain.
*/
#include <Servo.h>

int contador = 0;
long tiempoActual = millis();

Servo servo_9;

void setup() {
  servo_9.attach(9);
  pinMode(5, OUTPUT);
}

void loop() {
  servo_9.write(0);
  if (millis() - tiempoActual >= 2000) {
    contador = 0;
    tiempoActual = millis();
  }
  if (analogRead(A0) >= 512) {
    digitalWrite(5, HIGH);
    delay(30);
    contador = contador + 1;
    digitalWrite(5, LOW);
    if (contador == 5) {
      contador = 0;
      servo_9.write(90);
      delay(1*1000);
      servo_9.write(0);
      tiempoActual = millis();
    }
  }

}
