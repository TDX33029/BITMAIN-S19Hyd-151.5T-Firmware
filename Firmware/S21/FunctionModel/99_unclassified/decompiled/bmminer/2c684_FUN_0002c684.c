// FUN_0002c684 @ 0002c684  size=68  callers=1
// program: bmminer


void FUN_0002c684(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_0002a6f0(0);
  while( true ) {
    if (iVar1 != 0) {
      FUN_000828a8(uVar2 & 0xff,0);
    }
    uVar2 = uVar2 + 1;
    if (uVar2 == 4) break;
    iVar1 = FUN_0002a6f0(uVar2);
  }
  return;
}

