
int temporosso;

void setup() {
  // put your setup code here, to run once:

  temporosso = 0;
  
  pinMode(13, OUTPUT); //rosso
  pinMode(11, OUTPUT); //giallo
  pinMode(7, OUTPUT); //bianco
  pinMode(5, OUTPUT); //verde

}


void loop() {
  // put your main code here, to run repeatedly:

}

void TempoRosso() {

  Serial.begin(9600);
  Serial.print("Quanto resta acceso il rosso?");
  while(Serial.available() == 0) {};
  temporosso = Serial.readString().toInt();
}

void TempoGiallo() {

  Serial.begin(9600);
}

