// FUN_00020a9c @ 00020a9c  size=88  callers=0
// program: bmminer


void FUN_00020a9c(undefined4 param_1)

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
      FUN_00058108(uVar2 & 0xff,1,(undefined1)DAT_00087b68,param_1);
      uVar2 = uVar3;
      if (uVar3 == 4) {
        return;
      }
    }
    uVar2 = uVar3;
  } while (uVar3 != 4);
  return;
}

