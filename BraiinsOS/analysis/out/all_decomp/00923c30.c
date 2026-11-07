// FUN_00923c30 @ 00923c30 size=1472 calls_out=13 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00923c30(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int local_258;
  int local_254;
  undefined1 auStack_248 [72];
  int local_200 [28];
  int local_190;
  int local_18c;
  undefined4 local_188;
  int local_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  uint local_170;
  uint uStack_16c;
  uint local_168;
  uint local_164;
  uint uStack_160;
  uint local_15c;
  uint local_158;
  uint uStack_154;
  uint local_150;
  uint local_14c;
  uint uStack_148;
  int local_144;
  int local_140;
  int local_13c;
  uint local_138;
  uint uStack_134;
  uint uStack_130;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  uint local_d0;
  uint uStack_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint uStack_b4;
  uint local_b0;
  uint local_ac;
  uint uStack_a8;
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint local_90;
  uint local_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  int local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  iVar2 = *(int *)(param_2 + 0x20);
  uVar9 = *(undefined4 *)(param_2 + 0x10);
  iVar8 = *(int *)(param_2 + 0x14);
  iVar10 = *(int *)(param_2 + 0x18);
  if ((iVar2 != 0) && (iVar6 = iVar2 * 4 + 4, iVar2 + iVar6 != -5)) {
    thunk_FUN_016d3fb4(*(int *)(param_2 + 0x1c) - iVar6);
  }
  local_180 = *(undefined4 *)(param_2 + 0x30);
  uStack_17c = *(undefined4 *)(param_2 + 0x34);
  uStack_178 = *(undefined4 *)(param_2 + 0x38);
  local_200[0] = 4;
  local_184 = iVar8 + iVar10 * 0xc0;
  local_170 = 2;
  puVar3 = (uint *)((uint)&local_e8 | 4);
  local_13c = 0;
  puVar4 = (uint *)((uint)&local_f8 | 4);
  local_144 = 0;
  local_254 = 0;
  local_258 = 8;
  local_140 = 8;
  local_190 = iVar8;
  local_18c = iVar8;
  local_188 = uVar9;
