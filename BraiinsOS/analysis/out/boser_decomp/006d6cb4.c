// FUN_006d6cb4 @ 006d6cb4 size=184 calls_out=4 calls_in=4
// strings: 

void FUN_006d6cb4(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar1 = FUN_01298504(param_4,1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,param_4);
  }
  FUN_01bed4e2(iVar1,param_3,param_4);
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  iVar6 = param_1[2];
  if (iVar6 == *param_1) {
    FUN_014f8acc(param_1);
  }
  puVar2 = (undefined4 *)(param_1[1] + iVar6 * 0x18);
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = param_4;
  puVar2[4] = iVar1;
  puVar2[5] = param_4;
  param_1[2] = iVar6 + 1;
  return;
}

