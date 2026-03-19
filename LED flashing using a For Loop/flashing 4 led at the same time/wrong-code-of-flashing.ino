// On definit le Output Pin - number : qui est juste la borne de connection sur le Board pour le signal de sortie :

int premier_feu_vert_de_signalisation = 2;
int second_feu_vert_de_signalisation = 3;
int troisième_feu_vert_de_signalisation = 4;
int quatrième_feu_vert_de_signalisation = 5;


// The setup routine runs once when you press reset :
void setup() {
  // Initialize the digital pin as an output :

  pinMode(premier_feu_vert_de_signalisation, OUTPUT);
  pinMode(second_feu_vert_de_signalisation, OUTPUT);
  pinMode(troisième_feu_vert_de_signalisation, OUTPUT);
  pinMode(quatrième_feu_vert_de_signalisation, OUTPUT);

}

void loop() {

  // Assumons que nous voulons allumer toutes nos luimères de couleur verte ensemble :

  digitalWrite(premier_feu_vert_de_signalisation, HIGH);  // Fais que le feu_vert_de_signalisation soit allumé
  digitalWrite(second_feu_vert_de_signalisation, HIGH); 
  digitalWrite(troisième_feu_vert_de_signalisation, HIGH); 
  digitalWrite(quatrième_feu_vert_de_signalisation, HIGH); 
  delay(1000); // Tu patientes pour 1 seconde qui vaut 1000 millisecondes

}
