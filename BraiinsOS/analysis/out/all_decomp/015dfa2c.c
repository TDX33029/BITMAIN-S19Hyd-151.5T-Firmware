// FUN_015dfa2c @ 015dfa2c size=724 calls_out=2 calls_in=1
// strings: 

void FUN_015dfa2c(uint *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 *puVar3;
  undefined4 local_88;
  uint local_80;
  uint *local_7c;
  uint *local_78;
  uint local_74;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_48 [2];
  uint local_40;
  uint uStack_3c;
  uint *local_38;
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
    local_54 = 0x2e;
    puVar3 = (undefined2 *)(param_4 + 2);
    local_5c = 0x2e;
    local_58 = 0;
    param_5 = param_5 << 2;
    local_50 = 0;
    uVar2 = 0;
    local_88 = 0;
    uVar1 = 0;
    do {
      FUN_015dfdfc(local_48,param_2,param_3,*puVar3);
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
        local_78 = local_38;
        local_74 = local_34;
        local_54 = local_40;
        local_50 = uStack_3c;
        break;
      case 2:
        if (-(uStack_3c - (local_40 < 2)) < (uint)(local_40 - 2 < 6)) {
                    /* WARNING: Could not recover jumptable at 0x015dfc6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_015dfc70 + *(int *)(&DAT_015dfc70 + (local_40 - 2) * 4)))();
          return;
        }
        break;
      case 3:
        if (-(uStack_3c - (local_40 < 2)) < (uint)(local_40 - 2 < 6)) {
                    /* WARNING: Could not recover jumptable at 0x015dfbe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_015dfbe8 + *(int *)(&DAT_015dfbe8 + (local_40 - 2) * 4)))(0);
          return;
        }
        break;
      case 4:
        if (-(uStack_3c - (local_40 < 2)) < (uint)(local_40 - 2 < 6)) {
                    /* WARNING: Could not recover jumptable at 0x015dfc28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_015dfc2c + *(int *)(&DAT_015dfc2c + (local_40 - 2) * 4)))(0);
          return;
        }
        break;
      case 5:
        if ((!(local_40 != 1 || uStack_3c != 0)) && (local_34 == 0x10)) {
          uVar1 = *(undefined1 *)((int)local_38 + 0xf);
          local_30 = (undefined2)local_38[2];
          local_2e = *(undefined1 *)((int)local_38 + 10);
          local_88 = *(undefined4 *)((int)local_38 + 0xb);
          uStack_2c = *local_38;
          uVar2 = *(undefined1 *)((int)local_38 + 7);
          uStack_28 = (undefined3)((uint)*(undefined4 *)((int)local_38 + 3) >> 8);
        }
        break;
      default:
        if (puVar3[-1] == 0x2001) {
          local_7c = local_38;
          local_80 = local_34;
          local_5c = local_40;
          local_58 = uStack_3c;
        }
      }
      puVar3 = puVar3 + 2;
      param_5 = param_5 + -4;
    } while (param_5 != 0);
    if (local_54 != 0x2e || local_50 != 0) {
      param_1[4] = local_5c;
      param_1[0xc] = 0;
      *(uint *)((int)param_1 + 0x3b) = CONCAT31(uStack_28,uStack_2c._3_1_);
      param_1[10] = 0;
      param_1[8] = 0;
      param_1[6] = (uint)local_7c;
      param_1[7] = local_80;
      param_1[2] = (uint)local_78;
      param_1[3] = local_74;
      param_1[5] = local_58;
      param_1[0xd] = 0;
      param_1[0xb] = 0;
      *(undefined1 *)((int)param_1 + 0x47) = uVar1;
      *(undefined4 *)((int)param_1 + 0x43) = local_88;
      param_1[0xe] = uStack_2c;
      *(undefined2 *)(param_1 + 0x10) = local_30;
      *(undefined1 *)((int)param_1 + 0x42) = local_2e;
      *param_1 = local_54;
      param_1[1] = local_50;
      param_1[9] = 0;
      *(undefined1 *)((int)param_1 + 0x3f) = uVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa444(&DAT_018ab474);
}

