// FUN_014a7f78 @ 014a7f78 size=764 calls_out=7 calls_in=1
// strings: 

void FUN_014a7f78(uint *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint unaff_r10;
  undefined *extraout_r12;
  undefined *local_104;
  undefined *local_100;
  undefined *puStack_fc;
  undefined *puStack_f8;
  undefined *local_f4;
  undefined *puStack_f0;
  undefined *puStack_ec;
  undefined *local_e8;
  undefined *local_e4;
  undefined *puStack_e0;
  undefined *puStack_dc;
  undefined *puStack_d8;
  undefined *puStack_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  undefined *local_c4;
  undefined *local_c0;
  undefined *puStack_bc;
  undefined *puStack_b8;
  undefined *puStack_b4;
  undefined *puStack_b0;
  undefined *puStack_ac;
  undefined *local_a8;
  undefined *puStack_a4;
  undefined *puStack_a0;
  undefined *puStack_9c;
  undefined *puStack_98;
  undefined *puStack_94;
  undefined *local_90;
  undefined *puStack_8c;
  undefined *puStack_88;
  undefined *puStack_84;
  undefined *local_80;
  undefined *puStack_7c;
  undefined *local_78;
  undefined *puStack_74;
  undefined *local_70;
  undefined *puStack_6c;
  undefined *puStack_68;
  undefined *puStack_64;
  undefined *puStack_60;
  undefined2 local_48;
  uint local_34;
  undefined *local_30;
  
  if (*param_2 == 2 && param_2[1] == 0) {
    FUN_01656eb8(&local_90,&DAT_018a5780,param_2[0x14],param_2[0x15],param_2[0x16],&DAT_018a5780);
    if (*param_2 != 2 || param_2[1] != 0) {
      FUN_00a07b4c(param_2);
    }
    FUN_016dd1aa(param_2,&local_90,0x50);
    if (*param_2 == 2 && param_2[1] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018a5790);
    }
  }
  iVar1 = FUN_01657fc4(param_2,*param_3);
  if (iVar1 == 0) {
    local_34 = 1;
    local_48 = 4;
    local_30 = &DAT_018a5134;
    local_90 = (undefined *)0x2;
    unaff_r10 = thunk_FUN_016d4a50(100);
    if (unaff_r10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,100);
    }
    FUN_016dd1aa(unaff_r10,&local_90,100);
    goto LAB_014a8094;
  }
  (**(code **)(param_2[0x19] + 0xc))(&local_d0,param_2[0x18],param_3);
  if (local_d0 == 6 && local_cc == 0) {
    *param_1 = 6;
    param_1[1] = 0;
    return;
  }
  if (local_d0 == 5 && local_cc == 0) {
    if (*param_2 != 2 || param_2[1] != 0) {
LAB_014a81c4:
      FUN_00a07b4c(param_2);
    }
  }
  else {
    if (local_d0 == 4 && local_cc == 0) {
      local_30 = local_c4;
      local_48 = 4;
      local_90 = (undefined *)0x2;
      local_34 = local_c8;
      uVar3 = thunk_FUN_016d4a50(100);
      if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,100);
      }
      FUN_016dd1aa(uVar3,&local_90,100);
      local_c8 = uVar3;
      local_c4 = extraout_r12;
    }
    else {
      local_90 = local_c0;
      puStack_8c = puStack_bc;
      puStack_88 = puStack_b8;
      puStack_84 = puStack_b4;
      local_80 = puStack_b0;
      puStack_7c = puStack_ac;
      local_78 = local_a8;
      puStack_74 = puStack_a4;
      local_70 = puStack_a0;
      puStack_6c = puStack_9c;
      puStack_68 = puStack_98;
      puStack_64 = puStack_94;
    }
    local_100 = local_90;
    puStack_fc = puStack_8c;
    puStack_f8 = puStack_88;
    local_f4 = puStack_84;
    puStack_f0 = local_80;
    puStack_ec = puStack_7c;
    local_e8 = local_78;
    local_e4 = puStack_74;
    puStack_e0 = local_70;
    puStack_dc = puStack_6c;
    puStack_d8 = puStack_68;
    puStack_d4 = puStack_64;
    unaff_r10 = local_c8;
    local_104 = local_c4;
    if (*param_2 != 2 || param_2[1] != 0) goto LAB_014a81c4;
  }
  *param_2 = 2;
  param_2[1] = 0;
  local_90 = local_104;
  puStack_8c = local_100;
  puStack_88 = puStack_fc;
  puStack_84 = puStack_f8;
  local_80 = local_f4;
  puStack_7c = puStack_f0;
  local_78 = puStack_ec;
  puStack_74 = local_e8;
  local_70 = local_e4;
  puStack_6c = puStack_e0;
  puStack_68 = puStack_dc;
  puStack_64 = puStack_d8;
  puStack_60 = puStack_d4;
  if ((local_d0 & 7) != 4) {
    if (local_d0 == 5) {
      *param_1 = 5;
      param_1[1] = 0;
      return;
    }
    param_1[3] = (uint)local_104;
    param_1[4] = (uint)local_100;
    param_1[5] = (uint)puStack_fc;
    param_1[6] = (uint)puStack_f8;
    param_1[7] = (uint)local_f4;
    param_1[8] = (uint)puStack_f0;
    param_1[9] = (uint)puStack_ec;
    param_1[10] = (uint)local_e8;
    param_1[0xb] = (uint)local_e4;
    param_1[0xc] = (uint)puStack_e0;
    param_1[0xd] = (uint)puStack_dc;
    param_1[0xe] = (uint)puStack_d8;
    param_1[0xf] = (uint)puStack_d4;
    *param_1 = local_d0;
    param_1[1] = local_cc;
    param_1[2] = unaff_r10;
    return;
  }
LAB_014a8094:
  local_d0 = unaff_r10;
  puVar2 = (uint *)thunk_FUN_016d4a50(4);
  if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,4);
  }
  *puVar2 = unaff_r10;
  *param_1 = 4;
  param_1[1] = 0;
  param_1[2] = (uint)puVar2;
  param_1[3] = (uint)&DAT_018a5090;
  return;
}

