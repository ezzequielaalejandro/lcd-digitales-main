#include lcd.h

void lcdinit (pantalla_t* iniciar){

    if(iniciar -> puerto = 'a'){
    RCC -> APB2ENR |= RCC_APB2ENR_IOPAEN;
    
    for (int i = 0, i < 8, i ++){
        if(iniciar -> datos [i] < 7){
            GPIOA -> CRL & ~(0XF << (iniciar -> datos [i] * 4));
            GPIOA -> CRL |= (0X1 << (iniciar -> datos [i] * 4));
        }else{
            GPIOA -> CRH & ~(0XF << ((iniciar -> datos [i] %8) * 4));
            GPIOA -> CRH |= (0X1 << ((iniciar -> datos [i] %8) * 4));
        }
    }
        if(iniciar ->  rw < 8){
            GPIOA -> CRL & ~(0XF << (iniciar -> rw * 4));
            GPIOA -> CRL |= (0X1 << (iniciar -> rw * 4));
        }else{
            GPIOA -> CRH & ~(0XF << ((iniciar -> rw %8) * 4));
            GPIOA -> CRH |= (0X1 << ((iniciar -> rw %8) * 4));
        }

        if(iniciar ->  rs < 8){
            GPIOA -> CRL & ~(0XF << (iniciar -> rs * 4));
            GPIOA -> CRL |= (0X1 << (iniciar -> rs * 4));
        }else{
            GPIOA -> CRH & ~(0XF << ((iniciar -> rs %8) * 4));
            GPIOA -> CRH |= (0X1 << ((iniciar -> rs %8) * 4));
        }
    
}

        if(iniciar -> puerto = 'b'){
    RCC -> APB2ENR |= RCC_APB2ENR_IOPBEN;
    
    for (int i = 0, i < 8, i ++){
        if(iniciar -> datos [i] < 7){
            GPIOB -> CRL & ~(0XF << (iniciar -> datos [i] * 4));
            GPIOB -> CRL |= (0X1 << (iniciar -> datos [i] * 4));
        }else{
            GPIOB -> CRH & ~(0XF << ((iniciar -> datos [i] %8) * 4));
            GPIOB -> CRH |= (0X1 << ((iniciar -> datos [i] %8) * 4));
        }
    }
        if(iniciar ->  rw < 8){
            GPIOB -> CRL & ~(0XF << (iniciar -> rw * 4));
            GPIOB -> CRL |= (0X1 << (iniciar -> rw * 4));
        }else{
            GPIOB -> CRH & ~(0XF << ((iniciar -> rw %8) * 4));
            GPIOB -> CRH |= (0X1 << ((iniciar -> rw %8) * 4));
        }

        if(iniciar -> rs < 8){
            GPIOB -> CRL & ~(0XF << (iniciar -> rs * 4));
            GPIOB -> CRL |= (0X1 << (iniciar -> rs * 4));
        }else{
            GPIOB -> CRH & ~(0XF << ((iniciar -> rs %8) * 4));
            GPIOB -> CRH |= (0X1 << ((iniciar -> rs %8) * 4));
        }
    
}

        if(iniciar -> puerto = 'c'){
    RCC -> APB2ENR |= RCC_APB2ENR_IOPCEN;
    
    for (int i = 0, i < 8, i ++){
        if(iniciar -> datos [i] < 7){
            GPIOC -> CRL & ~(0XF << (iniciar -> datos [i] * 4));
            GPIOC -> CRL |= (0X1 << (iniciar -> datos [i] * 4));
        }else{
            GPIOC -> CRH & ~(0XF << ((iniciar -> datos [i] %8) * 4));
            GPIOC -> CRH |= (0X1 << ((iniciar -> datos [i] %8) * 4));
        }
    }
        if(iniciar ->  rw < 8){
            GPIOC -> CRL & ~(0XF << (iniciar -> rw * 4));
            GPIOC -> CRL |= (0X1 << (iniciar -> rw * 4));
        }else{
            GPIOC -> CRH & ~(0XF << ((iniciar -> rw %8) * 4));
            GPIOC -> CRH |= (0X1 << ((iniciar -> rw %8) * 4));
        }

        if(iniciar ->  rs < 8){
            GPIOC -> CRL & ~(0XF << (iniciar -> rs * 4));
            GPIOC -> CRL |= (0X1 << (iniciar -> rs * 4));
        }else{
            GPIOC -> CRH & ~(0XF << ((iniciar -> rs %8) * 4));
            GPIOC -> CRH |= (0X1 << ((iniciar -> rs %8) * 4));
        }
    
}

        if(iniciar -> puerto = 'd'){
    RCC -> APB2ENR |= RCC_APB2ENR_IOPDEN;
    
    for (int i = 0, i < 8, i ++){
        if(iniciar -> datos [i] < 7){
            GPIOD -> CRL & ~(0XF << (iniciar -> datos [i] * 4));
            GPIOD -> CRL |= (0X1 << (iniciar -> datos [i] * 4));
        }else{
            GPIOD -> CRH & ~(0XF << ((iniciar -> datos [i] %8) * 4));
            GPIOD -> CRH |= (0X1 << ((iniciar -> datos [i] %8) * 4));
        }
    }
        if(iniciar ->  rw < 8){
            GPIOD -> CRL & ~(0XF << (iniciar -> rw * 4));
            GPIOD -> CRL |= (0X1 << (iniciar -> rw * 4));
        }else{
            GPIOD -> CRH & ~(0XF << ((iniciar -> rw %8) * 4));
            GPIOD -> CRH |= (0X1 << ((iniciar -> rw %8) * 4));
        }

        if(iniciar ->  rs < 8){
            GPIOD -> CRL & ~(0XF << (iniciar -> rs * 4));
            GPIOD -> CRL |= (0X1 << (iniciar -> rs * 4));
        }else{
            GPIOD -> CRH & ~(0XF << ((iniciar -> rs %8) * 4));
            GPIOD -> CRH |= (0X1 << ((iniciar -> rs %8) * 4));
        }
    
}

}

