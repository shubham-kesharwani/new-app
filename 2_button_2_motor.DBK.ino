
char(x);
void setup() {
  
pinMode(0, OUTPUT);
pinMode(1,OUTPUT);
pinMode(8, OUTPUT);
pinMode(9,OUTPUT);
pinMode(13,INPUT);
pinMode(12,INPUT);
}
void loop()
{
x= digitalRead(12);

if(x==1){
 digitalWrite(0,1);
 digitalWrite(1,0);
}else {
 digitalWrite(0,0);
 digitalWrite(1,0);
 }
}

