#define SaCNY A1 
#define SoCNY A0

void setup() {
  pinMode(SaCNY,INPUT);
  pinMode(SoCNY,INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(SaCNY));

}
