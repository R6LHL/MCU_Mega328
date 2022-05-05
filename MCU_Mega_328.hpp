#ifndef _MCU_Mega328_HPP
#define _MCU_Mega328_HPP

namespace MCU_Mega328
{
	
	namespace IO_
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
	} // end IO
	
	namespace TC_ //Timer_counters
	{
		
		//General TC control register
		struct GTCCR_ : public RegisterBase<0x43, 8, ReadWriteMode>
		{
		
		};//end General TC control register
	
	
		namespace TC0_ // Timer-counter 0 8bit
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
						
		} //end Timer-counter 0
		
		namespace TC1_ // Timer-counter 1 16bit
		{
			//TC1_ control register A
			struct TCCR1A_ : public RegisterBase<0x80, 8, ReadWriteMode>
			{
				
			}; //end TC1_ control register A
			
			//TC1_ control register B
			struct TCCR1B_ : public RegisterBase<0x81, 8, ReadWriteMode>
			{
				
			}; //end TC1_ control register B
			
			//TC1_ control register C
			struct TCCR1C_ : public RegisterBase<0x82, 8, ReadWriteMode>
			{
				
			}; //end TC1_ control register C
			
			//?????????????????Access????????????????????????????????????
			// TC1_ Counter value low byte
			struct TCNT1L_ : public RegisterBase<0x84, 8, ReadWriteMode>
			{
				
			};//end TC1_ Counter value low byte
			
			// TC1_ Counter value high byte
			struct TCNT1H_ : public RegisterBase<0x85, 8, ReadWriteMode>
			{
				
			};//end TC1_ Counter value high byte
			//?????????????????Access????????????????????????????????????
			
			//?????????????????Access????????????????????????????????????
			// TC1_ input capture register 1 low byte
			struct ICR1L_ : public RegisterBase<0x86, 8, ReadWriteMode>
			{
				
			};//end TC1_ input capture register1 low byte
			
			// TC1_ input capture register 1 high byte
			struct ICR1H_ : public RegisterBase<0x87, 8, ReadWriteMode>
			{
				
			};//end TC1_ input capture register 1 high byte
			//?????????????????Access????????????????????????????????????
			
			//TC1_ Output compare register 1 A low byte
			struct OCR1AL_ : public RegisterBase<0x88, 8, ReadWriteMode>
			{
				
			};//end TC1_ Output compare register 1 A low byte
			
			//TC1_ Output compare register 1 A high byte
			struct OCR1AH_ : public RegisterBase<0x89, 8, ReadWriteMode>
			{
				
			};//end TC1_ Output compare register 1 A high byte
			
			//TC1_ Output compare register 1 B low byte
			struct OCR1BL_ : public RegisterBase<0x8a, 8, ReadWriteMode>
			{
				
			};//end TC1_ Output compare register 1 B low byte
			
			//TC1_ Output compare register 1 B high byte
			struct OCR1BH_ : public RegisterBase<0x8b, 8, ReadWriteMode>
			{
				
			};//end TC1_ Output compare register 1 B high byte
			
			//TC1_ interrupt mask register
			struct TIMSK1_ : public RegisterBase<0x6f, 8, ReadWriteMode>
			{
				
			};// end TC1_ interrupt mask register
			
			//TC1_ interrupt flag register
			struct TIFR1_ : public RegisterBase<0x36, 8, ReadWriteMode>
			{
				
			};// end TC1_ interrupt flag register
					
		}//end  Timer-counter 1 16bit
		
		namespace TC2_ // Timer-counter 2 8bit
		{
			//TC2_ control register A
			struct TCCR2A_ : public RegisterBase<0xb0, 8, ReadWriteMode>
			{
				
			};// end TC2_ control register A
			
			//TC2_ control register B
			struct TCCR2B_ : public RegisterBase<0xb1, 8, ReadWriteMode>
			{
				
			};// end TC2_ control register B
			
			//TC2_ counter value register
			struct TCNT2_ : public RegisterBase<0xb2, 8, ReadWriteMode>
			{
				
			};// end TC2_ counter value register
			
			//TC2_ output compare register A
			struct OCR2A_ : public RegisterBase<0xb3, 8, ReadWriteMode>
			{
				
			};// end TC2_ output compare register A
			
			//TC2_ output compare register B
			struct OCR2B_ : public RegisterBase<0xb4, 8, ReadWriteMode>
			{
				
			};// end TC2_ output compare register B
			
			//TC2_ iterrupt mask register
			struct TIMSK2_ : public RegisterBase<0x70, 8, ReadWriteMode>
			{
				
			};// end TC2_ iterrupt mask register
			
			//TC2_ iterrupt flag register
			struct TIFR2_ : public RegisterBase<0x37, 8, ReadWriteMode>
			{
				
			};// end TC2_ iterrupt flag register
			
			//Asynchronous status register
			struct ASSR_ : public RegisterBase<0xb6, 8, ReadWriteMode>
			{
				
			};//end Asynchronous status register
			
		}// end Timer-counter 2 8bit
	}//end Timer_counters
	
	
	//Serial-peripherial interface
	namespace SPI_
	{
		//SPI_ control register 0
		struct SPCR0_ : public RegisterBase<0x4c, 8, ReadWriteMode>
		{
		
		}; //end SPI_ control register 0
		
		//SPI_ status register 0
		struct SPSR0_ : public RegisterBase<0x4d, 8, ReadWriteMode>
		{
			
		};// end SPI_ status register 0
		
		//SPI_ data register 0
		struct SPDR0_ : public RegisterBase<0x4e, 8, ReadWriteMode>
		{
			
		};//end SPI_ data register 0

	}// end Serial-peripherial interface
	
};


#endif //_MCU_Mega328_HPP