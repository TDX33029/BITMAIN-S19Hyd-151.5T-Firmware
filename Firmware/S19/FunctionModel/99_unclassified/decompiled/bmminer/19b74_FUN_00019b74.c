// FUN_00019b74 @ 00019b74  size=72  callers=1
// program: bmminer


void FUN_00019b74(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = FUN_000201d8(0);
  while( true ) {
    if (iVar1 != 0) {
      FUN_00019b08(iVar2,param_1);
    }
    iVar2 = iVar2 + 1;
    if (iVar2 == 4) break;
    iVar1 = FUN_000201d8(iVar2);
  }
  return;
}

