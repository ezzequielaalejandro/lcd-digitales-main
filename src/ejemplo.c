/*el objetivo de este programa es imprimir por pantalla LCD la palabra "hola"
 y luego hacer una animacion (mover la pantalla de izq a der)
 ademas de adjuntar 2 botones de mostrar la palabra y otro para borrar la pantalla */

#include "stm32f103xb.h"
#include "lcd.h"
#include "delay.h"
#define mostrar 3
#define ocultar 4

int main (){
    pantalla_t lcd;
    lcd.puerto = GPIOA;
    lcd.datos = {1,2,3,4,5,6,7,8};
    lcd.rw = 10;
    lcd.rs = 11;

    delay_init();
    lcdinit(&lcd);

    RCC -> APB2ENR |= RCC_APB2ENR_IOPBEN;
    GPIOB -> CRL & ~(0XF << mostrar);
    GPIOB -> CRL & ~(0XF << ocultar);
    GPIOB -> CRL |= (0X4 << mostrar);
    GPIOB -> CRL |= (0X4 << ocultar);

    while (1)
    {
    while(GPIOB -> IDR |= (1 << mostrar)){
        print("hola");
        delay_ms(500);
        scrollright(&lcd);
        delay_ms(500);
        scrollleft(&lcd);
        delay_ms(500);
        lcdclear(&lcd);
        delay_ms(500);
    }

    if(GPIOB -> IDR |= (1 << ocultar)){
        lcdclear(&lcd);
    }

    }
    
}