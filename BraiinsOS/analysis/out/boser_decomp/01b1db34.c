// FUN_01b1db34 @ 01b1db34 size=92 calls_out=0 calls_in=6
// strings: 

uint FUN_01b1db34(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar3 = 0;
  do {
    pbVar1 = (byte *)(param_1 + iVar4);
    pbVar2 = (byte *)(param_2 + iVar4);
    iVar4 = iVar4 + 1;
    uVar3 = *pbVar1 ^ *pbVar2 | uVar3;
  } while (param_3 != iVar4);
  return -uVar3 >> 0x18;
}

