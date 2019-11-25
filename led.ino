int led0 = 2;
int led1 = 10;
int led2 = 11; 
void setup() {
  // put your setup code here, to run once:
pinMode(led0, OUTPUT);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led0,HIGH);
digitalWrite(led1,HIGH);
delay(500);
digitalWrite(led2,HIGH);
delay(500);
}
