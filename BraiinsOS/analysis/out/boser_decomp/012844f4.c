// FUN_012844f4 @ 012844f4 size=76 calls_out=2 calls_in=3
// strings: 

void FUN_012844f4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_012985ec(param_2,1);
    iVar2 = param_2;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,param_2);
    }
  }
  *param_1 = iVar2;
  param_1[1] = iVar1;
  param_1[2] = param_2;
  return;
}

