void setup() {
  Serial.begin(38400);
  Serial.print('Q');
  Serial.println();
  Serial.println("I am Nano 4, VID: 1A86, PID: 7523");
}

void loop() {
  Serial.println("I am from COM11");
}
