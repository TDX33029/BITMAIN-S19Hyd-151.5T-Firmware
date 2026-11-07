// FUN_00019bc8 @ 00019bc8  size=96  callers=0
// program: bmminer


uint FUN_00019bc8(int param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = 0;
  uVar5 = 0;
  uVar4 = 0xff;
  do {
    sVar1 = FUN_000199ec(uVar3,2);
    uVar2 = (uint)sVar1;
    if (uVar2 != 0xff) {
      if (uVar4 == 0xff) {
        uVar4 = uVar2;
      }
      else if ((int)uVar4 < (int)uVar2) {
        uVar5 = uVar3 & 0xff;
        uVar4 = uVar2;
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 4);
  if (param_1 != 0) {
    uVar4 = uVar4 & 0xffff | uVar5 << 0x10;
  }
  return uVar4;
}

