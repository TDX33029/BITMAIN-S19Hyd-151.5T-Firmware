// FUN_01744014 @ 01744014 size=120 calls_out=1 calls_in=13
// strings: 

undefined4 FUN_01744014(int param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  
  iVar1 = FUN_014146a0();
  if ((iVar1 != 0) && (iVar1 = *(int *)(param_1 + 0x10), iVar1 == *(int *)(param_2 + 0x10))) {
    pbVar2 = *(byte **)(param_1 + 0xc);
    pbVar5 = *(byte **)(param_2 + 0xc);
    do {
      if (iVar1 == 0) {
        return 1;
      }
      uVar4 = (uint)*pbVar5;
      iVar1 = iVar1 + -1;
      uVar3 = (uint)*pbVar2;
      if (uVar4 - 0x41 < 0x1a) {
        uVar4 = uVar4 | 0x20;
      }
      if (uVar3 - 0x41 < 0x1a) {
        uVar3 = uVar3 | 0x20;
      }
      pbVar2 = pbVar2 + 1;
      pbVar5 = pbVar5 + 1;
    } while (uVar3 == uVar4);
  }
  return 0;
}

