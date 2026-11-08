// FUN_0002c830 @ 0002c830  size=88  callers=1
// program: bmminer


void FUN_0002c830(undefined4 param_1)

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
      FUN_000823a0(uVar2 & 0xff,1,(undefined1)DAT_000be5ec,param_1);
      uVar2 = uVar3;
      if (uVar3 == 4) {
        return;
      }
    }
    uVar2 = uVar3;
  } while (uVar3 != 4);
  return;
}

