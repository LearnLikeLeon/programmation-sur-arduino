/*

  Example : Nous allons utiliser Arduino pour faire le jeu de 
  lumière qui va flasher pendant quelque secondes en suivant un rythm donné ( That is the pattern ).

    Les taches à faire ( Video de CPUT_Lesson 02 à 00 : 28 min : 59 Sec ):

        - Please connect LEDs from Pin 2 until Pin 13 ( protected with a 200 Ohms resistor to the Ground ) and turn each of them ON and OFF simultaneously.

		    - Simulate this task on TinkerCad 

		    - Build it on the BreadBoard and your code available in the Arduino Microcontroller.

*/

/*
  le code ci-dessous est malgré son bon fonctionnement est une bonne manière de coder.

      NB : En programmation, nous devons toujours eviter la repétition de nos lignes de code.

      - Raison pour laquelle le professeur vous dira :

         - Moins de 6 points à l'elève chaque fois que tu ecriras analogwrite() instruction à l'examen : 6% deduction per analogwrite() instruction
         - Moins de 3 points à l'elève chaque fois que tu ecriras digitalWrite() instruction à l'examen : 3% deduction per digitalWrite() instruction

    Rappel : Toujours laisser l'ordinateur faire les comptes ou répetitions automatique pour vous en utilisans des ' for () {} ' Loop function

*/

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
