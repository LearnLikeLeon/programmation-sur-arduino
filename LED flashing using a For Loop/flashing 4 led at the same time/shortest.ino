// int feu_vert_de_signalisation;

// 12 feux de signalisation :
int feu_de_signalisation;

void setup() {
//   for (feu_vert_de_signalisation = 2; feu_vert_de_signalisation < 6; feu_vert_de_signalisation++) {
//     pinMode(feu_vert_de_signalisation, OUTPUT);
//   }

  for (feu_de_signalisation = 2; feu_de_signalisation < 14; feu_de_signalisation++) {
    pinMode(feu_de_signalisation, OUTPUT);
  }
}

void loop() {
//   for (feu_vert_de_signalisation = 2; feu_vert_de_signalisation < 6; feu_vert_de_signalisation++) {
//     digitalWrite(feu_vert_de_signalisation, HIGH); 
//   }

  for (feu_de_signalisation = 2; feu_de_signalisation < 14; feu_de_signalisation++) {
    digitalWrite(feu_de_signalisation, OUTPUT);
  }
  delay(1000);
}
