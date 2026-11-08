// FUN_0001970c @ 0001970c  size=72  callers=0
// program: bmminer


void FUN_0001970c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = FUN_0002a6f0(0);
  while( true ) {
    if (iVar1 != 0) {
      FUN_000196a0(iVar2,param_1);
    }
    iVar2 = iVar2 + 1;
    if (iVar2 == 4) break;
    iVar1 = FUN_0002a6f0(iVar2);
  }
  return;
}

