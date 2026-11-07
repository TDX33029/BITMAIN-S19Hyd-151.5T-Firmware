// FUN_01bedc16 @ 01bedc16 size=66 calls_out=0 calls_in=4
// strings: 

int FUN_01bedc16(int param_1,int param_2,int param_3)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  
  if (param_3 == 0) {
    return 0;
  }
  pbVar2 = (byte *)(param_1 + -1);
  pbVar3 = (byte *)(param_2 + -1);
  do {
    pbVar2 = pbVar2 + 1;
    uVar1 = (uint)*pbVar2;
    pbVar3 = pbVar3 + 1;
    uVar4 = (uint)*pbVar3;
    if (uVar1 == 0) break;
  } while (param_1 + (param_3 - (int)pbVar2) + -1 != 0 && (uVar1 == uVar4 && uVar4 != 0));
  return uVar1 - uVar4;
}

