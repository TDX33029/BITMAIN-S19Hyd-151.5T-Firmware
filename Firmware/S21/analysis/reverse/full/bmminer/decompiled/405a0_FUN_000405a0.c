// FUN_000405a0 @ 000405a0  size=72  callers=1
// program: bmminer


int FUN_000405a0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0xffff;
  do {
    iVar1 = FUN_0002a6f0(iVar2);
    if ((iVar1 != 0) && (iVar1 = FUN_0003dba0(iVar2,0), iVar1 <= iVar3)) {
      iVar3 = iVar1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  return iVar3;
}

