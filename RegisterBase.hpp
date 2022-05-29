#ifndef _REGISTER_BASE_HPP
#define _REGISTER_BASE_HPP

template<uint32_t address>
struct RegisterBase
{
	static constexpr auto Addr = address ;
	
  inline static void Set(uint8_t value)
  {
    *reinterpret_cast<volatile uint8_t *>(address) = value ;
  }
  
  //Метод Get возвращает целое значение регистра, 
  inline static uint8_t Get()
  {
    return *reinterpret_cast<volatile uint8_t *>(address) ;
  }

  static void SetBit (uint8_t bit_number)
  {
    uint8_t byte_ = Get();
    byte_ |= (1<<bit_number);
    Set(byte_);
  }

  static void ClearBit (uint8_t bit_number)
  {
    uint8_t byte_ = Get();
    byte_ &= ~(1<<bit_number);
    Set(byte_);
  }
  
  virtual void SetAll(void){Set(0xFF);}
  virtual void ClearAll(void){Set(NULL);}
	
};

#endif //_REGISTER_BASE_HPP
