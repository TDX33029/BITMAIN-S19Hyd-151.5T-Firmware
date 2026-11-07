// FUN_01a47c80 @ 01a47c80 size=152 calls_out=0 calls_in=1
// strings: 

void FUN_01a47c80(undefined4 *param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  bool bVar6;
  
  iVar3 = *(int *)(param_4 + 0xc);
  if (iVar3 == 0) {
    *(undefined1 *)((int)param_1 + 7) = 0;
    *(undefined2 *)((int)param_1 + 5) = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    param_1[2] = 4;
    *param_1 = 1;
    return;
  }
  pbVar4 = *(byte **)(param_4 + 8);
  uVar1 = (uint)*pbVar4;
  *(byte **)(param_4 + 8) = pbVar4 + 1;
  *(int *)(param_4 + 0xc) = iVar3 + -1;
  bVar6 = uVar1 <= (param_2 & 0xff);
  bVar5 = (param_2 & 0xff) == uVar1;
  if (!bVar6 || bVar5) {
    bVar6 = (param_3 & 0xff) <= uVar1;
    bVar5 = uVar1 == (param_3 & 0xff);
  }
  if (!bVar6 || bVar5) {
    uVar2 = 3;
  }
  else {
    uVar2 = 1;
    uVar1 = 0;
    *(byte **)(param_4 + 8) = pbVar4;
    *(int *)(param_4 + 0xc) = iVar3;
  }
  *param_1 = uVar2;
  param_1[1] = uVar1;
  param_1[2] = 4;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

