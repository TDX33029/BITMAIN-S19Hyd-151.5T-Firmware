// FUN_0008eb60 @ 0008eb60  size=312  callers=2
// program: bmminer


int FUN_0008eb60(int param_1,int param_2)

{
  int iVar1;
  int local_c;
  
  if (*(int *)(param_1 + 0x185c) == 0) {
    param_1 = param_1 + 0x1458;
  }
  else {
    *(undefined4 *)(*(int *)(param_2 + 0x14) + 4) = **(undefined4 **)(param_2 + 0x14);
    for (local_c = 0; local_c < *(int *)(*(int *)(param_1 + 0x185c) + 4); local_c = local_c + 1) {
      iVar1 = *(int *)(**(int **)(param_1 + 0x185c) + local_c * 4);
      iVar1 = (**(code **)(iVar1 + 0x2430))(iVar1,param_2);
      if (iVar1 != 0) {
        FUN_00095b4c(2,"src/rule.c",0x97,"zlog_spec_gen_path fail");
        return 0;
      }
    }
    **(undefined1 **)(*(int *)(param_2 + 0x14) + 4) = 0;
    param_1 = **(int **)(param_2 + 0x14);
  }
  return param_1;
}

