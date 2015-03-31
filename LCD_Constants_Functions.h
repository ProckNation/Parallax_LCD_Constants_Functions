//03-31-2015 13:38:00
/**************************************************
|	LCD_Constants_Functions.h 
|	For use with the Parallax serial LCD PN: 27979
|	Created by Jason Procknow
|	
|	These ASCII addresses are from the LCD's 
|	datasheet.  The address constants help control
|	the LCD display and the text being displayed 
|	on it.
|
|	Parallax 20x4 LCD with serial backpack and
|	and a back light.
|	Parallax Part Number: 27979
|	
|	Last updated on 02-15-2015
|	- took out all the extra spaces added when 
|	converting from .txt file to .h file
|
\-------------------------------------------------*/

const int LCD_CC0 = 0;	//Display Custom Character 0
const int LCD_CC1 = 1;	//Display Custom Character 1
const int LCD_CC2 = 2;	//  and so on
const int LCD_CC3 = 3;
const int LCD_CC4 = 4;
const int LCD_CC5 = 5;
const int LCD_CC6 = 6;
const int LCD_CC7 = 7;
const int LCD_Backspace = 8;
const int LCD_Forwardspace = 9;
const int LCD_LineFeed = 10;
const int LCD_CR = 13;
const int LCD_BL_ON = 17;	//Back light on
const int LCD_BL_OFF = 18;	//Back light off
const int LCD_OFF = 21;
const int LCD_ON = 22;
const int LCD_ON_BLINK = 23;
const int LCD_ON_Cur = 24;
const int LCD_ON_Cur_BLINK = 25;
const int LCD_DCC0 = 248;	//Create custom character 0
const int LCD_DCC1 = 249;	//and so on
const int LCD_DCC2 = 250;
const int LCD_DCC3 = 251;
const int LCD_DCC4 = 252;
const int LCD_DCC5 = 253;
const int LCD_DCC6 = 254;
const int LCD_DCC7 = 255;

int GotoXY (int col, int row)
{
  return (128 + (row * 20) + col);
}

void LCD_GotoXY (int serialPort, int col, int row)
{
switch (serialPort) {
    case 0:
	  Serial.write(128 + (row * 20) + col);
	  break;
	case 1:
	  Serial1.write(128 + (row * 20) + col);
	  break;
	case 2:
	  Serial2.write(128 + (row * 20) + col);
	  break;
	case 3:
	  Serial3.write(128 + (row * 20) + col);
	  break;
  }
}

void LCD_CLS(int portNum)
{
  switch (portNum) {
    case 0:
	  Serial.write(12);
	  break;
	case 1:
	  Serial1.write(12);
	  break;
	case 2:
	  Serial2.write(12);
	  break;
	case 3:
	  Serial3.write(12);
	  break;
  }
  delay(5);
}

  

