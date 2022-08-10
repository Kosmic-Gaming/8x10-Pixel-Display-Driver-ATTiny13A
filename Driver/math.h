#include "picloader.h"
//#include "variables.h"
void dumpRAMtoVRAM () {
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
      num = arr1;
    } else if (count == 1) {
      num = arr2;
    } else if (count == 2) {
      num = arr3;
    } else if (count == 3) {
      num = arr4;
    } else if (count == 4) {
      num = arr5;
    } else if (count == 5) {
      num = arr6;
    } else if (count == 6) {
      num = arr7;
    } else if (count == 7) {
      num = arr8;
    } else if (count == 8) {
      num = arr9;
    } else if (count == 9) {
      num = arr10;
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
void changeAddress(byte newad) {
  byte pul;
  if (VRAMPointer < newad) {
    pul = newad - VRAMPointer;
  } else if (VRAMPointer > newad) {
    pul = 10 - newad - VRAMPointer;
  }
  while (pul != 0) {
    digitalWrite (2, HIGH);
    delay(50);
    digitalWrite (2, LOW);
    delay(50);
    pul--;
  }
}
void Init (){
  pinMode (0, OUTPUT); //sda
  pinMode (1, OUTPUT); //gref
  pinMode (2, OUTPUT); //addr
}
