/*
 Custom characters: I am using custom characters to build large size characters. These characters are
 9 times (3x3) the regular size. When you are far away using the remote control, you might need
 large characters to see what is being displayed.
 */

// Define 8 custom characters

byte cc0[8] = {     // Custom Character 0
  B00000,
  B00111,
  B01111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111
};

byte cc1[8] = {     // Custom Character 1
  B11100,
  B11110,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111
};

byte cc2[8] = {    // Custom Character 2
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B00000,
  B00000,
  B00000
};

byte cc3[8] = {    // Custom Character 3
  B00000,
  B00000,
  B00000,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111
};

byte cc4[8] = {   // Custom Character 4
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B01111,
  B00111
};

byte cc5[8] = {    // Custom Character 5
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B00000,
  B00000
};

byte cc6[8] = {    // Custom Character 6
  B00000,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B00000,
  B00000
};

byte cc7[8] = {     // Custom Character 7
  B00000,
  B11100,
  B11110,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111
};

// Function to send custom characters to the display's RAM
void DefineCustomChar(){
  LCD_createChar(0,cc0);  // cc0 becomes character 0
  LCD_createChar(1,cc1);  // cc1 becomes character 1
  LCD_createChar(2,cc2);  // cc2 becomes character 2
  LCD_createChar(3,cc3);  // cc3 becomes character 3
  LCD_createChar(4,cc4);  // cc4 becomes character 4
  LCD_createChar(5,cc5);  // cc5 becomes character 5
  LCD_createChar(6,cc6);  // cc6 becomes character 6
  LCD_createChar(7,cc7);  // cc7 becomes character 7
}

// Array index into parts of big numbers. Each number consists of 9 custom characters
// in a 3x3 matrix. To print a number, you use the array index corresponding to the number
// times 3. For example to print the number 5, you will print bn1[15], bn1[16] and bn1[17]
// for the first row of the large number, and then bn2[15], bn2[16] and bn2[17] and so on.

// Keep in mind also that "A" and "B" are not the characters A and B but defined as special
// characters "space" and "solid block"

//            0      1      2      3      4      5      6      7      8      9    
char bn1[]={B,2,1, 2,1,A, 2,2,1, 2,2,1, 0,A,B, B,2,2, B,2,2, 2,2,B, B,2,1, B,2,1};
char bn2[]={B,A,B, A,B,A ,0,6,5, A,2,1, 5,6,B, 2,2,1, B,6,7, A,0,5, B,6,B, 5,6,B};
char bn3[]={4,3,B, 3,B,3, B,3,3, 4,3,B, A,A,B, 4,3,B, 4,3,B, A,B,A, 4,3,B, A,A,B};

// Functions for printing two large digits. Value is the column number
// and number is the number to print. Works from 00-99

void printTwoNumber(byte value, byte number){

  LCD_setCursor(value,1);  // Printing line 1 of the two-digit number
  Serial2.write(bn1[(number/10)*3]);
  Serial2.write(bn1[(number/10)*3+1]);
  Serial2.write(bn1[(number/10)*3+2]);
  Serial2.write(A); // Blank, not the character A
  Serial2.write(bn1[(number%10)*3]);
  Serial2.write(bn1[(number%10)*3+1]);
  Serial2.write(bn1[(number%10)*3+2]);

  LCD_setCursor(value,2);  // Printing line 2 of the two-digit number
  Serial2.write(bn2[(number/10)*3]);
  Serial2.write(bn2[(number/10)*3+1]);
  Serial2.write(bn2[(number/10)*3+2]);
  Serial2.write(A); // Blank, not the character A
  Serial2.write(bn2[(number%10)*3]);
  Serial2.write(bn2[(number%10)*3+1]);
  Serial2.write(bn2[(number%10)*3+2]);

  LCD_setCursor(value,3);  // Printing line 3 of the two-digit number
  Serial2.write(bn3[(number/10)*3]);
  Serial2.write(bn3[(number/10)*3+1]);
  Serial2.write(bn3[(number/10)*3+2]);
  Serial2.write(A); // Blank, not the character A
  Serial2.write(bn3[(number%10)*3]);
  Serial2.write(bn3[(number%10)*3+1]);
  Serial2.write(bn3[(number%10)*3+2]);
}
