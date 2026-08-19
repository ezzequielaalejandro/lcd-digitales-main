#include "stm32f103xb.h"
#include "lcd.h"

int main (){
    pantalla_t lcd;
    lcd.puerto = GPIOA;
    lcd.datos {1,2,3,4,5,6,7,8};
    lcd.rw = 10;
    lcd.rs = 11;

    lcdinit();
}