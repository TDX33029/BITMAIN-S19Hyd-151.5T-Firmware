// FUN_00ea863c @ 00ea863c size=204 calls_out=3 calls_in=0
// strings: 

void FUN_00ea863c(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  FUN_00f09308(param_1,param_2,param_2,0);
  if (*param_3 == -0x7ffffffb) {
    iVar1 = param_1[2];
    if (*param_1 == iVar1) {
      FUN_00edff4c(param_1,iVar1,1,1,1);
      iVar1 = param_1[2];
    }
    *(undefined1 *)(param_1[1] + iVar1) = 0;
    param_1[2] = iVar1 + 1;
    return;
  }
  iVar1 = param_1[2];
  if (*param_1 == iVar1) {
    FUN_00edff4c(param_1,iVar1,1,1,1);
    iVar1 = param_1[2];
  }
  *(undefined1 *)(param_1[1] + iVar1) = 1;
  param_1[2] = iVar1 + 1;
  FUN_00efe698(param_3,param_1);
  return;
}

