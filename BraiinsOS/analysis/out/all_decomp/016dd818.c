// FUN_016dd818 @ 016dd818 size=26 calls_out=0 calls_in=9
// strings: 

int FUN_016dd818(int param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  
  pbVar1 = (byte *)(param_1 + -1);
  pbVar2 = (byte *)(param_2 + -1);
  do {
    pbVar2 = pbVar2 + 1;
    uVar4 = (uint)*pbVar2;
    pbVar1 = pbVar1 + 1;
    uVar3 = (uint)*pbVar1;
    if (uVar3 != uVar4) goto LAB_016dd82e;
  } while (uVar4 != 0);
  uVar3 = 0;
LAB_016dd82e:
  return uVar3 - uVar4;
}

