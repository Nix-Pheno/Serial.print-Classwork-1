float r = 14;
float c = 0.0;
float pi = 3.14;
 
void setup() {
  Serial.begin(115200);
  
  c = 2*pi*r;
  
  Serial.print("Input radius (r) = ");
  Serial.println(r);
  Serial.print("Circumference (C) = ");
  Serial.println(c);
  Serial.println("---");
  Serial.println("Ready for next input:");
}
 
void loop() {
}
