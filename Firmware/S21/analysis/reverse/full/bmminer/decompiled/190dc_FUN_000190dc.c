// FUN_000190dc @ 000190dc  size=68  callers=2
// program: bmminer


void FUN_000190dc(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = FUN_0002a6f0(0);
  while( true ) {
    if (iVar1 != 0) {
      FUN_00018e18(iVar2,1);
    }
    iVar2 = iVar2 + 1;
    if (iVar2 == 4) break;
    iVar1 = FUN_0002a6f0(iVar2);
  }
  return;
}

