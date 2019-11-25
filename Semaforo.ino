//sinal 1
const int LedVermelho1 = 13;
const int LedAmarelo1 = 12;
const int LedVerde1 = 11;

//sinal 2
const int LedVermelho2 = 10;
const int LedAmarelo2 = 9;
const int LedVerde2 = 8;

//Botões liga e desliga
const int Liga = 2;
const int Desliga = 4;

// Metodo Tempo
int getTempo(int tempo);
int SinalLigado();

void setup() {
  
pinMode(Liga, INPUT);
pinMode(Desliga, INPUT);

pinMode(LedVermelho1, OUTPUT);
pinMode(LedAmarelo1, OUTPUT);
pinMode(LedVerde1, OUTPUT);
pinMode(LedVermelho2, OUTPUT);
pinMode(LedAmarelo2, OUTPUT);
pinMode(LedVerde2, OUTPUT);

}

void loop() {
  start:
  if(digitalRead(Liga) == HIGH){
    while(1){
      if(SinalLigado() == 1){
        goto start;
      }
      }
  }
}

 int SinalLigado(){
//Ligando Sinais
int Fim = 0;
digitalWrite(LedVerde1, HIGH);
digitalWrite(LedVermelho2, HIGH);
if(getTempo (10000) == 1){
  return 1;
}
digitalWrite(LedVerde1, LOW);
digitalWrite(LedAmarelo1, HIGH);
if( getTempo (2000) ==1){
  return 1;
}
digitalWrite(LedAmarelo1, LOW);
digitalWrite(LedVermelho1, HIGH);
digitalWrite(LedVermelho2, LOW);
digitalWrite(LedVerde2, HIGH);
if (getTempo (6000) == 1){
   return 1;
}
digitalWrite(LedVerde2, LOW);
digitalWrite(LedAmarelo2, HIGH);
if (getTempo (2000) == 1)
  return 1;
  
digitalWrite(LedAmarelo2, LOW);
digitalWrite(LedVermelho1, LOW);
return Fim;
}
int getTempo(int tempo){
  long int Cron = millis();
  int Fim = 0;
  while(millis()-Cron < tempo){
    if(digitalRead(Desliga) == HIGH){
      digitalWrite(LedVerde1, LOW);
      digitalWrite(LedAmarelo1, LOW);
      digitalWrite(LedVermelho1, LOW);
      digitalWrite(LedVerde2, LOW);
      digitalWrite(LedAmarelo2, LOW);
      digitalWrite(LedVermelho2, LOW);
      Fim = 1;
      
      break;
    }
   
  }
  return Fim;
}


