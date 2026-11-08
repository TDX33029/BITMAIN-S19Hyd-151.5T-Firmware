// FUN_00018aa0 @ 00018aa0  size=144  callers=3
// program: bmminer


int FUN_00018aa0(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0;
  iVar6 = 0;
  iVar5 = 0;
  do {
    iVar2 = FUN_0002a6f0(iVar5);
    if (iVar2 != 0) {
      iVar4 = iVar4 + 1;
      iVar2 = FUN_00017628(iVar5,4,0);
      if (0xfe < iVar2) {
        iVar2 = 0xff;
      }
      iVar3 = FUN_00017628(iVar5,4,1);
      if (iVar2 < iVar3) {
        iVar3 = iVar2;
      }
      iVar6 = iVar6 + (short)iVar3;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 4);
  if (iVar4 == 0) {
    return 0x23;
  }
  sVar1 = FUN_00098658(iVar6,iVar4);
  return (int)sVar1;
}

