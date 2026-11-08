// FUN_0005e6f0 @ 0005e6f0  size=80  callers=0
// program: bmminer


void FUN_0005e6f0(undefined4 param_1,int *param_2)

{
  int iVar1;
  int local_14 [2];
  
  iVar1 = FUN_0005e5f0(param_1,local_14);
  if (iVar1 == 0) {
    *param_2 = local_14[0];
    if (local_14[0] < 0) {
      FUN_0005e43c("\'%s\' is negative",param_1);
      return;
    }
  }
  return;
}

