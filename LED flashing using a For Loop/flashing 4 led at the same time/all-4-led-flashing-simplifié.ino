/*
    Remarques :

      - On definit le Output Pin - number : qui est juste la borne de connection sur le Arduino Board pour le signal de sortie 

      - On designe un interval de bornes de sortie pour les jeux de lumières de couleure verte ( sorties allant de Pin 2 jusqu'à Pin 5 ) en 
      utilisant une ' for (feu_vert_de_signalisation = 2; feu_vert_de_signalisation < 6; feu_vert_de_signalisation++) {} ' Loop.

*/
// On definit le Output Pin - number : qui est juste la borne de connection sur le Board pour le signal de sortie :

int feu_vert_de_signalisation;



// The setup routine runs once when you press reset :
void setup() {

  // On designe et initialise un interval de bornes de sortie pour les jeux de lumières de couleure verte ( sorties allant de Pin 2 jusqu'à Pin 5 ) 
  // Initialize the digital pin 2, pin 3 , pin 4 and pin 5 as an output :

  for (feu_vert_de_signalisation = 2; feu_vert_de_signalisation < 6; feu_vert_de_signalisation++) {
    pinMode(feu_vert_de_signalisation, OUTPUT);
  }

}

void loop() {

  // Assumons que nous voulons allumer toutes nos luimères de couleur verte ensemble :

  for (feu_vert_de_signalisation = 2; feu_vert_de_signalisation < 6; feu_vert_de_signalisation++) {
    digitalWrite(feu_vert_de_signalisation, HIGH);  // Fais que le feu_vert_de_signalisation soit allumé
  }

  delay(1000); // Tu patientes pour 1 seconde qui vaut 1000 millisecondes

  
}
