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

void init_leds(bool LED1, bool LED2, bool LED3, bool LED4) {
	RGBPowerEnable = 1;
	RGB1enable = LED1;
	RGB2enable = LED2;
	RGB3enable = LED3;
	RGB4enable = LED4;
	redpin.period(0.0005);
	bluepin.period(0.0005);
	greenpin.period(0.0005);
}

void setLEDS(int red, int green, int blue) {
	redpin = red;
	bluepin = blue;
	greenpin = green;
}


// void BOARD_rgbledSetRawColor(uint16_t red, uint16_t green, uint16_t blue)
// {
//   if ( (red == 0) && (green == 0) && (blue == 0) ) {
//     timerEnable = false;
//     TIMER_Enable(pwmTimer, timerEnable);
//     TIMER_CompareBufSet(pwmTimer, 0, 0);
//     TIMER_CompareBufSet(pwmTimer, 1, 0);
//     TIMER_CompareBufSet(pwmTimer, 2, 0);
//      Ensure LED pins are disabled before changing ROUTE 
//     BOARD_ledSet(0);
//     pwmTimer->ROUTEPEN  = 0;
//   } else {
//     timerEnable = true;
//     TIMER_Enable(pwmTimer, timerEnable);
//     TIMER_CompareBufSet(pwmTimer, 0, red);
//     TIMER_CompareBufSet(pwmTimer, 1, green);
//     TIMER_CompareBufSet(pwmTimer, 2, blue);
//     pwmTimer->ROUTEPEN  = TIMER_ROUTEPEN_CC0PEN | TIMER_ROUTEPEN_CC1PEN | TIMER_ROUTEPEN_CC2PEN;
//   }

//   return;
// }