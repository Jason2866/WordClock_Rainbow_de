#ifndef DATA_H
#define DATA_H

#include <avr/pgmspace.h> 

/********************************************
 * matrix data format,this is just for reference
 * 
 * 0x0bgr
 * 
 * data type:unsigned short 16bits.
 * every 4bits reperesent one color level, so each color
 * is with 16 levels.
 *********************************************/
 
#define PRESET_PIC_NUM  4
const unsigned short presetMatrixColorData[PRESET_PIC_NUM][8][8] PROGMEM ={
  //0
  {
    {0x0fff,0x0ddd,0x0bbb,0x0999,0x0777,0x0555,0x0333,0x0111,},
    {0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,},
    {0x000f,0x000d,0x000b,0x0009,0x0007,0x0005,0x0003,0x0001,},
    {0x00ff,0x00dd,0x00bb,0x0099,0x0077,0x0055,0x0033,0x0011,},
    {0x00f0,0x00d0,0x00b0,0x0090,0x0070,0x0050,0x0030,0x0010,},
    {0x0ff0,0x0dd0,0x0bb0,0x0990,0x0770,0x0750,0x0330,0x0110,},
    {0x0f00,0x0d00,0x0b00,0x0900,0x0700,0x0500,0x0300,0x0100,},
    {0x0f0f,0x0d0d,0x0b0b,0x0909,0x0707,0x0505,0x0303,0x0101,},
  },
  //1, red
  {
    {0x000f,0x000f,0x000f,0x000f,0x000f,0x000f,0x000f,0x000f,},
    {0x000f,0x000f,0x000f,0x000f,0x000f,0x000f,0x000f,0x000f,},
    {0x000f,0x000f,0x000f,0x000f,0x000f,0x000f,0x000f,0x000f,},
    {0x000f,0x000f,0x000f,0x000f,0x000f,0x000f,0x000f,0x000f,},
    {0x000f,0x000f,0x000f,0x000f,0x000f,0x000f,0x000f,0x000f,},
    {0x000f,0x000f,0x000f,0x000f,0x000f,0x000f,0x000f,0x000f,},
    {0x000f,0x000f,0x000f,0x000f,0x000f,0x000f,0x000f,0x000f,},
    {0x000f,0x000f,0x000f,0x000f,0x000f,0x000f,0x000f,0x000f,},
  },
  //2, green
  {
    {0x00f0,0x00f0,0x00f0,0x00f0,0x00f0,0x00f0,0x00f0,0x00f0,},
    {0x00f0,0x00f0,0x00f0,0x00f0,0x00f0,0x00f0,0x00f0,0x00f0,},
    {0x00f0,0x00f0,0x00f0,0x00f0,0x00f0,0x00f0,0x00f0,0x00f0,},
    {0x00f0,0x00f0,0x00f0,0x00f0,0x00f0,0x00f0,0x00f0,0x00f0,},
    {0x00f0,0x00f0,0x00f0,0x00f0,0x00f0,0x00f0,0x00f0,0x00f0,},
    {0x00f0,0x00f0,0x00f0,0x00f0,0x00f0,0x00f0,0x00f0,0x00f0,},
    {0x00f0,0x00f0,0x00f0,0x00f0,0x00f0,0x00f0,0x00f0,0x00f0,},
    {0x00f0,0x00f0,0x00f0,0x00f0,0x00f0,0x00f0,0x00f0,0x00f0,},
  },
  //3, blue
  {
    {0x0f00,0x0f00,0x0f00,0x0f00,0x0f00,0x0f00,0x0f00,0x0f00,},
    {0x0f00,0x0f00,0x0f00,0x0f00,0x0f00,0x0f00,0x0f00,0x0f00,},
    {0x0f00,0x0f00,0x0f00,0x0f00,0x0f00,0x0f00,0x0f00,0x0f00,},
    {0x0f00,0x0f00,0x0f00,0x0f00,0x0f00,0x0f00,0x0f00,0x0f00,},
    {0x0f00,0x0f00,0x0f00,0x0f00,0x0f00,0x0f00,0x0f00,0x0f00,},
    {0x0f00,0x0f00,0x0f00,0x0f00,0x0f00,0x0f00,0x0f00,0x0f00,},
    {0x0f00,0x0f00,0x0f00,0x0f00,0x0f00,0x0f00,0x0f00,0x0f00,},
    {0x0f00,0x0f00,0x0f00,0x0f00,0x0f00,0x0f00,0x0f00,0x0f00,},
  },

};
//----------------------------------------------------
/* unsigned char ASCII_Char[52][8] PROGMEM =
{
      
    {0x0,0x44,0x44,0x7C,0x44,0x44,0x28,0x10},//A
    {0x0,0x3C,0x44,0x44,0x3C,0x44,0x44,0x3C},//B   
    {0x0,0x38,0x44,0x4,0x4,0x4,0x44,0x38},//C   
    {0x0,0x1C,0x24,0x44,0x44,0x44,0x24,0x1C},//D  
    {0x0,0x7C,0x4,0x4,0x3C,0x4,0x4,0x7C}, //E
    {0x0,0x4,0x4,0x4,0x3C,0x4,0x4,0x7C}, //F
    {0x0,0x78,0x44,0x44,0x74,0x4,0x44,0x38},//G
    {0x0,0x44,0x44,0x44,0x7C,0x44,0x44,0x44}, //H
    {0x0,0x38,0x10,0x10,0x10,0x10,0x10,0x38} , //I
    {0x0,0x18,0x24,0x20,0x20,0x20,0x20,0x70},  //J
    {0x0,0x44,0x24,0x14,0xC,0x14,0x24,0x44},   //K
    {0x0,0x7C,0x4,0x4,0x4,0x4,0x4,0x4},//L
    {0x0,0x44,0x44,0x44,0x54,0x54,0x6C,0x44}, //M
    {0x0,0x44,0x44,0x64,0x54,0x4C,0x44,0x44},  //N
    {0x0,0x38,0x44,0x44,0x44,0x44,0x44,0x38},  //O
    {0x0,0x4,0x4,0x4,0x3C,0x44,0x44,0x3C},   //P
    {0x0,0x58,0x24,0x54,0x44,0x44,0x44,0x38},//Q
    {0x0,0x44,0x24,0x14,0x3C,0x44,0x44,0x3C},  //R
    {0x0,0x3C,0x40,0x40,0x38,0x4,0x4,0x78},//S
    {0x0,0x10,0x10,0x10,0x10,0x10,0x10,0x7C},// T
    {0x0,0x38,0x44,0x44,0x44,0x44,0x44,0x44},// U   
    {0x0,0x10,0x28,0x44,0x44,0x44,0x44,0x44},// V     
    {0x0,0x28,0x54,0x54,0x54,0x44,0x44,0x44},// W    
    {0x0,0x44,0x44,0x28,0x10,0x28,0x44,0x44},// X   
    {0x0,0x10,0x10,0x10,0x28,0x44,0x44,0x44},// Y    
    {0x0,0x7C,0x4,0x8,0x10,0x20,0x40,0x7C},// Z
    
    {0x0,0x78,0x44,0x78,0x40,0x38,0x0,0x0},// a   
    {0x0,0x3C,0x44,0x44,0x4C,0x34,0x4,0x4},// b    
    {0x0,0x38,0x44,0x4,0x4,0x38,0x0,0x0},// c    
    {0x0,0x78,0x44,0x44,0x64,0x58,0x40,0x40},// d    
    {0x0,0x38,0x4,0x7C,0x44,0x38,0x0,0x0},// e    
    {0x0,0x8,0x8,0x8,0x1C,0x8,0x48,0x30},// f    
    {0x38,0x40,0x78,0x44,0x44,0x78,0x0,0x0},// g    
    {0x0,0x44,0x44,0x44,0x4C,0x34,0x4,0x4},// h   
    {0x0,0x38,0x10,0x10,0x10,0x18,0x0,0x10},// i    
    {0x18,0x24,0x20,0x20,0x20,0x30,0x0,0x20},// j    
    {0x0,0x24,0x14,0xC,0x14,0x24,0x4,0x4},// k    
    {0x0,0x38,0x10,0x10,0x10,0x10,0x10,0x18},// l    
    {0x0,0x44,0x44,0x54,0x54,0x2C,0x0,0x0},// m   
    {0x0,0x44,0x44,0x44,0x4C,0x34,0x0,0x0},// n    
    {0x0,0x38,0x44,0x44,0x44,0x38,0x0,0x0},// o    
    {0x4,0x4,0x3C,0x44,0x44,0x3C,0x0,0x0},// p    
    {0x40,0x40,0x58,0x64,0x64,0x58,0x0,0x0},// q   
    {0x0,0x4,0x4,0x4,0x4C,0x34,0x0,0x0},// r    
    {0x0,0x3C,0x40,0x38,0x4,0x38,0x0,0x0},// s    
    {0x0,0x30,0x48,0x8,0x8,0x1C,0x8,0x8},// t   
    {0x0,0x58,0x64,0x44,0x44,0x44,0x0,0x0},// u    
    {0x0,0x10,0x28,0x44,0x44,0x44,0x0,0x0},// v   
    {0x0,0x28,0x54,0x54,0x44,0x44,0x0,0x0},// w    
    {0x0,0x44,0x28,0x10,0x28,0x44,0x0,0x0},// x   
    {0x38,0x40,0x78,0x44,0x44,0x44,0x0,0x0},// y   
    {0x0,0x7C,0x8,0x10,0x20,0x7C,0x0,0x0},// z
};


unsigned char ASCII_Number[10][8] PROGMEM =
{
  {0x0,0x38,0x44,0x4C,0x54,0x64,0x44,0x38},//0
  {0x0,0x38,0x10,0x10,0x10,0x10,0x18,0x10},// 1
  {0x0,0x7C,0x8,0x10,0x20,0x40,0x44,0x38},// 2
  {0x0,0x38,0x44,0x40,0x20,0x10,0x20,0x7C},// 3
  {0x0,0x20,0x20,0x7C,0x24,0x28,0x30,0x20},// 4
  {0x0,0x38,0x44,0x40,0x40,0x3C,0x4,0x7C},//5
  {0x0,0x38,0x44,0x44,0x3C,0x4,0x8,0x30},//6
  {0x0,0x8,0x8,0x8,0x10,0x20,0x40,0x7C},//7
  {0x0,0x38,0x44,0x44,0x38,0x44,0x44,0x38},//8
  {0x0,0x18,0x20,0x40,0x78,0x44,0x44,0x38}//9
};
*/
const unsigned char myFont[][8] PROGMEM={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x5F,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x07,0x00,0x07,0x00,0x00,0x00},
{0x00,0x14,0x7F,0x14,0x7F,0x14,0x00,0x00},
{0x00,0x24,0x2A,0x7F,0x2A,0x12,0x00,0x00},
{0x00,0x23,0x13,0x08,0x64,0x62,0x00,0x00},
{0x00,0x36,0x49,0x55,0x22,0x50,0x00,0x00},
{0x00,0x00,0x05,0x03,0x00,0x00,0x00,0x00},
{0x00,0x1C,0x22,0x41,0x00,0x00,0x00,0x00},
{0x00,0x41,0x22,0x1C,0x00,0x00,0x00,0x00},
{0x00,0x08,0x2A,0x1C,0x2A,0x08,0x00,0x00},
{0x00,0x08,0x08,0x3E,0x08,0x08,0x00,0x00},
{0x00,0xA0,0x60,0x00,0x00,0x00,0x00,0x00},
{0x00,0x08,0x08,0x08,0x08,0x08,0x00,0x00},
{0x00,0x60,0x60,0x00,0x00,0x00,0x00,0x00},
{0x00,0x20,0x10,0x08,0x04,0x02,0x00,0x00},
{0x00,0x3E,0x51,0x49,0x45,0x3E,0x00,0x00},
{0x00,0x00,0x42,0x7F,0x40,0x00,0x00,0x00},
{0x00,0x62,0x51,0x49,0x49,0x46,0x00,0x00},
{0x00,0x22,0x41,0x49,0x49,0x36,0x00,0x00},
{0x00,0x18,0x14,0x12,0x7F,0x10,0x00,0x00},
{0x00,0x27,0x45,0x45,0x45,0x39,0x00,0x00},
{0x00,0x3C,0x4A,0x49,0x49,0x30,0x00,0x00},
{0x00,0x01,0x71,0x09,0x05,0x03,0x00,0x00},
{0x00,0x36,0x49,0x49,0x49,0x36,0x00,0x00},
{0x00,0x06,0x49,0x49,0x29,0x1E,0x00,0x00},
{0x00,0x00,0x36,0x36,0x00,0x00,0x00,0x00},
{0x00,0x00,0xAC,0x6C,0x00,0x00,0x00,0x00},
{0x00,0x08,0x14,0x22,0x41,0x00,0x00,0x00},
{0x00,0x14,0x14,0x14,0x14,0x14,0x00,0x00},
{0x00,0x41,0x22,0x14,0x08,0x00,0x00,0x00},
{0x00,0x02,0x01,0x51,0x09,0x06,0x00,0x00},
{0x00,0x32,0x49,0x79,0x41,0x3E,0x00,0x00},
{0x00,0x7E,0x09,0x09,0x09,0x7E,0x00,0x00},
{0x00,0x7F,0x49,0x49,0x49,0x36,0x00,0x00},
{0x00,0x3E,0x41,0x41,0x41,0x22,0x00,0x00},
{0x00,0x7F,0x41,0x41,0x22,0x1C,0x00,0x00},
{0x00,0x7F,0x49,0x49,0x49,0x41,0x00,0x00},
{0x00,0x7F,0x09,0x09,0x09,0x01,0x00,0x00},
{0x00,0x3E,0x41,0x41,0x51,0x72,0x00,0x00},
{0x00,0x7F,0x08,0x08,0x08,0x7F,0x00,0x00},
{0x00,0x41,0x7F,0x41,0x00,0x00,0x00,0x00},
{0x00,0x20,0x40,0x41,0x3F,0x01,0x00,0x00},
{0x00,0x7F,0x08,0x14,0x22,0x41,0x00,0x00},
{0x00,0x7F,0x40,0x40,0x40,0x40,0x00,0x00},
{0x00,0x7F,0x02,0x0C,0x02,0x7F,0x00,0x00},
{0x00,0x7F,0x04,0x08,0x10,0x7F,0x00,0x00},
{0x00,0x3E,0x41,0x41,0x41,0x3E,0x00,0x00},
{0x00,0x7F,0x09,0x09,0x09,0x06,0x00,0x00},
{0x00,0x3E,0x41,0x51,0x21,0x5E,0x00,0x00},
{0x00,0x7F,0x09,0x19,0x29,0x46,0x00,0x00},
{0x00,0x26,0x49,0x49,0x49,0x32,0x00,0x00},
{0x00,0x01,0x01,0x7F,0x01,0x01,0x00,0x00},
{0x00,0x3F,0x40,0x40,0x40,0x3F,0x00,0x00},
{0x00,0x1F,0x20,0x40,0x20,0x1F,0x00,0x00},
{0x00,0x3F,0x40,0x38,0x40,0x3F,0x00,0x00},
{0x00,0x63,0x14,0x08,0x14,0x63,0x00,0x00},
{0x00,0x03,0x04,0x78,0x04,0x03,0x00,0x00},
{0x00,0x61,0x51,0x49,0x45,0x43,0x00,0x00},
{0x00,0x7F,0x41,0x41,0x00,0x00,0x00,0x00},
{0x00,0x02,0x04,0x08,0x10,0x20,0x00,0x00},
{0x00,0x41,0x41,0x7F,0x00,0x00,0x00,0x00},
{0x00,0x04,0x02,0x01,0x02,0x04,0x00,0x00},
{0x00,0x80,0x80,0x80,0x80,0x80,0x00,0x00},
{0x00,0x01,0x02,0x04,0x00,0x00,0x00,0x00},
{0x00,0x20,0x54,0x54,0x54,0x78,0x00,0x00},
{0x00,0x7F,0x48,0x44,0x44,0x38,0x00,0x00},
{0x00,0x38,0x44,0x44,0x28,0x00,0x00,0x00},
{0x00,0x38,0x44,0x44,0x48,0x7F,0x00,0x00},
{0x00,0x38,0x54,0x54,0x54,0x18,0x00,0x00},
{0x00,0x08,0x7E,0x09,0x02,0x00,0x00,0x00},
{0x00,0x18,0xA4,0xA4,0xA4,0x7C,0x00,0x00},
{0x00,0x7F,0x08,0x04,0x04,0x78,0x00,0x00},
{0x00,0x00,0x7D,0x00,0x00,0x00,0x00,0x00},
{0x00,0x80,0x84,0x7D,0x00,0x00,0x00,0x00},
{0x00,0x7F,0x10,0x28,0x44,0x00,0x00,0x00},
{0x00,0x41,0x7F,0x40,0x00,0x00,0x00,0x00},
{0x00,0x7C,0x04,0x18,0x04,0x78,0x00,0x00},
{0x00,0x7C,0x08,0x04,0x7C,0x00,0x00,0x00},
{0x00,0x38,0x44,0x44,0x38,0x00,0x00,0x00},
{0x00,0xFC,0x24,0x24,0x18,0x00,0x00,0x00},
{0x00,0x18,0x24,0x24,0xFC,0x00,0x00,0x00},
{0x00,0x00,0x7C,0x08,0x04,0x00,0x00,0x00},
{0x00,0x48,0x54,0x54,0x24,0x00,0x00,0x00},
{0x00,0x04,0x7F,0x44,0x00,0x00,0x00,0x00},
{0x00,0x3C,0x40,0x40,0x7C,0x00,0x00,0x00},
{0x00,0x1C,0x20,0x40,0x20,0x1C,0x00,0x00},
{0x00,0x3C,0x40,0x30,0x40,0x3C,0x00,0x00},
{0x00,0x44,0x28,0x10,0x28,0x44,0x00,0x00},
{0x00,0x1C,0xA0,0xA0,0x7C,0x00,0x00,0x00},
{0x00,0x44,0x64,0x54,0x4C,0x44,0x00,0x00},
{0x00,0x08,0x36,0x41,0x00,0x00,0x00,0x00},
{0x00,0x00,0x7F,0x00,0x00,0x00,0x00,0x00},
{0x00,0x41,0x36,0x08,0x00,0x00,0x00,0x00},
{0x00,0x02,0x01,0x01,0x02,0x01,0x00,0x00},
{0x00,0x02,0x05,0x05,0x02,0x00,0x00,0x00} 

};

