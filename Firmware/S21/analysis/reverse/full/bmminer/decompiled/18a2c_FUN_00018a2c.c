// FUN_00018a2c @ 00018a2c  size=116  callers=3
// program: bmminer


int FUN_00018a2c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0xff;
  do {
    iVar1 = FUN_0002a6f0(iVar4);
    if (iVar1 != 0) {
      iVar1 = FUN_00017628(iVar4,4,0);
      if (0xfe < iVar1) {
        iVar1 = 0xff;
      }
      iVar2 = FUN_00017628(iVar4,4,1);
      if (iVar1 < iVar2) {
        iVar2 = iVar1;
      }
      if ((short)iVar2 < iVar3) {
        iVar3 = (int)(short)iVar2;
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  return iVar3;
}

