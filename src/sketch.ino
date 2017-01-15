#include <Pin.h>

Pin redPin(13);

void setup() {}

void loop() {
	redPin.on();
	delay(175);
	redPin.off();
	delay(175);
}
