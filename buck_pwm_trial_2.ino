int B;
float Z;
float valo;
float C;
float val;
//const float D = 15.0;
float G; // voltage difference between desired and output
int H; // gain
int I = 20; //initial pwm
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(9, OUTPUT); // PB1 duty cycle output
  pinMode(A1, INPUT); // PC1 voltage output see
}
void loop() {
  C = analogRead(A1);//0-75 volt output getting
  val = map(C, 0, 1023, 0.0, 75.0);
  Z = analogRead(A2);
  valo = map(Z, 0, 1023, 0.0, 60.0);
  Serial.print("Required Voltage : ");
  Serial.println(valo);
  Serial.println();
  Serial.print("Output Voltage   : ");
  Serial.println(val);
  Serial.println();
  G = valo - val;
  //Serial.print("Difference : ");
  //Serial.println(G);
  H = G;
  //Serial.print("Pwm increase: ");
  //Serial.println(H);
  I = I + H;
  //Serial.print("Final Pwm : ");
  //Serial.println(I);
  analogWrite(9, I);
  delay(5);
}
