#ifndef _MCU_Mega328_HPP
#define _MCU_Mega328_HPP

#include "RegisterBase.hpp"

// Atmega328 MicroController Unit 
namespace MCU_Mega328
{
	
	namespace IO_
	{
		// IO port B		
		struct PINB_ : public RegisterBase<0x23> {};
		
		struct DDRB_ : public RegisterBase<0x24> {};
		
		struct PORTB_ : public RegisterBase<0x25>{};
		// end IO port B
		
		// IO port C
		struct PINC_ : public RegisterBase<0x26> {};
		
		struct DDRC_ : public RegisterBase<0x27> {};
		
		struct PORTC_ : public RegisterBase<0x28> {};
		// end IO port C
		
		// IO port D
		struct PIND_ : public RegisterBase<0x29> {};
		
		struct DDRD_ : public RegisterBase<0x2A> {};
		
		struct PORTD_ : public RegisterBase<0x2B>	{};
		// end IO port D
		
		//Digital input disable register 0
		struct DIDR0_ : public RegisterBase<0x7e> {};
		// end Digital input disable register 0
		
		//Digital input disable register 1
		struct DIDR1_ : public RegisterBase<0x7f> {};
		// end Digital input disable register 1
		
		//General purpose IO register 0
		struct GPIOR0_ : public RegisterBase<0x3e> {};
		//end General purpose IO register 0
		
		//General purpose IO register 1
		struct GPIOR1_ : public RegisterBase<0x4a> {};
		//end General purpose IO register 1
		
		//General purpose IO register 2
		struct GPIOR2_ : public RegisterBase<0x4b> {};
		//end General purpose IO register 2
		
	} // end IO
	
	namespace Core_
	{
		// Status register
		struct SREG_ : public RegisterBase<0x5f> {};
		// end Status register
		
		// Stack pointer register low
		struct SPL_ : public RegisterBase<0x5d> {};
		// end Stack pointer register low
		
		// Stack pointer register low
		struct SPH_ : public RegisterBase<0x5e> {};
		// end Stack pointer register low
		
		// MCU control register
		struct MCUCR_ : public RegisterBase<0x55> {};
		// end MCU control register
		
		// MCU status register
		struct MCUSR_ : public RegisterBase<0x54> {};
		// end MCU status register
		
		// Sleep mode control register
		struct SMCR_ : public RegisterBase<0x53> {};
		// end Sleep mode control register
		
		// Oscillator calibration register
		struct OSCCAL_ : public RegisterBase<0x66> {};
		// end Oscillator calibration register
		
		//Clock Precaler register
		struct CLKPR_ : public RegisterBase<0x61> {};
		// end Clock Precaler register
		
		//Watchdog timer control register
		struct WDTCSR_ : public RegisterBase<0x60> {};
		// end Watchdog timer control register
		
		//Power reduction register
		struct PRR_ : public RegisterBase<0x64> {};
		// end Power reduction register
		
	}// end MCU core control registers
	
	namespace EXINT_ //external interrupts
	{
		//External interrupt control register A
		struct EICRA_ : public RegisterBase<0x69> {};
		// end External interrupt control register A
		
		//External interrupt mask register
		struct EIMSK_ : public RegisterBase<0x3d> {};
		// end External interrupt mask register
		
		//External interrupt flag register
		struct EIFR_ : public RegisterBase<0x3c> {};
		// end External interrupt flag register
		
		//Pin Change Interrupt Control register
		struct PCICR_ : public RegisterBase<0x68> {};
		// end Pin Change Interrupt Control register
		
		//Pin Change Interrupt flag register
		struct PCIFR_ : public RegisterBase<0x3b> {};
		// end Pin Change Interrupt flag register
		
		//Pin Change mask register 2
		struct PCMSK2_ : public RegisterBase<0x6d> {};
		// end Pin Change mask register 2
		
		//Pin Change mask register 1
		struct PCMSK1_ : public RegisterBase<0x6c> {};
		// end Pin Change mask register 1
		
		//Pin Change mask register 0
		struct PCMSK0_ : public RegisterBase<0x6b> {};
		// end Pin Change mask register 0
		
	}// end external interrupts
	
	namespace TC_ //Timer_counters
	{
	
		//General TC control register
		struct GTCCR_ : public RegisterBase<0x43>	{};
		//end General TC control register
		
		namespace TC0_ // Timer-counter 0 8bit
		{
			//TC0_ flag register
			struct TIFR0_ : public RegisterBase<0x35> {};
			// end TC0_ flag register
		
