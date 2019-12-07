 int a=0;
int aa=0;
int z=0;
int c=0;
int y=0;
int a2=0;
int num=0;
int num1=0;
int a1=0;
int value=1;
int value1=1;
int tk=0;
int sh=5;

const int A=A5;
const int B=A4;
const int C=A3;
const int D=A2;

const int AA1 = 13;
const int cB1 = A1;
const int C1 = A0;
const int D1 = 12;

const int redM = 1;
const int yellowM = 2;
const int greenM = 4;

const int red = 11;
const int yellow = 9;
const int green = 10;

const int TX2 = 6;
const int TX1 = 5;

const int TX = 7;
const int RX = 8;
const int RX1 = 0;
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

pinMode(redM, OUTPUT);
pinMode(yellowM, OUTPUT);
pinMode(greenM, OUTPUT);

pinMode(red, OUTPUT);
pinMode(yellow, OUTPUT);
pinMode(green, OUTPUT);

pinMode(RX, INPUT);
pinMode(RX1, INPUT);
pinMode(TX, OUTPUT);
pinMode(TX2, OUTPUT);
pinMode(TX1, OUTPUT);


pinMode(alert, INPUT);

digitalWrite(RX, HIGH);
digitalWrite(TX1, HIGH);
digitalWrite(TX, HIGH);
digitalWrite(TX2, HIGH);

digitalWrite(A, LOW);
digitalWrite(B, LOW);
digitalWrite(C, LOW);
digitalWrite(D, LOW);
digitalWrite(AA1, LOW);
digitalWrite(cB1, LOW);
digitalWrite(C1, LOW);
digitalWrite(D1, LOW);

digitalWrite(red, HIGH);
digitalWrite(redM, HIGH);
delay(2000);
digitalWrite(yellow, HIGH);
digitalWrite(yellowM, HIGH);
delay(2000);
digitalWrite(green, HIGH);
digitalWrite(greenM, HIGH);
delay(2000);
digitalWrite(red, LOW);
digitalWrite(yellow, LOW);
digitalWrite(green, LOW);

digitalWrite(redM, LOW);
digitalWrite(yellowM, LOW);
digitalWrite(greenM, LOW);
}



void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(TX1, LOW);
delay(300);
tk=20;
uchex();

digitalWrite(TX, LOW);
delay(1000);
digitalWrite(TX, HIGH);
//-----------------------------------
int kk=0;
while (kk==0){
  value = digitalRead(RX);
  value1 = digitalRead(RX1);
if (value==0)
{
  sh=1;
  kk=1;
}

 if (value1==0)
{
  sh=0;
  kk=1;
} 
}


if (sh==0){
digitalWrite(TX2, LOW);
delay(300);
tk=15;
uchex();
}

uche();
//----------------------------
}// loop end

void uchex(){
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    num=0;
    num1=0;
    z=0; 
    digitalWrite(TX1, HIGH);
    digitalWrite(TX2, HIGH);
    runx();
    z=0;
  }

  
  void uche()
  {
    digitalWrite(red, LOW);
    digitalWrite(redM, LOW);
    digitalWrite(green, HIGH);
    digitalWrite(greenM, HIGH);
    a2=0; // to scan for presence of cars in run ()
    c=0;
    num=0;
    num1=0;
    y=0;
    z=0; 
     run();
    z=0;   
 }



 void run()
 
{
  int x=0;
  num1=0;
  num = 2;
  int ppt=0;
   z=0;
  while (x==0){
   adx: if(c==0)// to read digital input
    a1=digitalRead(alert);

    digitalWrite(A, bitRead(num1,0));
    digitalWrite(B, bitRead(num1,1));
    digitalWrite(C, bitRead(num1,2));
    digitalWrite(D, bitRead(num1,3));

    digitalWrite(AA1, bitRead(num,0));
    digitalWrite(cB1, bitRead(num,1));
    digitalWrite(C1, bitRead(num,2));
    digitalWrite(D1, bitRead(num,3));

    delay(1000);

     if(ppt==0){
      num=1;
      num1=9;
      ppt=1;
      z=z+1;
      goto adx;
    }
    
    
    z=z+1;
    num1=num1-1;
    if(z==10)
    {
      num = 0;
      num1 = 9;
    }

    if(z==14)
    {
      digitalWrite(green, LOW);
       digitalWrite(greenM, LOW);
      delay(50);
      digitalWrite(yellow, HIGH);
      digitalWrite(yellowM, HIGH);
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
      digitalWrite(yellowM, LOW);
      delay(50);
      digitalWrite(red, HIGH);
       digitalWrite(redM, HIGH);
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

 digitalWrite(green, LOW);
 digitalWrite(greenM, LOW);
 delay(50);
 digitalWrite(red, HIGH);
  digitalWrite(redM, HIGH);
          }// y==4
      
      }//if a1=1
      
    }//if a2=0;

    else
    {
      a2=1;
      c=1;
    }
    
  }//while x=0
}//run

void runx()
{
   if(tk==15){
       num1=5;
       num = 1;
   }

   if(tk==20){
       num1=0;
       num = 2;
   }
  
  int x=0;
  int pp=0;
   z=0;
  while (x==0){
ads:
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
if (tk==15){
  num1=4;
}

if (tk==20){
  num1=9;
}
      num=1;
      pp=1;
      z=z+1;
      goto ads;
    }

    
    z=z+1;
    num1=num1-1;


    if(tk==20){
      if(z==10)
    {
      num1 = 9;
      num = 0;
    }

    }

    if(tk==15){
      if(z==5)
    {
      num1 = 9;
      num = 0;
    }

    }
    
    if(z==(tk-6))
    {
      digitalWrite(green, LOW);
      delay(50);
      digitalWrite(yellow, HIGH);
    }

    if (z==tk)
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
  }//while x=0
}//run
