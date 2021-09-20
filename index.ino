int potpin=A0;
int led=9;
void setup() {
 
Serial.begin(9600);
pinMode(led,OUTPUT);
}
void loop() {
 int deger=analogRead(potpin);
 analogWrite(led,deger/4);
 Serial.println(deger);
}