// FUN_00018a88 @ 00018a88  size=88  callers=2
// program: bmminer


uint FUN_00018a88(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = 0;
  uVar4 = 0;
  uVar3 = 0xff;
  do {
    uVar1 = FUN_00018a54(uVar2);
    if (uVar1 != 0xff) {
      if (uVar3 == 0xff) {
        uVar3 = uVar1;
      }
      else if ((int)uVar3 < (int)uVar1) {
        uVar4 = uVar2 & 0xff;
        uVar3 = uVar1;
      }
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 4);
  if (param_1 != 0) {
    uVar3 = uVar3 & 0xffff | uVar4 << 0x10;
  }
  return uVar3;
}

