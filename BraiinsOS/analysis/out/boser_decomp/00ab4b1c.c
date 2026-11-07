// FUN_00ab4b1c @ 00ab4b1c size=1116 calls_out=6 calls_in=1
// strings: Schedule type is requiredevent open/boser/boser/src/web/btctools.rs:398 | Day of month must be between 1 and 28 | Day of week cannot be unspecified

void FUN_00ab4b1c(int *param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 local_134;
  int local_130;
  undefined4 local_12c;
  int local_128;
  undefined4 local_124;
  int local_120;
  undefined4 local_11c;
  undefined1 local_114;
  undefined4 local_110;
  int local_10c;
  undefined4 local_108;
  int local_104;
  undefined4 local_100;
  int local_fc;
  undefined4 local_f8;
  int local_f4;
  undefined1 local_f0;
  undefined4 local_ec;
  int local_e8;
  undefined4 local_e4;
  int local_e0;
  undefined4 local_dc;
  int local_d8;
  undefined4 local_d4;
  int local_d0;
  undefined1 local_cc;
  int local_c8;
  undefined4 *local_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  undefined4 *local_b0;
  undefined *local_ac;
  int *local_a8;
  undefined4 local_a4 [24];
  undefined4 *local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar1 = *param_2;
  if (iVar1 == 3) {
    FUN_01a71aac(&local_b0,3,
                 "Schedule type is requiredevent open/boser/boser/src/web/btctools.rs:398",0x19);
    if (local_b0 != (undefined4 *)0x3 || local_ac != (undefined *)0x0) {
      FUN_01bed4e2(param_1 + 3,local_a4,0x5c);
      *param_1 = (int)local_b0;
      param_1[1] = (int)local_ac;
      param_1[2] = (int)local_a8;
      return;
    }
    iVar1 = *local_a8;
    param_2 = local_a8;
  }
  if (iVar1 == 0) {
    local_11c = 0;
    local_124 = 0;
    local_12c = 0;
    local_134 = 0;
    local_114 = 0;
    if (param_2[1] != 2) {
      local_130 = param_2[3];
      local_128 = param_2[4];
      local_134 = 1;
      local_120 = 0;
      if ((param_2[1] & 1U) != 0) {
        local_120 = param_2[2];
      }
      local_124 = 1;
      local_12c = 1;
    }
    FUN_00a58280(&local_c8,&local_134);
    if (local_c8 != 2) goto LAB_00ab4ea8;
    local_b0 = &local_30;
    local_28 = 0;
    local_30 = 0;
    local_a4[0] = 0;
    local_44 = local_c4;
    local_2c = 1;
    local_a8 = (int *)0x60000020;
    local_ac = &DAT_01c0ff80;
    iVar1 = FUN_00667a08(&local_44,&local_b0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_40,&DAT_01c0ffb8,&DAT_01d30334);
    }
    local_40 = local_30;
    uStack_3c = local_2c;
    uStack_38 = local_28;
    FUN_01a70fd4(&local_b0,0xd);
  }
  else if (iVar1 == 1) {
    local_f8 = 0;
    local_100 = 0;
    local_108 = 0;
    local_110 = 0;
    local_f0 = 1;
    if (param_2[3] != 2) {
      local_110 = 1;
      local_10c = param_2[5];
      local_104 = param_2[6];
      local_100 = 1;
      local_fc = 0;
      if ((param_2[3] & 1U) != 0) {
        local_fc = param_2[4];
      }
      local_108 = 1;
    }
    if (param_2[1] == 1) {
      local_f4 = param_2[2];
      if (local_f4 == 0) {
        uVar3 = 0x21;
        pcVar2 = "Day of week cannot be unspecified";
LAB_00ab4ef4:
        FUN_01a71aac(param_1,3,pcVar2,uVar3);
        return;
      }
      local_f8 = 1;
    }
    FUN_00a58280(&local_c8,&local_110);
    if (local_c8 != 2) {
LAB_00ab4ea8:
      param_1[2] = local_c8;
      param_1[3] = (int)local_c4;
      param_1[4] = iStack_c0;
      param_1[5] = iStack_bc;
      param_1[6] = iStack_b8;
      param_1[7] = iStack_b4;
      *param_1 = 3;
      param_1[1] = 0;
      return;
    }
    local_b0 = &local_30;
    local_28 = 0;
    local_30 = 0;
    local_a4[0] = 0;
    local_44 = local_c4;
    local_2c = 1;
    local_a8 = (int *)0x60000020;
    local_ac = &DAT_01c0ff80;
    iVar1 = FUN_00667a08(&local_44,&local_b0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_40,&DAT_01c0ffb8,&DAT_01d30334);
    }
    local_40 = local_30;
    uStack_3c = local_2c;
    uStack_38 = local_28;
    FUN_01a70fd4(&local_b0,3);
  }
  else {
    local_d4 = 0;
    local_dc = 0;
    local_e4 = 0;
    local_ec = 0;
    local_cc = 2;
    if (param_2[3] != 2) {
      local_e8 = param_2[5];
      local_e0 = param_2[6];
      local_ec = 1;
      local_d8 = 0;
      if ((param_2[3] & 1U) != 0) {
        local_d8 = param_2[4];
      }
      local_dc = 1;
      local_e4 = 1;
    }
    if (param_2[1] == 1) {
      local_d0 = param_2[2];
      if (0x1b < local_d0 - 1U) {
        uVar3 = 0x25;
        pcVar2 = "Day of month must be between 1 and 28";
        goto LAB_00ab4ef4;
      }
      local_d4 = 1;
    }
    FUN_00a58280(&local_c8,&local_ec);
    if (local_c8 != 2) goto LAB_00ab4ea8;
    local_b0 = &local_30;
    local_28 = 0;
    local_30 = 0;
    local_a4[0] = 0;
    local_44 = local_c4;
    local_2c = 1;
    local_a8 = (int *)0x60000020;
    local_ac = &DAT_01c0ff80;
    iVar1 = FUN_00667a08(&local_44,&local_b0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_40,&DAT_01c0ffb8,&DAT_01d30334);
    }
    local_40 = local_30;
    uStack_3c = local_2c;
    uStack_38 = local_28;
    FUN_01a70fd4(&local_b0,3);
  }
  (**(code **)*local_c4)(local_c4);
  FUN_01bed4e2(param_1,&local_b0,0x68);
  return;
}

