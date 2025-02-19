void setup() {
    pinMode(5, OUTPUT);  // Configura o pino 5 como saída (LED)
}

void loop() {
    digitalWrite(5, HIGH); // Liga o LED (coloca em nível alto)
    delay(3000); // Espera 3 segundo

    digitalWrite(5, LOW); // Desliga o LED (coloca em nível baixo)
    delay(3000); // Espera 3 segundo
}

// O código faz um LED piscar a cada 3 segundos de forma contínua.
// Primeiro, no setup(), o LED é configurado para ser controlado pelo Arduino.
// No loop(), o LED acende (HIGH), fica ligado por 3 segundos, depois apaga (LOW) e permanece apagado por mais 3 segundos.
