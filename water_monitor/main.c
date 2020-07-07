/**
 * main.c
 */


#include <ti/sysbios/BIOS.h>

#include "app.h"

int main(void)
{
    App_init();
    BIOS_start();
}
