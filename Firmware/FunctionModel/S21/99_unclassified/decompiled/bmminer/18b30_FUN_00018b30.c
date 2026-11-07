// FUN_00018b30 @ 00018b30  size=104  callers=2
// program: bmminer


int FUN_00018b30(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  iVar3 = 0;
  do {
    iVar2 = FUN_0002a6f0(iVar3);
    if (iVar2 != 0) {
      iVar4 = iVar4 + 1;
      iVar2 = FUN_00017628(iVar3,4,7);
      iVar5 = iVar5 + iVar2;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  if (iVar4 == 0) {
    return 0x23;
  }
  sVar1 = FUN_00098658(iVar5,iVar4);
  return (int)sVar1;
}

