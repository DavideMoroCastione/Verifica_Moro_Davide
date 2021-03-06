// variabili che mi servono per il tempo in cui restano accesi i led 
int temporosso;
int tempogiallo;
int tempobianco;
int tempoverde;

void setup() {
  // put your setup code here, to run once:

  // valori delle variabili
  temporosso = 0; 
  tempogiallo = 0;  
  tempobianco = 0; 
  tempoverde = 0; 
  
  pinMode(13, OUTPUT); //rosso
  pinMode(11, OUTPUT); //giallo
  pinMode(7, OUTPUT); //bianco
  pinMode(5, OUTPUT); //verde

  // i metodi per far funzionare il programma
  
  TempoRosso(); 
  TempoGiallo(); 
  TempoBianco(); 
  TempoVerde(); 

}


void loop() {
  // put your main code here, to run repeatedly:

  
  digitalWrite(13, HIGH);
  delay(temporosso * 1000);
  digitalWrite(13, LOW);
  digitalWrite(11, HIGH);
  delay(tempogiallo * 1000);
  digitalWrite(11, LOW);
  digitalWrite(7, HIGH);
  delay(tempobianco * 1000);
  digitalWrite(7, LOW);
  digitalWrite(5, HIGH);
  delay(tempoverde * 1000);
  digitalWrite(5, LOW);

}

// metodo per accendere il rosso
void TempoRosso() {

  Serial.begin(9600);
  
  Serial.print("Quanto resta acceso il rosso?"); 
  while(Serial.available() == 0) {};
  temporosso = Serial.readString().toInt();
}

// metodo per accendere il giallo
void TempoGiallo() {

  Serial.begin(9600);
  
  Serial.print("Quanto resta acceso il giallo?");
  while(Serial.available() == 0) {};
  tempogiallo = Serial.readString().toInt();
}

// metodo per accendere il bianco
void TempoBianco() {

  Serial.begin(9600);
  
  Serial.print("Quanto resta acceso il bianco?");
  while(Serial.available() == 0) {};
  tempobianco = Serial.readString().toInt();
}

// metodo per accendere il verde
void TempoVerde() {

  Serial.begin(9600);
  
  Serial.print("Quanto resta acceso il verde?");
  while(Serial.available() == 0) {};
  tempoverde = Serial.readString().toInt();
}

