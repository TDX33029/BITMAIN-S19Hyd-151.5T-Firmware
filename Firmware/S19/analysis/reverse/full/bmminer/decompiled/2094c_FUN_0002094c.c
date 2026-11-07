// FUN_0002094c @ 0002094c  size=72  callers=1
// program: bmminer


void FUN_0002094c(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_000201d8(0);
  while( true ) {
    if (iVar1 != 0) {
      FUN_000577ec(uVar2 & 0xff,param_1);
    }
    uVar2 = uVar2 + 1;
    if (uVar2 == 4) break;
    iVar1 = FUN_000201d8(uVar2);
  }
  return;
}

