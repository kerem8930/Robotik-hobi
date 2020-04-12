// 1. Motor için tanımlar
#define M1K1  5 
#define M1K2  7
#define M1E  6 
// 2. Motor için tanımlar
#define M2K1  2 
#define M2K2  4
#define M2E  3 
// CNY70 için tanımlar
#define SaCNY A1 
#define SoCNY A0
// CNy70 için değerler
int SaCNYdeg ;
int SoCNYdeg ;
void setup() {
  // Motorlar için çıkışlar
  pinMode(M1K1, OUTPUT);
  pinMode(M1K2,OUTPUT);
  pinMode(M1E,OUTPUT);
  pinMode(M2K1,OUTPUT);
  pinMode(M2K2,OUTPUT);
  pinMode(M2E,OUTPUT);
  // CNY 70 içiin girişler
  pinMode(SaCNY,INPUT);
  pinMode(SoCNY,INPUT);
  // Serial monitör
  Serial.begin(9600);
}
void loop() {
SaCNYdeg = analogRead(SaCNY);
SoCNYdeg = analogRead(SoCNY);
if(SaCNYdeg < 190 ){
digitalWrite(M1K1,HIGH);
digitalWrite(M1K2,LOW);
analogWrite(M1E,75);
digitalWrite(M2K1,HIGH);
digitalWrite(M2K2,LOW);
analogWrite(M2E,5);
delay(50);
}
if(SoCNYdeg < 190 ){
digitalWrite(M1K1,HIGH);
digitalWrite(M1K2,LOW);
analogWrite(M1E,5);
digitalWrite(M2K1,HIGH);
digitalWrite(M2K2,LOW);
analogWrite(M2E,75);
delay(50);
}
else {
digitalWrite(M1K1,HIGH);
digitalWrite(M1K2,LOW);
analogWrite(M1E,82);
digitalWrite(M2K1,HIGH);
digitalWrite(M2K2,LOW);
analogWrite(M2E,82);
}

}
