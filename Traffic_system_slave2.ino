int a=0;
int aa=0;
int z=0;
int c=0;
int y=0;
int a2=0;
int num=0;
int num1=0;
int a1=0;
int c1=0;

const int A=13;
const int B=A2;
const int C=A1;
const int D=A0;

const int AA1=9;
const int cB1=12;
const int C1=11;
const int D1=10;

const int red = 6;
const int yellow = 7;
const int green = 8;
const int TX = 4;
const int TX1 = 1;
const int RX = 5;
const int alert = 3;

void setup() {
  // put your setup code here, to run once:
pinMode(A, OUTPUT);
pinMode(B, OUTPUT);
pinMode(C, OUTPUT);
pinMode(D, OUTPUT);
pinMode(AA1, OUTPUT);
pinMode(cB1, OUTPUT);
pinMode(C1, OUTPUT);
pinMode(D1, OUTPUT);

pinMode(red, OUTPUT);
pinMode(yellow, OUTPUT);
pinMode(green, OUTPUT);
pinMode(TX, OUTPUT);
pinMode(TX1, OUTPUT);

pinMode(alert, INPUT);
pinMode(RX, INPUT);

digitalWrite(RX, HIGH);
digitalWrite(TX, HIGH);
digitalWrite(TX1, HIGH);

digitalWrite(A, LOW);
digitalWrite(B, LOW);
digitalWrite(C, LOW);
digitalWrite(D, LOW);
digitalWrite(AA1, LOW);
digitalWrite(cB1, LOW);
digitalWrite(C1, LOW);
digitalWrite(D1, LOW);

digitalWrite(red, HIGH);
delay(1000);
digitalWrite(yellow, HIGH);
delay(1000);
digitalWrite(green, HIGH);
delay(1000);
digitalWrite(red, LOW);
digitalWrite(yellow, LOW);
digitalWrite(green, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
a=digitalRead(RX);
if(a==0){
uche();
if (c1==1){
digitalWrite(TX, LOW);
delay(1000);
digitalWrite(TX, HIGH);
}
if (c1==2){
digitalWrite(TX1, LOW);
delay(1000);
digitalWrite(TX1, HIGH);
}

}

}// loop end

void uche(){
  if(aa==0)
  {
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    num=0;
    num1=0;
    c=1;// to read presence of car
    a2=1;
    run();
    aa=1;// to enter else
    z=0;
  }

  else{
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    //delay(100);
    //digitalWrite(red, HIGH);
    //delay(100);
    //digitalWrite(red, LOW);
    a2=0; // to scan for presence of cars in run ()
    c=0;
    num=0;
    num1=0;
    y=0;
     run();
    z=0;   
  }
}// uche

void run(){
  int x=0;
  num=0;
  num1 = 2;
   int pp=0;
   z=0;
  while (x==0){
ads:
   if(c==0)// to read digital input
    a1 = digitalRead(alert);

    digitalWrite(A, bitRead(num1,0));
    digitalWrite(B, bitRead(num1,1));
    digitalWrite(C, bitRead(num1,2));
    digitalWrite(D, bitRead(num1,3));

    digitalWrite(AA1, bitRead(num,0));
    digitalWrite(cB1, bitRead(num,1));
    digitalWrite(C1, bitRead(num,2));
    digitalWrite(D1, bitRead(num,3));

    delay(1000);
    if(pp==0){
      num=9;
      num1=1;
      pp=1;
      z=z+1;
      goto ads;
    }

    
    z=z+1;
    num=num-1;
    if(z==10)
    {
      num = 9;
      num1 = 0;
    }

    if(z==(14))
    {
      digitalWrite(green, LOW);
      delay(50);
      digitalWrite(yellow, HIGH);
    }

    if (z==20)
    {
digitalWrite(A, LOW);
digitalWrite(B, LOW);
digitalWrite(C, LOW);
digitalWrite(D, LOW);
digitalWrite(AA1, LOW);
digitalWrite(cB1, LOW);
digitalWrite(C1, LOW);
digitalWrite(D1, LOW);
      
      digitalWrite(yellow, LOW);
      delay(50);
      digitalWrite(red, HIGH);
      x=1;
      z=0;
    }
    


     if(a1==1){
      if(a2==0){
          y=y+1;
          if(y==4)
          {
            x=1;

digitalWrite(A, LOW);
digitalWrite(B, LOW);
digitalWrite(C, LOW);
digitalWrite(D, LOW);
digitalWrite(AA1, LOW);
digitalWrite(cB1, LOW);
digitalWrite(C1, LOW);
digitalWrite(D1, LOW);
c1=2;
 digitalWrite(green, LOW);
      delay(50);
      digitalWrite(red, HIGH);
          }// y==4
      
      }//if a1=1
      
    }//if a2=0;

    else
    {
      a2=1;
      c=1;
      c1=1;
    }
    
  }//while x=0
}//run
