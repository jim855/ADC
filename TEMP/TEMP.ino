#define x A0
int a;
void setup() {
  // put your setup code here, to run once:
pinMode (x,INPUT);
Serial.begin(9600);
}
void temper(int16_t adcvalue)
{
  double temp,t;
  double t0=298.15;
  int16_t r;
  int16_t r0=22805;
  int16_t b=3950;
  int16_t r2=9930;
  r=(adcvalue*r2)/(4096-adcvalue);
  t = 1 / (1/t0 + (log(r)-log(r0)) / b );
  temp=t-273.15;
  Serial.printf("ADC=%4d,R=%d,temp=%f\n",adcvalue,r,temp);
}

void loop() {
  // put your main code here, to run repeatedly:
  a = analogRead(x);
  temper(a);
  delay(500);
}
