// FUN_00ec9984 @ 00ec9984 size=120 calls_out=1 calls_in=1
// strings: 

int FUN_00ec9984(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_0160ab20();
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar2 + 4);
    iVar4 = 0;
    do {
      if (*(int *)(iVar2 + 8) == iVar4) goto LAB_00ec99e8;
      pbVar1 = (byte *)(iVar3 + iVar4);
      iVar4 = iVar4 + 1;
    } while ((*pbVar1 == 9) || (*pbVar1 - 0x20 < 0x5f));
    iVar3 = 0;
  }
LAB_00ec99e8:
  if (iVar3 == 0) {
    iVar3 = 1;
  }
  return iVar3;
}