//used for displaying
unsigned short matrixColorData[8][8] = // [line][column]
{
  {//wite
    0x0fff,0x0ddd,0x0bbb,0x0999,0x0777,0x0555,0x0333,0x0111        },
  {//black
    0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000        },
  {//red
    0x000f,0x000d,0x000b,0x0009,0x0007,0x0005,0x0003,0x0001        },
  {//red&green
    0x00ff,0x00dd,0x00bb,0x0099,0x0077,0x0055,0x0033,0x0011        },
  {//green
    0x00f0,0x00d0,0x00b0,0x0090,0x0070,0x0050,0x0030,0x0010        },
  {//blue&green
    0x0ff0,0x0dd0,0x0bb0,0x0990,0x0770,0x0750,0x0330,0x0110        },
  {//blue
    0x0f00,0x0d00,0x0b00,0x0900,0x0700,0x0500,0x0300,0x0100        },
  {//blue&red
    0x0f0f,0x0d0d,0x0b0b,0x0909,0x0707,0x0505,0x0303,0x0101        },
};

//used for receiving color data from serial port,they can be 
unsigned short serialColorData[8][8] = 
{
  {//wite
    0x0fff,0x0fff,0x0fff,0x0fff,0x0fff,0x0fff,0x0fff,0x0fff        },
  {//random
    0x05e3,0x05e3,0x05e3,0x05e3,0x05e3,0x05e3,0x05e3,0x05e3        },
  {//red
    0x000f,0x000f,0x000f,0x000f,0x000f,0x000f,0x000f,0x000f        },
  {//red&green
    0x00ff,0x00ff,0x00ff,0x00ff,0x00ff,0x00ff,0x00ff,0x00ff        },
  {//green
    0x00f0,0x00f0,0x00f0,0x00f0,0x00f0,0x00f0,0x00f0,0x00f0        },
  {//blue&green
    0x0ff0,0x0ff0,0x0ff0,0x0ff0,0x0ff0,0x0ff0,0x0ff0,0x0ff0        },
  {//blue
    0x0f00,0x0f00,0x0f00,0x0f00,0x0f00,0x0f00,0x0f00,0x0f00        },
  {//blue&red
    0x0f0f,0x0f0f,0x0f0f,0x0f0f,0x0f0f,0x0f0f,0x0f0f,0x0f0f        },
};

#endif
