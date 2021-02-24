/*
 * File:   display.c
 * Author: Gabriel Ruanes Melquiades 
 *
 * Created on 24 de Fevereiro de 2021, 14:23
 */


#include <xc.h>


void display7seg_init (void) 
{
    TRISD = 0;
    PORTD = 0;
}

void display7seg ( c )
{
    PORTD = c;
}
