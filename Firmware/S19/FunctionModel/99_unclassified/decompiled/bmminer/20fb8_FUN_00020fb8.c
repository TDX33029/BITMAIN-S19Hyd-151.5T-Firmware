// FUN_00020fb8 @ 00020fb8  size=68  callers=0
// program: bmminer


void FUN_00020fb8(uint param_1,undefined4 param_2)

{
  undefined4 extraout_r1;
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  do {
    uVar2 = FUN_000201d8(uVar1,param_2);
    param_2 = (undefined4)((ulonglong)uVar2 >> 0x20);
    if ((int)uVar2 != 0) {
      param_2 = 1;
      if (param_1 == uVar1 || param_1 == 0xff) {
        FUN_00058f70(uVar1 & 0xff);
        param_2 = extraout_r1;
      }
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 != 4);
  return;
}

