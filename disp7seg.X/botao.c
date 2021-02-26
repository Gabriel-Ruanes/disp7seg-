/*
 * File:   botao.c
 * Author: Gabriel Ruanes Melquiades
 *
 * Created on 26 de Fevereiro de 2021, 14:33
 */


#include <xc.h>

#define SOMA    PORTDbits.RD3
#define SUBTRAI PORTDbits.RD2


void botao_init ( void )
{
    TRISDbits.TRISD2 = 1;
    TRISDbits.TRISD3 = 1;
}

char b1 ( void )
{
    return( SOMA );
}

char b2 ( void )
{
    return ( SUBTRAI );
}