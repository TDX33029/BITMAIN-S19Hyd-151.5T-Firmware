// FUN_01a55794 @ 01a55794 size=124 calls_out=4 calls_in=1
// strings: 

void FUN_01a55794(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int unaff_r6;
  int iVar2;
  
  if (param_3 == 0) {
    iVar2 = -0x80000000;
  }
  else {
    unaff_r6 = FUN_01298504(param_3,1);
    if (unaff_r6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,param_3);
    }
    FUN_01bed4e2(unaff_r6,param_2,param_3);
    iVar2 = param_3;
  }
  iVar1 = *param_1;
  if ((iVar1 != -0x7ffffffd) && (-1 < iVar1)) {
    FUN_0134bd64(iVar1,param_1[1]);
  }
  *param_1 = iVar2;
  param_1[1] = unaff_r6;
  param_1[2] = param_3;
  return;
}

