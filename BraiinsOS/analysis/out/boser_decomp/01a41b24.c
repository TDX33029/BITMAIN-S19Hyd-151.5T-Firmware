// FUN_01a41b24 @ 01a41b24 size=192 calls_out=4 calls_in=12
// strings: 

void FUN_01a41b24(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint local_30;
  int iStack_2c;
  uint uStack_28;
  
  if ((param_3 & 1) == 0) {
    FUN_00664898(&local_30,param_2);
  }
  else {
    uVar1 = param_3 >> 1;
    if (param_3 < 2) {
      iVar4 = 1;
      uVar5 = 0;
    }
    else {
      iVar4 = FUN_01298504(uVar1,1);
      uVar5 = uVar1;
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,uVar1);
      }
    }
    FUN_01bed4e2(iVar4,param_2,uVar1);
    local_30 = uVar5;
    iStack_2c = iVar4;
    uStack_28 = uVar1;
  }
  param_1[3] = local_30;
  param_1[4] = iStack_2c;
  param_1[5] = uStack_28;
  param_1[6] = 0;
  param_1[7] = 4;
  param_1[8] = 0;
  param_1[9] = 0x80000000;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  *param_1 = *param_4;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return;
}

