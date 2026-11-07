// FUN_000208f0 @ 000208f0  size=68  callers=1
// program: bmminer


void FUN_000208f0(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_000201d8(0);
  while( true ) {
    if (iVar1 != 0) {
      FUN_0005845c(uVar2 & 0xff,0);
    }
    uVar2 = uVar2 + 1;
    if (uVar2 == 4) break;
    iVar1 = FUN_000201d8(uVar2);
  }
  return;
}

