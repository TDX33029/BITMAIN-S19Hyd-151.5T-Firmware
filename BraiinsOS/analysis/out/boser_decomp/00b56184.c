// FUN_00b56184 @ 00b56184 size=332 calls_out=3 calls_in=3
// strings: 

void FUN_00b56184(uint *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  uint local_68;
  undefined4 *local_64;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  
  uVar3 = 0;
  iVar4 = param_3 * 0x30;
  if (0x2aaaaaa < param_3) {
LAB_00b561b0:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar3,iVar4);
  }
  if (iVar4 == 0) {
    local_64 = (undefined4 *)&DAT_00000008;
    local_68 = 0;
  }
  else {
    uVar3 = 8;
    local_64 = (undefined4 *)FUN_01298504(iVar4,8);
    if (local_64 == (undefined4 *)0x0) goto LAB_00b561b0;
    local_68 = param_3;
    if (param_3 != 0) {
      uVar6 = 0;
      puVar5 = local_64;
      do {
        if (iVar4 == 0) break;
        FUN_006666fc(&uStack_38,param_2[9],param_2[10]);
        iVar4 = iVar4 + -0x30;
        uVar1 = param_2[4];
        uVar2 = param_2[5];
        uVar6 = uVar6 + 1;
        uVar7 = *(undefined8 *)(param_2 + 6);
        uVar3 = param_2[1];
        local_2c = CONCAT31(local_2c._1_3_,*(undefined1 *)(param_2 + 0xb));
        local_50 = (undefined4)*(undefined8 *)(param_2 + 2);
        uStack_4c = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 2) >> 0x20);
        *puVar5 = *param_2;
        puVar5[1] = uVar3;
        puVar5[2] = local_50;
        puVar5[3] = uStack_4c;
        puVar5[4] = uVar1;
        puVar5[5] = uVar2;
        local_40 = (undefined4)uVar7;
        uStack_3c = (undefined4)((ulonglong)uVar7 >> 0x20);
        puVar5[6] = local_40;
        puVar5[7] = uStack_3c;
        puVar5[8] = uStack_38;
        puVar5[9] = uStack_34;
        puVar5[10] = uStack_30;
        puVar5[0xb] = local_2c;
        param_2 = param_2 + 0xc;
        puVar5 = puVar5 + 0xc;
      } while (param_3 != uVar6);
    }
  }
  *param_1 = local_68;
  param_1[1] = (uint)local_64;
  param_1[2] = param_3;
  return;
}

