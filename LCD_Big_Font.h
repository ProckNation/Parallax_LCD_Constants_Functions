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
                                                                                                                                                    
