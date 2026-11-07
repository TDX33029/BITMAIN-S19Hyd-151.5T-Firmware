// FUN_01bf0398 @ 01bf0398 size=140 calls_out=2 calls_in=1
// strings: 

int FUN_01bf0398(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = FUN_01bf038a();
    return iVar1;
  }
  software_interrupt(0);
  if (param_1 == -0x26) {
    if ((param_2 & 0xfff7f7ff) == 0) {
      iVar1 = FUN_01bf038a(0xffffffda);
      if (iVar1 == 0) {
        if ((int)(param_2 << 0xc) < 0) {
          software_interrupt(0);
          software_interrupt(0);
        }
        if ((param_2 & 0x800) == 0) {
          iVar1 = 0;
        }
        else {
          software_interrupt(0);
          software_interrupt(0);
        }
      }
      return iVar1;
    }
    param_1 = -0x16;
  }
  iVar1 = FUN_01be3b5a(param_1);
  return iVar1;
}

