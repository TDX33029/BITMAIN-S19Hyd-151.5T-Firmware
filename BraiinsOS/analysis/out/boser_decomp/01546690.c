// FUN_01546690 @ 01546690 size=48 calls_out=3 calls_in=2
// strings: 

void FUN_01546690(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_01675d34();
  if (((char *)uVar1 == (char *)0x0 || (int)((ulonglong)uVar1 >> 0x20) == 0) ||
     (*(char *)uVar1 != '/')) {
    FUN_015321a0();
    return;
  }
  FUN_016bc0ec();
  return;
}

