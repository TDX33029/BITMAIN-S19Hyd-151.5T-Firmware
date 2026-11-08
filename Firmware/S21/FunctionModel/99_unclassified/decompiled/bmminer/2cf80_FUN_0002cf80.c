// FUN_0002cf80 @ 0002cf80  size=72  callers=1
// program: bmminer


void FUN_0002cf80(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_0002a6f0(0);
  while( true ) {
    if (iVar1 != 0) {
      FUN_000828e0(uVar2 & 0xff,param_1);
    }
    uVar2 = uVar2 + 1;
    if (uVar2 == 4) break;
    iVar1 = FUN_0002a6f0(uVar2);
  }
  return;
}

