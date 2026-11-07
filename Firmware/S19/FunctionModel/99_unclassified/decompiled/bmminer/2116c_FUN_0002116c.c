// FUN_0002116c @ 0002116c  size=96  callers=1
// program: bmminer


void FUN_0002116c(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_000201d8(0);
  while( true ) {
    if (iVar1 != 0) {
      FUN_00058100(uVar2 & 0xff);
      if (param_2 == 0) {
        FUN_0005874c(uVar2 & 0xff);
      }
      else {
        FUN_000586f4();
      }
    }
    uVar2 = uVar2 + 1;
    if (uVar2 == 4) break;
    iVar1 = FUN_000201d8(uVar2);
  }
  return;
}

