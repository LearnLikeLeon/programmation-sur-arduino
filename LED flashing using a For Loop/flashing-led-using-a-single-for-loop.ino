/*

  Example : Nous allons utiliser Arduino pour faire le jeu de 
  lumière qui va flasher pendant quelque secondes en suivant un rythm donné ( That is the pattern ).

    Les taches à faire :

        - We will use some different code to make the LED display a message in Morse code. 
	      - In this case, we are going to get the LED to signal the letters S.O.S., which is the international Morse code distress signal. 
	      - Morse code is a type of character encoding that transmits letters and numbers using patterns of on and off. 
	      - It is therefore nicely suited to our digital system as we can turn an LED on and off in the necessary pattern to spell out a word or a series of characters.

 	      - In this case we will be signaling S.O.S., which in the Morse code alphabet is three dits (short flashes), followed by three dahs (long flashes), followed by three dits again.
	      - We can therefore now code our sketch to flash the LED on and off in this pattern, signaling SOS

*/


// On definit le Output Pin - number : qui est juste la borne de connection sur le Board pour le signal de sortie :

int feu_rouge_de_signalisation = 13;

// On definit la variable qui comptera le nombre de flash du LED ' flashCount' : 

int flashCount;


// The setup routine runs once when you press reset :
void setup() {
  // put your setup code here, to run once:


  // Initialize the digital pin as an output :

  // pinMode(13, OUTPUT);
  
  pinMode(feu_rouge_de_signalisation, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  // Nous voulons que notre jeu de lumière brille pendant 3 sequences et puis s'éteint pour une longue durée :

  for(flashCount = 0; flashCount < 3; flashCount++){

    digitalWrite(feu_rouge_de_signalisation, HIGH);  // Fais que le feu_rouge_de_signalisation soit allumé
    delay(1000); // Tu patientes pour 1 seconde qui vaut 1000 millisecondes

    digitalWrite(feu_rouge_de_signalisation, LOW);  // Fais que le feu_rouge_de_signalisation soit eteint
    delay(1000);// Tu patientes pour 1 seconde qui vaut 1000 millisecondes
  }

  // A la fin de cette séquence de 3 allumages va en mode éteint pour 20 Secondes avant de recommencer la nouvelle serie de 3 séquences :
  // Car tout le code contenu dans la partie ' void loop () {} ' roule et roule en se repétant.
  
  delay(20000);// Tu patientes pour 20 secondes = 20000 millisecondes

  
}
