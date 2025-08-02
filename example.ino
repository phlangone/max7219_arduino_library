#include "DisplayDriver.h"

uint8_t coracao[8] = {
  0b00000000,
  0b01100110,
  0b11111111,
  0b11111111,
  0b11111111,
  0b01111110,
  0b00111100,
  0b00011000
};

uint8_t seta_direita[8] = {
  0b00011000,
  0b00011000,
  0b00011000,
  0b00011000,
  0b01111110,
  0b00111100,
  0b00011000,
  0b00000000
};

uint8_t check[8] = {
  0b00000001,
  0b00000010,
  0b00000100,
  0b01001000,
  0b00110000,
  0b00000000,
  0b00000000,
  0b00000000
};

uint8_t smile[8] = {
  0b00111100,
  0b01000010,
  0b10100101,
  0b10000001,
  0b10100101,
  0b10011001,
  0b01000010,
  0b00111100
};

uint8_t letra_x[8] = {
  0b10000001,
  0b01000010,
  0b00100100,
  0b00011000,
  0b00011000,
  0b00100100,
  0b01000010,
  0b10000001
};

DisplayDriver dd = DisplayDriver(11, 10, 13, MATRIX);

void setup() 
{

  dd.begin();  
  dd.clearDisplay();
}

void loop() 
{
  // dd.drawBitmap(coracao);
  // delay(2000);
  // dd.drawBitmap(seta_direita);
  // delay(2000);
  // dd.drawBitmap(check);
  // delay(2000);
  // dd.drawBitmap(smile);
  // delay(2000);
  // dd.drawBitmap(letra_x);
  // delay(2000);        
  // dd.clearDisplay();
  // delay(500);

  // dd.fillDisplay();
  // delay(1000);
  // dd.clearDisplay();
  // delay(500);

  // // Linha diagonal invertida ↙ OK
  // dd.drawLine(7, 0, 0, 7);
  // delay(1000);
  // dd.clearDisplay();

  // // Linha na horizontal esquerda → direita OK
  // dd.drawLine(0, 4, 7, 4);
  // delay(1000);
  // dd.clearDisplay();

  // // Linha na horizontal direita → esquerda OK
  // dd.drawLine(7, 5, 0, 5);
  // delay(1000);
  // dd.clearDisplay();

  // // Linha na vertical de cima para baixo OK
  // dd.drawLine(6, 0, 6, 6);
  // delay(1000);
  // dd.clearDisplay();

  // // Linha na vertical de baixo para cima OK
  // dd.drawLine(5, 7, 5, 0);
  // delay(1000);
  // dd.clearDisplay();

  // // Linha diagonal curta OK
  // dd.drawLine(2, 2, 4, 4);
  // delay(1000);
  // dd.clearDisplay();

  // // Linha de ponto único (ponto estático) OK
  // dd.drawLine(3, 3, 3, 3);
  // delay(1000);
  // dd.clearDisplay();

  // // Linha cruzada na diagonal central (↘) OK
  // dd.drawLine(0, 0, 7, 7);
  // delay(1000);
  // dd.clearDisplay();

  // // Linha cruzada oposta (↙) OK
  // dd.drawLine(7, 0, 0, 7);
  // delay(1000);
  // dd.clearDisplay();

  for(int i = 0; i < 8; i++)
  {
    for(int j = 0; j < 8; j++)
    {
      dd.drawPixel(i, j);
      delay(100);
    }
  }
}
