/*
 * http://brickostan.com/arduino-lpf/
 */




#ifndef Arduino_LPF_values_h
#define Arduino_LPF_values_h 




#define LPF_MSG_BITCOUNT    16
#define LPF_RED             B0
#define LPF_BLUE            B1
#define LPF_MAX_SPEED        7
#define LPF_LRC_CHECK_BITS 0xF




//IR times (38 KHz)

#define LPF_IR_PULSE                 13
#define LPF_IR_TRANSMIT              ( 12 * LPF_IR_PULSE ) //6 IR pulses with pause between

#define LPF_IR_LOW                  421
#define LPF_IR_LOW_MIN              316
#define LPF_IR_LOW_MAX              526
#define LPF_IR_LOW_SILENCE          ( LPF_IR_LOW - LPF_IR_TRANSMIT )

#define LPF_IR_HIGH                 711
#define LPF_IR_HIGH_MIN             526
#define LPF_IR_HIGH_MAX             947
#define LPF_IR_HIGH_SILENCE         ( LPF_IR_HIGH - LPF_IR_TRANSMIT )

#define LPF_IR_STARTSTOP           1184
#define LPF_IR_STARTSTOP_MIN        947
#define LPF_IR_STARTSTOP_MAX       1579
#define LPF_IR_STARTSTOP_SILENCE    ( LPF_IR_STARTSTOP - LPF_IR_TRANSMIT )




//NIBBLES - one nibble = 8 bit
#define LPF_NIBBLE1_BITS_FULL   0xF000
#define LPF_NIBBLE1_SHIFT_FULL  12
#define LPF_NIBBLE2_BITS_FULL   0x0F00
#define LPF_NIBBLE2_SHIFT_FULL  8
#define LPF_NIBBLE3_BITS_FULL   0x00F0
#define LPF_NIBBLE3_SHIFT_FULL  4
#define LPF_NIBBLE4_BITS_FULL   0x000F
#define LPF_NIBBLE4_SHIFT_FULL  0




//NIBBLE 1:

//Bit 15 - TOGGLE:
#define LPF_TOGGLE_BITS_NIBBLE    B1000
#define LPF_TOGGLE_SHIFT_NIBBLE   3
#define LPF_TOGGLE_BITS_FULL      (lpf_msg) ( LPF_TOGGLE_BITS_NIBBLE << LPF_NIBBLE1_SHIFT_FULL )
#define LPF_TOGGLE_SHIFT_FULL     (byte)    ( LPF_TOGGLE_SHIFT_NIBBLE + LPF_NIBBLE1_SHIFT_FULL )

//Bit 14 - ESCAPE:
#define LPF_ESCAPE_BITS_NIBBLE    B0100
#define LPF_ESCAPE_SHIFT_NIBBLE   2
#define LPF_ESCAPE_BITS_FULL      (lpf_msg) ( LPF_ESCAPE_BITS_NIBBLE << LPF_NIBBLE1_SHIFT_FULL )
#define LPF_ESCAPE_SHIFT_FULL     (byte)    ( LPF_ESCAPE_SHIFT_NIBBLE + LPF_NIBBLE1_SHIFT_FULL )

//Fix som oven for fix fix fix fix fix fix fix fix fix fix fix fix fix fix fix fix fix fix fix fix fix fix fix fix fix fix fix fix fix fix fix fix fix fix fix fix fix fix fix
//Bit 13+12 - CHANNEL:
#define LPF_CHANNEL_BITS_NIBBLE   B0011
#define LPF_CHANNEL_SHIFT_NIBBLE  0
#define LPF_CHANNEL_BITS_FULL     (lpf_msg) ( LPF_CHANNEL_BITS_NIBBLE << LPF_NIBBLE1_SHIFT_FULL )
#define LPF_CHANNEL_SHIFT_FULL    (byte)    ( LPF_CHANNEL_SHIFT_NIBBLE + LPF_NIBBLE1_SHIFT_FULL )




//NIBBLE 2:

//Bit 11 - ADDRESS:
#define LPF_ADDRESS_BITS_NIBBLE   B1000
#define LPF_ADDRESS_SHIFT_NIBBLE  3
#define LPF_ADDRESS_BITS_FULL     (lpf_msg) ( LPF_ADDRESS_BITS_NIBBLE << LPF_NIBBLE2_SHIFT_FULL )
#define LPF_ADDRESS_SHIFT_FULL    (byte)    ( LPF_ADDRESS_SHIFT_NIBBLE + LPF_NIBBLE2_SHIFT_FULL )


//Bit 10+9+8:
#define LPF_MODE_BITS_NIBBLE      B0111
#define LPF_MODE_SHIFT_NIBBLE     0
#define LPF_MODE_BITS_FULL        (lpf_msg) ( LPF_MODE_BITS_NIBBLE << LPF_NIBBLE2_SHIFT_FULL )
#define LPF_MODE_SHIFT_FULL       (byte)    ( LPF_MODE_SHIFT_NIBBLE + LPF_NIBBLE2_SHIFT_FULL )




//NIBBLE 3:

//this nipple depends on mode etc.




//NIBBLE 4:

