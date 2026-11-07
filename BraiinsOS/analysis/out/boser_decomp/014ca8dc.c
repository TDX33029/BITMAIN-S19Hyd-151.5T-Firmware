// FUN_014ca8dc @ 014ca8dc size=156 calls_out=1 calls_in=6
// strings: 

void FUN_014ca8dc(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_30;
  int local_2c;
  int iStack_28;
  int local_20 [4];
  
  piVar1 = *(int **)(param_2 + 4);
  if (piVar1 != *(int **)(param_2 + 0xc)) {
    local_20[0] = *piVar1;
    *(int **)(param_2 + 4) = piVar1 + 4;
    if (local_20[0] != -0x7fffffeb) {
      piVar3 = (int *)((uint)local_20 | 4);
      iVar2 = piVar1[2];
      iVar4 = piVar1[3];
      *piVar3 = piVar1[1];
      piVar3[1] = iVar2;
      piVar3[2] = iVar4;
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
      FUN_014caa68(&local_30,local_20);
      if (local_30 == -0x80000000) {
        *param_1 = -0x7fffffff;
        param_1[1] = local_2c;
        return;
      }
      *param_1 = local_30;
      param_1[1] = local_2c;
      param_1[2] = iStack_28;
      return;
    }
  }
  *param_1 = -0x80000000;
  return;
}

