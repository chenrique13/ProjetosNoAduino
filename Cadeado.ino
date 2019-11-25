#include <IRremote.h>

int RECV_PIN = 5;

const int LedVermelho = 7;
const int LedVerde = 6;

void dispSenha();
void ErroSenha();

const long unsigned bot_0 = 0xC2E200FF;
const long unsigned bot_1 = 0xC2E2807F;
const long unsigned bot_2 = 0xC2E240BF;
const long unsigned bot_3 = 0xC2E2C03F;
const long unsigned bot_4 = 0xC2E220DF;
const long unsigned bot_5 = 0xC2E2A05F;
const long unsigned bot_6 = 0xC2E2609F;
const long unsigned bot_7 = 0xC2E2E01F;
const long unsigned bot_8 = 0xC2E210EF;
const long unsigned bot_9 = 0xC2E2906F;
const long unsigned bot_enter = 0xC2E208F7;
const long unsigned bot_reset = 0xC2E2F40B;

unsigned long a[] = {0x00000000, 0x00000000, 0x00000000, 0x00000000};
unsigned long b[] = {bot_1, bot_3, bot_1, bot_3};

int i=0;

IRrecv irrecv(RECV_PIN);

decode_results results;

void setup(){
  
  digitalWrite(LedVermelho, HIGH);
  pinMode(LedVermelho, OUTPUT);
  pinMode(LedVerde, OUTPUT);
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  Serial.print("Iniciando: ");
  Serial.println(a[0], HEX);
}

void loop() {
  if (irrecv.decode(&results)) {
    
    Serial.print("Recebendo: ");
    Serial.println(results.value, HEX);
    if(results.value != 0xFFFFFFFF){
      a[i] = (results.value);
    }
    if(results.value == bot_enter){
      if(a[0] == b[0] && a[1] == b[1] && a[2] == b[2] && a[3] == b[3]){
        digitalWrite(LedVerde, HIGH);
        digitalWrite(LedVermelho, LOW);
      }
      else{
        a[0] = 0x00000000;
        a[1] = 0x00000000;
        a[2] = 0x00000000;
        a[3] = 0x00000000;
        ErroSenha();
        }
    }
    
    irrecv.resume();
    i++;
    dispSenha();
  }

  delay(1000);
}

void dispSenha(){
  Serial.print("Senha: ");
  Serial.print(a[0], HEX);
  Serial.print(", ");
  Serial.print(a[1], HEX);
  Serial.print(", ");
  Serial.print(a[2], HEX);
  Serial.print(", ");
  Serial.print(a[3], HEX);
  Serial.println();
}

void ErroSenha(){
             digitalWrite(LedVermelho, HIGH);
             delay(500);
             digitalWrite(LedVermelho, LOW);
             delay(500);
             digitalWrite(LedVermelho, HIGH);
             delay(500);
             digitalWrite(LedVermelho, LOW);
             delay(500);
             digitalWrite(LedVermelho, HIGH);
             delay(500);
             digitalWrite(LedVermelho, LOW);
             delay(500);
             digitalWrite(LedVermelho, HIGH);
             delay(500);
             digitalWrite(LedVermelho, LOW);
             delay(500);
             digitalWrite(LedVermelho, HIGH);
             delay(500);
             digitalWrite(LedVermelho, LOW);
             delay(500);
             digitalWrite(LedVermelho, HIGH);
             delay(500);
             digitalWrite(LedVermelho, LOW);
             delay(500);
             digitalWrite(LedVermelho, HIGH);
             delay(500);
             digitalWrite(LedVermelho, LOW);
             delay(500);
             digitalWrite(LedVermelho, HIGH);
             delay(500);
             digitalWrite(LedVermelho, LOW);
             delay(500);
             digitalWrite(LedVermelho, HIGH);
             delay(500);
             digitalWrite(LedVermelho, LOW);
             delay(500);
             digitalWrite(LedVermelho, HIGH);
             delay(500);
             digitalWrite(LedVermelho, LOW);
             delay(500);
             digitalWrite(LedVermelho, HIGH);
             delay(500);
             digitalWrite(LedVermelho, LOW);
             delay(500);
             digitalWrite(LedVermelho, HIGH);
             delay(500);
             digitalWrite(LedVermelho, LOW);
             delay(500);
             digitalWrite(LedVermelho, HIGH);
             delay(500);
             digitalWrite(LedVermelho, LOW);
             delay(500);
             digitalWrite(LedVermelho, HIGH);
             delay(500);
             digitalWrite(LedVermelho, LOW);
             delay(500);
             digitalWrite(LedVermelho, HIGH);
             delay(500);
             digitalWrite(LedVermelho, LOW);
             delay(500);
             digitalWrite(LedVermelho, HIGH);
             delay(500);
             digitalWrite(LedVermelho, LOW);
             delay(500);
             digitalWrite(LedVermelho, HIGH);
             delay(500);
             digitalWrite(LedVermelho, LOW);
             delay(500);
             digitalWrite(LedVermelho, HIGH);
             delay(500);
             digitalWrite(LedVermelho, LOW);
             delay(500);
             digitalWrite(LedVermelho, HIGH);
             delay(500);
             digitalWrite(LedVermelho, LOW);
             delay(500);
             digitalWrite(LedVermelho, HIGH);
             delay(500);
             digitalWrite(LedVermelho, LOW);
             delay(500);
             digitalWrite(LedVermelho, HIGH);
             delay(500);
             digitalWrite(LedVermelho, LOW);
             delay(500);
             digitalWrite(LedVermelho, HIGH);
             delay(500);
             digitalWrite(LedVermelho, LOW);
             delay(500);
             digitalWrite(LedVermelho, HIGH);
             delay(500);
             digitalWrite(LedVermelho, LOW);
             delay(500);
             digitalWrite(LedVermelho, HIGH);
             delay(500);
             digitalWrite(LedVermelho, LOW);
             delay(500);
             digitalWrite(LedVermelho, HIGH);
             delay(500);
             digitalWrite(LedVermelho, HIGH);
             delay(500);
             digitalWrite(LedVermelho, LOW);
             delay(500);
             digitalWrite(LedVermelho, HIGH);
             delay(500);
             digitalWrite(LedVermelho, LOW);
             delay(500);
             digitalWrite(LedVermelho, HIGH);
             delay(500);
             digitalWrite(LedVermelho, LOW);
             delay(500);
             digitalWrite(LedVermelho, HIGH);
             delay(500);
             digitalWrite(LedVermelho, LOW);
             delay(500);
             digitalWrite(LedVermelho, HIGH);
             delay(500);
             digitalWrite(LedVermelho, LOW);
             delay(500);
             digitalWrite(LedVermelho, HIGH);
             delay(500);
             digitalWrite(LedVermelho, LOW);
             delay(500);
             digitalWrite(LedVermelho, HIGH);
}

