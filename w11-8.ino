int i = 1;
 
void setup() {
  Serial.begin(115200);
  Serial.println("Starting count from 1 to 10...");
}
 
void loop() {
  while (i <= 10) {
    Serial.println(i);
    i = i + 1; 
    delay(500);
  }
  Serial.println("Count complete.");
  while(true); 
}
