const int 

int a=0; 
float current = 0;
float previous = 0;
float t;

void setup() {
  pinMode(A1, INPUT); 
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  a = analogRead(A1);
  if (a<500){
    current = millis();
    t = current - previous;
    previous = current;
    delay(100);
  }

  Serial.print("a = "); 
  Serial.println(a);
  Serial.print("time:");
  Serial.println(t/1000); 

}
