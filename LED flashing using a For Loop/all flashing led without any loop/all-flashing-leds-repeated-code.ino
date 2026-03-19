/*

  Example : Nous allons utiliser Arduino pour faire le jeu de 
  lumière qui va flasher pendant quelque secondes en suivant un rythm donné ( That is the pattern ).

    Les taches à faire ( Video de CPUT_Lesson 02 à 00 : 28 min : 59 Sec ):

        - Please connect LEDs from Pin 2 until Pin 13 ( protected with a 200 Ohms resistor to the Ground ) and turn each of them ON and OFF simultaneously.

		    - Simulate this task on TinkerCad 

		    - Build it on the BreadBoard and your code available in the Arduino Microcontroller.

*/

/*
  le code ci-dessous est malgré son bon fonctionnement est une mauvaise manière de coder.

      NB : En programmation, nous devons toujours eviter la repétition de nos lignes de code.

      - Raison pour laquelle le professeur vous dira :

         - Moins de 6 points à l'elève chaque fois que tu ecriras analogwrite() instruction à l'examen : 6% deduction per analogwrite() instruction
         - Moins de 3 points à l'elève chaque fois que tu ecriras digitalWrite() instruction à l'examen : 3% deduction per digitalWrite() instruction

    Rappel : Toujours laisser l'ordinateur faire les comptes ou répetitions automatique pour vous en utilisans des ' for () {} ' Loop function

*/


// On definit le Output Pin - number : qui est juste la borne de connection sur le Board pour le signal de sortie :

int premier_feu_vert_de_signalisation = 2;
int second_feu_vert_de_signalisation = 3;
int troisième_feu_vert_de_signalisation = 4;
int quatrième_feu_vert_de_signalisation = 5;

int premier_feu_jaune_de_signalisation = 6;
int second_feu_jaune_de_signalisation = 7;
int troisième_feu_jaune_de_signalisation = 8;
int quatrième_feu_jaune_de_signalisation = 9;

int premier_feu_rouge_de_signalisation = 10;
int second_feu_rouge_de_signalisation = 11;
int troisième_feu_rouge_de_signalisation = 12;
int quatrième_feu_rouge_de_signalisation = 13;


// The setup routine runs once when you press reset :
void setup() {
  // put your setup code here, to run once:


  // Initialize the digital pin as an output :

  pinMode(premier_feu_vert_de_signalisation, OUTPUT);
  pinMode(second_feu_vert_de_signalisation, OUTPUT);
  pinMode(troisième_feu_vert_de_signalisation, OUTPUT);
  pinMode(quatrième_feu_vert_de_signalisation, OUTPUT);

  pinMode(premier_feu_jaune_de_signalisation, OUTPUT);
  pinMode(second_feu_jaune_de_signalisation, OUTPUT);
  pinMode(troisième_feu_jaune_de_signalisation, OUTPUT);
  pinMode(quatrième_feu_jaune_de_signalisation, OUTPUT);

  pinMode(premier_feu_rouge_de_signalisation, OUTPUT);
  pinMode(second_feu_rouge_de_signalisation, OUTPUT);
  pinMode(troisième_feu_rouge_de_signalisation, OUTPUT);
  pinMode(quatrième_feu_rouge_de_signalisation, OUTPUT);

}

void loop() {

  // Assumons que nous voulons allumer toutes nos luimères de couleur verte ensemble :

  digitalWrite(premier_feu_vert_de_signalisation, HIGH);  // Fais que le feu_vert_de_signalisation soit allumé
  digitalWrite(second_feu_vert_de_signalisation, HIGH); 
  digitalWrite(troisième_feu_vert_de_signalisation, HIGH); 
  digitalWrite(quatrième_feu_vert_de_signalisation, HIGH); 
  delay(1000); // Tu patientes pour 1 seconde qui vaut 1000 millisecondes


  // Assumons que nous voulons allumer toutes nos luimères de couleur jaune ensemble :

  digitalWrite(premier_feu_jaune_de_signalisation, HIGH);  // Fais que le feu_vert_de_signalisation soit allumé
  digitalWrite(second_feu_jaune_de_signalisation, HIGH); 
  digitalWrite(troisième_feu_jaune_de_signalisation, HIGH); 
  digitalWrite(quatrième_feu_jaune_de_signalisation, HIGH); 
  delay(1000); // Tu patientes pour 1 seconde qui vaut 1000 millisecondes


  // Assumons que nous voulons allumer toutes nos luimères de couleur rouge ensemble :

  digitalWrite(premier_feu_rouge_de_signalisation, HIGH);  // Fais que le feu_vert_de_signalisation soit allumé
  digitalWrite(second_feu_rouge_de_signalisation, HIGH); 
  digitalWrite(troisième_feu_rouge_de_signalisation, HIGH); 
  digitalWrite(quatrième_feu_rouge_de_signalisation, HIGH); 
  delay(1000); // Tu patientes pour 1 seconde qui vaut 1000 millisecondes

  
}
