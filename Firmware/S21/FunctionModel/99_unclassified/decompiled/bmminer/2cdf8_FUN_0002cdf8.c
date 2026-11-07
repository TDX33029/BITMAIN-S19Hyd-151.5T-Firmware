// FUN_0002cdf8 @ 0002cdf8  size=88  callers=1
// program: bmminer


void FUN_0002cdf8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_0002a6f0(0);
  while( true ) {
    if (iVar1 != 0) {
      FUN_00082c2c(uVar2 & 0xff,param_2,param_3,param_4);
    }
    uVar2 = uVar2 + 1;
    if (uVar2 == 4) break;
    iVar1 = FUN_0002a6f0(uVar2);
  }
  return;
}

