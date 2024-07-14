#define M1D 12  //Motor 1 derecha
#define M1I 7   //Motor 1 izquierda
#define M2D 8
#define M2I 9
#define EN1 11
#define EN2 10
int m1PWM = 200;
int m2PWM = 200;

void setup() {
  Serial.begin(9600);
  pinMode(M1D, OUTPUT);
  pinMode(M1I, OUTPUT);
  pinMode(M2D, OUTPUT);
  pinMode(M2I, OUTPUT);
  pinMode(EN1, OUTPUT);
  pinMode(EN2, OUTPUT);
  analogWrite(EN1, 255);
  analogWrite(EN2, 255);
}

void loop() {
  adelante();
  delay(2000);
 atras();
  delay(2000);
  izquierda();
  delay(2000);
  derecha();
  delay(2000);
  frenar();
  delay(2000);
  
}
void adelante() {
  digitalWrite(M1D, HIGH);
  digitalWrite(M1I, LOW);
  digitalWrite(M2D, LOW);
  digitalWrite(M2I, HIGH);
}
void atras() {
  digitalWrite(M1D, LOW);
  digitalWrite(M1I, HIGH);
  digitalWrite(M2D, HIGH);
  digitalWrite(M2I, LOW);
}
void izquierda() {
  digitalWrite(M1D, HIGH);
  digitalWrite(M1I, LOW);
  digitalWrite(M2D, HIGH);
  digitalWrite(M2I, LOW);
}
void derecha() {
  digitalWrite(M1D, LOW);
  digitalWrite(M1I, HIGH);
  digitalWrite(M2D, LOW);
  digitalWrite(M2I, HIGH);
}
void frenar() {
  digitalWrite(M1D, HIGH);
  digitalWrite(M1I, HIGH);
  digitalWrite(M2D, HIGH);
  digitalWrite(M2I, HIGH);
}