			// TC0_ control register A
			struct TCCR0A_ : public RegisterBase<0x44> {};
			//end  TC0_ control register A
		
			// TC0_ control register B
			struct TCCR0B_ : public RegisterBase<0x45> {};
			//end TC0_ control register B
		
			// TC0_ interrupt mask register
			struct TIMSK0_ : public RegisterBase<0x6e> {};
			// end TC0_ interrupt mask register
			
			// TC0_ Counter value register
			struct TCNT0_ : public RegisterBase<0x46> {};
			// end TC0_ Counter value register
			
			// TC0_ output compare register A
			struct OCR0A_ : public RegisterBase<0x47> {};
			//end TC0_ output compare register A
			
			// TC0_ output compare register B
			struct OCR0B_ : public RegisterBase<0x48> {};
			//end TC0_ output compare register B
						
		} //end Timer-counter 0
		
		namespace TC1_ // Timer-counter 1 16bit
		{
			//TC1_ control register A
			struct TCCR1A_ : public RegisterBase<0x80> {}; 
			//end TC1_ control register A
			
			//TC1_ control register B
			struct TCCR1B_ : public RegisterBase<0x81> {};
			//end TC1_ control register B
			
			//TC1_ control register C
			struct TCCR1C_ : public RegisterBase<0x82> {};
			//end TC1_ control register C
			
			//?????????????????Access????????????????????????????????????
			// TC1_ Counter value low byte
			struct TCNT1L_ : public RegisterBase<0x84> {};
			//end TC1_ Counter value low byte
			
			// TC1_ Counter value high byte
			struct TCNT1H_ : public RegisterBase<0x85> {};
			//end TC1_ Counter value high byte
			//?????????????????Access????????????????????????????????????
			
			//?????????????????Access????????????????????????????????????
			// TC1_ input capture register 1 low byte
			struct ICR1L_ : public RegisterBase<0x86> {};
			//end TC1_ input capture register1 low byte
			
			// TC1_ input capture register 1 high byte
			struct ICR1H_ : public RegisterBase<0x87> {};
			//end TC1_ input capture register 1 high byte
			//?????????????????Access????????????????????????????????????
			
			//TC1_ Output compare register 1 A low byte
			struct OCR1AL_ : public RegisterBase<0x88> {};
			//end TC1_ Output compare register 1 A low byte
			
			//TC1_ Output compare register 1 A high byte
			struct OCR1AH_ : public RegisterBase<0x89> {};
			//end TC1_ Output compare register 1 A high byte
			
			//TC1_ Output compare register 1 B low byte
			struct OCR1BL_ : public RegisterBase<0x8a> {};
			//end TC1_ Output compare register 1 B low byte
			
			//TC1_ Output compare register 1 B high byte
			struct OCR1BH_ : public RegisterBase<0x8b> {};
			//end TC1_ Output compare register 1 B high byte
			
			//TC1_ interrupt mask register
			struct TIMSK1_ : public RegisterBase<0x6f> {};
			// end TC1_ interrupt mask register
			
			//TC1_ interrupt flag register
			struct TIFR1_ : public RegisterBase<0x36> {};
			// end TC1_ interrupt flag register
					
		}//end  Timer-counter 1 16bit
		
		namespace TC2_ // Timer-counter 2 8bit
		{
			//TC2_ control register A
			struct TCCR2A_ : public RegisterBase<0xb0> {};
			// end TC2_ control register A
			
			//TC2_ control register B
			struct TCCR2B_ : public RegisterBase<0xb1> 
			{
      /*
      Bit 7 – FOC2A: Force Output Compare A
      Bit 6 – FOC2B: Force Output Compare B
      Bit 3 – WGM22: Waveform Generation Mode
      Bits 2:0 – CS2[2:0]: Clock Select 2 [n = 0..2]
      */
			};
			// end TC2_ control register B
			
			//TC2_ counter value register
			struct TCNT2_ : public RegisterBase<0xb2> {};
			// end TC2_ counter value register
			
			//TC2_ output compare register A
			struct OCR2A_ : public RegisterBase<0xb3> {};
			// end TC2_ output compare register A
			
			//TC2_ output compare register B
			struct OCR2B_ : public RegisterBase<0xb4e> {};
			// end TC2_ output compare register B
			
			//TC2_ iterrupt mask register
			struct TIMSK2_ : public RegisterBase<0x70> {};
			// end TC2_ iterrupt mask register
			
			//TC2_ iterrupt flag register
			struct TIFR2_ : public RegisterBase<0x37> {};
			// end TC2_ iterrupt flag register
			
