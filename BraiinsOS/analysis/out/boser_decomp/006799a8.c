// FUN_006799a8 @ 006799a8 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_006799a8(undefined1 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_006794bc(param_2);
  if (iVar1 == 0) {
    FUN_00697a0c(param_1,param_2);
    return;
  }
  *(int *)(param_1 + 4) = iVar1;
  *param_1 = 1;
  return;
}

