/*              Made By KosmicDaKerbal, Licensed under the GNU GPL V3.0
 *                            
 *                            GNU GENERAL PUBLIC LICENSE
 *                              Version 3, 29 June 2007
 *
 *        Copyright (C) 2007 Free Software Foundation, Inc. <https://fsf.org/>
 *        Everyone is permitted to copy and distribute verbatim copies
 *        of this license document, but changing it is not allowed.
 */
                       
 
#include "math.h"
void setup() {

}
void loop() {
}

/* Syntaxes:
 *  Init();                           -> Initializes Digital Pins - D0 as Serial Data; D1 as Ground Reference and D2 as Address Line.
 *  saveToROM (EEPROM Address);       -> Writes Software Bytes from SRAM to EEPROM starting from the mentioned address.
 *  loadFromROM (EEPROM Address);     -> Reads 10 Bytes from EEPROM starting from the mentioned address and loads it to SRAM.
 *  changeAddress (New Address);      -> Change VRAM Pointer Address to New Address.
 *  dumpRAMtoVRAM ();                 -> Loads Software Bytes from SRAM to VRAM.
 *  dumpROMtoVRAM (EEPROM Address);   -> Reads 10 Bytes from EEPROM starting from the mentioned address and loads them to VRAM Directly.  
 */
