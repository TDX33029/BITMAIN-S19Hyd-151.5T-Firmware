// FUN_00e60a18 @ 00e60a18 size=272 calls_out=6 calls_in=0
// strings: quota | fixedshareratio

void FUN_00e60a18(undefined1 *param_1,int *param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if (param_4 < 0) {
LAB_00e60a2c:
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
    if (iVar2 == 0) goto LAB_00e60a2c;
  }
  FUN_01bed4e2(iVar2,param_3,param_4);
  if (*param_2 != -0x80000000) {
    FUN_019bb7e0(*param_2,param_2[1]);
  }
  *param_2 = iVar3;
  param_2[1] = iVar2;
  param_2[2] = param_4;
  if (param_4 == 5) {
    iVar3 = thunk_FUN_01bed842(param_3,"quota",5);
    if (iVar3 == 0) {
      uVar1 = 0;
      param_1[1] = 0;
      goto LAB_00e60afc;
    }
  }
  else if ((param_4 == 0xf) &&
          (iVar3 = thunk_FUN_01bed842(param_3,"fixedshareratio",0xf), iVar3 == 0)) {
    param_1[1] = 1;
    uVar1 = 0;
    goto LAB_00e60afc;
  }
  uVar4 = FUN_01265080(param_3,param_4,&DAT_01c18a44,2);
  *(undefined4 *)(param_1 + 4) = uVar4;
  uVar1 = 1;
LAB_00e60afc:
  *param_1 = uVar1;
  return;
}

