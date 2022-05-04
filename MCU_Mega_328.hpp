#ifndef _MCU_Mega328_HPP
#define _MCU_Mega328_HPP

struct MCU_Mega328
{
	
	struct IO_
	{
		// IO port B		
		struct PINB_ : public RegisterBase<0x23, 8, ReadWriteMode>
		{
			
		};
		
		struct DDRB_ : public RegisterBase<0x24, 8, ReadWriteMode>
		{
			
		};
		
		struct PORTB_ : public RegisterBase<0x25, 8, ReadWriteMode>
		{
			
		};
		// end IO port B
		
		// IO port C
		struct PINC_ : public RegisterBase<0x26, 8, ReadWriteMode>
		{
			
		};
		
		struct DDRC_ : public RegisterBase<0x27, 8, ReadWriteMode>
		{
			
		};
		
		struct PORTC_ : public RegisterBase<0x28, 8, ReadWriteMode>
		{
			
		};
		// end IO port C
		
		// IO port D
		struct PIND_ : public RegisterBase<0x26, 8, ReadWriteMode>
		{
			
		};
		
		struct DDRD_ : public RegisterBase<0x27, 8, ReadWriteMode>
		{
			
		};
		
		struct PORTD_ : public RegisterBase<0x28, 8, ReadWriteMode>
		{
			
		};
		// end IO port D
	}; // end IO
	
	//Timers
	//General TC control register
	struct GTCCR_ : public RegisterBase<0x43, 8, ReadWriteMode>
	{
		
	};//end General TC control register
	
	
	struct TC0_ // Timer-counter 0
	{
		//TC0_ flag register
		struct TIFR0_ : public RegisterBase<0x35, 8, ReadWriteMode>
		{
			
		};// end TC0_ flag register
		
		// TC0_ control register A
		struct TCCR0A_ : public RegisterBase<0x44, 8, ReadWriteMode>
		{
			
		};//end  TC0_ control register A
		
		// TC0_ control register B
		struct TCCR0B_ : public RegisterBase<0x45, 8, ReadWriteMode>
		{
			
		}; //end TC0_ control register B
		
		// TC0_ interrupt mask register
		struct TIMSK0_ : public RegisterBase<0x6e, 8, ReadWriteMode>
		{
			
		};// end TC0_ interrupt mask register
		
		// TC0_ Counter value register
		struct TCNT0_ : public RegisterBase<0x46, 8, ReadWriteMode>
		{
			
		};// end TC0_ Counter value register
		
		// TC0_ output compare register A
		struct OCR0A_ : public RegisterBase<0x47, 8, ReadWriteMode>
		{
			
		};//end TC0_ output compare register A
		
		// TC0_ output compare register B
		struct OCR0B_ : public RegisterBase<0x48, 8, ReadWriteMode>
		{
			
		};//end TC0_ output compare register B
		
		
		
		
	}; //end Timer-counter 0
	
};


#endif //_MCU_Mega328_HPP