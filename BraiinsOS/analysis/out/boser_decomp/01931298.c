// FUN_01931298 @ 01931298 size=124 calls_out=3 calls_in=7
// strings: 

void FUN_01931298(int *param_1,int param_2)

{
  undefined4 uVar1;
  int local_28;
  int iStack_24;
  int iStack_20;
  
  param_2 = param_2 + 5;
  uVar1 = 0;
  if (param_2 < 0) {
LAB_019312b0:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar1,param_2);
  }
  if (param_2 == 0) {
    iStack_24 = 1;
    param_2 = 0;
  }
  else {
    uVar1 = 1;
    iStack_24 = FUN_01298504(param_2,1);
    if (iStack_24 == 0) goto LAB_019312b0;
  }
  iStack_20 = 0;
  local_28 = param_2;
  FUN_018e2cf4(&local_28,5);
  *param_1 = local_28;
  param_1[1] = iStack_24;
  param_1[2] = iStack_20;
  return;
}

