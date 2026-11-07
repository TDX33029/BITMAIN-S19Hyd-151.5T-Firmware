// FUN_00019e50 @ 00019e50  size=76  callers=2
// program: bmminer


int FUN_00019e50(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0xff;
  do {
    sVar1 = FUN_000199ec(iVar3,3);
    iVar2 = (int)sVar1;
    if (iVar2 != 0xff) {
      if (iVar4 == 0xff) {
        iVar4 = iVar2;
      }
      else if (iVar4 <= iVar2) {
        iVar4 = iVar2;
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  return iVar4;
}

