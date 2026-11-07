// FUN_0060b218 @ 0060b218 size=720 calls_out=2 calls_in=1
// strings: 

void FUN_0060b218(uint *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 *puVar3;
  undefined4 local_84;
  uint local_7c;
  undefined4 *local_78;
  undefined4 *local_74;
  uint local_70;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48 [2];
  uint local_40;
  uint uStack_3c;
  undefined4 *local_38;
  uint local_34;
  undefined2 local_30;
  undefined1 local_2e;
  undefined4 uStack_2c;
  undefined3 uStack_28;
  
  uStack_28 = 0;
  uStack_2c = 0;
  local_30 = 0;
  local_2e = 0;
  if (param_5 != 0) {
    local_50 = 0x2e;
    puVar3 = (undefined2 *)(param_4 + 2);
    local_58 = 0x2e;
    local_54 = 0;
    param_5 = param_5 << 2;
    local_4c = 0;
    uVar2 = 0;
    local_84 = 0;
    uVar1 = 0;
    do {
      FUN_0060b89c(local_48,param_2,param_3,*puVar3);
      if ((local_48[0] & 1) != 0) {
        param_1[4] = (uint)local_38;
        param_1[5] = local_34;
        *param_1 = 0x2e;
        param_1[1] = 0;
        param_1[2] = local_40;
        param_1[3] = uStack_3c;
        return;
      }
      switch(puVar3[-1]) {
      case 1:
        local_74 = local_38;
        local_70 = local_34;
        local_50 = local_40;
        local_4c = uStack_3c;
        break;
      case 2:
        if (-(uStack_3c - (local_40 < 2)) < (uint)(local_40 - 2 < 6)) {
                    /* WARNING: Could not recover jumptable at 0x0060b454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_0060b458 + *(int *)(&DAT_0060b458 + (local_40 - 2) * 4)))();
          return;
        }
        break;
      case 3:
        if (-(uStack_3c - (local_40 < 2)) < (uint)(local_40 - 2 < 6)) {
                    /* WARNING: Could not recover jumptable at 0x0060b3cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_0060b3d0 + *(int *)(&DAT_0060b3d0 + (local_40 - 2) * 4)))(0);
          return;
        }
        break;
      case 4:
        if (-(uStack_3c - (local_40 < 2)) < (uint)(local_40 - 2 < 6)) {
                    /* WARNING: Could not recover jumptable at 0x0060b410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_0060b414 + *(int *)(&DAT_0060b414 + (local_40 - 2) * 4)))(0);
          return;
        }
        break;
      case 5:
        if ((!(local_40 != 1 || uStack_3c != 0)) && (local_34 == 0x10)) {
          uVar1 = *(undefined1 *)((int)local_38 + 0xf);
          local_30 = *(undefined2 *)(local_38 + 2);
          local_2e = *(undefined1 *)((int)local_38 + 10);
          local_84 = *(undefined4 *)((int)local_38 + 0xb);
          uVar2 = *(undefined1 *)((int)local_38 + 7);
          uStack_2c._0_3_ = (undefined3)*local_38;
          uStack_2c._3_1_ = (undefined1)*(undefined4 *)((int)local_38 + 3);
          uStack_28 = (undefined3)((uint)*(undefined4 *)((int)local_38 + 3) >> 8);
        }
        break;
      default:
        if (puVar3[-1] == 0x2001) {
          local_78 = local_38;
          local_7c = local_34;
          local_58 = local_40;
          local_54 = uStack_3c;
        }
      }
      puVar3 = puVar3 + 2;
      param_5 = param_5 + -4;
    } while (param_5 != 0);
    if (local_50 != 0x2e || local_4c != 0) {
      param_1[4] = local_58;
      param_1[0xc] = 0;
      *(uint *)((int)param_1 + 0x3b) = CONCAT31(uStack_28,uStack_2c._3_1_);
      param_1[10] = 0;
      param_1[8] = 0;
      param_1[6] = (uint)local_78;
      param_1[7] = local_7c;
      param_1[2] = (uint)local_74;
      param_1[3] = local_70;
      param_1[5] = local_54;
      param_1[0xd] = 0;
      param_1[0xb] = 0;
      *(undefined1 *)((int)param_1 + 0x47) = uVar1;
      *(undefined4 *)((int)param_1 + 0x43) = local_84;
      param_1[0xe] = uStack_2c;
      *(undefined2 *)(param_1 + 0x10) = local_30;
      *(undefined1 *)((int)param_1 + 0x42) = local_2e;
      *param_1 = local_50;
      param_1[1] = local_4c;
      param_1[9] = 0;
      *(undefined1 *)((int)param_1 + 0x3f) = uVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa444(&DAT_01857870);
}

