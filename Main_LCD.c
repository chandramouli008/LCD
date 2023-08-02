#include "lcd.h"
#include <stddef.h>
#include <string.h>

char arr1[] = {'H','e','l','l','o',' ','W','o','r','l','d','!'};
const char *arr = "Hello World!";
int main()
{
    
    
	LCD_Init();//LCD initialization
	Write_CMD_LCD(0x80);//selecting starting line and staring pos
	Write_DAT_LCD('A');//ASCII value of the character to be //displayed
	Write_DAT_LCD('B');
    	Write_CMD_LCD(0xC0);
	Write_str_LCD("INDIA");
    	Write_CMD_LCD(0x83);
    	Write_int_LCD(123);
    
	Write_CMD_LCD(0x87);
	Write_float_LCD(12.345,3);
    
   	//Write_CMD_LCD(0x94);
    	//Write_int_LCD(sizeof(arr1));
    
        //Write_CMD_LCD(0xD4);
    	//Write_int_LCD(strlen(arr));
	while(1);
}

