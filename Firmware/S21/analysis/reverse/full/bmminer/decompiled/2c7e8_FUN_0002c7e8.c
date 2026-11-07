// FUN_0002c7e8 @ 0002c7e8  size=72  callers=2
// program: bmminer


void FUN_0002c7e8(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  do {
    while( true ) {
      uVar3 = uVar2 + 1;
      iVar1 = FUN_0002a6f0(uVar2);
      if (iVar1 == 0) break;
      FUN_00081d20(uVar2 & 0xff,param_1);
      uVar2 = uVar3;
      if (uVar3 == 4) {
        return;
      }
    }
    uVar2 = uVar3;
  } while (uVar3 != 4);
  return;
}

