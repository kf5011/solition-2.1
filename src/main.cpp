#include <mbed.h>

DigitalOut   red(LED_RED,1);
DigitalOut green(LED_GREEN,1);
DigitalOut  blue(LED_BLUE,1);

InterruptIn  a(SW2); /* bottom board switches */
InterruptIn  b(SW3);

InterruptIn up(A2);
InterruptIn down(A3);
InterruptIn left(A4);
InterruptIn right(A5);
InterruptIn centre(D4);

void on(void)
{
    DigitalIn  sw1(SW2); /* bottom board switches */
    DigitalIn  sw2(SW3);

    DigitalIn up(A2);
    DigitalIn down(A3);
    DigitalIn left(A4);
    DigitalIn right(A5);
    DigitalIn centre(D4);

    red.write(0);
    printf("\nrising 0->1\n");
    printf("Sw1:%d \t\t Sw2:%d\n", sw1.read(), sw2.read());
    printf("\tup:%d\n",up.read());
    printf("left:%d\tcenter:%d\tright:%d\n",left.read(),centre.read(),right.read());
    printf("\tdown:%d\n",down.read());
    printf("----\n");
}
void off(void)
{
    DigitalIn  sw1(SW2); /* bottom board switches */
    DigitalIn  sw2(SW3);
    DigitalIn up(A2);
    DigitalIn down(A3);
    DigitalIn left(A4);
    DigitalIn right(A5);
    DigitalIn centre(D4);

    red.write(1);
    printf("\nfalling 1->0\n");
    printf("Sw1:%d \t\t Sw2:%d\n", sw1.read(), sw2.read());
    printf("\tup:%d\n",up.read());
    printf("left:%d\tcenter:%d\tright:%d\n",left.read(),centre.read(),right.read());
    printf("\tdown:%d\n",down.read());
    printf("----\n");
}



int main() {
    InterruptIn  a(SW2); /* bottom board switches */
    InterruptIn  b(SW3);

    InterruptIn up(A2);
    InterruptIn down(A3);
    InterruptIn left(A4);
    InterruptIn right(A5);
    InterruptIn centre(D4);

    a.rise(on);
    b.rise(on);

    up.rise(on);
    left.rise(on);
    centre.rise(on);
    right.rise(on);
    down.rise(on);

    a.fall(off);
    b.fall(off);

    up.fall(off);
    left.fall(off);
    centre.fall(off);
    right.fall(off);
    down.fall(off);

    printf("ready!\n\n");
    while(1) {
        /* GNDN */
    }
}
