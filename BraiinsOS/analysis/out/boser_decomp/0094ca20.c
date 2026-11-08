// FUN_0094ca20 @ 0094ca20 size=160 calls_out=4 calls_in=9
// strings: 

void FUN_0094ca20(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int unaff_r5;
  int unaff_r7;
  int iVar1;
  
  if (param_3 == 0) {
    iVar1 = -0x80000000;
  }
  else {
    if (param_4 == 0) {
      unaff_r7 = 1;
      iVar1 = 0;
    }
    else {
      unaff_r7 = FUN_01298504(param_4,1);
      if (unaff_r7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,param_4);
      }
      iVar1 = param_4;
    }
    FUN_01bed4e2(unaff_r7,param_3,param_4);
    unaff_r5 = param_4;
  }
  if (*(int *)(param_2 + 0xe0) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_2 + 0xe0),*(undefined4 *)(param_2 + 0xe4));
  }
  *(int *)(param_2 + 0xe0) = iVar1;
  *(int *)(param_2 + 0xe4) = unaff_r7;
  *(int *)(param_2 + 0xe8) = unaff_r5;
  FUN_01bed4e2(param_1,param_2,0x130);
  return;
}

