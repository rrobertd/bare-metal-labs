#include "Map.h"
#include "stm32f0xx.h"
#include "USART_module.h"

void setup(){

    // Need to config clocks here

    // using function from usart module
    usart_cnfg();

}

int main (){

    // To implement: a function which will send data in specified time intervals
    // Then implement a ISR to make a different message apear after a button was pressed 
    
    
}