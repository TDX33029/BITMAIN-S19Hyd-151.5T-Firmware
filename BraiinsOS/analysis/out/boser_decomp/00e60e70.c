// FUN_00e60e70 @ 00e60e70 size=316 calls_out=6 calls_in=1
// strings: weekly | daily | monthly

void FUN_00e60e70(undefined1 *param_1,int *param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if (param_4 < 0) {
LAB_00e60e84:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar4,param_4);
  }
  if (param_4 == 0) {
    iVar2 = 1;
    iVar3 = 0;
  }
  else {
    uVar4 = 1;
    iVar2 = FUN_01298504(param_4,1);
    iVar3 = param_4;
    if (iVar2 == 0) goto LAB_00e60e84;
  }
  FUN_01bed4e2(iVar2,param_3,param_4);
  if (*param_2 != -0x80000000) {
    FUN_019bb7e0(*param_2,param_2[1]);
  }
  *param_2 = iVar3;
  param_2[1] = iVar2;
  param_2[2] = param_4;
  if (param_4 == 5) {
    iVar3 = thunk_FUN_01bed842(param_3,"daily",5);
    if (iVar3 == 0) {
      uVar1 = 0;
      param_1[1] = 0;
      goto LAB_00e60f80;
    }
LAB_00e60f88:
    uVar4 = FUN_01265080(param_3,param_4,&DAT_01c18a1c,3);
    *(undefined4 *)(param_1 + 4) = uVar4;
    uVar1 = 1;
  }
  else {
    if (param_4 == 6) {
      iVar3 = thunk_FUN_01bed842(param_3,"weekly",6);
      if (iVar3 != 0) goto LAB_00e60f88;
      uVar1 = 1;
    }
    else {
      if ((param_4 != 7) || (iVar3 = thunk_FUN_01bed842(param_3,"monthly",7), iVar3 != 0))
      goto LAB_00e60f88;
      uVar1 = 2;
    }
    param_1[1] = uVar1;
    uVar1 = 0;
  }
LAB_00e60f80:
  *param_1 = uVar1;
  return;
}

