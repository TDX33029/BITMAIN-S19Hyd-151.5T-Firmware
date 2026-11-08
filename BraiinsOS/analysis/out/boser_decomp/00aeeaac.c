// FUN_00aeeaac @ 00aeeaac size=132 calls_out=4 calls_in=1
// strings: 

void FUN_00aeeaac(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = FUN_01298504(param_4,1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,param_4);
  }
  FUN_01bed4e2(iVar1,param_3,param_4);
  FUN_019bb7e0(param_2[6],param_2[7]);
  param_2[6] = param_4;
  param_2[7] = iVar1;
  param_2[8] = param_4;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  uVar4 = param_2[8];
  uVar5 = param_2[9];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  param_1[8] = uVar4;
  param_1[9] = uVar5;
  uVar2 = param_2[0xb];
  uVar3 = param_2[0xc];
  uVar4 = param_2[0xd];
  uVar5 = param_2[0xe];
  uVar6 = param_2[0xf];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar2;
  param_1[0xc] = uVar3;
  param_1[0xd] = uVar4;
  param_1[0xe] = uVar5;
  param_1[0xf] = uVar6;
  return;
}

