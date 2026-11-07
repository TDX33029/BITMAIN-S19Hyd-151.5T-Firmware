// FUN_0002c798 @ 0002c798  size=80  callers=1
// program: bmminer


void FUN_0002c798(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  do {
    while( true ) {
      uVar3 = uVar2 + 1;
      iVar1 = FUN_0002a6f0(uVar2);
      if ((iVar1 == 0) || (param_1 != 0xff && param_1 != (uVar2 & 0xff))) break;
      FUN_000830b8(uVar2 & 0xff);
      uVar2 = uVar3;
      if (uVar3 == 4) {
        return;
      }
    }
    uVar2 = uVar3;
  } while (uVar3 != 4);
  return;
}

