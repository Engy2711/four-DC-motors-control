int mPin1=13;
int mPin2=12;
int mPin3=11;
int mPin4=10;
int mPin5=5;
int mPin6=4;
int mPin7=3;
int mPin8=2;

void forwrd1(int a, int b){
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
}
void forwrd2(int c, int d){
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
}
void forwrd3(int e, int f){
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
}
void forwrd4(int g, int h){
  digitalWrite(g,HIGH);
  digitalWrite(h,LOW);
}
void backwrd1(int a, int b){
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
}
void backwrd2(int c, int d){
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
}
void backwrd3(int e, int f){
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
}
void backwrd4(int g, int h){
  digitalWrite(g,LOW);
  digitalWrite(h,HIGH);
}

void setup() {
  pinMode(mPin1,OUTPUT);
  pinMode(mPin2,OUTPUT);
  pinMode(mPin3,OUTPUT);
  pinMode(mPin4,OUTPUT);
  pinMode(mPin5,OUTPUT);
  pinMode(mPin6,OUTPUT);
  pinMode(mPin7,OUTPUT);
  pinMode(mPin8,OUTPUT);

}

void loop() {
  forwrd1(mPin1,mPin2);
  forwrd2(mPin3,mPin4);
  forwrd3(mPin5,mPin6);
  forwrd4(mPin7,mPin8);
  delay(4000);
  backwrd1(mPin1,mPin2);
  backwrd2(mPin3,mPin4);
  backwrd3(mPin5,mPin6);
  backwrd4(mPin7,mPin8);
  delay(4000);
}
