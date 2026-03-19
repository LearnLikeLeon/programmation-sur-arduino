/*

  Example : Nous allons utiliser Arduino pour faire le jeu de 
  lumière qui va flasher pendant 1 seconde.

    Les taches à faire :

        - Connect your Arduino Uno programming board to yopur laptop.

        - Select or configure your board type .

        -  Select or configure the serial device of the adruino board from the serial port of your computer.

        - Upload your code or sketch to the Arduino Board and see the result on a Breadboard.

*/


// On definit le Output Pin - number : qui est juste la borne de connection sur le Board pour le signal de sortie :

int feu_rouge_de_signalisation = 13;

// The setup routine runs once when you press reset :
void setup() {
  // put your setup code here, to run once:


  // Initialize the digital pin as an output :

  // pinMode(13, OUTPUT);
  
  pinMode(feu_rouge_de_signalisation, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(feu_rouge_de_signalisation, HIGH);  // Fais que le feu_rouge_de_signalisation soit allumé
  delay(1000); // Tu patientes pour 1 seconde qui vaut 1000 millisecondes

  digitalWrite(feu_rouge_de_signalisation, LOW);  // Fais que le feu_rouge_de_signalisation soit eteint
  delay(1000);// Tu patientes pour 1 seconde qui vaut 1000 millisecondes


}
