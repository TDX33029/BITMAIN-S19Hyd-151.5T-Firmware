// FUN_000211cc @ 000211cc  size=72  callers=0
// program: bmminer


void FUN_000211cc(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_000201d8(0);
  while( true ) {
    if (iVar1 != 0) {
      FUN_00058578(uVar2 & 0xff,param_1);
    }
    uVar2 = uVar2 + 1;
    if (uVar2 == 4) break;
    iVar1 = FUN_000201d8(uVar2);
  }
  return;
}

