# 8x10-Pixel-Display-Driver-ATTiny13A
Software for the 8x10 Pixel Serial Display Driver for the ATTiny13A.

Download the ATTiny13A Board and Install it in the Arduino IDE: https://mcudude.github.io/MicroCore/package_MCUdude_MicroCore_index.json

A Tutorial showing how to program an ATTiny13A: https://www.instructables.com/Updated-Guide-on-How-to-Program-an-Attiny13-or-13a/


Circuit Diagram: https://i.imgur.com/OD0rmjk.jpg

# Materials Required:

1. 1x     CD4017 Decade Counter
2. 80x    LED's of any color
3. 1x     100 Ohm Resistor
4. 10x    74HC164 8-Bit Shift Register
5. 1x     ATmel ATTiny13A 8-Bit Microcontroller
6. 3x     7HC08 Quad 2 Input AND Gates
7. Any Power Supply from 5V to 9V
8. A LOT of Wires

# All Library Syntaxes:

* The Software uses about 1188 Bytes if you include all of the instructions in one sketch but I'm 99.99% sure you won't need all of them :)

 1. Init ();                           -> Initializes Digital Pins - D0 as Serial Data; D1 as Ground Reference and D2 as Address Line.
  
 2. saveToROM (EEPROM Address);       -> Writes Software Bytes from SRAM to EEPROM starting from the mentioned address.
  
 3. loadFromROM (EEPROM Address);     -> Reads 10 Bytes from EEPROM starting from the mentioned address and loads it to SRAM.
  
 4. changeAddress (New Address);      -> Change VRAM Pointer Address to New Address.
  
 5. dumpRAMtoVRAM ();                 -> Loads Software Bytes from SRAM to VRAM.
  
 6. dumpROMtoVRAM (EEPROM Address);   -> Reads 10 Bytes from EEPROM starting from the mentioned address and loads them to VRAM Directly.  
