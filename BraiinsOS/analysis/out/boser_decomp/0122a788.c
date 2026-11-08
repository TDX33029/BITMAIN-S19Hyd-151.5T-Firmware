// FUN_0122a788 @ 0122a788 size=2752 calls_out=19 calls_in=1
// strings: hash_chain_global | hash_chain | fan_control | temp_control

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0122a788(uint *param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  int iVar19;
  uint local_248;
  uint local_244;
  uint local_204;
  uint local_200;
  uint local_1fc;
  uint local_1f8;
  uint local_1f4;
  uint local_1f0;
  uint uStack_1ec;
  uint uStack_1e8;
  uint uStack_1e4;
  int local_1e0;
  int local_1dc;
  undefined *local_1d8;
  undefined4 local_1d4;
  uint local_1d0;
  uint uStack_1cc;
  uint uStack_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  uint local_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  uint uStack_1a4;
  uint local_1a0 [4];
  uint local_190;
  uint uStack_18c;
  uint uStack_188;
  uint uStack_184;
  uint uStack_180;
  uint local_178;
  uint local_174;
  uint *local_170;
  uint local_158;
  uint local_154;
  uint local_150;
  uint local_14c;
  uint local_148;
  uint uStack_144;
  uint local_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint local_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint local_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint local_cc;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint local_b8;
  uint uStack_b4;
  uint local_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint local_a0;
  uint uStack_9c;
  uint *puStack_98;
  uint local_90;
  undefined4 local_8c;
  uint local_88;
  uint uStack_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint uStack_74;
  uint local_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint local_48;
  uint *local_44;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  local_1dc = param_2 + param_3 * 0x20;
  local_1d4 = 5;
  local_1f0 = 0x80000015;
  local_1a0[0] = 2;
  local_178 = 0x80000001;
  puVar6 = (undefined4 *)((uint)&local_48 | 4);
  puVar7 = (uint *)((uint)&local_90 | 4);
  puVar8 = (undefined4 *)((uint)&local_1f0 | 4);
  puVar9 = (uint *)((uint)local_1a0 | 4);
  local_1f4 = 4;
  local_1f8 = 0;
  local_200 = 3;
  local_204 = 3;
  puVar10 = (uint *)((uint)&local_128 | 4);
  local_1d8 = &DAT_01c24b0c;
  local_1fc = 0;
  local_1e0 = param_2;
LAB_0122a88c:
  uVar13 = local_1d4;
  puVar3 = local_1d8;
  iVar2 = local_1dc;
  uVar5 = local_1fc;
  iVar19 = local_1e0;
  if (local_1e0 == local_1dc) {
switchD_0122aa0c_caseD_5:
    local_1e0 = iVar19;
    if (local_1f4 == 4 && local_1f8 == 0) {
      local_1f4 = 3;
      local_1f8 = 0;
    }
    else {
      local_128 = local_1d0;
      local_124 = uStack_1cc;
      local_120 = uStack_1c8;
      uStack_11c = uStack_1c4;
      uStack_118 = uStack_1c0;
      uStack_114 = uStack_1bc;
      local_110 = local_1b8;
      local_10c = uStack_1b4;
      local_108 = uStack_1b0;
      uStack_104 = uStack_1ac;
      uStack_100 = uStack_1a8;
      uStack_fc = uStack_1a4;
    }
    uVar14 = 0;
    if (local_1a0[0] != 2) {
      local_38 = *puVar9;
      uStack_34 = puVar9[1];
      uStack_30 = puVar9[2];
      uVar14 = local_1a0[0];
    }
    bVar1 = local_1fc != 0;
    local_1fc = 2;
    uVar15 = 2;
    uVar16 = 0;
    if (local_204 != 3 || bVar1) {
      local_90 = local_e0;
      local_8c = uStack_dc;
      local_88 = uStack_d8;
      uStack_84 = uStack_d4;
      local_80 = uStack_d0;
      local_7c = local_cc;
      local_78 = local_c8;
      uStack_74 = uStack_c4;
      local_70 = uStack_c0;
      uStack_6c = uStack_bc;
      local_68 = local_b8;
      uStack_64 = uStack_b4;
      uStack_60 = local_b0;
      uStack_5c = uStack_ac;
      local_58 = uStack_a8;
      uStack_54 = uStack_a4;
      uVar15 = local_204;
      uVar16 = uVar5;
    }
    if (local_200 != 3) {
      local_158 = local_190;
      local_154 = uStack_18c;
      local_150 = uStack_188;
      local_14c = uStack_184;
      local_148 = uStack_180;
      local_1fc = local_200;
    }
    uVar5 = 0x80000000;
    if (local_178 != 0x80000001) {
      local_44 = local_170;
      local_48 = local_174;
      uVar5 = local_178;
    }
    param_1[0x22] = uVar14;
    param_1[0x23] = local_38;
    param_1[0x24] = uStack_34;
    param_1[0x25] = uStack_30;
    param_1[0x14] = local_128;
    param_1[0x15] = local_124;
    param_1[0x16] = local_120;
    param_1[0x17] = uStack_11c;
    param_1[0x18] = uStack_118;
    param_1[0x19] = uStack_114;
    param_1[0x1a] = local_110;
    param_1[0x1b] = local_10c;
    param_1[0x1c] = local_108;
    param_1[0x1d] = uStack_104;
    param_1[0x1e] = uStack_100;
    param_1[0x1f] = uStack_fc;
    param_1[2] = local_90;
    param_1[3] = local_8c;
    param_1[4] = local_88;
    param_1[5] = uStack_84;
    param_1[6] = local_80;
    param_1[7] = local_7c;
    param_1[8] = local_78;
    param_1[9] = uStack_74;
    param_1[10] = local_70;
    param_1[0xb] = uStack_6c;
    param_1[0xc] = local_68;
    param_1[0xd] = uStack_64;
    param_1[0xe] = uStack_60;
    param_1[0xf] = uStack_5c;
    param_1[0x10] = local_58;
    param_1[0x11] = uStack_54;
    param_1[0x27] = local_158;
    param_1[0x28] = local_154;
    param_1[0x29] = local_150;
    param_1[0x2a] = local_14c;
    param_1[0x2b] = local_148;
    param_1[0x20] = local_244;
    param_1[0x21] = local_248;
    param_1[0x12] = local_1f4;
    param_1[0x13] = local_1f8;
    *param_1 = uVar15;
    param_1[1] = uVar16;
    param_1[0x2c] = uVar5;
    param_1[0x26] = local_1fc;
    param_1[0x2d] = local_48;
    param_1[0x2e] = (uint)local_44;
joined_r0x0122b1f0:
    if (local_1f0 != 0x80000015) {
      FUN_0123b780(&local_1f0);
    }
    return;
  }
  while( true ) {
    FUN_01962c44(&local_158,iVar19,puVar3,uVar13);
    iVar19 = iVar19 + 0x20;
    if (local_158 != 0x80000015) break;
    if (iVar19 == iVar2) goto switchD_0122aa0c_caseD_5;
  }
  local_1e0 = iVar19;
  if (local_1f0 != 0x80000015) {
    FUN_0123b780(&local_1f0);
  }
  uVar15 = local_150;
  uVar14 = local_154;
  local_1f0 = local_148;
  uStack_1ec = uStack_144;
  uStack_1e8 = local_140;
  uStack_1e4 = uStack_13c;
  uVar16 = 0x15;
  if ((int)local_158 < 0) {
    uVar16 = local_158 ^ 0x80000000;
  }
  uVar12 = local_14c;
  switch(uVar16) {
  case 1:
    uVar15 = local_154 & 0xff;
    uVar12 = 0;
  case 4:
    FUN_01226634(&local_90,&switchD_0122a930::switchdataD_0122a934,uVar15,uVar12);
    goto LAB_0122a9e0;
  default:
    FUN_012223f8(&local_90,&local_158,&local_38,&DAT_01c246b4);
    goto LAB_0122a9f4;
  case 0xc:
    FUN_012329c0(&local_90,local_150,local_14c);
    goto LAB_0122a9d4;
  case 0xd:
    FUN_012329c0(&local_90,local_154,local_150);
    break;
  case 0xe:
    FUN_01225948(&local_90,local_150,local_14c);
LAB_0122a9d4:
    FUN_019bb7e0(uVar14,uVar15);
LAB_0122a9e0:
    if ((uVar16 | 2) != 0xe) break;
    goto LAB_0122a9f4;
  case 0xf:
    FUN_01225948(&local_90,local_154,local_150);
  }
  FUN_012222e0(&local_158);
LAB_0122a9f4:
  puVar11 = local_44;
  uVar15 = local_90;
  uVar14 = local_1f0;
  uVar4 = (undefined1)local_8c;
  if (local_90 != 2) {
    FUN_01bed4e2(&local_128,(int)&local_8c + 1,0x2b);
    FUN_01bed4e2((int)param_1 + 0xd,&local_128,0x2b);
    *(undefined1 *)(param_1 + 3) = uVar4;
    *param_1 = 3;
    param_1[1] = 0;
    param_1[2] = uVar15;
    goto LAB_0122b1c0;
  }
  iVar19 = local_1e0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(local_8c & 0xff) {
  case 0:
    if (local_1f4 != 4 || local_1f8 != 0) {
      FUN_0123c090(&local_90,"hash_chain_global",0x11);
LAB_0122b280:
      param_1[2] = local_90;
      param_1[3] = local_8c;
      param_1[4] = local_88;
      param_1[5] = uStack_84;
      param_1[6] = local_80;
      param_1[7] = local_7c;
      param_1[8] = local_78;
      param_1[9] = uStack_74;
      param_1[10] = local_70;
      param_1[0xb] = uStack_6c;
      param_1[0xc] = local_68;
      param_1[0xd] = uStack_64;
      goto LAB_0122b0e4;
    }
    FUN_0123bc98(&local_90,&local_1f0);
    local_1d0 = local_88;
    uStack_1cc = uStack_84;
    uStack_1c8 = local_80;
    uStack_1c4 = local_7c;
    uStack_1c0 = local_78;
    uStack_1bc = uStack_74;
    local_110 = local_70;
    local_10c = uStack_6c;
    local_108 = local_68;
    uStack_104 = uStack_64;
    uStack_100 = uStack_60;
    uStack_fc = uStack_5c;
    local_1f4 = local_90;
    local_128 = local_1d0;
    local_124 = uStack_1cc;
    local_120 = uStack_1c8;
    uStack_11c = uStack_1c4;
    uStack_118 = uStack_1c0;
    uStack_114 = uStack_1bc;
    if (local_90 == 4 && local_8c == 0) {
      param_1[2] = local_88;
      param_1[3] = uStack_84;
      param_1[4] = local_80;
      param_1[5] = local_7c;
      param_1[6] = local_78;
      param_1[7] = uStack_74;
      param_1[8] = local_70;
      param_1[9] = uStack_6c;
      param_1[10] = local_68;
      param_1[0xb] = uStack_64;
      param_1[0xc] = uStack_60;
      param_1[0xd] = uStack_5c;
      *param_1 = 3;
      param_1[1] = 0;
      break;
    }
    local_244 = local_58;
    local_248 = uStack_54;
    puVar11 = &local_1b8;
    uVar5 = local_70;
    uVar14 = uStack_6c;
    uVar15 = local_68;
    uVar16 = uStack_64;
    uVar12 = uStack_60;
    uVar18 = uStack_5c;
    local_1f8 = local_8c;
LAB_0122adf0:
    *puVar11 = uVar5;
    puVar11[1] = uVar14;
    puVar11[2] = uVar15;
    puVar11[3] = uVar16;
    puVar11[4] = uVar12;
    puVar11[5] = uVar18;
    goto LAB_0122a88c;
  case 1:
    if (local_1a0[0] != 2) {
      FUN_0123c090(&local_90,"hash_chain",10);
      goto LAB_0122b280;
    }
    FUN_0123b8d0(&local_90,&local_1f0);
    if (local_90 == 2) {
      local_1a0[0] = local_8c;
      goto LAB_0122a88c;
    }
    param_1[7] = local_7c;
    param_1[8] = local_78;
    param_1[9] = uStack_74;
    param_1[10] = local_70;
    param_1[0xb] = uStack_6c;
    param_1[0xc] = local_68;
    param_1[0xd] = uStack_64;
    param_1[3] = local_8c;
    param_1[4] = local_88;
    param_1[5] = uStack_84;
    param_1[6] = local_80;
LAB_0122b148:
    *param_1 = 3;
    param_1[1] = 0;
    param_1[2] = local_90;
    break;
  case 2:
    if (local_204 != 3 || local_1fc != 0) {
      FUN_0123c090(&local_90,"temp_control",0xc);
      goto LAB_0122b280;
    }
    local_1f0 = 0x80000015;
    if (uVar14 == 0x80000015) {
      FUN_01a429c4(&local_120,&DAT_0056ad38,0x10);
    }
    else {
      uVar13 = puVar8[1];
      uVar17 = puVar8[2];
      *puVar6 = *puVar8;
      puVar6[1] = uVar13;
      puVar6[2] = uVar17;
      uVar5 = 0x15;
      if ((int)uVar14 < 0) {
        uVar5 = uVar14 ^ 0x80000000;
      }
      local_48 = uVar14;
      if (uVar5 == 0x10) {
LAB_0122ab7c:
        local_124 = 0;
        local_128 = 2;
LAB_0122ad74:
        if (uVar14 != 0x80000011) {
          FUN_012222e0(&local_48);
        }
      }
      else {
        if (uVar5 == 0x11) {
          local_38 = *local_44;
          uStack_34 = local_44[1];
          uStack_30 = local_44[2];
          uStack_2c = local_44[3];
          FUN_012268d8(&local_90);
          if (local_90 == 2 && local_8c == 0) {
            local_120 = local_88;
            uStack_11c = uStack_84;
            uStack_118 = local_80;
            uStack_114 = local_7c;
            local_110 = local_78;
            local_10c = uStack_74;
            local_108 = local_70;
            uStack_104 = uStack_6c;
            uStack_100 = local_68;
            uStack_fc = uStack_64;
            uStack_f8 = uStack_60;
            uStack_f4 = uStack_5c;
            local_124 = 0;
            local_128 = 3;
          }
          else {
            FUN_01bed4e2(&local_128,&local_90,0x48);
          }
          thunk_FUN_01be4678(puVar11);
          goto LAB_0122ad74;
        }
        if (uVar5 == 0x12) goto LAB_0122ab7c;
        FUN_012268d8(&local_90,&local_48);
        if (local_90 == 2 && local_8c == 0) {
          local_120 = local_88;
          uStack_11c = uStack_84;
          uStack_118 = local_80;
          uStack_114 = local_7c;
          local_110 = local_78;
          local_10c = uStack_74;
          local_108 = local_70;
          uStack_104 = uStack_6c;
          uStack_100 = local_68;
          uStack_fc = uStack_64;
          uStack_f8 = uStack_60;
          uStack_f4 = uStack_5c;
          local_124 = 0;
          local_128 = 3;
        }
        else {
          FUN_01bed4e2(&local_128,&local_90,0x48);
        }
      }
      local_158 = local_120;
      local_154 = uStack_11c;
      local_150 = uStack_118;
      local_14c = uStack_114;
      local_148 = local_110;
      uStack_144 = local_10c;
      local_140 = local_108;
      uStack_13c = uStack_104;
      uStack_138 = uStack_100;
      uStack_134 = uStack_fc;
      uStack_130 = uStack_f8;
      uStack_12c = uStack_f4;
      local_1fc = local_124;
      if (local_128 != 3 || local_124 != 0) {
        local_204 = local_128;
        local_b0 = local_f0;
        uStack_ac = uStack_ec;
        uStack_a8 = uStack_e8;
        uStack_a4 = uStack_e4;
        puVar11 = &local_c8;
        uVar5 = local_108;
        uVar14 = uStack_104;
        uVar15 = uStack_100;
        uVar16 = uStack_fc;
        uVar12 = uStack_f8;
        uVar18 = uStack_f4;
        local_e0 = local_158;
        uStack_dc = local_154;
        uStack_d8 = local_150;
        uStack_d4 = local_14c;
        uStack_d0 = local_148;
        local_cc = uStack_144;
        goto LAB_0122adf0;
      }
    }
    param_1[2] = local_120;
    param_1[3] = uStack_11c;
    param_1[4] = uStack_118;
    param_1[5] = uStack_114;
    param_1[6] = local_110;
    param_1[7] = local_10c;
    param_1[8] = local_108;
    param_1[9] = uStack_104;
    param_1[10] = uStack_100;
    param_1[0xb] = uStack_fc;
    param_1[0xc] = uStack_f8;
    param_1[0xd] = uStack_f4;
    local_158 = local_120;
    local_154 = uStack_11c;
    local_150 = uStack_118;
    local_14c = uStack_114;
    local_148 = local_110;
    uStack_144 = local_10c;
    local_140 = local_108;
    uStack_13c = uStack_104;
    uStack_138 = uStack_100;
    uStack_134 = uStack_fc;
    uStack_130 = uStack_f8;
    uStack_12c = uStack_f4;
LAB_0122b0e4:
    *param_1 = 3;
    param_1[1] = 0;
    break;
  case 3:
    if (local_200 != 3) {
      FUN_0123c090(&local_90,"fan_control",0xb);
      goto LAB_0122b280;
    }
    local_1f0 = 0x80000015;
    if (uVar14 == 0x80000015) {
      FUN_01a429c4(&local_128,&DAT_0056ad38,0x10);
    }
    else {
      uVar13 = puVar8[1];
      uVar17 = puVar8[2];
      *puVar6 = *puVar8;
      puVar6[1] = uVar13;
      puVar6[2] = uVar17;
      uVar5 = 0x15;
      if ((int)uVar14 < 0) {
        uVar5 = uVar14 ^ 0x80000000;
      }
      local_48 = uVar14;
      if (uVar5 == 0x10) {
LAB_0122ac10:
        local_128 = 2;
        local_124 = 2;
      }
      else {
        if (uVar5 != 0x11) {
          if (uVar5 != 0x12) {
            FUN_01230de0(&local_90,&local_48);
            if (local_90 == 2) {
              uVar5 = puVar7[1];
              uVar14 = puVar7[2];
              uVar15 = puVar7[3];
              uVar16 = puVar7[4];
              uVar12 = puVar7[5];
              *puVar10 = *puVar7;
              puVar10[1] = uVar5;
              puVar10[2] = uVar14;
              puVar10[3] = uVar15;
              puVar10[4] = uVar16;
              puVar10[5] = uVar12;
              local_128 = 2;
            }
            else {
              local_128 = local_90;
              local_124 = local_8c;
              local_120 = local_88;
              uStack_11c = uStack_84;
              uStack_118 = local_80;
              uStack_114 = local_7c;
              local_110 = local_78;
              local_10c = uStack_74;
              local_108 = local_70;
              uStack_104 = uStack_6c;
              uStack_100 = local_68;
              uStack_fc = uStack_64;
            }
            goto LAB_0122ae50;
          }
          goto LAB_0122ac10;
        }
        local_38 = *local_44;
        uStack_34 = local_44[1];
        uStack_30 = local_44[2];
        uStack_2c = local_44[3];
        FUN_01230de0(&local_90);
        if (local_90 == 2) {
          uVar5 = puVar7[1];
          uVar15 = puVar7[2];
          uVar16 = puVar7[3];
          uVar12 = puVar7[4];
          uVar18 = puVar7[5];
          *puVar10 = *puVar7;
          puVar10[1] = uVar5;
          puVar10[2] = uVar15;
          puVar10[3] = uVar16;
          puVar10[4] = uVar12;
          puVar10[5] = uVar18;
          local_128 = 2;
        }
        else {
          local_128 = local_90;
          local_124 = local_8c;
          local_120 = local_88;
          uStack_11c = uStack_84;
          uStack_118 = local_80;
          uStack_114 = local_7c;
          local_110 = local_78;
          local_10c = uStack_74;
          local_108 = local_70;
          uStack_104 = uStack_6c;
          uStack_100 = local_68;
          uStack_fc = uStack_64;
        }
        thunk_FUN_01be4678(puVar11);
      }
      if (uVar14 != 0x80000011) {
        FUN_012222e0(&local_48);
      }
    }
LAB_0122ae50:
    local_200 = local_124;
    local_158 = local_120;
    local_154 = uStack_11c;
    local_150 = uStack_118;
    local_14c = uStack_114;
    local_148 = local_110;
    if (local_128 == 2) {
      local_190 = local_158;
      uStack_18c = local_154;
      uStack_188 = local_150;
      uStack_184 = local_14c;
      uStack_180 = local_148;
      goto LAB_0122a88c;
    }
    param_1[9] = local_10c;
    param_1[10] = local_108;
    param_1[0xb] = uStack_104;
    param_1[0xc] = uStack_100;
    param_1[0xd] = uStack_fc;
    param_1[4] = local_120;
    param_1[5] = uStack_11c;
    param_1[6] = uStack_118;
    param_1[7] = uStack_114;
    param_1[8] = local_110;
    param_1[1] = 0;
    param_1[2] = local_128;
    *param_1 = 3;
    param_1[3] = local_124;
    break;
  case 4:
    if (local_178 != 0x80000001) {
      FUN_0123c090(&local_90,&DAT_0051d8de,5);
      goto LAB_0122b280;
    }
    FUN_0123ba54(&local_90,&local_1f0);
    local_a0 = *puVar7;
    uStack_9c = puVar7[1];
    puStack_98 = (uint *)puVar7[2];
    if (local_90 != 2) {
      param_1[6] = local_80;
      param_1[7] = local_7c;
      param_1[8] = local_78;
      param_1[9] = uStack_74;
      param_1[10] = local_70;
      param_1[0xb] = uStack_6c;
      param_1[0xc] = local_68;
      param_1[0xd] = uStack_64;
      param_1[3] = local_a0;
      param_1[4] = uStack_9c;
      param_1[5] = (uint)puStack_98;
      goto LAB_0122b148;
    }
    local_178 = local_a0;
    local_174 = uStack_9c;
    local_170 = puStack_98;
    goto LAB_0122a88c;
  case 5:
    goto switchD_0122aa0c_caseD_5;
  }
LAB_0122b1c0:
  if (local_178 != 0x80000001) {
    FUN_00b1d658(&local_178);
  }
  if ((local_1a0[0] & 1) != 0) {
    FUN_0124f320(puVar9);
  }
  goto joined_r0x0122b1f0;
}

