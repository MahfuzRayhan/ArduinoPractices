 int irPin = 22;
  int d1 = A1;
  int d2 = A2;
  int d3 = A3;
  int d4 = A4;
  int d5 = A5;
  int d6 = A6;
  int d7 = A7;
  int d8 = A8;
void setup() {
  Serial.begin(9600); 
    pinMode(irPin, OUTPUT);
    pinMode(d1, INPUT);
    pinMode(d2, INPUT);
    pinMode(d3, INPUT);
    pinMode(d4, INPUT);
    pinMode(d5, INPUT);
    pinMode(d6, INPUT);
    pinMode(d7, INPUT);
    pinMode(d8, INPUT);
}
void loop(){
  digitalWrite(irPin,HIGH);
  d1=analogRead (A1);
  d2=analogRead (A2);
 d3= analogRead (A3);
  d4=analogRead (A4);
  d5=analogRead (A5);
  d6=analogRead (A6);
  d7=analogRead (A7); 
  d8=analogRead (A8);
Serial.println(d8);
}
