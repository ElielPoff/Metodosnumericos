void setup() {
    pinMode(11, OUTPUT); // Configura o pino 11 como saída (LED Vermelho)
    pinMode(9, OUTPUT);  // Configura o pino 9 como saída (LED Amarelo)
    pinMode(6, OUTPUT);  // Configura o pino 6 como saída (LED Verde)
}

void loop(){
    // Liga o LED do pino 11 por 3 segundos e depois apaga
    digitalWrite(11, HIGH); // Acende o LED Vermelho 
    delay(3000);            // Mantém aceso por 3 segundos
    digitalWrite(11, LOW);  // Apaga o LED Vermelho
    delay(100);             // Aguarda 100 ms antes do próximo LED

    // Liga o LED do pino 9 por 1 segundo e depois apaga
    digitalWrite(9, HIGH); // Acende o LED Amarelo
    delay(1000);           // Mantém aceso por 1 segundo
    digitalWrite(9, LOW);  // Apaga o LED 2
    delay(100);            // Aguarda 100 ms antes do próximo LED

    // Liga o LED do pino 6 por 3 segundos e depois apaga
    digitalWrite(6, HIGH); // Acende o LED Verde
    delay(3000);           // Mantém aceso por 3 segundos
    digitalWrite(6, LOW);  // Apaga o LED Verde
    delay(100);            // Aguarda 100 ms antes de reiniciar o ciclo
}

// O código simula um semáforo controlado pelo Arduino.
// Primeiro, no setup(), os três LEDs (vermelho, amarelo e verde) são configurados para serem controlados pelo Arduino.
// No loop(), o LED vermelho acende e permanece ligado por 3 segundos, depois apaga.
// Em seguida, o LED amarelo acende por 1 segundo e apaga. Por fim, o LED verde acende por 3 segundos e apaga.
