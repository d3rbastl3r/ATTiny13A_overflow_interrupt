/**
 * A minimal example how to implement an overflow interrupt on ATTiny13A
 *
 * @author Igor Martens
 * @since 06.09.2018
 */

#define F_CPU 9600000

#include <avr/io.h>
#include <avr/interrupt.h>

void setup() {}

int main(void) {
    setup();

    while(1) {
    }

    return 0;
}