			//Asynchronous status register
			struct ASSR_ : public RegisterBase<0xb6> {};
			//end Asynchronous status register
			
		}// end Timer-counter 2 8bit
	}//end Timer_counters
	
	
	//Serial-peripherial interface
	namespace SPI_
	{
		//SPI_ control register 0
		struct SPCR0_ : public RegisterBase<0x4c> {};
		//end SPI_ control register 0
		
		//SPI_ status register 0
		struct SPSR0_ : public RegisterBase<0x4d> {};
		// end SPI_ status register 0
		
		//SPI_ data register 0
		struct SPDR0_ : public RegisterBase<0x4e> {};
		//end SPI_ data register 0

	}// end Serial-peripherial interface
	
	//Universal synchronous/asynchronous receiver/transmitter
	namespace USART_
	{
		//USART0 data register
		struct UDR0_ : public RegisterBase<0xc6> {};
		//end USART0 data register
		
		//USART control and status register 0A
		struct UCSR0A_ : public RegisterBase<0xc0> {};
		//end USART control and status register 0A
		
		//USART control and status register 0B
		struct UCSR0B_ : public RegisterBase<0xc1> {};
		//end USART control and status register 0B
		
		//USART control and status register 0C
		struct UCSR0C_ : public RegisterBase<0xc2> {};
		//end USART control and status register 0C
		
		//USART buad rate 0 register low
		struct UBRR0L_ : public RegisterBase<0xc4> {};
		// end USART buad rate 0 register low
		
		//USART buad rate 0 register high
		struct UBRR0H_ : public RegisterBase<0xc5> {};
		// end USART buad rate 0 register high
			
	}// end Universal synchronous/asynchronous receiver/transmitter
	
	// Two-wire interface
	namespace TWI_
	{
		//TWI Bit rate register
		struct TWBR_ : public RegisterBase<0xb8> {};
		// end TWI Bit rate register
		
		//TWI status register
		struct TWSR_ : public RegisterBase<0xb9> {};
		// end TWI status register
		
		//TWI(slave) address register
		struct TWAR_ : public RegisterBase<0xba> {};
		// end TWI(slave) address register
		
		//TWI data register
		struct TWDR_ : public RegisterBase<0xbb> {};
		// end TWI data register
		
		//TWI control register
		struct TWCR_ : public RegisterBase<0xbc> {};
		// end TWI control register
		
		//TWI(slave) address mask register
		struct TWAMR_ : public RegisterBase<0xbd> {};
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
		struct ACSR_ : public RegisterBase<0x50> {};
		// end Analog comparator control and status register
				
	}// end Analog comparator
	
	//Analog to digital converter
	namespace ADC_
	{
		//ADC multiplexer selection register
		struct ADMUX_ : public RegisterBase<0x7c> {};
		// end ADC multiplexer selection register
		
		//ADC control and status register A
		struct ADCSRA_ : public RegisterBase<0x7a> {};
		// end ADC control and status register A
		
		//ADC control and status register B
		struct ADCSRB_ : public RegisterBase<0x7b> {};
		// end ADC control and status register B
		
		//ADC data register low
		struct ADCL_ : public RegisterBase<0x78e> {};
		// end ADC data register low
		
		//ADC data register high
		struct ADCH_ : public RegisterBase<0x79> {};
		// end ADC data register high

	}// end Analog to digital converter
	
	//EEPROM
	namespace EEPROM_
	{
		// EEPROM address register high
		struct EEARH_ : public RegisterBase<0x42e> {};
		// end EEPROM address register high
		
		// EEPROM address register low
		struct EEARL_ : public RegisterBase<0x41> {};
		// end EEPROM address register low
		
		// EEPROM data register
		struct EEDR_ : public RegisterBase<0x40> {};
		// end EEPROM data register
		
		// EEPROM control register
		struct EECR_ : public RegisterBase<0x3f> {};
		// end EEPROM control register
				
	}// end EEPROM
	
	
	//Debug Wire on-chip debug system
	namespace DW_
	{
		//debugWire data register
		struct DWDR_ : public RegisterBase<0x51> {};
		//end debugWire data register
		
	}// end Debug Wire on-chip debug system
	
	//Self_programming
	namespace Self_programming_
	{
		//Store program memory control and status register
		struct SPMCSR_ : public RegisterBase<0x57> {};
		//end Store program memory control and status register
		
	} //end Self_programming
	
};// Atmega328 MicroController Unit 

#endif //_MCU_Mega328_HPP
