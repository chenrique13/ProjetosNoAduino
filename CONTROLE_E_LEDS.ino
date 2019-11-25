//verde E0E028D7
//amarelo E0E0A857
//vermelho E0E036C9
//azul E0E06897

#include <IRremote.h>

int RECV_PIN = 12;

const int LED0 = 8;
const int LED1 = 9;
const int LED2 = 10;
const int LED3 = 11;

int flag0 = 0;
int flag1 = 0;
int flag2 = 0;
int flag3 = 0;

IRrecv irrecv(RECV_PIN);

decode_results results;

void setup()
{
  Serial.begin(9600);
  
  pinMode(LED0, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  
  irrecv.enableIRIn(); // Start the receiver
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);
  //led1 + botao 1
    if(results.value == 0xE0E028D7){
      if(flag0 == 0){
      flag0 = 1;
        
      }else{ 
        flag0 = 0;
      }
    }

digitalWrite(LED0,flag0);

 //led2 + botao 2
    if(results.value == 0xE0E0A857){
      if(flag1 == 0){
      flag1 = 1;
        
      }else{ 
        flag1 = 0;
      }
    }

digitalWrite(LED1,flag1);

 //led3 + botao 3
    if(results.value == 0xE0E036C9){
      if(flag2 == 0){
      flag2 = 1;
        
      }else{ 
        flag2 = 0;
      }
    }

digitalWrite(LED2,flag2);

 //led4 + botao 4
    if(results.value == 0xE0E06897){
      if(flag3 == 0){
      flag3 = 1;
        
      }else{ 
        flag3 = 0;
      }
    }

digitalWrite(LED3,flag3);

    irrecv.resume(); // Receive the next value
  }
  delay(100);
}
