// FUN_01a48b48 @ 01a48b48 size=160 calls_out=0 calls_in=2
// strings: 

void FUN_01a48b48(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  bool bVar6;
  
  iVar3 = *(int *)(param_2 + 0xc);
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
  pbVar4 = *(byte **)(param_2 + 8);
  uVar2 = (uint)*pbVar4;
  *(byte **)(param_2 + 8) = pbVar4 + 1;
  *(int *)(param_2 + 0xc) = iVar3 + -1;
  uVar5 = uVar2 - 0x30;
  bVar6 = 9 < uVar5;
  if (bVar6) {
    uVar5 = uVar2 - 0x61;
  }
  if ((bVar6 && 5 < uVar5) && (5 < uVar2 - 0x41)) {
    *(byte **)(param_2 + 8) = pbVar4;
    uVar2 = 0;
    *(int *)(param_2 + 0xc) = iVar3;
    uVar1 = 1;
  }
  else {
    uVar1 = 3;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = 4;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

