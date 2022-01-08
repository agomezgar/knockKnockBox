/*
 repiteGolpes - Example code for the knockknockBox.
  Created by Antonio Gomez Garcia and Mª Dolores Nogueras Atance, january 8, 2022.
  Released into the public domain.
*/

long TIEMPOS[30];
boolean ACTIVO = LOW;
int INDICE = 0;
long TIEMPOACTUAL = millis();
int j;

void setup() {
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  if (analogRead(A0) >= 300) {
    digitalWrite(5, HIGH);
    delay(10);
    if (!ACTIVO) {
      ACTIVO = HIGH;
      INDICE = 0;
      TIEMPOACTUAL = millis();
      for (j=0 ; j<=sizeof(TIEMPOS)/sizeof(TIEMPOS[0]) ; j=j+(1)) {
        TIEMPOS[j]=0;
      }
      TIEMPOS[INDICE]=TIEMPOACTUAL;
      INDICE = INDICE + 1;
      TIEMPOACTUAL = millis();
    } else {
      TIEMPOS[INDICE]=millis();
      INDICE = INDICE + 1;
      TIEMPOACTUAL = millis();
    }
    digitalWrite(5, LOW);
  }
  if (millis() - TIEMPOACTUAL >= 2000 & ACTIVO) {
    for (j=0 ; j<=INDICE - 1 ; j=j+(1)) {
      digitalWrite(6, HIGH);
      tone(8,261,125);
      delay(125);
      digitalWrite(6, LOW);
      if (TIEMPOS[j + 1] != 0) {
        delay((TIEMPOS[j + 1] - TIEMPOS[j]));
      }
    }
    delay(1*1000);
    ACTIVO = LOW;
    TIEMPOACTUAL = millis();
  }
  if (!ACTIVO) {
    digitalWrite(3, LOW);
  } else {
    digitalWrite(3, HIGH);
  }

}
