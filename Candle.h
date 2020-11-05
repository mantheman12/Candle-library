#ifndef CANDLE_H
#define CANDLE_H 
#include <Arduino.h>

class Candle{
	public:
		Candle(int pin1,int pin2);
		void begin(void);
		void run(void);
	private:
		int pin1;
		int pin2;
		int rand(void);
		int sub(void);
		int minimum(void);
		int ranf(void);
		bool comp(int a, int b);
		void pace(void);
		void del(int a);
		void opposite_LED(int c, int a);
};
#endif