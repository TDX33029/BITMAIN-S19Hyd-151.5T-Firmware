// FUN_0094c7a0 @ 0094c7a0 size=156 calls_out=4 calls_in=8
// strings: 

void FUN_0094c7a0(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 unaff_r6;
  int unaff_r7;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_3 == 0) {
    param_4 = 0x80000000;
  }
  else {
    unaff_r7 = FUN_01298504(param_4,1);
    if (unaff_r7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,param_4);
    }
    FUN_01bed4e2(unaff_r7,param_3,param_4);
    unaff_r6 = param_4;
  }
  if (param_2[0xb] != -0x80000000) {
    FUN_019bb7e0(param_2[0xb],param_2[0xc]);
  }
  param_2[0xb] = param_4;
  param_2[0xc] = unaff_r7;
  param_2[0xd] = unaff_r6;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  uVar3 = param_2[8];
  uVar4 = param_2[9];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  param_1[8] = uVar3;
  param_1[9] = uVar4;
  uVar1 = param_2[0xb];
  uVar2 = param_2[0xc];
  uVar3 = param_2[0xd];
  uVar4 = param_2[0xe];
  uVar5 = param_2[0xf];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar3;
  param_1[0xe] = uVar4;
  param_1[0xf] = uVar5;
  return;
}

