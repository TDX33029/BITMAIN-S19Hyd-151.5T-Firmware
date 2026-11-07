// FUN_013303e4 @ 013303e4 size=132 calls_out=3 calls_in=1
// strings: 

void FUN_013303e4(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (param_3 < 0) {
LAB_013303f8:
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
    if (iVar1 == 0) goto LAB_013303f8;
  }
  FUN_01bed4e2(iVar1,param_2,param_3);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = 0x80000003;
  param_1[1] = iVar3;
  param_1[2] = iVar1;
  param_1[3] = param_3;
  return;
}

