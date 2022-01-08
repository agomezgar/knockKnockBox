# Knockknockbox Español

Un rediseño (un homenaje, si lo prefieres) de la mítica #KnockKnockBox con la que hemos jugado en tantos centros educativos gracias a los talleres Verkstadt de David Cuartielles
<p align="center">
<img src="./IMAGENES/IMG20220108172201.jpg" width="640" height="480" />
</p>

## Lista de materiales
*Impresos en 3D*

| Pieza | Imagen |
| --- | --- |
| Suelo | <img src="./IMAGENES/suelo.png"> |
| Falso Techo | <img src="./IMAGENES/falsoTecho.png"> |
| Paredes frontal y trasera (tendrás que imprimir dos veces) | <img src="./IMAGENES/frontalyTrasera.png"> |
| Pared lateral derecha, o pared lateral activa (llamada así porque aloja el interruptor del portapilas) | <img src="./IMAGENES/lateralActiva.png"> |
| Pared lateral izquierda, o pared lateral inerte (en contraposición a la denominación de activa) | <img src="./IMAGENES/lateralInerte.png"> |
| Soporte del servomotor SG-90 | <img src="./IMAGENES/soporteServo.png"> |
| Tapa | <img src="./IMAGENES/tapa.png"> |
| Pasador (pequeños fijadores). Tendrás que imprimir 8| <img src="./IMAGENES/pasador.png"> |

*Electrónica (vitaminas)

| Pieza | Imagen |
| --- | --- |
| Arduino UNO o Arduino Nano con su correspondiente shield | <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/e/ec/Arduino-uno-perspective-whitw.jpg/640px-Arduino-uno-perspective-whitw.jpg" width="300"> |
| Servomotor de posición SG-90 o similar| <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/e/e8/Servo_Motor.jpg/581px-Servo_Motor.jpg" width="300"> |
| 2 piezoeléctricos pequeños (las piezas están equipadas para dos grandes o para dos pequeños) | <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/9/95/Electromagnetic_buzzer_03.jpg/640px-Electromagnetic_buzzer_03.jpg" width="300"> |
| (Alternativa) 2 piezoeléctricos grandes (las piezas están equipadas para dos grandes o para dos pequeños) | <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/7/7e/Design_1_To_attach_the_arduino%2C_Piezo_Speaker_and_resistor..jpg/640px-Design_1_To_attach_the_arduino%2C_Piezo_Speaker_and_resistor..jpg" width="300"> |
| (Recomendable) 1 resistencia de 1 megaohmio o similar para proteger al piezo que hará de sensor de golpes | <img src="https://upload.wikimedia.org/wikipedia/commons/a/a6/1_megaohm_5%25_axial_resistor.jpg" width="300"> |
| 1 diodo RGB de 5 mm (uno normal también vale, pero te dará menos juego, claro) | <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/f/f1/RGB_LED.jpg/640px-RGB_LED.jpg" width="300"> |

## Instrucciones de montaje

| Imagen | Descripción |
| --- | --- |
| <img src="./IMAGENES/montaje1.png" width="600"> | Inserta la Arduino en el suelo de la caja y atornilla el servomotor SG-90 a su soporte. A continuación, encaja dicho soporte en el suelo con el eje del servo apuntando a la pared trasera. Coloca las paredes frontal y trasera tal y como se ve en el dibujo. |

## Principio de funcionamiento

Para jugar con la **Knockknockbox** sólo hay que golpearla. El sensor de vibraciones del dispositivo detectará las vibraciones, y de acuerdo a su programa, raaccionará abriendo o cerrando la caja, activando los colores del diodo RGB, o emitiendo sonidos a través del otro piezoeléctrico (***NOTA PARA FRIKIS: Sí, claro que podríamos utilizar un único piezoeléctrico para que realizara las dos funciones, pero eso implica un mayor grado de dificultad para el aficionado medio, además de que de momento su programación con el IDE MasayloBlockly no sería posible con esta configuración... ¡No seas tacaño y gasta dos buzzer!***
## English

A redesign of the mytic #KnockKnockBox of the Verstakdt project by David Cuartielles
