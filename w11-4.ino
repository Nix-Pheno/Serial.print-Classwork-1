double v_i = 10.0;
double v_f = 5.0;
double t = 4.0;
double a;
 
void setup() {
  Serial.begin(115200);
  a = (v_f - v_i)/t;
  
  Serial.println("Acceleration Calculation:");
  Serial.print("Initial Velocity (v_i): ");
  Serial.print(v_i);
  Serial.println(" m/s");
  Serial.print("Final Velocity (v_f): ");
  Serial.print(v_f);
  Serial.println(" m/s");
  Serial.print("Time (t): ");
  Serial.print(t);
  Serial.println(" s");
  Serial.print("Acceleration (a): ");
  Serial.print(a, 2);
  Serial.println(" m/s^2");
}
 
void loop() {
}
