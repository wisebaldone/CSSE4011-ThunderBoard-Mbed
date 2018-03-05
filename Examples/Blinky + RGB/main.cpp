#include "mbed.h"
#include "RGBS.h"

DigitalOut led1(LED4);

DigitalIn btn(BUTTON1);

// main() runs in its own thread in the OS
int main() {
	int count = 0;

	rgbs::enable();
	rgbs::init(0b1111);
	rgbs::set(0, 0, 7);
    
	while (true) {
    	if (count == 0) {
    		setLEDS(2, 0, 0);
    	} else if (count == 1) {
    		setLEDS(0, 2, 0);
    	} else if (count == 2) {
    		setLEDS(0, 0, 2);
    		count = 0;
    	}
    	count++; 
	    led1 = !led1;
	    wait(0.25);
    }
}
