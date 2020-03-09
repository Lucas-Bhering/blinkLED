/*
 * File:   main.c
 * Author: 19180063
 *
 * Created on 2 de Março de 2020, 09:56
 */


#include <xc.h>

#include  "config.h"

void main(void) 
{
    PORTDbits.RD0 = 0;
    PORTDbits.RD1 = 0;
    
     TRISDbits. TRISD0 = 0 ;
     TRISDbits. TRISD1 = 0 ;
     TRISDbits. TRISD3 = 1 ;
     TRISDbits. TRISD2 = 1 ;
    while(1)
    {
       
        
        if( PORTDbits.RD3 == 1 )
          
        {
            PORTDbits.RD0 = 1;
            
            
        }
        else
            
        {
            PORTDbits.RD0 = 0;
           
        }  
        if( PORTDbits.RD2 == 1 )
          
        {
            PORTDbits.RD1 = 1;
            
            
        }
        else
            
        {
            PORTDbits.RD1 = 0;
           
        }    
                   
    }
}
