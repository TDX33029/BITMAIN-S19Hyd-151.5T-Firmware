// FUN_0112a9fc @ 0112a9fc size=88 calls_out=2 calls_in=1
// strings: 

void FUN_0112a9fc(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    return;
  }
  iVar1 = FUN_016d38c8(param_2,1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,param_2);
  }
  *param_1 = param_2;
  param_1[1] = iVar1;
  param_1[2] = param_2;
  return;
}

