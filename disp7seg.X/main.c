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
#include "botao.h"

void main(void) 
{
    char cont = 0;
    display7seg_init();
    botao_init();
    
    while ( 1 )
    {
        display7seg(cont);        
        if ( b1() == 1 && ++cont >= 10 )
        {
            cont = 0;
        }
            while ( b1() == 1 )
                display7seg (cont);
        
        
        if ( b2() == 1 && --cont <= 0 )
        {
            cont = 9;
        }
    }
}
