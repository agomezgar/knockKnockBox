/*
 Primer programa - Example code for the knockknockBox.
  Created by Antonio Gomez Garcia and Mª Dolores Nogueras Atance, january 8, 2022.
  Released into the public domain.
*/
int contador = 0;

void contar() {
  contador = contador + 1;
  if (contador == 1) {
    digitalWrite(3, HIGH);
    delay(1*1000);
    digitalWrite(3, LOW);
  }
  if (contador == 2) {
    digitalWrite(5, HIGH);
    delay(1*1000);
    digitalWrite(5, LOW);
  }
  if (contador == 3) {
    digitalWrite(6, HIGH);
    delay(1*1000);
    digitalWrite(6, LOW);
  }
  if (contador == 4) {
    tone(8,261,250);
    delay(250);
  }
  if (contador == 5) {
    tone(8,293,250);
    delay(250);
  }
  if (contador == 6) {
    tone(8,329,250);
    delay(250);
    contador = 0;
  }
}

void setup() {
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  if (analogRead(A0) > 512) {
    delay(0.1*1000);
    contar();
  }
}
