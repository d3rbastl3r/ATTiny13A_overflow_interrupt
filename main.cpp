/**
 * A minimal example how to implement an overflow interrupt on ATTiny13A
 *
 * @author Igor Martens
 * @since 06.09.2018
 */

#define F_CPU 9600000

#include <avr/io.h>
#include <avr/interrupt.h>

volatile bool isPB4Low = false; // Variable which hold the status of PB4 to switch it

ISR(TIM0_OVF_vect) {
	if (isPB4Low) {
		PORTB &= ~(1<<PB4);
	} else {
		PORTB |= (1<<PB4);
	}

	isPB4Low = !isPB4Low;
}

void setup() {
    DDRB |= (1<<DDB4);		// Setup the output port

    TCCR0B = (1<<CS00);		// Clock frequency with no prescaling
	TIMSK0 = (1<<TOIE0);	// Enable overflow interrupt
	TCNT0 = 0;              // Set counter 0 to zero (8Bit Couner = 256)

    sei(); // Enable interrupts
}

int main(void) {
    setup();

    while(1) {
		// Nothing to do here
    }

    return 0;
}
