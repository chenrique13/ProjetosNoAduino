//Declaração das variáveis referentes aos pinos digitais.

int pinSensorPIR = 8;
int pinLed = 3;
int pinLed2 = 4;
int pinLed3 = 5;

int valorSensorPIR = 0;
 
void setup() {
  Serial.begin(9600); //Inicializando o serial monitor
 
  //Definido pinos como de entrada ou de saída
  pinMode(pinSensorPIR,INPUT);
  pinMode(pinLed,OUTPUT);
  pinMode(pinLed2,OUTPUT);
  pinMode(pinLed3,OUTPUT);
  digitalWrite(pinLed, HIGH);
}
 
void loop() {  
  //Lendo o valor do sensor PIR. Este sensor pode assumir 2 valores
  //1 quando detecta algum movimento e 0 quando não detecta.
  valorSensorPIR = digitalRead(pinSensorPIR);
   
  Serial.print("Valor do Sensor PIR: ");  
  Serial.println(valorSensorPIR);
   
  //Verificando se ocorreu detecção de movimentos
  if (valorSensorPIR == 1) {
    ligarAlarme();
  } else {
    desligarAlarme();
  }    
}
 
void ligarAlarme() {
  //Ligando o led
  digitalWrite(pinLed2, HIGH);
  digitalWrite(pinLed3, HIGH);
  delay(3000);
  desligarAlarme();
}
 
void desligarAlarme() {
  //Desligando o led
  digitalWrite(pinLed2, LOW);
  digitalWrite(pinLed3, LOW);
   
}
