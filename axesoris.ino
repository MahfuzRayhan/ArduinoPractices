#define blueFootSwitch 5
#define brownFootSwitch 6
#define orangeModeSwitch 8
#define ankleBluePot A1
#define kneeRedPot A5

int toeState; 
int heelState;
int modeIndicator;
int kneeState; 
int ankleState;

void setup() {
  Serial.begin(38400);
  pinMode(blueFootSwitch, INPUT);
  pinMode(brownFootSwitch, INPUT);
  pinMode(orangeModeSwitch, INPUT);
  pinMode(ankleBluePot, INPUT);
  pinMode(kneeRedPot, INPUT);
}

void loop() {
  toeState = digitalRead(brownFootSwitch);
  heelState = digitalRead(blueFootSwitch);
  kneeState = analogRead(kneeRedPot);
  ankleState = analogRead(ankleBluePot);
  modeIndicator = digitalRead(orangeModeSwitch);

  Serial.print("A: <"); Serial.print(" ");
  Serial.print(heelState); Serial.print(" ");
  Serial.print(toeState); Serial.print(" ");
  Serial.print(kneeState); Serial.print(" ");
  Serial.print(ankleState); Serial.print(" ");
  Serial.print(modeIndicator); Serial.println(">");
}
