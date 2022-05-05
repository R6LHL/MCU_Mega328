#ifndef _REGISTER_BASE_HPP
#define _REGISTER_BASE_HPP

template<uint32_t address, size_t size, typename AccessMode>
struct RegisterBase
{
	static constexpr auto Addr = address;
	using Type = typename RegisterType<size>::Type;
	
	//Метод Set будет работать только для регистров, 
	//в которые можно записать значение
	__inline template<typename T = AccessMode,
     class = typename std::enable_if_t<std::is_base_of<WriteMode, T>::value>>
	 inline static void Set(Type value)
  {
    *reinterpret_cast<volatile Type *>(address) = value ;
  }
  
  //Метод Get возвращает целое значение регистра, 
  //будет работать только для регистров, которые можно считать
  __inline template<typename T = AccessMode,
     class = typename std::enable_if_t<std::is_base_of<ReadMode, T>::value>>
  inline static Type Get()
  {
    return *reinterpret_cast<volatile Type *>(address) ;
  }
	
};

//Режим доступа к регистрам
struct WriteMode {}; 
struct ReadMode {}; 
struct ReadWriteMode: public WriteMode, public ReadMode {};

//Тип регистров в зависимости от размера

template <uint32_t size>
struct RegisterType {} ;

template<>
struct RegisterType<8>
{
  using Type = uint8_t ;
} ;

template<>
struct RegisterType<16>
{
  using Type = uint16_t ;
} ;

template<>
struct RegisterType<32>
{
  using Type = uint32_t ;
} ;

template<>
struct RegisterType<64>
{
  using Type = uint64_t ;
} ;

#endif //_REGISTER_BASE_HPP