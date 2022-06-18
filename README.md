# MCU_Mega328
Интерфейсный класс для микроконтроллера AVR8 Mega328.

Идея позаимствована отсюда: https://habr.com/ru/post/459642/


## Описание функций

### 18.06.22 Добавлены функции управления питанием в регистре PRR
```C++
//ADC power management
MCU::Core::ADC_powerUp();
MCU::Core::ADC_powerDown();

//USART0 power management
MCU::Core::USART0_powerUp();
MCU::Core::USART0_powerDown();

//SPI0 power management
MCU::Core::SPI0_powerUp();
MCU::Core::SPI0_powerDown();

//Timer1 power management
MCU::Core::TC1_powerUp();
MCU::Core::TC1_powerDown();

//Timer0 power management
MCU::Core::TC0_powerUp();
MCU::Core::TC0_powerDown();

//Timer2 power management
MCU::Core::TC2_powerUp();
MCU::Core::TC2_powerDown();

//TWI0 power management
MCU::Core::TWI0_powerUp();
MCU::Core::TWI0_powerDown();
```
