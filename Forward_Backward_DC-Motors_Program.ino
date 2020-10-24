const int EnableL = 5;
const int HighL = 6;     //Left side Motors
const int LowL = 7;

const int EnableR = 10;
const int HighR = 9;     //Right side Motors
const int LowR = 8;


void setup() {
  pinMode(5, OUTPUT);    //EnableL 
  pinMode(6, OUTPUT);    //HighL               //Left side Motors
  pinMode(7, OUTPUT);    //LowL

  pinMode(10, OUTPUT);   //EnableR
  pinMode(9, OUTPUT);    //HighR               //Right side Motors?
  pinMode(8, OUTPUT);    //LowR
}
void Forward() {
  digitalWrite(6,LOW);   //HighL
  digitalWrite(7,HIGH);  //LowL                //Left side Motors
  analogWrite(5,255);    //EnableL

  digitalWrite(9,LOW);   //HighR
  digitalWrite(8,HIGH);    //LowR                //Right side Motors
  analogWrite(10,255);    //EnableR
}
void Backward() {
  digitalWrite(6,HIGH);   //HighL
  digitalWrite(7,LOW);    //LowL                //Left side Motors
  analogWrite(5,255);     //EnableL

  digitalWrite(9,HIGH);   //HighR
  digitalWrite(8,LOW);    //LowR                //Right side Motors
  analogWrite(10,255);    //EnableR
}
void loop() {
   Forward();
 }