void lcdclear(pantalla_t* limpiar){

    int borrar [7] ={0,0,0,0,0,0,0,1};
    
    for(int i = 0, i <8, i++){
            if(borrar [i]) {limpiar -> puerto -> BSRR |= (1 << limpiar -> datos [i]);
            }else{
                limpiar -> puerto -> BSRR |= (1 << (limpiar -> datos [i] + 16));
            }
        }
        limpiar -> puerto -> BSRR |= (1 << (limpiar -> rw) + 16);
        limpiar -> puerto -> BSRR |= (1 << (limpiar -> rs) + 16);
    }


void lcdcursor(pantalla_t* setcursor, columnas, filas){

    setcursor -> puerto -> BSRR |= (1 << (setcursor -> rw) + 16);
    setcursor -> puerto -> BSRR |= (1 << setcursor -> rs);

    int row_shift [2] = {0x00, 0x40};

    int salida = columnas + row_shift [filas];

    for(int i = 0, i < 8, i++){
        if((salida >> i) %2 = 1){
            setcursor -> puerto -> BSRR |= (1 << setcursor -> datos [i]);
        }else{
            setcursor -> puerto -> BSRR |= (1 << setcursor -> datos [i] + 16);
        }
    }
}

void scrollright(pantalla_t* right){

    int mover = 0000011100; //0 0 0 0 0 1 1 1 0 0

    right -> puerto -> BSRR |= (1 << right -> rw + 16);
    right -> puerto -> BSRR |= (1 << right -> rs + 16);

    for(int i = 0, i <= 7, i++){
        if((mover >> i) %2 = 1){
            right -> puerto -> BSRR |= (1 << right -> datos [i]);
        }else{
            right -> puerto -> BSRR |= (1 << (right -> datos [i]) + 16);
        }
    }
}

void scrollleft(pantalla_t* left){

    int mover = 0000011000; //0 0 0 0 0 1 1 0 0 0

    left -> puerto -> BSRR |= (1 << left -> rw + 16);
    left -> puerto -> BSRR |= (1 << left -> rs + 16);


    for(int i = 0, i <= 7, i++){
        if((mover >> i) %2 = 1){
            left -> puerto -> BSRR |= (1 << left -> datos [i]);
        }else{
            left -> puerto -> BSRR |= (1 << (left -> datos [i]) + 16);
        }
    }
}

void print (pantalla_t* lcd, char *txt){
    lcd -> puerto -> BSRR |= (1 << lcd -> rs);
    lcd -> puerto -> BSRR |= (1 << (lcd -> rw + 16));

    while(txt) {
        
        for(int i = 0, i < 8, i++){
        if((txt >> i) %2 = 1){
            lcd -> puerto -> BSRR |= (1 << left -> datos [i]);
        }else{
            lcd -> puerto -> BSRR |= (1 << (left -> datos [i]) + 16);
        }
    }
        txt++;
    }
}