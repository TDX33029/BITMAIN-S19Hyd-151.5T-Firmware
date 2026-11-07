// FUN_00020a54 @ 00020a54  size=72  callers=3
// program: bmminer


void FUN_00020a54(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  do {
    while( true ) {
      uVar3 = uVar2 + 1;
      iVar1 = FUN_000201d8(uVar2);
      if (iVar1 == 0) break;
      FUN_00057a20(uVar2 & 0xff,param_1);
      uVar2 = uVar3;
      if (uVar3 == 4) {
        return;
      }
    }
    uVar2 = uVar3;
  } while (uVar3 != 4);
  return;
}

