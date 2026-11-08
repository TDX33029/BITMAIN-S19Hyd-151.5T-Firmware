// FUN_01a47d18 @ 01a47d18 size=136 calls_out=0 calls_in=2
// strings: 

void FUN_01a47d18(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)(param_2 + 0xc);
  if (iVar2 == 0) {
    *(undefined1 *)((int)param_1 + 7) = 0;
    *(undefined2 *)((int)param_1 + 5) = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    param_1[2] = 4;
    *param_1 = 1;
    return;
  }
  pbVar3 = *(byte **)(param_2 + 8);
  uVar4 = 3;
  uVar1 = (uint)*pbVar3;
  *(byte **)(param_2 + 8) = pbVar3 + 1;
  *(int *)(param_2 + 0xc) = iVar2 + -1;
  if (9 < uVar1 - 0x30) {
    *(byte **)(param_2 + 8) = pbVar3;
    uVar4 = 1;
    *(int *)(param_2 + 0xc) = iVar2;
    uVar1 = 0;
  }
  *param_1 = uVar4;
  param_1[1] = uVar1;
  param_1[2] = 4;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

