// FUN_0003e760 @ 0003e760  size=80  callers=0
// program: cgminer


void FUN_0003e760(undefined4 param_1,int *param_2)

{
  int iVar1;
  int local_14 [2];
  
  iVar1 = FUN_0003e6b0(param_1,local_14);
  if (iVar1 == 0) {
    if (local_14[0] < 0) {
      FUN_0003e4fc("\'%s\' is negative",param_1);
      return;
    }
    *param_2 = local_14[0];
  }
  return;
}

