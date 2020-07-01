// Motor A
const int A=9;
const int AA=8;
// Motor B
const int B=5;
const int BB=4;

void setup(){
// Set all pins to the outputs 
  pinMode(A, OUTPUT);
  pinMode(AA, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(BB, OUTPUT);
  
// Initial state
  
}

void loop()
{
  digitalWrite(A, HIGH);
  digitalWrite(AA, LOW);
  digitalWrite(B, LOW);
  digitalWrite(BB, HIGH);
  
  /*delay(5000);
  
  digitalWrite(AA, HIGH);
  digitalWrite(A, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(B, HIGH);
  delay(5000);*/
}