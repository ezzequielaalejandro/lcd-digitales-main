#ifndef LCD_H
#define LCD_H

#include "stm32f103xb.h"

typedef struct{

    GPIO_TypeDef* puerto;
    unsigned int datos [8];
    unsigned int rw;
    unsigned int rs;
    unsigned int cursor;

}pantalla_t;

void lcdinit (pantalla_t*);

void lcdclear (pantalla_t*);

void lcdcursor(pantalla_t*, columnas, filas);

void scrollleft(pantalla_t*);

void scrollright(pantalla_t*);

void print(pantalla_t*, txt)

#endif