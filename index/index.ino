//Olá, esse arquivo representa àquele velho teste qua fazemos ao iniciar-mos uma ferramenta nova(Pra gente :D)
int led = 13;

void setup(){
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  Serial.println("O led vai ficar piscando de 1 em 1 seg.");
  }
  void loop(){
    digitalWrite(led, HIGH);
    delay(1000);
    digitalWrite(led, LOW);
    delay(1000);
   }
