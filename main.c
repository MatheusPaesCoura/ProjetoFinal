#include <pic18f4520.h>
#include "config.h"
#include "bits.h"
#include "lcd.h"
#include "keypad.h"
#include "io.h"
#include "ssd.h"
#include "pwm.h"



#define CLR 0x01

void main(void) {

    unsigned int tecla = 16;
    int linha, coluna;
    float aux = 0;
    unsigned char led[8] = {0b00000001, 0b00000011, 0b00000111, 0b00001111, 0b00011111, 0b00111111, 0b01111111, 0b11111111};
    int j;
    unsigned int i;
    int a;
    float b;
    int m;
    int c;


    TRISD = 0x00;
    PORTD = 0x00;

    ssdInit();
    lcdInit();
    pwmInit();

    lcdData('E');
    lcdData('L');
    lcdData('E');
    lcdData('I');
    lcdData('C');
    lcdData('O');
    lcdData('E');
    lcdData('S');


    lcdCommand(0x90);

    lcdData('P');
    lcdData('a');
    lcdData('r');
    lcdData('a');
    lcdData(' ');
    lcdData('C');
    lcdData('o');
    lcdData('n');
    lcdData('t');
    lcdData('i');
    lcdData('n');
    lcdData('u');
    lcdData('a');
    lcdData('r');

    lcdCommand(0xD0);

    lcdData('P');
    lcdData('r');
    lcdData('e');
    lcdData('s');
    lcdData('s');
    lcdData('i');
    lcdData('o');
    lcdData('n');
    lcdData('e');
    lcdData(' ');
    lcdData('*');



    for (;;) {
        kpInit();




        ssdDigit(0, 2);
        ssdDigit(0, 3);
        ssdUpdate();
        kpDebounce();



        if (kpRead() != tecla) {
            tecla = kpRead();


            if (bitTst(tecla, 0)) {
                for (linha = 0; linha < 5; linha++) {
                    for (coluna = 0; coluna < 16; coluna++) {
                        lcdData(CLR);
                    }
                }

                lcdCommand(0x80);
                lcdData('V');
                lcdData('o');
                lcdData('t');
                lcdData('a');
                lcdData('r');
                lcdData(' ');
                lcdData('p');
                lcdData('a');
                lcdData('r');
                lcdData('a');

                lcdCommand(0xC0);
                lcdData('P');
                lcdData('r');
                lcdData('e');
                lcdData('s');
                lcdData('i');
                lcdData('d');
                lcdData('e');
                lcdData('n');
                lcdData('t');
                lcdData('e');


                lcdCommand(0xD0);
                lcdData('1');
                lcdData('-');
                lcdData('C');
                lcdData('a');
                lcdData('n');
                lcdData('d');
                lcdData('i');
                lcdData('d');
                lcdData('a');
                lcdData('t');
                lcdData('o');
                lcdData('s');

            }

            if (bitTst(tecla, 3)) {
                for (linha = 0; linha < 5; linha++) {
                    for (coluna = 0; coluna < 16; coluna++) {
                        lcdData(CLR);
                    }
                }

                lcdCommand(0x80);
                lcdData('8');
                lcdData('3');
                lcdData('-');
                lcdData('J');
                lcdData('o');
                lcdData('a');
                lcdData('o');

                lcdCommand(0xC0);
                lcdData('9');
                lcdData('9');
                lcdData('-');
                lcdData('M');
                lcdData('a');
                lcdData('r');
                lcdData('i');
                lcdData('a');



                lcdCommand(0xD0);
                lcdData('2');
                lcdData('-');
                lcdData('V');
                lcdData('o');
                lcdData('t');
                lcdData('a');
                lcdData('r');


            }



            if (bitTst(tecla, 7)) {
                for (linha = 0; linha < 5; linha++) {
                    for (coluna = 0; coluna < 16; coluna++) {
                        lcdData(CLR);
                    }
                }


                lcdCommand(0x80);
                lcdData('V');
                lcdData('o');
                lcdData('t');
                lcdData('a');
                lcdData('r');
                lcdData(' ');
                lcdData('p');
                lcdData('a');
                lcdData('r');
                lcdData('a');

                lcdCommand(0xC0);
                lcdData('R');
                lcdData('e');
                lcdData('p');
                lcdData('r');
                lcdData('e');
                lcdData('s');
                lcdData('e');
                lcdData('n');
                lcdData('t');
                lcdData('a');
                lcdData('n');
                lcdData('t');
                lcdData('e');



                lcdCommand(0xD0);
                lcdData('4');
                lcdData('-');
                lcdData('C');
                lcdData('o');
                lcdData('n');
                lcdData('f');
                lcdData('i');
                lcdData('r');
                lcdData('m');
                lcdData('a');
                lcdData('r');


            }

            if (bitTst(tecla, 1)) {
                for (c = 0; c < 300; c++) {
                    ssdDigit(8, 2);
                    ssdDigit(3, 3);
                    ssdUpdate();
                    for (m = 0; m < 300; m++);
                    for (m = 0; m < 300; m++);
                    for (m = 0; m < 300; m++);


                }

            }

            if (bitTst(tecla, 5)) {
                for (c = 0; c < 300; c++) {
                    ssdDigit(9, 2);
                    ssdDigit(9, 3);
                    ssdUpdate();
                    for (m = 0; m < 300; m++);
                    for (m = 0; m < 300; m++);
                    for (m = 0; m < 300; m++);

                }

            }


            if (bitTst(tecla, 2)) {
                for (linha = 0; linha < 5; linha++) {
                    for (coluna = 0; coluna < 16; coluna++) {
                        lcdData(CLR);
                    }
                }

                for (i = 0; i < 1; i++) {


                    lcdCommand(0x80);
                    lcdData('A');
                    lcdData('G');
                    lcdData('U');
                    lcdData('A');
                    lcdData('R');
                    lcdData('D');
                    lcdData('E');

                    lcdCommand(0xC0);
                    lcdData('S');
                    lcdData('e');
                    lcdData('u');
                    lcdData(' ');
                    lcdData('v');
                    lcdData('o');
                    lcdData('t');
                    lcdData('o');
                    lcdData(' ');
                    lcdData('e');
                    lcdData('s');
                    lcdData('t');
                    lcdData('a');


                    lcdCommand(0x90);
                    lcdData('s');
                    lcdData('e');
                    lcdData('n');
                    lcdData('d');
                    lcdData('o');
                    lcdData(' ');
                    lcdData('c');
                    lcdData('o');
                    lcdData('m');
                    lcdData('p');
                    lcdData('u');
                    lcdData('t');
                    lcdData('a');
                    lcdData('d');
                    lcdData('o');


                    for (a = 0; a < 8; a++) {
                        PORTD = led[a];
                        for (b = 0; b < 2000; b++);
                        
                    PORTCbits.RC5 = 0;
                    pwmSet(50);
                    for (aux = 0; aux < 300; aux++);
                    for (aux = 0; aux < 300; aux++);
                    for (aux = 0; aux < 300; aux++);
                    for (aux = 0; aux < 300; aux++);

                   
                    TRISEbits.TRISE0 = 0;
                    for (i = 0; i < 10; i++) {
                        PORTEbits.RE0 ^= 1;
                        for (aux = 0; aux < 255; aux++);
                        for (aux = 0; aux < 255; aux++);
                    }
                    PORTEbits.RE0 = 0;


                    }
                    
                    pwmSet(0);





                }



                for (linha = 0; linha < 5; linha++) {
                    for (coluna = 0; coluna < 16; coluna++) {
                        lcdData(CLR);
                    }
                }

                lcdCommand(0x80);
                lcdData('O');
                lcdData('B');
                lcdData('R');
                lcdData('I');
                lcdData('G');
                lcdData('A');
                lcdData('D');
                lcdData('O');





            }




        }
    }

}


