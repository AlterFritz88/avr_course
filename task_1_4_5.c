#include <avr/io.h>

int main(void)
{
    DDRB = 0x00;
    DDRA = 0xFF;
    PORTA = 0x00;
    while(1)
    {
        if (PINB == 0x00){
            PORTA = 0x01;
        } else{
            PORTA = 0x00;
        }
    }
}
