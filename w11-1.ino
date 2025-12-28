void setup() {
  Serial.begin(115200);
  while (!Serial);
}
 
void loop() {
  int d=25;
  int m=11;
  int y=2009;
  int sum;
  
  delay(100);
 
  Serial.print(d);
  Serial.print("/");
  Serial.print(m);
  Serial.print("/");
  Serial.println(y);
 
  sum = d + m + y;
 
  Serial.print("Sigma: ");
  Serial.println(sum);
  delay(5000);
}
