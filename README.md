# ATTiny13A_overflow_interrupt
A minimal example how to implement an overflow interrupt on ATTiny13A

In this example is the MCU clock 9.6 MHz and no Prescaling is selected. The counter TCNT0 (8Bit) will count to 255 and the trigger the overflow interrupt (with the frequency of 37.5 kHz). Every interrupt the port B4 status will change from LOW to HIGH amd from HIGH to LOW (with the frequency of 37.5 / 2 = 18.75 kHz).
