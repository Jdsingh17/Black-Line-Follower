
int m11=7,m12=6,m21=5,m22=4;
void setup() {
 pinMode(8,INPUT);
 pinMode(9,INPUT);
 pinMode(10,INPUT);
 pinMode(11,INPUT);
 pinMode(12,INPUT);
 pinMode(7,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(4,OUTPUT);
 }
void forward()
{
  digitalWrite(m11,HIGH);
  digitalWrite(m12,LOW);
  digitalWrite(m21,HIGH);
  digitalWrite(m22,LOW);
  delay(25);
  stp();
}
void back()
{
  digitalWrite(m11,LOW);
  digitalWrite(m12,HIGH);
  digitalWrite(m21,LOW);
  digitalWrite(m22,HIGH);
  delay(50);
  stp();
}
void left()
{
  digitalWrite(m11,LOW);
  digitalWrite(m12,HIGH);
  digitalWrite(m21,HIGH);
  digitalWrite(m22,LOW);
  delay(200);
  stp();
}
void right()
{
  digitalWrite(m11,HIGH);
  digitalWrite(m12,LOW);
  digitalWrite(m21,LOW);
  digitalWrite(m22,HIGH);
  delay(200);
  stp();
}
void stp()
{
  digitalWrite(m11,LOW);
  digitalWrite(m12,LOW);
  digitalWrite(m21,LOW);
  digitalWrite(m22,LOW);
  
}
 
void loop() 
{
int ir1,ir2,ir3,ir4,ir5;
ir1=digitalRead(8);
ir2=digitalRead(9);
ir3=digitalRead(10);
ir4=digitalRead(11);
ir5=digitalRead(12);
if(ir1==0 || ir2==0 || ir3==1 || ir4==0 || ir5==0)
{
  forward();
}
else if(ir1==0 || ir2==1 || ir3==1 || ir4==0 || ir5==0)
{
  forward();
}
else if(ir1==0 || ir2==0 || ir3==1 || ir4==1 || ir5==0)
{
  forward();
}
else if(ir1==0 || ir2==0 || ir3==0 || ir4==1 || ir5==1)
{
  left();
}
else if(ir1==1 || ir2==1 || ir3==0 || ir4==0 || ir5==0)
{
  right();
}
else if(ir1==1 || ir2==0 || ir3==0 || ir4==0 || ir5==0)
{
  right();
}
else if(ir1==0 || ir2==0 || ir3==0 || ir4==0 || ir5==1)
{
  left();
}
else(ir1==0 || ir2==0 || ir3==0 || ir4==0 || ir5==0);
{
  stp();
}
}
