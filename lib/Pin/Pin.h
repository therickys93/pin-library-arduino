#ifndef Pin_H
#define Pin_H
#include "Arduino.h"

class Pin {
public:
	Pin(int pin);
	void on();
	void off();
	int status();
private:
	int _pin;
};

#endif