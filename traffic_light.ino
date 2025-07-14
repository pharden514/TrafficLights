// C++ code
#define red 12
#define yellow 11
#define green 10
void setup(){
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop(){
  digitalWrite(green, HIGH);
  delay(30000);
  digitalWrite(green,LOW);
  digitalWrite(yellow, HIGH);
  delay(3000);
  digitalWrite(yellow,LOW);
  digitalWrite(red, HIGH);
  delay(27000);
  digitalWrite(red,LOW);
}
