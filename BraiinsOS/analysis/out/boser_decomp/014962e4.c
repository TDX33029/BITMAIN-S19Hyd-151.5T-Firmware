// FUN_014962e4 @ 014962e4 size=172 calls_out=4 calls_in=27
// strings: 

void FUN_014962e4(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (param_3 == 0) {
    iVar1 = 1;
    param_4 = 0;
    iVar6 = 0;
  }
  else {
    if (param_4 < 0) {
      uVar5 = 0;
LAB_01496308:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar5,param_4);
    }
    if (param_4 == 0) {
      iVar1 = 1;
      iVar6 = 0;
    }
    else {
      uVar5 = 1;
      iVar1 = FUN_01298504(param_4,1);
      if (iVar1 == 0) goto LAB_01496308;
      iVar6 = param_4;
    }
    FUN_01bed4e2(iVar1,param_3,param_4);
  }
  FUN_019bb7e0(param_2[3],param_2[4]);
  param_2[3] = iVar6;
  param_2[4] = iVar1;
  param_2[5] = param_4;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar5 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  uVar4 = param_2[8];
  param_1[4] = param_2[4];
  param_1[5] = uVar5;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  param_1[8] = uVar4;
  return;
}

