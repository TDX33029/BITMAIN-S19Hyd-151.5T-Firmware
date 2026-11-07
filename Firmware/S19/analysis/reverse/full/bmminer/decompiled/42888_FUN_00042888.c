// FUN_00042888 @ 00042888  size=80  callers=0
// program: bmminer


void FUN_00042888(undefined4 param_1,int *param_2)

{
  int iVar1;
  int local_14 [2];
  
  iVar1 = FUN_00042788(param_1,local_14);
  if (iVar1 == 0) {
    *param_2 = local_14[0];
    if (local_14[0] < 0) {
      FUN_000425d4("\'%s\' is negative",param_1);
      return;
    }
  }
  return;
}

