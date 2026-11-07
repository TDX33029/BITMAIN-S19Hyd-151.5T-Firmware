// FUN_01b6bd64 @ 01b6bd64 size=156 calls_out=1 calls_in=0
// strings: 

ulonglong FUN_01b6bd64(int param_1,undefined2 *param_2)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  
  iVar2 = FUN_01b6bd18(*param_2);
  iVar5 = *(int *)(param_1 + 0xc);
  if (iVar5 < *(int *)(iVar2 + 0xc)) {
    uVar1 = 0xffffffff;
  }
  else if (*(int *)(iVar2 + 0xc) < iVar5) {
    uVar1 = 1;
  }
  else {
    if (iVar5 != 0) {
      pbVar6 = (byte *)(*(int *)(iVar2 + 0x10) + -1);
      pbVar3 = (byte *)(*(int *)(param_1 + 0x10) + -1);
      pbVar4 = (byte *)(*(int *)(iVar2 + 0x10) + iVar5 + -1);
      do {
        if (pbVar4 == pbVar6) {
          return ZEXT48(pbVar4) << 0x20;
        }
        pbVar3 = pbVar3 + 1;
        pbVar6 = pbVar6 + 1;
      } while ((uint)*pbVar3 == (uint)*pbVar6);
      return CONCAT44(pbVar4,(uint)*pbVar3 - (uint)*pbVar6);
    }
    uVar1 = 0;
  }
  return (ulonglong)uVar1;
}

