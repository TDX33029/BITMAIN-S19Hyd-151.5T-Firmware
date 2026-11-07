// FUN_018ee660 @ 018ee660 size=100 calls_out=3 calls_in=5
// strings: 

void FUN_018ee660(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 == 0) {
    iVar2 = 0;
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_01298504(param_3,1);
    iVar2 = param_3;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,param_3);
    }
  }
  *param_1 = iVar2;
  param_1[1] = iVar1;
  FUN_01bed4e2(iVar1,param_2,param_3);
  param_1[2] = param_3;
  return;
}

