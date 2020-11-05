#include "Candle.h"

void Candle::begin(void){
	pinMode(pin1, OUTPUT);
	pinMode(pin2, OUTPUT);
}
Candle::Candle(int pin1,int pin2){
	this -> pin1 = pin1;
	this -> pin2 = pin2;
}
bool Candle::comp(int a, int b){
	return a != b && a > b;
}
void Candle::del(int a){
	delay(a);
}
int Candle::minimum(void){
	return random(25,45);
}
void Candle::opposite_LED(int c, int a){
	int b = map(a,25,0xff,0,180);
	b = b * (PI/180);
	analogWrite(c,round(((sin(b)*-1)+1)*(0xff/2)));
}
void Candle::pace(void){
	del(random(200,1200));
}
int Candle::rand(void){
	int a = random(0,10);
	return map(a,0,10,25,0xff);
}
int Candle::ranf(void){
	return random(2,15);
}
void Candle::run(void){
	int f = ranf();
	for(int x = rand(); comp(x,minimum()); x-=sub()){
		analogWrite(pin1,x);
		opposite_LED(pin2,x);
		del(f);
	}
	pace();
}