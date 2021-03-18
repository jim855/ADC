#define x A0
#define y A3
int a=0;
int b=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(x,INPUT);
  pinMode(y,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly: 
a= analogRead(x);
b= analogRead(y);
Serial.printf("%d\n",a);
//Serial.printf("y=%d\n",b);
delay(100);
}
