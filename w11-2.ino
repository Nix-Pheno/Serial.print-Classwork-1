float thb = 100.0;
float usd;
float rate = 0.03;
 
void setup() {
  Serial.begin(115200);
  
  usd = thb*rate;
  
  Serial.print("THB = ");
  Serial.println(thb);
  Serial.print("USD = ");
  Serial.println(usd);
}
 
void loop() {
}
