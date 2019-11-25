const int LDR = 0;
const int Led = 3;
int Intensidade = 0;

void setup() {
 Serial.begin(9600); 
 pinMode(Led, OUTPUT);
}
void loop() {
 Intensidade = analogRead(LDR);
 Serial.print("Intensidade do Sensor LDR = ");
 Serial.print(Intensidade);
 Serial.println(" cd");
 delay(2000);
 
 if (Intensidade < 100){
 digitalWrite(Led, HIGH);
 }
 else{
 digitalWrite(Led, LOW);

 }


} 
