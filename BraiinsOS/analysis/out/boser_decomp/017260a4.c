// FUN_017260a4 @ 017260a4 size=344 calls_out=2 calls_in=17
// strings: 

void FUN_017260a4(uint *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint local_60;
  uint local_5c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  uVar3 = 0;
  iVar5 = param_3 * 0x24;
  if (0x38e38e3 < param_3) {
LAB_017260d0:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar3,iVar5);
  }
  if (iVar5 == 0) {
    local_5c = 4;
    local_60 = 0;
  }
  else {
    uVar3 = 4;
    local_5c = FUN_01298504(iVar5,4);
    if (local_5c == 0) goto LAB_017260d0;
    local_60 = param_3;
    if (param_3 != 0) {
      uVar1 = 0;
      puVar4 = (undefined4 *)(local_5c + 8);
      do {
        if (iVar5 == 0) break;
        (**(code **)param_2[4])(&local_38,param_2 + 7,param_2[5],param_2[6]);
        uVar3 = param_2[1];
        local_28 = CONCAT31(local_28._1_3_,*(undefined1 *)(param_2 + 8));
        uVar7 = *param_2;
        uVar2 = param_2[2];
        uVar6 = param_2[3];
        param_2 = param_2 + 9;
        puVar4[-2] = uVar7;
        puVar4[-1] = uVar3;
        *puVar4 = uVar2;
        puVar4[1] = uVar6;
        puVar4[2] = local_38;
        puVar4[3] = uStack_34;
        puVar4[4] = uStack_30;
        puVar4[5] = uStack_2c;
        puVar4[6] = local_28;
        iVar5 = iVar5 + -0x24;
        uVar1 = uVar1 + 1;
        puVar4 = puVar4 + 9;
      } while (param_3 != uVar1);
    }
  }
  *param_1 = local_60;
  param_1[1] = local_5c;
  param_1[2] = param_3;
  return;
}

