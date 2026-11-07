// FUN_019a2e7c @ 019a2e7c size=124 calls_out=2 calls_in=1
// strings: 

void FUN_019a2e7c(undefined4 *param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = 4;
  if ((0x1fffffff < param_4) || (param_4 = param_4 * 8, 0x7ffffffc < param_4)) {
    param_4 = 0;
    goto LAB_019a2eec;
  }
  if (param_2 == 0) {
    iVar1 = thunk_FUN_01be5118(param_4);
    if (iVar1 == 0) goto LAB_019a2ee0;
LAB_019a2ec0:
    uVar2 = 0;
  }
  else {
    iVar1 = thunk_FUN_01be556c(param_3,param_4);
    if (iVar1 != 0) goto LAB_019a2ec0;
LAB_019a2ee0:
    iVar1 = 4;
  }
  param_1[1] = iVar1;
  iVar1 = 8;
LAB_019a2eec:
  *(uint *)((int)param_1 + iVar1) = param_4;
  *param_1 = uVar2;
  return;
}

