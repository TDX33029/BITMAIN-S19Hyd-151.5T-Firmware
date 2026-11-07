// FUN_00019d6c @ 00019d6c  size=56  callers=0
// program: bmminer


int FUN_00019d6c(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0xff;
  do {
    sVar1 = FUN_00019c28(iVar2,1);
    iVar2 = iVar2 + 1;
    if (sVar1 < iVar3) {
      iVar3 = (int)sVar1;
    }
  } while (iVar2 != 4);
  return iVar3;
}

