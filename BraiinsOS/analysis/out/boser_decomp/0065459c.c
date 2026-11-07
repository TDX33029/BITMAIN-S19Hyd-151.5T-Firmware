// FUN_0065459c @ 0065459c size=128 calls_out=1 calls_in=2
// strings: 

void FUN_0065459c(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_30 [6];
  
  uVar3 = *(undefined4 *)(param_2 + 0x300);
  FUN_00653acc(local_30,param_2 + 0x1a4,*(undefined4 *)(param_2 + 0x2fc),1);
  if (local_30[0] == 3) {
    FUN_00653acc(local_30,param_2 + 0x1a4,uVar3,1);
    if (local_30[0] == 3) {
      local_30[0] = 3;
      goto LAB_00654610;
    }
  }
  piVar1 = (int *)((uint)local_30 | 4);
  iVar2 = piVar1[1];
  iVar4 = piVar1[2];
  iVar5 = piVar1[3];
  iVar6 = piVar1[4];
  param_1[1] = *piVar1;
  param_1[2] = iVar2;
  param_1[3] = iVar4;
  param_1[4] = iVar5;
  param_1[5] = iVar6;
LAB_00654610:
  *param_1 = local_30[0];
  return;
}

