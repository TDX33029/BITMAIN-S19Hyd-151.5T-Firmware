// FUN_00019d24 @ 00019d24  size=52  callers=4
// program: bmminer


int FUN_00019d24(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0xff;
  iVar1 = 0;
  do {
    iVar3 = iVar1 + 1;
    iVar1 = FUN_00019cf0(iVar1);
    if (iVar1 < iVar2) {
      iVar2 = iVar1;
    }
    iVar2 = (int)(short)iVar2;
    iVar1 = iVar3;
  } while (iVar3 != 4);
  return iVar2;
}

