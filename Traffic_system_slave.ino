int a=0;
int aa=0;
int z=0;
int c=0;
int y=0;
int a2=0;
int num=0;
int num1=0;
int a1=0;
int tk=0;

int A=A2;
const int B=A4;
const int C=A5;
const int D=A3;

const int AA1=10;
const int cB1=12;
const int C1=13;
const int D1=11;

const int red = 3;
const int yellow = 6;
const int green = 5;
const int RX = 8;
const int RX1 = 7;

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

pinMode(RX, INPUT);
pinMode(RX1, INPUT);

digitalWrite(RX, HIGH);
digitalWrite(RX1, HIGH);

digitalWrite(A, LOW);
digitalWrite(B, LOW);
digitalWrite(C, LOW);
digitalWrite(D, LOW);
digitalWrite(AA1, LOW);
digitalWrite(cB1, LOW);
digitalWrite(C1, LOW);
digitalWrite(D1, LOW);

digitalWrite(red, HIGH);
delay(100);
digitalWrite(yellow, HIGH);
delay(100);
digitalWrite(green, HIGH);
delay(100);
digitalWrite(red, LOW);
digitalWrite(yellow, LOW);
digitalWrite(green, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
a=digitalRead(RX);
a1=digitalRead(RX1);
if(a==0){
tk=20;
uche();
}

if(a1==0){
  tk=15;
uche();
}
}// loop end

void uche(){
 
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    num=0;
    num1=0;
    z=0;
    run();
  }

void run(){
  int x=0;
  while (x==0){

    digitalWrite(A, bitRead(num1,0));
    digitalWrite(B, bitRead(num1,1));
    digitalWrite(C, bitRead(num1,2));
    digitalWrite(D, bitRead(num1,3));

    digitalWrite(AA1, bitRead(num,0));
    digitalWrite(cB1, bitRead(num,1));
    digitalWrite(C1, bitRead(num,2));
    digitalWrite(D1, bitRead(num,3));

    delay(1000);
    z=z+1;
    num=num+1;
    if(z==10)
    {
      num = 0;
      num1 = 1;
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
