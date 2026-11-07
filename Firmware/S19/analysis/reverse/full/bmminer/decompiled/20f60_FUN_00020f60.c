// FUN_00020f60 @ 00020f60  size=88  callers=2
// program: bmminer


void FUN_00020f60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_000201d8(0);
  while( true ) {
    if (iVar1 != 0) {
      FUN_00058efc(uVar2 & 0xff,param_2,param_3,param_4);
    }
    uVar2 = uVar2 + 1;
    if (uVar2 == 4) break;
    iVar1 = FUN_000201d8(uVar2);
  }
  return;
}

