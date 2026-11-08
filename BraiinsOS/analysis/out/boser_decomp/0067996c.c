// FUN_0067996c @ 0067996c size=60 calls_out=2 calls_in=1
// strings: 

void FUN_0067996c(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_006794bc(param_2);
  if (iVar1 == 0) {
    FUN_006790fc(param_1,param_2);
    return;
  }
  *param_1 = 1;
  param_1[1] = iVar1;
  return;
}

