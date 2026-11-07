// FUN_00e60fbc @ 00e60fbc size=352 calls_out=6 calls_in=0
// strings: unspecified | zipencrypted

void FUN_00e60fbc(undefined1 *param_1,int *param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if (param_4 < 0) {
LAB_00e60fd0:
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
    if (iVar2 == 0) goto LAB_00e60fd0;
  }
  FUN_01bed4e2(iVar2,param_3,param_4);
  if (*param_2 != -0x80000000) {
    FUN_019bb7e0(*param_2,param_2[1]);
  }
  *param_2 = iVar3;
  param_2[1] = iVar2;
  param_2[2] = param_4;
  if (param_4 == 3) {
    iVar3 = thunk_FUN_01bed842(param_3,&DAT_004ba4cf,3);
    if (iVar3 == 0) {
      uVar1 = 1;
    }
    else {
      iVar3 = thunk_FUN_01bed842(param_3,"bos",3);
      if (iVar3 != 0) goto LAB_00e610f8;
      uVar1 = 2;
    }
LAB_00e610e8:
    param_1[1] = uVar1;
    uVar1 = 0;
  }
  else {
    if (param_4 == 0xb) {
      iVar3 = thunk_FUN_01bed842(param_3,"unspecified",0xb);
      if (iVar3 == 0) {
        uVar1 = 0;
        param_1[1] = 0;
        goto LAB_00e610f0;
      }
    }
    else if ((param_4 == 0xc) &&
            (iVar3 = thunk_FUN_01bed842(param_3,"zipencrypted",0xc), iVar3 == 0)) {
      uVar1 = 3;
      goto LAB_00e610e8;
    }
LAB_00e610f8:
    uVar4 = FUN_01265080(param_3,param_4,&DAT_01c189fc,4);
    *(undefined4 *)(param_1 + 4) = uVar4;
    uVar1 = 1;
  }
LAB_00e610f0:
  *param_1 = uVar1;
  return;
}

