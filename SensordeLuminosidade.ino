#include<EEPROM.h>

const int LDR = 0;
const int Led = 3;
int ValorLido = 0;
int pwm = 0;
int i = 0;

byte valor;

void setup() {
 pinMode(Led, OUTPUT);
 Serial.begin(9600);
}
void loop() {
 ValorLido = analogRead(LDR);
  i++;
 Serial.print(i);
 Serial.print(" ");
 Serial.print("Valor lido pelo LDR = ");
 Serial.println(ValorLido);
 delay(500);

 if (ValorLido < 750){
 analogWrite(Led, pwm);
 pwm++;
 delay(100);
 }
 else{
 digitalWrite(Led, LOW);
 pwm = 0;
 }

 if(pwm > 255){
 pwm=255;
 }
} 
 
