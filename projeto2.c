void setup() {
    pinMode(5, OUTPUT);  // Configura o pino 5 como saída (LED)
}

void loop() {
    // Pisca o LED 3 vezes com intervalo de 1 segundo ligado e 0,5 segundo desligado
    digitalWrite(5, HIGH); // Liga o LED
    delay(1000); // Espera 1 segundo
    digitalWrite(5, LOW); // Desliga o LED
    delay(500); // Espera 0,5 segundo

    digitalWrite(5, HIGH);
    delay(1000);
    digitalWrite(5, LOW);
    delay(500);

    digitalWrite(5, HIGH);
    delay(1000);
    digitalWrite(5, LOW);
    delay(500);

    // Pisca o LED 3 vezes com intervalo de 2,5 segundos ligado e 0,7 segundo desligado
    digitalWrite(5, HIGH); // Liga o LED
    delay(2500); // Espera 2,5 segundo
    digitalWrite(5, LOW); // Desliga o LED
    delay(700); // Espera 0,7 segundo

    digitalWrite(5, HIGH);
    delay(2500);
    digitalWrite(5, LOW);
    delay(700);

    digitalWrite(5, HIGH);
    delay(2500);
    digitalWrite(5, LOW);
    delay(700);
}

// O código faz um LED piscar em um padrão de SOS (· · · — — — · · ·).
// Primeiro, no setup(), o LED é configurado para ser controlado pelo Arduino.
// No loop(), o LED pisca três vezes rapidamente, acendendo por 1 segundo e apagando por 0,5 segundo a cada piscada.
// Em seguida, o LED pisca três vezes de forma mais longa, acendendo por 2,5 segundos e apagando por 0,7 segundo entre cada piscada.
