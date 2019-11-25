const int LM35 = 0;
float temperatura = 0;
int ADClido = 0;
const int Buzzer = 12;
void setup(){
Serial.begin(9600);
analogReference(INTERNAL);
pinMode(Buzzer, OUTPUT);
}
void loop(){
ADClido = analogRead(LM35);
temperatura = ADClido * 0.1075268817204301;
Serial.print("Temperatura = ");
Serial.print(temperatura);
Serial.println(" *C");
delay(2000);
if(temperatura > 32){ 
delay(1000);
if(temperatura > 32){
tone(Buzzer, 2000);
}
}
else{
noTone(Buzzer);
}
}
