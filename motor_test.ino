// 1. Motor için tanımlar
#define M1K1  2 
#define M1K2  4
#define M1E  3 
// 2. Motor için tanımlar
#define M2K1  5 
#define M2K2  7
#define M2E  6 
void setup() {
  pinMode(M1K1,OUTPUT);
  pinMode(M1K2,OUTPUT);
  pinMode(M1E,OUTPUT);
  pinMode(M2K1,OUTPUT);
  pinMode(M2K2,OUTPUT);
  pinMode(M2E,OUTPUT);

}

void loop() {
digitalWrite(M1K1,HIGH);
digitalWrite(M1K2,LOW);
analogWrite(M1E,55);
digitalWrite(M2K1,HIGH);
digitalWrite(M2K2,LOW);
analogWrite(M2E,55);
}
