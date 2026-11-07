// FUN_00020f14 @ 00020f14  size=76  callers=1
// program: bmminer


void FUN_00020f14(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_000201d8(0);
  while( true ) {
    if (iVar1 != 0) {
      FUN_00058e84(uVar2 & 0xff,param_2,0);
    }
    uVar2 = uVar2 + 1;
    if (uVar2 == 4) break;
    iVar1 = FUN_000201d8(uVar2);
  }
  return;
}

