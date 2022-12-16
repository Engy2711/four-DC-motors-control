int mPin1=13;
int mPin2=12;
int mPin3=11;
int mPin4=10;
int mPin5=5;
int mPin6=4;
int mPin7=3;
int mPin8=2;

void forwrd1(int a, int b,int c, int d,int e, int f,int g, int h){
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  digitalWrite(h,LOW);
}

void backwrd1(int a, int b,int c, int d,int e, int f,int g, int h){
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);  
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
  forwrd1(mPin1,mPin2,mPin3,mPin4,mPin5,mPin6,mPin7,mPin8);
  delay(4000);
  backwrd1(mPin1,mPin2,mPin3,mPin4,mPin5,mPin6,mPin7,mPin8);
  delay(4000);
}
