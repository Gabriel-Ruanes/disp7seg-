/*
 * File:   main.c
 * Author: Gabriel Ruanes Melquiades 
 *
 * Created on 24 de Fevereiro de 2021, 14:04
 */


#include <xc.h>
#include "config.h"
#include "delay.h"
#include "display7seg.h"

void main(void) 
{
    int cont;
    display7seg_init();
    
    while ( 1 )
    {
        display7seg ( cont );
        delay ( 1000 );
         if ( ++cont >= 16 )
            cont = 0;
    }
}
