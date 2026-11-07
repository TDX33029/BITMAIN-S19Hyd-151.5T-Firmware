// FUN_0160c9e4 @ 0160c9e4 size=140 calls_out=3 calls_in=1
// strings: 

void FUN_0160c9e4(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    *param_1 = -0x80000000;
    return;
  }
  uVar2 = 0;
  if (param_3 < 0) {
LAB_0160ca04:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar2,param_3);
  }
  if (param_3 == 0) {
    iVar1 = 1;
    iVar3 = 0;
  }
  else {
    uVar2 = 1;
    iVar1 = FUN_01298504(param_3,1);
    iVar3 = param_3;
    if (iVar1 == 0) goto LAB_0160ca04;
  }
  FUN_01bed4e2(iVar1,param_2,param_3);
  *param_1 = iVar3;
  param_1[1] = iVar1;
  param_1[2] = param_3;
  return;
}

