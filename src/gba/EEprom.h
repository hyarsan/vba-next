#ifndef EEPROM_H
#define EEPROM_H

extern void eepromReadGameMem(const uint8_t *&data, int version);
extern void eepromSaveGameMem(uint8_t *&data);

extern int eepromRead(u32 address);
extern void eepromWrite(u32 address, u8 value);
extern void eepromInit();
extern void eepromReset();

#ifdef __LIBSNES__
extern u8 *eepromData;
#else
extern u8 eepromData[0x2000];
#endif

extern bool eepromInUse;
extern int eepromSize;

#define EEPROM_IDLE           0
#define EEPROM_READADDRESS    1
#define EEPROM_READDATA       2
#define EEPROM_READDATA2      3
#define EEPROM_WRITEDATA      4

#endif // EEPROM_H
