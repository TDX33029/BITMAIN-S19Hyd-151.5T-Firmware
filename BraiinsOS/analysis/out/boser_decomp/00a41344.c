// FUN_00a41344 @ 00a41344 size=116 calls_out=3 calls_in=0
// strings: 

void FUN_00a41344(undefined4 *param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_01298504(param_4,1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,param_4);
  }
  FUN_01bed4e2(iVar1,param_3,param_4);
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  param_1[3] = *param_5;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  *(undefined2 *)(param_1 + 6) = param_2;
  *param_1 = param_4;
  param_1[1] = iVar1;
  param_1[2] = param_4;
  return;
}