//Bit 3+2+1+0:
#define LPF_LRC_BITS_FULL       0x000F
#define LPF_LRC_SHIFT_FULL      0




//Modes
#define LPF_MODE_SINGLE         B100
#define LPF_MODE_RESERVED       B010
#define LPF_MODE_COMBO_DIRECT   B001
#define LPF_MODE_EXTENDED       B000




//Single mode
#define LPF_MODE_SINGLE_CSTID   B010 //Clear/Set/Toggle/Inc/Dec
#define LPF_MODE_SINGLE_PWM     B000 //PWM
#define LPF_MODE_SINGLE_OUTPUTBITMASK  B001
#define LPF_MODE_SINGLE_OUTPUT0        LPF_RED
#define LPF_MODE_SINGLE_OUTPUT1        LPF_BLUE




//Databits in Single mode/PWM
#define LPF_MODE_SINGLE_PWM_FLOAT      B0000
#define LPF_MODE_SINGLE_PWM_BRAKEFLOAT B1000
#define LPF_MODE_SINGLE_PWM_FORWARDX   B0000
#define LPF_MODE_SINGLE_PWM_FORWARD1   B0001
#define LPF_MODE_SINGLE_PWM_FORWARD2   B0010
#define LPF_MODE_SINGLE_PWM_FORWARD3   B0011
#define LPF_MODE_SINGLE_PWM_FORWARD4   B0100
#define LPF_MODE_SINGLE_PWM_FORWARD5   B0101
#define LPF_MODE_SINGLE_PWM_FORWARD6   B0110
#define LPF_MODE_SINGLE_PWM_FORWARD7   B0111
#define LPF_MODE_SINGLE_PWM_BACKWARDX  B1000
#define LPF_MODE_SINGLE_PWM_BACKWARD1  B1001
#define LPF_MODE_SINGLE_PWM_BACKWARD2  B1010
#define LPF_MODE_SINGLE_PWM_BACKWARD3  B1011
#define LPF_MODE_SINGLE_PWM_BACKWARD4  B1100
#define LPF_MODE_SINGLE_PWM_BACKWARD5  B1101
#define LPF_MODE_SINGLE_PWM_BACKWARD6  B1110
#define LPF_MODE_SINGLE_PWM_BACKWARD7  B1111

#define LPF_MODE_SINGLE_PWM_BRAKEFLOAT_FULL_LOOKAT ( B0000 << 12 | B0110 << 8 | B1111 << 4 | B0000 ) //look at these bits to see if brake/float is pressed
#define LPF_MODE_SINGLE_PWM_BRAKEFLOAT_FULL_VALUES ( B0000 << 12 | B0100 << 8 | B1000 << 4 | B0000 ) //check if bits have these values if brake/float i pressed

#define LPF_MODE_SINGLE_OUTPUT_FULL_LOOKAT         ( B0000 << 12 | B0101 << 8 | B0000 << 4 | B0000 )
#define LPF_MODE_SINGLE_OUTPUT_FULL_VALUES         ( B0000 << 12 | B0001 << 8 | B0000 << 4 | B0000 )
#define LPF_MODE_SINGLE_OUTPUT_FULL_SHIFT          8




//Databits in Combo Direct mode

#define LPF_MODE_COMBO_DIRECT_FLOAT                B00
#define LPF_MODE_COMBO_DIRECT_FORWARD              B01
#define LPF_MODE_COMBO_DIRECT_BACKWARD             B10
#define LPF_MODE_COMBO_DIRECT_BRAKE                B11

//Bit 7+6 in Combo Direct mode (RED):
#define LPF_MODE_COMBO_DIRECT_OUTPUT0_BITS_NIBBLE      B0011
#define LPF_MODE_COMBO_DIRECT_OUTPUT0_SHIFT_NIBBLE     0
#define LPF_MODE_COMBO_DIRECT_OUTPUT0_BITS_FULL        (lpf_msg) ( LPF_MODE_COMBO_DIRECT_OUTPUT0_BITS_NIBBLE << LPF_NIBBLE3_SHIFT_FULL )
#define LPF_MODE_COMBO_DIRECT_OUTPUT0_SHIFT_FULL       (byte)    ( LPF_MODE_COMBO_DIRECT_OUTPUT0_SHIFT_NIBBLE + LPF_NIBBLE3_SHIFT_FULL )

//Bit 5+4 in Combo Direct mode (BLUE):
#define LPF_MODE_COMBO_DIRECT_OUTPUT1_BITS_NIBBLE      B1100
#define LPF_MODE_COMBO_DIRECT_OUTPUT1_SHIFT_NIBBLE     2
#define LPF_MODE_COMBO_DIRECT_OUTPUT1_BITS_FULL        (lpf_msg) ( LPF_MODE_COMBO_DIRECT_OUTPUT1_BITS_NIBBLE << LPF_NIBBLE3_SHIFT_FULL )
#define LPF_MODE_COMBO_DIRECT_OUTPUT1_SHIFT_FULL       (byte)    ( LPF_MODE_COMBO_DIRECT_OUTPUT1_SHIFT_NIBBLE + LPF_NIBBLE3_SHIFT_FULL )




#endif
