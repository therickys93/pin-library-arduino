#include "Arduino.h"
#include "Pin.h"

Pin::Pin(int pin) {
	pinMode(pin, OUTPUT);
	_pin = pin;
}

void Pin::on() {
	digitalWrite(_pin, HIGH);
}

void Pin::off() {
	digitalWrite(_pin, LOW);
}

int Pin::status() {
	if(_pin >= 8) {
		return bitRead(PORTB, _pin - 8);
	} else {
		return bitRead(PORTD, _pin);
	}
}