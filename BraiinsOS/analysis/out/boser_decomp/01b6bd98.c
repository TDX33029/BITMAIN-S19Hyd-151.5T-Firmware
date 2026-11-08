// FUN_01b6bd98 @ 01b6bd98 size=52 calls_out=1 calls_in=0
// strings: 

int FUN_01b6bd98(int param_1,undefined2 *param_2)

{
  int *piVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  piVar1 = (int *)FUN_01b6bd18(*param_2);
  pbVar2 = (byte *)(param_1 + -1);
  pbVar3 = (byte *)(*piVar1 + -1);
  do {
    pbVar3 = pbVar3 + 1;
    uVar5 = (uint)*pbVar3;
    pbVar2 = pbVar2 + 1;
    uVar4 = (uint)*pbVar2;
    if (uVar4 != uVar5) goto LAB_01bedb66;
  } while (uVar5 != 0);
  uVar4 = 0;
LAB_01bedb66:
  return uVar4 - uVar5;
}

