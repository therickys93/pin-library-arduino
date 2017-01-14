#include <Pin.h>

Pin redPin(13);

void setup() {}

void loop() {
	redPin.on();
	delay(1000);
	redPin.off();
	delay(1000);
}