// FUN_013184d8 @ 013184d8 size=92 calls_out=2 calls_in=10
// strings: 

void FUN_013184d8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (param_2 < 0) {
LAB_013184ec:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar3,param_2);
  }
  if (param_2 == 0) {
    iVar1 = 1;
    iVar2 = 0;
  }
  else {
    uVar3 = 1;
    iVar1 = FUN_012985ec(param_2,1);
    iVar2 = param_2;
    if (iVar1 == 0) goto LAB_013184ec;
  }
  *param_1 = iVar2;
  param_1[1] = iVar1;
  param_1[2] = param_2;
  return;
}

