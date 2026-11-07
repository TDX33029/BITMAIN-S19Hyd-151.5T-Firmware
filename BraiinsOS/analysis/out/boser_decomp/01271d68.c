// FUN_01271d68 @ 01271d68 size=176 calls_out=5 calls_in=2
// strings: internal error: entered unreachable code

undefined4 FUN_01271d68(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9554);
  }
  uVar2 = 0;
  if (param_3 < 0) {
LAB_01271d8c:
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
    if (iVar1 == 0) goto LAB_01271d8c;
  }
  FUN_01bed4e2(iVar1,param_2,param_3);
  if (param_1[4] != -0x80000000) {
    FUN_019bb7e0(param_1[4],param_1[5]);
  }
  param_1[4] = iVar3;
  param_1[5] = iVar1;
  param_1[6] = param_3;
  return 0;
}

