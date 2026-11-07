// FUN_0008bbbc @ 0008bbbc  size=224  callers=10
// program: bmminer


undefined4 FUN_0008bbbc(int param_1,int param_2)

{
  int iVar1;
  int local_c;
  
  *(undefined4 *)(*(int *)(param_2 + 0x1c) + 4) = **(undefined4 **)(param_2 + 0x1c);
  local_c = 0;
  while( true ) {
    if (*(int *)(*(int *)(param_1 + 0x2004) + 4) <= local_c) {
      return 0;
    }
    iVar1 = *(int *)(**(int **)(param_1 + 0x2004) + local_c * 4);
    iVar1 = (**(code **)(iVar1 + 0x2428))(iVar1,param_2);
    if (iVar1 != 0) break;
    local_c = local_c + 1;
  }
  return 0xffffffff;
}

