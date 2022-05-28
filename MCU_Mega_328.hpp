#ifndef _MCU_Mega328_HPP
#define _MCU_Mega328_HPP

#include "RegisterBase.hpp"

// Atmega328 MicroController Unit 
namespace MCU_Mega328
{
	
	namespace IO_
	{
		// IO port B		
		struct PINB_ : public RegisterBase<0x23, 8, ReadWriteMode> {};
		
		struct DDRB_ : public RegisterBase<0x24, 8, ReadWriteMode> {};
		
		struct PORTB_ : public RegisterBase<0x25, 8, ReadWriteMode>{};
		// end IO port B
		
		// IO port C
		struct PINC_ : public RegisterBase<0x26, 8, ReadWriteMode> {};
		
		struct DDRC_ : public RegisterBase<0x27, 8, ReadWriteMode> {};
		
		struct PORTC_ : public RegisterBase<0x28, 8, ReadWriteMode> {};
		// end IO port C
		
		// IO port D
		struct PIND_ : public RegisterBase<0x29, 8, ReadWriteMode> {};
		
		struct DDRD_ : public RegisterBase<0x2A, 8, ReadWriteMode> {};
		
		struct PORTD_ : public RegisterBase<0x2B, 8, ReadWriteMode>	{};
		// end IO port D
		
		//Digital input disable register 0
		struct DIDR0_ : public RegisterBase<0x7e, 8, ReadWriteMode> {};
		// end Digital input disable register 0
		
		//Digital input disable register 1
		struct DIDR1_ : public RegisterBase<0x7f, 8, ReadWriteMode> {};
		// end Digital input disable register 1
		
	} // end IO
	
	namespace TC_ //Timer_counters
	{
	
		//General TC control register
		struct GTCCR_ : public RegisterBase<0x43, 8, ReadWriteMode>	{};
		//end General TC control register
		
		namespace TC0_ // Timer-counter 0 8bit
		{
			//TC0_ flag register
			struct TIFR0_ : public RegisterBase<0x35, 8, ReadWriteMode> {};
			// end TC0_ flag register
		
			// TC0_ control register A
			struct TCCR0A_ : public RegisterBase<0x44, 8, ReadWriteMode> {};
			//end  TC0_ control register A
		
			// TC0_ control register B
			struct TCCR0B_ : public RegisterBase<0x45, 8, ReadWriteMode> {};
			//end TC0_ control register B
		
			// TC0_ interrupt mask register
			struct TIMSK0_ : public RegisterBase<0x6e, 8, ReadWriteMode> {};
			// end TC0_ interrupt mask register
			
			// TC0_ Counter value register
			struct TCNT0_ : public RegisterBase<0x46, 8, ReadWriteMode> {};
			// end TC0_ Counter value register
			
			// TC0_ output compare register A
			struct OCR0A_ : public RegisterBase<0x47, 8, ReadWriteMode> {};
			//end TC0_ output compare register A
			
			// TC0_ output compare register B
			struct OCR0B_ : public RegisterBase<0x48, 8, ReadWriteMode> {};
			//end TC0_ output compare register B
						
		} //end Timer-counter 0
		
		namespace TC1_ // Timer-counter 1 16bit
		{
			//TC1_ control register A
			struct TCCR1A_ : public RegisterBase<0x80, 8, ReadWriteMode> {}; 
			//end TC1_ control register A
			
			//TC1_ control register B
			struct TCCR1B_ : public RegisterBase<0x81, 8, ReadWriteMode> {};
			//end TC1_ control register B
			
			//TC1_ control register C
			struct TCCR1C_ : public RegisterBase<0x82, 8, ReadWriteMode> {};
			//end TC1_ control register C
			
			//?????????????????Access????????????????????????????????????
			// TC1_ Counter value low byte
			struct TCNT1L_ : public RegisterBase<0x84, 8, ReadWriteMode> {};
			//end TC1_ Counter value low byte
			
			// TC1_ Counter value high byte
			struct TCNT1H_ : public RegisterBase<0x85, 8, ReadWriteMode> {};
			//end TC1_ Counter value high byte
			//?????????????????Access????????????????????????????????????
			
