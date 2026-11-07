// FUN_016d4540 @ 016d4540 size=168 calls_out=3 calls_in=19
// strings: 

void FUN_016d4540(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  uVar3 = 0;
  if (param_3 < 0) {
LAB_016d4558:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar3,param_3);
  }
  if (param_3 == 0) {
    iVar1 = 1;
    iVar7 = 0;
  }
  else {
    uVar3 = 1;
    iVar1 = FUN_01298504(param_3,1);
    iVar7 = param_3;
    if (iVar1 == 0) goto LAB_016d4558;
  }
  FUN_01bed4e2(iVar1,param_2,param_3);
  uVar3 = param_5[1];
  uVar2 = param_5[2];
  *param_1 = *param_5;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  uVar3 = param_5[4];
  uVar2 = param_5[5];
  uVar5 = param_5[6];
  param_1[3] = param_5[3];
  param_1[4] = uVar3;
  param_1[5] = uVar2;
  param_1[6] = uVar5;
  param_1[7] = iVar7;
  param_1[8] = iVar1;
  param_1[9] = param_3;
  uVar3 = param_4[1];
  uVar2 = param_4[2];
  uVar5 = param_4[3];
  uVar4 = param_4[4];
  uVar6 = param_4[5];
  param_1[10] = *param_4;
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar5;
  param_1[0xe] = uVar4;
  param_1[0xf] = uVar6;
  return;
}