LAB_00923d30:
  do {
    FUN_0091dd40(&local_70,auStack_248);
    if (local_70 != 2) {
      local_138 = local_64;
      uStack_134 = uStack_60;
      uStack_130 = uStack_5c;
      local_a0 = local_58;
      uStack_9c = uStack_54;
      uStack_98 = uStack_50;
      uStack_94 = uStack_4c;
      local_90 = uStack_48;
      local_8c = uStack_44;
      *param_1 = local_70;
      param_1[1] = local_6c;
      param_1[3] = local_64;
      param_1[4] = uStack_60;
      param_1[5] = uStack_5c;
      param_1[2] = local_68;
      param_1[6] = local_58;
      param_1[7] = uStack_54;
      param_1[8] = uStack_50;
      param_1[9] = uStack_4c;
      param_1[10] = uStack_48;
      param_1[0xb] = uStack_44;
LAB_00923f74:
      bVar1 = true;
LAB_009240b0:
      FUN_00953170(local_258,local_254);
      if (local_144 != 0) {
        thunk_FUN_016d3fb4(local_258);
      }
      if ((bool)(bVar1 & local_170 != 2)) {
        if ((local_168 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_164);
        }
        if ((local_15c & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_158);
        }
        if ((local_150 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_14c);
        }
      }
      FUN_009248d4(&local_190);
LAB_00924118:
      if (local_200[0] != 4) {
        FUN_00919614(auStack_248);
        FUN_008f91a8(local_200);
      }
      return;
    }
    local_138 = local_64;
    uStack_134 = uStack_60;
    uStack_130 = uStack_5c;
    if (local_68 != 0x80000015) {
      if (local_68 == 0x80000016) {
        bVar1 = local_170 == 2;
        if (local_170 == 2) {
          FUN_009243d8(&local_70,&DAT_003e8611,6);
          local_a0 = local_6c;
          uStack_9c = local_68;
          uStack_98 = local_64;
          uStack_94 = uStack_60;
          local_90 = uStack_5c;
          local_8c = local_58;
          uStack_88 = uStack_54;
          uStack_84 = uStack_50;
          uStack_80 = uStack_4c;
          uStack_7c = uStack_48;
          uStack_78 = uStack_44;
          if (local_70 == 2) {
            local_d0 = local_6c;
            uStack_cc = local_68;
            local_c8 = local_64;
            local_c4 = uStack_60;
            local_c0 = uStack_5c;
            local_bc = local_58;
            local_b8 = uStack_54;
            uStack_b4 = uStack_50;
            local_b0 = uStack_4c;
            local_ac = uStack_48;
            uStack_a8 = uStack_44;
            goto LAB_00923f94;
          }
          param_1[1] = local_6c;
          param_1[2] = local_68;
          param_1[3] = local_64;
          param_1[4] = uStack_60;
          param_1[5] = uStack_5c;
          param_1[6] = local_58;
          param_1[7] = uStack_54;
          param_1[8] = uStack_50;
          param_1[9] = uStack_4c;
          param_1[10] = uStack_48;
          param_1[0xb] = uStack_44;
          *param_1 = local_70;
        }
        else {
          local_d0 = local_170;
          uStack_cc = uStack_16c;
          local_c8 = local_168;
          local_c4 = local_164;
          local_c0 = uStack_160;
          local_bc = local_15c;
          local_b8 = local_158;
          uStack_b4 = uStack_154;
          local_b0 = local_150;
          local_ac = local_14c;
          uStack_a8 = uStack_148;
LAB_00923f94:
          FUN_009579c0(&local_70,local_258,local_254);
          iVar2 = local_140;
          if (local_70 == 2) {
            param_1[1] = local_d0;
            param_1[2] = uStack_cc;
            param_1[3] = local_c8;
            param_1[4] = local_c4;
            param_1[5] = local_c0;
            param_1[6] = local_bc;
            param_1[7] = local_b8;
            param_1[8] = uStack_b4;
            param_1[9] = local_b0;
            param_1[10] = local_ac;
            param_1[0xb] = uStack_a8;
            *param_1 = 2;
            FUN_00953170(local_140,local_13c);
            if (local_144 != 0) {
              thunk_FUN_016d3fb4(iVar2);
            }
            FUN_009248d4(&local_190);
            goto LAB_00924118;
          }
          param_1[1] = local_6c;
          param_1[2] = local_68;
          param_1[3] = local_64;
          param_1[4] = uStack_60;
          param_1[5] = uStack_5c;
          param_1[6] = local_58;
          param_1[7] = uStack_54;
          param_1[8] = uStack_50;
          param_1[9] = uStack_4c;
          param_1[10] = uStack_48;
          param_1[0xb] = uStack_44;
          *param_1 = local_70;
          if ((local_c8 & 0x7fffffff) != 0) {
            thunk_FUN_016d3fb4(local_c4);
          }
          if ((local_bc & 0x7fffffff) != 0) {
            thunk_FUN_016d3fb4(local_b8);
          }
          if ((local_b0 & 0x7fffffff) != 0) {
            thunk_FUN_016d3fb4(local_ac);
          }
        }
        local_254 = local_13c;
        local_258 = local_140;
        goto LAB_009240b0;
      }
      local_f8 = local_68;
      *puVar4 = local_64;
      puVar4[1] = uStack_60;
      puVar4[2] = uStack_5c;
      FUN_0091976c(&local_70,auStack_248);
      if (local_70 != 2) {
        piVar7 = (int *)((uint)&local_70 | 4);
        local_e8 = *piVar7;
        iStack_e4 = piVar7[1];
        iStack_e0 = piVar7[2];
        iStack_dc = piVar7[3];
        iStack_d8 = piVar7[4];
        local_40 = local_58;
        uStack_3c = uStack_54;
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        param_1[1] = local_e8;
        param_1[2] = iStack_e4;
        param_1[3] = iStack_e0;
        param_1[4] = iStack_dc;
        param_1[5] = iStack_d8;
        *param_1 = local_70;
        param_1[6] = local_58;
        param_1[7] = uStack_54;
        param_1[8] = uStack_50;
        param_1[9] = uStack_4c;
        param_1[10] = uStack_48;
        param_1[0xb] = uStack_44;
        FUN_008f7448(&local_f8);
        goto LAB_00923f74;
      }
      *puVar3 = local_68;
      puVar3[1] = local_64;
      puVar3[2] = uStack_60;
      puVar3[3] = uStack_5c;
      local_c0 = *puVar3;
      local_bc = puVar3[1];
      local_b8 = puVar3[2];
      uStack_b4 = puVar3[3];
      local_a0 = local_f8;
      uStack_9c = uStack_f4;
      uStack_98 = uStack_f0;
      uStack_94 = uStack_ec;
      local_d0 = local_f8;
      uStack_cc = uStack_f4;
      local_c8 = uStack_f0;
      local_c4 = uStack_ec;
      local_90 = local_c0;
      local_8c = local_bc;
      uStack_88 = local_b8;
      uStack_84 = uStack_b4;
      if (local_254 == local_144) {
        FUN_009f4b90(&local_144);
        local_258 = local_140;
      }
      puVar5 = (uint *)(local_258 + local_254 * 0x20);
      local_254 = local_254 + 1;
      *puVar5 = local_d0;
      puVar5[1] = uStack_cc;
      puVar5[2] = local_c8;
      puVar5[3] = local_c4;
      puVar5[4] = local_c0;
      puVar5[5] = local_bc;
      puVar5[6] = local_b8;
      puVar5[7] = uStack_b4;
      local_13c = local_254;
      goto LAB_00923d30;
    }
    if (local_170 != 2) {
      FUN_009244cc(&local_70,&DAT_003e8611,6);
      *param_1 = local_70;
      param_1[1] = local_6c;
      param_1[2] = local_68;
      param_1[3] = local_64;
      param_1[4] = uStack_60;
      param_1[5] = uStack_5c;
      param_1[6] = local_58;
      param_1[7] = uStack_54;
      param_1[8] = uStack_50;
      param_1[9] = uStack_4c;
      param_1[10] = uStack_48;
      param_1[0xb] = uStack_44;
      goto LAB_00923f74;
    }
    FUN_0091dfac(&local_70,auStack_248);
    uStack_16c = local_68;
    uStack_160 = uStack_5c;
    uStack_154 = uStack_50;
    uStack_148 = uStack_44;
    if (local_70 != 2) {
      param_1[1] = local_6c;
      param_1[2] = local_68;
      param_1[3] = local_64;
      param_1[4] = uStack_60;
      param_1[5] = uStack_5c;
      param_1[6] = local_58;
      param_1[7] = uStack_54;
      param_1[8] = uStack_50;
      param_1[9] = uStack_4c;
      param_1[10] = uStack_48;
      param_1[0xb] = uStack_44;
      *param_1 = local_70;
      goto LAB_00923f74;
    }
    local_170 = local_6c;
    local_168 = local_64;
    local_164 = uStack_60;
    local_15c = local_58;
    local_158 = uStack_54;
    local_150 = uStack_4c;
    local_14c = uStack_48;
  } while( true );
}