			//?????????????????Access????????????????????????????????????
			// TC1_ input capture register 1 low byte
			struct ICR1L_ : public RegisterBase<0x86, 8, ReadWriteMode> {};
			//end TC1_ input capture register1 low byte
			
			// TC1_ input capture register 1 high byte
			struct ICR1H_ : public RegisterBase<0x87, 8, ReadWriteMode> {};
			//end TC1_ input capture register 1 high byte
			//?????????????????Access????????????????????????????????????
			
			//TC1_ Output compare register 1 A low byte
			struct OCR1AL_ : public RegisterBase<0x88, 8, ReadWriteMode> {};
			//end TC1_ Output compare register 1 A low byte
			
			//TC1_ Output compare register 1 A high byte
			struct OCR1AH_ : public RegisterBase<0x89, 8, ReadWriteMode> {};
			//end TC1_ Output compare register 1 A high byte
			
			//TC1_ Output compare register 1 B low byte
			struct OCR1BL_ : public RegisterBase<0x8a, 8, ReadWriteMode> {};
			//end TC1_ Output compare register 1 B low byte
			
			//TC1_ Output compare register 1 B high byte
			struct OCR1BH_ : public RegisterBase<0x8b, 8, ReadWriteMode> {};
			//end TC1_ Output compare register 1 B high byte
			
			//TC1_ interrupt mask register
			struct TIMSK1_ : public RegisterBase<0x6f, 8, ReadWriteMode> {};
			// end TC1_ interrupt mask register
			
			//TC1_ interrupt flag register
			struct TIFR1_ : public RegisterBase<0x36, 8, ReadWriteMode> {};
			// end TC1_ interrupt flag register
					
		}//end  Timer-counter 1 16bit
		
		namespace TC2_ // Timer-counter 2 8bit
		{
			//TC2_ control register A
			struct TCCR2A_ : public RegisterBase<0xb0, 8, ReadWriteMode> {};
			// end TC2_ control register A
			
			//TC2_ control register B
			struct TCCR2B_ : public RegisterBase<0xb1, 8, ReadWriteMode> {};
			// end TC2_ control register B
			
			//TC2_ counter value register
			struct TCNT2_ : public RegisterBase<0xb2, 8, ReadWriteMode> {};
			// end TC2_ counter value register
			
			//TC2_ output compare register A
			struct OCR2A_ : public RegisterBase<0xb3, 8, ReadWriteMode> {};
			// end TC2_ output compare register A
			
			//TC2_ output compare register B
			struct OCR2B_ : public RegisterBase<0xb4, 8, ReadWriteMode> {};
			// end TC2_ output compare register B
			
			//TC2_ iterrupt mask register
			struct TIMSK2_ : public RegisterBase<0x70, 8, ReadWriteMode> {};
			// end TC2_ iterrupt mask register
			
			//TC2_ iterrupt flag register
			struct TIFR2_ : public RegisterBase<0x37, 8, ReadWriteMode> {};
			// end TC2_ iterrupt flag register
			
			//Asynchronous status register
			struct ASSR_ : public RegisterBase<0xb6, 8, ReadWriteMode> {};
			//end Asynchronous status register
			
		}// end Timer-counter 2 8bit
	}//end Timer_counters
	
	
	//Serial-peripherial interface
	namespace SPI_
	{
		//SPI_ control register 0
		struct SPCR0_ : public RegisterBase<0x4c, 8, ReadWriteMode> {};
		//end SPI_ control register 0
		
		//SPI_ status register 0
		struct SPSR0_ : public RegisterBase<0x4d, 8, ReadWriteMode> {};
		// end SPI_ status register 0
		
		//SPI_ data register 0
		struct SPDR0_ : public RegisterBase<0x4e, 8, ReadWriteMode> {};
		//end SPI_ data register 0

	}// end Serial-peripherial interface
	
