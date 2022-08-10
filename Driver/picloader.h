#include "variables.h"
#include <EEPROM.h>
void saveToROM (byte address) {
  EEPROM.update (address, arr1);
  EEPROM.update (address + 1, arr2);
  EEPROM.update (address + 2, arr3);
  EEPROM.update (address + 3, arr4);
  EEPROM.update (address + 4, arr5);
  EEPROM.update (address + 5, arr6);
  EEPROM.update (address + 6, arr7);
  EEPROM.update (address + 7, arr8);
  EEPROM.update (address + 8, arr9);
  EEPROM.update (address + 9, arr10);
}
void loadFromROM (byte addres) {
  arr1 = EEPROM.read (addres);
  arr2 = EEPROM.read (addres + 1);
  arr3 = EEPROM.read (addres + 2);
  arr4 = EEPROM.read (addres + 3);
  arr5 = EEPROM.read (addres + 4);
  arr6 = EEPROM.read (addres + 5);
  arr7 = EEPROM.read (addres + 6);
  arr8 = EEPROM.read (addres + 7);
  arr9 = EEPROM.read (addres + 8);
  arr10 = EEPROM.read (addres + 9);
}
void dumpROMtoVRAM (byte add) {
  VRAMPointer = 0;
  digitalWrite (2, HIGH);
  delay(50);
  digitalWrite (2, LOW);
  byte count = 0;
  byte num = 0;
  while (count < 9) {
    byte tx = 0;
    byte AP = 0;
    if (count == 0) {
      num = EEPROM.read(add);
    } else if (count == 1) {
      num = EEPROM.read(add + 1);
    } else if (count == 2) {
      num = EEPROM.read(add + 2);
    } else if (count == 3) {
      num = EEPROM.read(add + 3);
    } else if (count == 4) {
      num = EEPROM.read(add + 4);
    } else if (count == 5) {
      num = EEPROM.read(add + 5);
    } else if (count == 6) {
      num = EEPROM.read(add + 6);
    } else if (count == 7) {
      num = EEPROM.read(add + 7);
    } else if (count == 8) {
      num = EEPROM.read(add + 8);
    } else if (count == 9) {
      num = EEPROM.read(add + 9);
    }
    for (byte a = 128; a >= 1; a = a / 2) {
      if ((num - a) >= 0) { //1
        if (AP == 0) {
          b1 = true;
        } else if (AP == 1) {
          b2 = true;
        } else if (AP == 2) {
          b3 = true;
        } else if (AP == 3) {
          b4 = true;
        } else if (AP == 4) {
          b5 = true;
        } else if (AP == 5) {
          b6 = true;
        } else if (AP == 6) {
          b7 = true;
        } else if (AP == 7) {
          b8 = true;
        }
        num -= a;
      }
      else { //0
        if (AP == 0) {
          b1 = false;
        } else if (AP == 1) {
          b2 = false;
        } else if (AP == 2) {
          b3 = false;
        } else if (AP == 3) {
          b4 = false;
        } else if (AP == 4) {
          b5 = false;
        } else if (AP == 5) {
          b6 = false;
        } else if (AP == 6) {
          b7 = false;
        } else if (AP == 7) {
          b8 = false;
        }
      }
      AP++;
    }
    if (b1 == true) {
      digitalWrite (0, HIGH);
    } else {
      digitalWrite (0, LOW);
    }
    digitalWrite (1, HIGH);
    delay(50);
    digitalWrite (1, LOW);
    digitalWrite (0, LOW);
    if (b2 == true) {
      digitalWrite (0, HIGH);
    } else {
      digitalWrite (0, LOW);
    }
    digitalWrite (1, HIGH);
    delay(50);
    digitalWrite (1, LOW);
    digitalWrite (0, LOW);
    if (b3 == true) {
      digitalWrite (0, HIGH);
    } else {
      digitalWrite (0, LOW);
    }
    digitalWrite (1, HIGH);
    delay(50);
    digitalWrite (1, LOW);
    digitalWrite (0, LOW);
    if (b4 == true) {
      digitalWrite (0, HIGH);
    } else {
      digitalWrite (0, LOW);
    }
    digitalWrite (1, HIGH);
    delay(50);
    digitalWrite (1, LOW);
    digitalWrite (0, LOW);
    if (b5 == true) {
      digitalWrite (0, HIGH);
    } else {
      digitalWrite (0, LOW);
    }
    digitalWrite (1, HIGH);
    delay(50);
    digitalWrite (1, LOW);
    digitalWrite (0, LOW);
    if (b6 == true) {
      digitalWrite (0, HIGH);
    } else {
      digitalWrite (0, LOW);
    }
    digitalWrite (1, HIGH);
    delay(50);
    digitalWrite (1, LOW);
    digitalWrite (0, LOW);
    if (b7 == true) {
      digitalWrite (0, HIGH);
    } else {
      digitalWrite (0, LOW);
    }
    digitalWrite (1, HIGH);
    delay(50);
    digitalWrite (1, LOW);
    digitalWrite (0, LOW);
    if (b8 == true) {
      digitalWrite (0, HIGH);
    } else {
      digitalWrite (0, LOW);
    }
    digitalWrite (1, HIGH);
    delay(50);
    digitalWrite (1, LOW);
    digitalWrite (0, LOW);
    count++;
    digitalWrite (2, HIGH);
    delay(50);
    digitalWrite (2, LOW);
    VRAMPointer++;
  }
}
