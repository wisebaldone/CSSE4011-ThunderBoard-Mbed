#include "mbed.h"
#include "RGBS.h"

DigitalOut RGB1enable(PI0);
DigitalOut RGB2enable(PI1);
DigitalOut RGB3enable(PI2);
DigitalOut RGB4enable(PI3);
DigitalOut RGBPowerEnable(PJ14);

PwmOut redpin(PD11);
PwmOut bluepin(PD13);
PwmOut greenpin(PD12);

namespace rgbs {

void enable() {
	RGBPowerEnable = 1;
	redpin.period(0.0005);
	bluepin.period(0.0005);
	greenpin.period(0.0005);
}

void disable() {
	RGBPowerEnable = 0;
}

void led_enable(int enables) {
	RGB1enable = !!(enables & 0b0001);
	RGB2enable = !!(enables & 0b0010);
	RGB3enable = !!(enables & 0b0100);
	RGB4enable = !!(enables & 0b1000);
}

/**
 * Change the state of the LED 1.
 */
void led1_enable(bool enabled) {
	RGB1enable = enabled;
}

/**
 * Change the state of the LED 2.
 */
void led2_enable(bool enabled) {
	RGB2enable = LED2;
}

/**
 * Change the state of the LED 3.
 */
void led3_enable(bool enabled) {
	RGB3enable = LED3;
}

/**
 * Change the state of the LED 4.
 */
void led4_enable(bool enabled) {
	RGB4enable = LED4;
}

/**
 * Set
 * 
 * Sets the rgb value of the rgb led's.
 */
void set(int red, int green, int blue) {
	redpin = red;
	bluepin = blue;
	greenpin = green;
}

}// NAMESPACE rgbs