	//Universal synchronous/asynchronous receiver/transmitter
	namespace USART_
	{
		//USART0 data register
		struct UDR0_ : public RegisterBase<0xc6, 8, ReadWriteMode> {};
		//end USART0 data register
		
		//USART control and status register 0A
		struct UCSR0A_ : public RegisterBase<0xc0, 8 , ReadWriteMode> {};
		//end USART control and status register 0A
		
		//USART control and status register 0B
		struct UCSR0B_ : public RegisterBase<0xc1, 8 , ReadWriteMode> {};
		//end USART control and status register 0B
		
		//USART control and status register 0C
		struct UCSR0C_ : public RegisterBase<0xc2, 8 , ReadWriteMode> {};
		//end USART control and status register 0C
		
		//USART buad rate 0 register low
		struct UBRR0L_ : public RegisterBase<0xc4, 8 , ReadWriteMode> {};
		// end USART buad rate 0 register low
		
		//USART buad rate 0 register high
		struct UBRR0H_ : public RegisterBase<0xc5, 8 , ReadWriteMode> {};
		// end USART buad rate 0 register high
			
	}// end Universal synchronous/asynchronous receiver/transmitter
	
	// Two-wire interface
	namespace TWI_
	{
		//TWI Bit rate register
		struct TWBR_ : public RegisterBase<0xb8, 8, ReadWriteMode> {};
		// end TWI Bit rate register
		
		//TWI status register
		struct TWSR_ : public RegisterBase<0xb9, 8, ReadWriteMode> {};
		// end TWI status register
		
		//TWI(slave) address register
		struct TWAR_ : public RegisterBase<0xba, 8, ReadWriteMode> {};
		// end TWI(slave) address register
		
		//TWI data register
		struct TWDR_ : public RegisterBase<0xbb, 8, ReadWriteMode> {};
		// end TWI data register
		
		//TWI control register
		struct TWCR_ : public RegisterBase<0xbc, 8, ReadWriteMode> {};
		// end TWI control register
		
		//TWI(slave) address mask register
		struct TWAMR_ : public RegisterBase<0xbd, 8, ReadWriteMode> {};
		//end TWI(slave) address mask register	
		
	}// end Two-wire interface
	
	//Analog comparator
	namespace AC_
	{
		/*
		//ADC control and status register B
		struct ADCSRB_ : public RegisterBase<0x7b, 8,  ReadWriteMode>{};
		// end ADC control and status register B
		*/
		
		//Analog comparator control and status register
		struct ACSR_ : public RegisterBase<0x50, 8,  ReadWriteMode> {};
		// end Analog comparator control and status register
				
	}// end Analog comparator
	
	//Analog to digital converter
	namespace ADC_
	{
		//ADC multiplexer selection register
		struct ADMUX_ : public RegisterBase<0x7c, 8, ReadWriteMode> {};
		// end ADC multiplexer selection register
		
		//ADC control and status register A
		struct ADCSRA_ : public RegisterBase<0x7a, 8, ReadWriteMode> {};
		// end ADC control and status register A
		
		//ADC control and status register B
		struct ADCSRB_ : public RegisterBase<0x7b, 8,  ReadWriteMode> {};
		// end ADC control and status register B
		
		//ADC data register low
		struct ADCL_ : public RegisterBase<0x78, 8,  ReadMode> {};
		// end ADC data register low
		
		//ADC data register high
		struct ADCH_ : public RegisterBase<0x79, 8,  ReadMode> {};
		// end ADC data register high

	}// end Analog to digital converter
	
	//Debug Wire on-chip debug system
	namespace DW_
	{
		//debugWire data register
		struct DWDR_ : public RegisterBase<0x51, 8,  ReadWriteMode> {};
		//end debugWire data register
		
	}// end Debug Wire on-chip debug system
	
	//Self_programming
	namespace Self_programming_
	{
		//Store program memory control and status register
		struct SPMCSR_ : public RegisterBase<0x57, 8,  ReadWriteMode> {};
		//end Store program memory control and status register
		
	} //end Self_programming
	
};// Atmega328 MicroController Unit 

#endif //_MCU_Mega328_HPP