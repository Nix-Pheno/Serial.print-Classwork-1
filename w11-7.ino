int i = 0;
 
void setup() {
  Serial.begin(9600);
  Serial.println("Starting count from 1 to 10...");
}
 
void loop() {
  for (i = 1; i <= 10; ++i) {
    Serial.println(i);
    delay(500); // Wait for half a second between each number
  }
  // After counting to 10, stop the loop from repeating unnecessarily
  // The 'while(true)' effectively pauses the program here
  Serial.println("Count complete.");
  while(true); 
}
