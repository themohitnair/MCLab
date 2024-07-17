#include "NUC1xx.h"
#include <Driver\DrvGPIO.h>
#include <Driver\DrvSYS.h>
#include <Driver\DrvUART.h>

void init_LED() {
    DrvGPIO_Open(E_GPA, 12, E_IO_OUTPUT);
    DrvGPIO_Open(E_GPA, 13, E_IO_OUTPUT);
    DrvGPIO_Open(E_GPA, 13, E_IO_OUTPUT);

    DrvGPIO_SetBit(E_GPA, 12);
    DrvGPIO_SetBit(E_GPA, 13);
    DrvGPIO_SetBit(E_GPA, 14);
}

int main() {
    UNLOCKREG();
    DrvSYS_Open(48000000);
    LOCKREG();
    init_LED();

    while(1) {
        DrvGPIO_ClrBit(E_GPA, 12);
        DrvGPIO_SetBit(E_GPA, 13);
        DrvGPIO_SetBit(E_GPA, 14);
        DrvSYS_Delay(50000);

        DrvGPIO_SetBit(E_GPA, 12);
        DrvGPIO_ClrBit(E_GPA, 13);
        DrvGPIO_SetBit(E_GPA, 14);
        DrvSYS_Delay(50000);

        DrvGPIO_SetBit(E_GPA, 12);
        DrvGPIO_SetBit(E_GPA, 13);
        DrvGPIO_ClrBit(E_GPA, 14);
        DrvSYS_Delay(50000);

        DrvGPIO_SetBit(E_GPA, 12);
        DrvGPIO_SetBit(E_GPA, 13);
        DrvGPIO_SetBit(E_GPA, 14);
    }
}