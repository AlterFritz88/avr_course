#include <avr/io.h>

int main(void)
{
    DDRB = 0x00;
    DDRA = 0x00;
    DDRC = 0xFF;
    PORTC = 0x00;
    while(1)
    {
        PORTC = PINA | PINB;

    }
}