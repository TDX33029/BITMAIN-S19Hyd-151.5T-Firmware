// FUN_016f8978 @ 016f8978 size=300 calls_out=4 calls_in=0
// strings: 

void FUN_016f8978(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_130 [32];
  int local_b0;
  undefined4 local_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  undefined1 auStack_30 [10];
  undefined1 local_26;
  
  FUN_01917cdc(&local_b0,*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
  if (local_b0 == 1) {
    piVar1 = (int *)((uint)local_130 | 4);
    *piVar1 = local_a8;
    piVar1[1] = iStack_a4;
    piVar1[2] = iStack_a0;
    piVar1[3] = iStack_9c;
    piVar1[4] = local_98;
    piVar1[5] = iStack_94;
    piVar1[6] = iStack_90;
    piVar1[7] = iStack_8c;
    iVar2 = piVar1[1];
    iVar3 = piVar1[2];
    iVar4 = piVar1[3];
    *param_1 = *piVar1;
    param_1[1] = iVar2;
    param_1[2] = iVar3;
    param_1[3] = iVar4;
    iVar2 = piVar1[5];
    iVar3 = piVar1[6];
    iVar4 = piVar1[7];
    param_1[4] = piVar1[4];
    param_1[5] = iVar2;
    param_1[6] = iVar3;
    param_1[7] = iVar4;
  }
  else {
    FUN_01bed4e2(local_130,(uint)&local_b0 | 4,0x7c);
    FUN_01bed4e2(&local_b0,local_130,0x7c);
    local_26 = 2;
    FUN_0191df28(local_130,&local_b0,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                 param_4,param_5,auStack_30);
    if (local_130[0] == -0x7fffffd7) {
      local_130[0] = -0x7fffffd7;
    }
    else {
      piVar1 = (int *)((uint)local_130 | 4);
      iVar2 = piVar1[1];
      iVar3 = piVar1[2];
      param_1[1] = *piVar1;
      param_1[2] = iVar2;
      param_1[3] = iVar3;
      iVar2 = piVar1[4];
      iVar3 = piVar1[5];
      iVar4 = piVar1[6];
      param_1[4] = piVar1[3];
      param_1[5] = iVar2;
      param_1[6] = iVar3;
      param_1[7] = iVar4;
    }
    *param_1 = local_130[0];
    if (local_b0 != -0x80000000) {
      FUN_019bb7e0(local_b0,local_ac);
    }
  }
  return;
}

