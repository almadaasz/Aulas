// C++ code
//
const int botao1 = 3;
const int led1 = 5;
const int led2 = 6;
const int led3 = 7;
const int led4 = 8;
const int led5 = 9;
const int led6 = 10;
const int led7 = 11;
const int led8 = 12;
const int led9 = 13;
const int led10 = 4;
const int pot = 0;

int var = 0;

void setup()
{
 
  pinMode(botao1, INPUT); 
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT); 
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  Serial.begin(9600);
}

int valor1;


void loop()
{
  valor1 = digitalRead(botao1);
  if(valor1){
  var = analogRead(pot);
  Serial.println(var);
  
  if(var > 80){
  digitalWrite(led1,HIGH);
  }else{
  digitalWrite(led1, LOW);
  }
  if(var > 160){
  digitalWrite(led2,HIGH);
  }else{
  digitalWrite(led2, LOW);
  }
  if(var > 240){
  digitalWrite(led3,HIGH);
  }else{
  digitalWrite(led3, LOW);
  }
  if(var > 320){
  digitalWrite(led4,HIGH);
  }else{
  digitalWrite(led4, LOW);
  }
  if(var > 400){
  digitalWrite(led5,HIGH);
  }else{
  digitalWrite(led5, LOW);
  }
  if(var > 480){
  digitalWrite(led6,HIGH);
  }else{
  digitalWrite(led6, LOW);
  }
  if(var > 560){
  digitalWrite(led7,HIGH);
  }else{
  digitalWrite(led7, LOW);
  }
  if(var > 640){
  digitalWrite(led8,HIGH);
  }else{
  digitalWrite(led8, LOW);
  }
  if(var > 720){
  digitalWrite(led9,HIGH);
  }else{
  digitalWrite(led9, LOW);
  }
  if(var > 800){
  digitalWrite(led10,HIGH);
  }else{
  digitalWrite(led10, LOW);
  }
  }
}