/*
===============================================================================
 Name        : main.c
 Author      : $(author)
 Version     :
 Copyright   : $(copyright)
 Description : main definition
===============================================================================
*/

#if defined (__USE_LPCOPEN)
#if defined(NO_BOARD_LIB)
#include "chip.h"
#else
#include "board.h"
#endif
#endif

#include <cr_section_macros.h>
#include <vector>
using namespace std;
// TODO: insert other include files here

// TODO: insert other definitions and declarations here

typedef struct LED_struct
{
    unsigned long int duration;
    bool statr;
    bool statb;
    bool statg;

}led_t;

void delay(unsigned long int del)
{
unsigned long int i=0;
while((i++)<del);
return;
}

int main(void) {

#if defined (__USE_LPCOPEN)
    // Read clock settings and update SystemCoreClock variable
    SystemCoreClockUpdate();
#if !defined(NO_BOARD_LIB)
    // Set up and initialize all required blocks and
    // functions related to the board hardware
    Board_Init();
    // Set the LED to the state of "Off"
    Board_LED_Set(0, false);
    Board_LED_Set(1, false);
    Board_LED_Set(2, false);
#endif
#endif

    // TODO: insert code here
     vector<led_t> sequenceLed;
     unsigned long int loadarr_time[]={1200000,5600000,4278000,9056000,26790000,13450000,67800000};
     bool loadarr_statr[]={true,false,true,false,true,false,true};
     bool loadarr_statg[]={true,true,false,true,false,false,true};
     bool loadarr_statb[]={false,true,true,false,false,true,true};
     for(signed short int i=0;i<7;i++)
     {
         led_t temp;
         temp.duration=loadarr_time[i];
         temp.statr=loadarr_statr[i];
     temp.statb=loadarr_statb[i];
     temp.statg=loadarr_statg[i];
         sequenceLed.push_back(temp);
     }
    // Enter an infinite loop, just incrementing a counter
    while(1) {
        for(vector<led_t>:: iterator iter = sequenceLed.begin();iter!=sequenceLed.end();iter++){
        Board_LED_Set(0, iter->statr);
    Board_LED_Set(1, iter->statb);
    Board_LED_Set(2, iter->statg);
        delay(iter->duration);
        }
    }
    return 0 ;
}
