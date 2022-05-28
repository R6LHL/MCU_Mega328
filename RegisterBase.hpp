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
	
};

#endif //_REGISTER_BASE_HPP
