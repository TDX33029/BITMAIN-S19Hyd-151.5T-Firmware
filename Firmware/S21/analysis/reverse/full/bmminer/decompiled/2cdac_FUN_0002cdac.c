// FUN_0002cdac @ 0002cdac  size=76  callers=1
// program: bmminer


void FUN_0002cdac(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_0002a6f0(0);
  while( true ) {
    if (iVar1 != 0) {
      FUN_000822e0(uVar2 & 0xff,param_2,0);
    }
    uVar2 = uVar2 + 1;
    if (uVar2 == 4) break;
    iVar1 = FUN_0002a6f0(uVar2);
  }
  return;
}

