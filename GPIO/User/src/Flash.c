#include "Flash.h"

uint32_t Read_Flash(uint32_t Data_adr)
{
	return *(uint32_t*) Data_adr;
}


void Write_Flash(uint32_t Data_adr, uint32_t Data)
{
	FLASH_Unlock();
	
	//FLASH_EraseSector(FLASH_Sector_5, VoltageRange_3);
	FLASH_ProgramWord(Data_adr, Data);
	
	FLASH_Lock();
}
