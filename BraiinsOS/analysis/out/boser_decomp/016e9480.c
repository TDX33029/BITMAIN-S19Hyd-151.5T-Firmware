// FUN_016e9480 @ 016e9480 size=144 calls_out=3 calls_in=5
// strings: 

void FUN_016e9480(int *param_1,undefined4 param_2,int param_3,int *param_4,undefined1 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = 0;
  if (param_3 < 0) {
LAB_016e9494:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar3,param_3);
  }
  if (param_3 == 0) {
    iVar1 = 1;
    iVar2 = 0;
  }
  else {
    uVar3 = 1;
    iVar1 = FUN_01298504(param_3,1);
    iVar2 = param_3;
    if (iVar1 == 0) goto LAB_016e9494;
  }
  FUN_01bed4e2(iVar1,param_2,param_3);
  *(undefined1 *)(param_1 + 9) = param_5;
  *param_1 = iVar2;
  param_1[1] = iVar1;
  param_1[2] = param_3;
  iVar2 = param_4[1];
  iVar1 = param_4[2];
  iVar4 = param_4[3];
  iVar5 = param_4[4];
  iVar6 = param_4[5];
  param_1[3] = *param_4;
  param_1[4] = iVar2;
  param_1[5] = iVar1;
  param_1[6] = iVar4;
  param_1[7] = iVar5;
  param_1[8] = iVar6;
  return;
}

