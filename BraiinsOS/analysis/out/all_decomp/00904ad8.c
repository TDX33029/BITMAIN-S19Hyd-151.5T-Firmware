// FUN_00904ad8 @ 00904ad8 size=3868 calls_out=19 calls_in=2
// strings: temp_control | hash_chain | fan_control | hash_chain_global

/* WARNING: Removing unreachable block (ram,0x00905214) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00904ad8(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int iVar16;
  undefined4 *local_264;
  undefined4 *local_260;
  undefined4 *local_25c;
  undefined4 *local_218;
  undefined4 *local_214;
  undefined4 *local_210;
  undefined4 *local_20c;
  undefined4 *local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 *local_1f4;
  undefined4 *local_1f0;
  undefined4 *local_1ec;
  undefined4 *local_1e8;
  undefined4 *local_1dc;
  undefined4 *local_1d8 [4];
  int local_1c8;
  int local_1c4;
  undefined *local_1c0;
  undefined4 local_1bc;
  undefined4 *local_1b8 [4];
  int local_1a8;
  int local_1a4;
  int local_1a0;
  undefined4 *local_198;
  undefined4 *puStack_194;
  undefined4 *puStack_190;
  undefined4 *puStack_18c;
  undefined4 *puStack_188;
  undefined4 *puStack_184;
  undefined4 *local_180;
  undefined4 *puStack_17c;
  undefined4 *puStack_178;
  undefined4 *puStack_174;
  undefined4 *puStack_170;
  undefined4 *puStack_16c;
  undefined4 *local_168;
  undefined4 *puStack_160;
  undefined4 *local_15c;
  undefined4 *local_158;
  undefined4 *local_154;
  undefined4 *local_150;
  undefined4 *puStack_14c;
  undefined4 *puStack_130;
  undefined4 *puStack_12c;
  undefined4 *local_128;
  undefined4 *local_124;
  undefined4 *local_120;
  undefined4 *local_11c;
  undefined4 *local_118;
  undefined4 *puStack_114;
  undefined4 *local_110;
  undefined4 *local_10c;
  undefined4 *local_108;
  undefined4 *puStack_104;
  undefined4 *puStack_100;
  undefined4 *puStack_fc;
  undefined4 *puStack_f8;
  undefined4 *puStack_f4;
  undefined4 *local_f0;
  undefined4 *puStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 *local_e0;
  undefined4 *puStack_dc;
  undefined4 *puStack_d8;
  undefined4 *puStack_d4;
  undefined4 *puStack_d0;
  undefined4 *local_cc;
  undefined4 *local_c8;
  undefined4 *puStack_c4;
  undefined4 *puStack_c0;
  undefined4 *puStack_bc;
  undefined4 *local_b8;
  undefined4 *puStack_b4;
  undefined4 *local_b0;
  undefined4 *puStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 *local_90;
  undefined4 *local_8c;
  undefined4 *local_80;
  undefined4 *local_7c;
  undefined4 *local_78;
  undefined4 *local_74;
  undefined4 *local_70;
  undefined4 local_6c;
  undefined4 *local_68;
  undefined4 *local_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  undefined4 *puStack_44;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  iVar16 = param_2 + param_3 * 0x20;
  puVar13 = (undefined4 *)&SUB_00000002;
  local_1bc = 5;
  local_1d8[0] = (undefined4 *)0x80000015;
  local_1c0 = &DAT_01867910;
  local_1b8[0] = (undefined4 *)&SUB_00000002;
  local_1a8 = -0x7fffffff;
  local_1c4 = iVar16;
  if (param_3 != 0) {
    piVar3 = (int *)((uint)&local_70 | 4);
    puVar13 = (undefined4 *)((uint)&local_128 | 4);
    puVar4 = (undefined4 *)((uint)&local_158 | 4);
    puVar5 = (undefined4 *)((uint)local_1b8 | 4);
    local_1dc = (undefined4 *)&DAT_00000004;
    local_1f4 = (undefined4 *)0x0;
    puVar6 = (undefined4 *)((uint)&local_90 | 4);
    puVar7 = (undefined4 *)((uint)local_1d8 | 4);
    local_1ec = (undefined4 *)0x3;
    local_1f0 = (undefined4 *)0x0;
    local_1e8 = (undefined4 *)0x3;
LAB_00904c04:
    iVar9 = param_2;
    while( true ) {
      param_2 = iVar9 + 0x20;
      local_1c8 = param_2;
      FUN_01578f04(&local_128,iVar9,&DAT_01867910,5);
      if (local_128 != (undefined4 *)0x80000015) break;
      iVar9 = param_2;
      if (param_2 == iVar16) goto LAB_00905424;
    }
    if (local_1d8[0] != (undefined4 *)0x80000015) {
      FUN_008f7448(local_1d8);
    }
    puVar15 = local_120;
    puVar14 = local_124;
    local_1d8[0] = local_118;
    local_74 = local_11c;
    uVar8 = 0x15;
    if ((int)local_128 < 0) {
      uVar8 = (uint)local_128 ^ 0x80000000;
    }
    local_78 = local_120;
    local_7c = local_124;
    local_80 = local_128;
    switch(uVar8) {
    case 1:
      switch((undefined4 *)((uint)local_124 & 0xff)) {
      case (undefined4 *)0x0:
        uVar2 = 0;
        break;
      case (undefined4 *)0x1:
        uVar2 = 1;
        break;
      case (undefined4 *)0x2:
        uVar2 = 2;
        break;
      case (undefined4 *)0x3:
        uVar2 = 3;
        break;
      case (undefined4 *)0x4:
        uVar2 = 4;
        break;
      default:
        puStack_14c = (undefined4 *)0x0;
        local_158 = (undefined4 *)CONCAT31(local_158._1_3_,1);
        local_150 = (undefined4 *)((uint)local_124 & 0xff);
        FUN_00924358(&local_70,&local_158,&DAT_01867d80,&DAT_018ab990);
        goto LAB_00904e10;
      }
      local_70 = (undefined4 *)&SUB_00000002;
      local_6c = (undefined4 *)CONCAT31(local_6c._1_3_,uVar2);
      break;
    default:
      FUN_008f73e8(&local_70,&local_128,&local_158,&DAT_01867198);
      goto LAB_00904e18;
    case 4:
      if ((uint)-(int)local_11c < (uint)(local_120 < &DAT_00000005)) {
                    /* WARNING: Could not recover jumptable at 0x00904d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_00904d84 + *(int *)(&DAT_00904d84 + (int)local_120 * 4)))
                  (*(int *)(&DAT_00904d84 + (int)local_120 * 4),&DAT_00904d84,
                   -((int)local_11c + (uint)(local_120 >= &DAT_00000005)));
        return;
      }
      local_150 = local_120;
      puStack_14c = local_11c;
      local_158 = (undefined4 *)CONCAT31(local_158._1_3_,1);
      FUN_00924358(&local_70,&local_158,&DAT_01867d80,&DAT_018ab990);
      break;
    case 0xc:
      FUN_0090ff40(&local_70,local_120,local_11c);
      goto LAB_00904dc0;
    case 0xd:
      FUN_0090ff40(&local_70,local_124,local_120);
      break;
    case 0xe:
      FUN_008fc768(&local_70,local_120,local_11c);
LAB_00904dc0:
      if (puVar14 != (undefined4 *)0x0) {
        thunk_FUN_016d3fb4(puVar15);
      }
      goto LAB_00904e18;
    case 0xf:
      FUN_008fc768(&local_70,local_124,local_120);
    }
LAB_00904e10:
    FUN_008f7448(&local_80);
LAB_00904e18:
    puVar1 = local_70;
    puVar12 = local_8c;
    puVar15 = local_154;
    puVar14 = local_1d8[0];
    uVar2 = (undefined1)local_6c;
    if (local_70 != (undefined4 *)&SUB_00000002) {
      FUN_016dd1aa((int)param_1 + 0xd,(int)&local_6c + 1,0x2b);
      *(undefined1 *)(param_1 + 3) = uVar2;
      *param_1 = 3;
      param_1[1] = 0;
      param_1[2] = puVar1;
      iVar16 = local_1a8;
      iVar9 = local_1a4;
      goto joined_r0x00905614;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((uint)local_6c & 0xff) {
    case 0:
      if (local_1dc == (undefined4 *)&DAT_00000004 && local_1f4 == (undefined4 *)0x0) {
        local_1d8[0] = (undefined4 *)0x80000015;
        if (puVar14 == (undefined4 *)0x80000015) {
          FUN_00926fa4(&local_68,&DAT_00565810,0x10);
        }
        else {
          local_158 = puVar14;
          uVar10 = puVar7[1];
          uVar11 = puVar7[2];
          *puVar4 = *puVar7;
          puVar4[1] = uVar10;
          puVar4[2] = uVar11;
          FUN_00940af4(&local_70,&local_158);
          local_1dc = local_70;
          local_1f4 = local_6c;
          if (local_70 != (undefined4 *)&DAT_00000004 || local_6c != (undefined4 *)0x0) {
            local_198 = local_68;
            puStack_194 = local_64;
            puStack_190 = local_60;
            puStack_18c = local_5c;
            puStack_188 = local_58;
            puStack_184 = local_54;
            local_180 = local_50;
            puStack_17c = local_4c;
            puStack_178 = local_48;
            puStack_174 = puStack_44;
            puStack_170 = puStack_40;
            puStack_16c = puStack_3c;
            local_200 = local_38;
            local_204 = uStack_34;
            local_128 = local_198;
            local_124 = puStack_194;
            local_120 = puStack_190;
            local_11c = puStack_18c;
            local_118 = puStack_188;
            puStack_114 = puStack_184;
            local_110 = local_180;
            local_10c = puStack_17c;
            local_108 = puStack_178;
            puStack_104 = puStack_174;
            puStack_100 = puStack_170;
            puStack_fc = puStack_16c;
            goto LAB_00905330;
          }
        }
        local_128 = local_68;
        local_124 = local_64;
        local_120 = local_60;
        local_11c = local_5c;
        local_118 = local_58;
        puStack_114 = local_54;
        local_110 = local_50;
        local_10c = local_4c;
        local_108 = local_48;
        puStack_104 = puStack_44;
        puStack_100 = puStack_40;
        puStack_fc = puStack_3c;
        param_1[2] = local_68;
        param_1[3] = local_64;
        param_1[4] = local_60;
        param_1[5] = local_5c;
        param_1[6] = local_58;
        param_1[7] = local_54;
        puVar13 = local_50;
        puVar4 = local_4c;
        puVar6 = local_48;
        puVar7 = puStack_44;
        puVar14 = puStack_40;
        puVar15 = puStack_3c;
        goto LAB_009056a4;
      }
      FUN_009244cc(&local_70,"hash_chain_global",0x11);
LAB_00905a2c:
      param_1[2] = local_70;
      param_1[3] = local_6c;
      param_1[4] = local_68;
      param_1[5] = local_64;
      param_1[6] = local_60;
      param_1[7] = local_5c;
      param_1[8] = local_58;
      param_1[9] = local_54;
      param_1[10] = local_50;
      param_1[0xb] = local_4c;
      param_1[0xc] = local_48;
      param_1[0xd] = puStack_44;
      *param_1 = 3;
      param_1[1] = 0;
      iVar16 = local_1a8;
      iVar9 = local_1a4;
      break;
    case 1:
      if (local_1b8[0] != (undefined4 *)&SUB_00000002) {
        FUN_009244cc(&local_70,"hash_chain",10);
        goto LAB_00905a2c;
      }
      local_1d8[0] = (undefined4 *)0x80000015;
      if (puVar14 == (undefined4 *)0x80000015) {
        local_60 = (undefined4 *)thunk_FUN_016d4a50(0x10);
        if (local_60 == (undefined4 *)0x0) {
LAB_00905a60:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,0x10);
        }
        local_60[3] = 0x676e6973;
        local_60[2] = 0x73696d20;
        local_64 = (undefined4 *)&DAT_00000010;
        local_60[1] = 0x73692065;
        *local_60 = 0x756c6176;
        local_4c = (undefined4 *)&DAT_80000000;
        local_70 = (undefined4 *)0x0;
        local_50 = (undefined4 *)0x0;
        local_54 = (undefined4 *)&DAT_00000004;
        local_58 = (undefined4 *)0x0;
        local_5c = (undefined4 *)&DAT_00000010;
      }
      else {
        local_128 = puVar14;
        uVar10 = puVar7[1];
        uVar11 = puVar7[2];
        *puVar13 = *puVar7;
        puVar13[1] = uVar10;
        puVar13[2] = uVar11;
        FUN_00940c70(&local_70,&local_128);
        local_168 = local_6c;
        puStack_160 = local_64;
        local_15c = local_60;
        if (local_70 == (undefined4 *)&SUB_00000002) {
          local_1b8[0] = local_168;
          goto LAB_00905330;
        }
      }
      param_1[7] = local_5c;
      param_1[8] = local_58;
      param_1[9] = local_54;
      param_1[10] = local_50;
      param_1[0xb] = local_4c;
      param_1[0xc] = local_48;
      param_1[0xd] = puStack_44;
      param_1[1] = 0;
      *param_1 = 3;
      param_1[2] = local_70;
      param_1[3] = local_6c;
      param_1[4] = local_68;
      param_1[5] = local_64;
      param_1[6] = local_60;
      iVar16 = local_1a8;
      iVar9 = local_1a4;
      local_168 = local_6c;
      puStack_160 = local_64;
      local_15c = local_60;
      break;
    case 2:
      if (local_1ec != (undefined4 *)0x3 || local_1f0 != (undefined4 *)0x0) {
        FUN_009244cc(&local_70,"temp_control",0xc);
        goto LAB_00905a2c;
      }
      local_1d8[0] = (undefined4 *)0x80000015;
      if (puVar14 == (undefined4 *)0x80000015) {
        FUN_00926fa4(&local_120,&DAT_00565810,0x10);
      }
      else {
        local_90 = puVar14;
        uVar10 = puVar7[1];
        uVar11 = puVar7[2];
        *puVar6 = *puVar7;
        puVar6[1] = uVar10;
        puVar6[2] = uVar11;
        uVar8 = 0x15;
        if ((int)puVar14 < 0) {
          uVar8 = (uint)puVar14 ^ 0x80000000;
        }
        if (uVar8 == 0x10) {
LAB_00904fc0:
          local_124 = (undefined4 *)0x0;
          local_128 = (undefined4 *)&SUB_00000002;
joined_r0x00905234:
          if (puVar14 != (undefined4 *)0x80000011) {
            FUN_008f7448(&local_90);
          }
        }
        else {
          if (uVar8 == 0x11) {
            local_80 = (undefined4 *)*local_8c;
            local_7c = (undefined4 *)local_8c[1];
            local_78 = (undefined4 *)local_8c[2];
            local_74 = (undefined4 *)local_8c[3];
            FUN_008ffc70(&local_70,&local_80);
            if (local_70 == (undefined4 *)&SUB_00000002 && local_6c == (undefined4 *)0x0) {
              local_120 = local_68;
              local_11c = local_64;
              local_118 = local_60;
              puStack_114 = local_5c;
              local_110 = local_58;
              local_10c = local_54;
              local_108 = local_50;
              puStack_104 = local_4c;
              puStack_100 = local_48;
              puStack_fc = puStack_44;
              puStack_f8 = puStack_40;
              puStack_f4 = puStack_3c;
              local_124 = (undefined4 *)0x0;
              local_128 = (undefined4 *)0x3;
            }
            else {
              FUN_016dd1aa(&local_128,&local_70,0x48);
            }
            thunk_FUN_016d3fb4(puVar12);
            goto joined_r0x00905234;
          }
          if (uVar8 == 0x12) goto LAB_00904fc0;
          FUN_008ffc70(&local_70,&local_90);
          if (local_70 == (undefined4 *)&SUB_00000002 && local_6c == (undefined4 *)0x0) {
            local_120 = local_68;
            local_11c = local_64;
            local_118 = local_60;
            puStack_114 = local_5c;
            local_110 = local_58;
            local_10c = local_54;
            local_108 = local_50;
            puStack_104 = local_4c;
            puStack_100 = local_48;
            puStack_fc = puStack_44;
            puStack_f8 = puStack_40;
            puStack_f4 = puStack_3c;
            local_124 = (undefined4 *)0x0;
            local_128 = (undefined4 *)0x3;
          }
          else {
            FUN_016dd1aa(&local_128,&local_70,0x48);
          }
        }
        local_1ec = local_128;
        local_1f0 = local_124;
        if (local_128 != (undefined4 *)0x3 || local_124 != (undefined4 *)0x0) {
          local_158 = local_120;
          local_154 = local_11c;
          local_150 = local_118;
          puStack_14c = puStack_114;
          puStack_d0 = local_110;
          local_cc = local_10c;
          local_c8 = local_108;
          puStack_c4 = puStack_104;
          puStack_c0 = puStack_100;
          puStack_bc = puStack_fc;
          puStack_130 = puStack_f8;
          puStack_12c = puStack_f4;
          local_b0 = local_f0;
          puStack_ac = puStack_ec;
          uStack_a8 = uStack_e8;
          uStack_a4 = uStack_e4;
          local_e0 = local_158;
          puStack_dc = local_154;
          puStack_d8 = local_150;
          puStack_d4 = puStack_14c;
          local_b8 = puStack_130;
          puStack_b4 = puStack_12c;
          goto LAB_00905330;
        }
      }
      local_158 = local_120;
      local_154 = local_11c;
      local_150 = local_118;
      puStack_14c = puStack_114;
      puStack_130 = puStack_f8;
      puStack_12c = puStack_f4;
      param_1[2] = local_120;
      param_1[3] = local_11c;
      param_1[4] = local_118;
      param_1[5] = puStack_114;
      param_1[6] = local_110;
      param_1[7] = local_10c;
      puVar13 = local_108;
      puVar4 = puStack_104;
      puVar6 = puStack_100;
      puVar7 = puStack_fc;
      puVar14 = puStack_f8;
      puVar15 = puStack_f4;
LAB_009056a4:
      param_1[8] = puVar13;
      param_1[9] = puVar4;
      param_1[10] = puVar6;
      param_1[0xb] = puVar7;
      param_1[0xc] = puVar14;
      param_1[0xd] = puVar15;
      *param_1 = 3;
      param_1[1] = 0;
      iVar16 = local_1a8;
      iVar9 = local_1a4;
      break;
    case 3:
      if (local_1e8 != (undefined4 *)0x3) {
        FUN_009244cc(&local_70,"fan_control",0xb);
        goto LAB_00905a2c;
      }
      local_1d8[0] = (undefined4 *)0x80000015;
      if (puVar14 == (undefined4 *)0x80000015) {
        local_210 = (undefined4 *)&DAT_00000010;
        local_20c = (undefined4 *)thunk_FUN_016d4a50(0x10);
        if (local_20c == (undefined4 *)0x0) goto LAB_00905a60;
        local_264 = (undefined4 *)&DAT_00000004;
        local_260 = (undefined4 *)0x0;
        local_20c[3] = 0x676e6973;
        local_25c = (undefined4 *)&DAT_80000000;
        local_20c[2] = 0x73696d20;
        local_218 = (undefined4 *)0x0;
        local_20c[1] = 0x73692065;
        local_214 = (undefined4 *)&DAT_00000010;
        *local_20c = 0x756c6176;
        puVar12 = (undefined4 *)0x0;
LAB_00905904:
        param_1[0xc] = local_80;
        param_1[0xd] = local_7c;
        param_1[1] = 0;
        param_1[2] = puVar12;
        param_1[8] = local_218;
        param_1[9] = local_264;
        param_1[10] = local_260;
        param_1[0xb] = local_25c;
        *param_1 = 3;
        param_1[3] = local_1e8;
        param_1[4] = local_208;
        param_1[5] = local_214;
        param_1[6] = local_20c;
        param_1[7] = local_210;
        iVar16 = local_1a8;
        iVar9 = local_1a4;
        break;
      }
      local_158 = puVar14;
      uVar10 = puVar7[1];
      uVar11 = puVar7[2];
      *puVar4 = *puVar7;
      puVar4[1] = uVar10;
      puVar4[2] = uVar11;
      uVar8 = 0x15;
      if ((int)puVar14 < 0) {
        uVar8 = (uint)puVar14 ^ 0x80000000;
      }
      local_1e8 = (undefined4 *)&SUB_00000002;
      if (uVar8 == 0x10) {
LAB_0090503c:
        puVar12 = (undefined4 *)&SUB_00000002;
joined_r0x009052a8:
        if (puVar14 != (undefined4 *)0x80000011) {
          FUN_008f7448(&local_158);
        }
        if (puVar12 != (undefined4 *)&SUB_00000002) goto LAB_00905904;
      }
      else {
        if (uVar8 == 0x11) {
          local_128 = (undefined4 *)*local_154;
          local_124 = (undefined4 *)local_154[1];
          local_120 = (undefined4 *)local_154[2];
          local_11c = (undefined4 *)local_154[3];
          FUN_0090cffc(&local_70,&local_128);
          local_218 = local_58;
          local_210 = local_5c;
          local_20c = local_60;
          local_214 = local_64;
          local_208 = local_68;
          local_1e8 = local_6c;
          if (local_70 == (undefined4 *)&SUB_00000002) {
            puVar12 = (undefined4 *)&SUB_00000002;
          }
          else {
            local_80 = local_48;
            local_7c = puStack_44;
            local_25c = local_4c;
            local_260 = local_50;
            local_264 = local_54;
            puVar12 = local_70;
          }
          thunk_FUN_016d3fb4(puVar15);
          goto joined_r0x009052a8;
        }
        if (uVar8 == 0x12) goto LAB_0090503c;
        FUN_0090cffc(&local_70,&local_158);
        local_1e8 = local_6c;
        if (local_70 == (undefined4 *)&SUB_00000002) {
          local_208 = local_68;
          local_214 = local_64;
          local_20c = local_60;
          local_210 = local_5c;
          local_218 = local_58;
        }
        else {
          local_208 = local_68;
          local_214 = local_64;
          local_80 = local_48;
          local_7c = puStack_44;
          local_20c = local_60;
          local_210 = local_5c;
          local_25c = local_4c;
          local_260 = local_50;
          local_264 = local_54;
          local_218 = local_58;
          puVar12 = local_70;
          if (local_70 != (undefined4 *)&SUB_00000002) goto LAB_00905904;
        }
      }
LAB_00905330:
      if (param_2 == iVar16) goto LAB_00905424;
      goto LAB_00904c04;
    case 4:
      if (local_1a8 != -0x7fffffff) {
        FUN_009244cc(&local_70,&DAT_00377f5d,5);
        goto LAB_00905a2c;
      }
      local_1d8[0] = (undefined4 *)0x80000015;
      if (puVar14 == (undefined4 *)0x80000015) {
        local_60 = (undefined4 *)thunk_FUN_016d4a50(0x10);
        if (local_60 == (undefined4 *)0x0) goto LAB_00905a60;
        local_60[3] = 0x676e6973;
        local_a0 = *piVar3;
        iStack_9c = piVar3[1];
        local_60[2] = 0x73696d20;
        local_64 = (undefined4 *)&DAT_00000010;
        local_60[1] = 0x73692065;
        local_4c = (undefined4 *)&DAT_80000000;
        *local_60 = 0x756c6176;
        iStack_98 = piVar3[2];
        local_70 = (undefined4 *)0x0;
        local_50 = (undefined4 *)0x0;
        local_54 = (undefined4 *)&DAT_00000004;
        local_58 = (undefined4 *)0x0;
        local_5c = (undefined4 *)&DAT_00000010;
      }
      else {
        local_128 = puVar14;
        uVar10 = puVar7[1];
        uVar11 = puVar7[2];
        *puVar13 = *puVar7;
        puVar13[1] = uVar10;
        puVar13[2] = uVar11;
        FUN_009458b8(&local_70,&local_128);
        local_a0 = *piVar3;
        iStack_9c = piVar3[1];
        iStack_98 = piVar3[2];
        if (local_70 == (undefined4 *)&SUB_00000002) {
          local_1a8 = local_a0;
          local_1a4 = iStack_9c;
          local_1a0 = iStack_98;
          goto LAB_00905330;
        }
      }
      param_1[6] = local_60;
      param_1[7] = local_5c;
      param_1[8] = local_58;
      param_1[9] = local_54;
      param_1[10] = local_50;
      param_1[0xb] = local_4c;
      param_1[0xc] = local_48;
      param_1[0xd] = puStack_44;
      *param_1 = 3;
      param_1[1] = 0;
      param_1[2] = local_70;
      param_1[3] = local_a0;
      param_1[4] = iStack_9c;
      param_1[5] = iStack_98;
      iVar16 = local_1a8;
      iVar9 = local_1a4;
    }
joined_r0x00905614:
    local_1a8 = iVar16;
    local_1a4 = iVar9;
    if (-0x7fffffff < iVar16) {
      FUN_0094abc0(iVar9,local_1a0);
      if (iVar16 != 0) {
        thunk_FUN_016d3fb4(iVar9);
      }
    }
    if (((uint)local_1b8[0] & 1) != 0) {
      FUN_0093a2b4(puVar5);
    }
    goto joined_r0x00905990;
  }
  puVar5 = (undefined4 *)0x0;
  local_1dc = (undefined4 *)0x3;
  local_1f4 = (undefined4 *)0x0;
  local_1e8 = (undefined4 *)0x0;
  local_1c8 = param_2;
LAB_009054f4:
  local_1ec = (undefined4 *)&SUB_00000002;
LAB_00905508:
  *param_1 = puVar13;
  param_1[1] = puVar5;
  iVar16 = local_1a8;
  if (local_1a8 == -0x7fffffff) {
    iVar16 = -0x80000000;
  }
  param_1[2] = local_70;
  param_1[3] = local_6c;
  param_1[4] = local_68;
  param_1[5] = local_64;
  param_1[6] = local_60;
  param_1[7] = local_5c;
  param_1[8] = local_58;
  param_1[9] = local_54;
  param_1[10] = local_50;
  param_1[0xb] = local_4c;
  param_1[0xc] = local_48;
  param_1[0xd] = puStack_44;
  param_1[0xe] = puStack_40;
  param_1[0xf] = puStack_3c;
  param_1[0x10] = local_38;
  param_1[0x11] = uStack_34;
  param_1[0x12] = local_1dc;
  param_1[0x13] = local_1f4;
  param_1[0x14] = local_128;
  param_1[0x15] = local_124;
  param_1[0x16] = local_120;
  param_1[0x17] = local_11c;
  param_1[0x18] = local_118;
  param_1[0x19] = puStack_114;
  param_1[0x1a] = local_110;
  param_1[0x1b] = local_10c;
  param_1[0x1c] = local_108;
  param_1[0x1d] = puStack_104;
  param_1[0x1e] = puStack_100;
  param_1[0x1f] = puStack_fc;
  param_1[0x2d] = local_1a4;
  param_1[0x20] = local_200;
  param_1[0x21] = local_204;
  param_1[0x2e] = local_1a0;
  param_1[0x23] = local_158;
  param_1[0x24] = local_154;
  param_1[0x25] = local_150;
  param_1[0x2a] = local_210;
  param_1[0x26] = local_1ec;
  param_1[0x2b] = local_218;
  param_1[0x27] = local_208;
  param_1[0x28] = local_214;
  param_1[0x2c] = iVar16;
  param_1[0x22] = local_1e8;
  param_1[0x29] = local_20c;
joined_r0x00905990:
  if (local_1d8[0] == (undefined4 *)0x80000015) {
    return;
  }
  FUN_008f7448(local_1d8);
  return;
LAB_00905424:
  if (local_1dc == (undefined4 *)&DAT_00000004 && local_1f4 == (undefined4 *)0x0) {
    local_1dc = (undefined4 *)0x3;
    local_1f4 = (undefined4 *)0x0;
  }
  else {
    local_128 = local_198;
    local_124 = puStack_194;
    local_120 = puStack_190;
    local_11c = puStack_18c;
    local_118 = puStack_188;
    puStack_114 = puStack_184;
    local_110 = local_180;
    local_10c = puStack_17c;
    local_108 = puStack_178;
    puStack_104 = puStack_174;
    puStack_100 = puStack_170;
    puStack_fc = puStack_16c;
  }
  puVar4 = (undefined4 *)0x0;
  if (local_1b8[0] != (undefined4 *)&SUB_00000002) {
    local_158 = (undefined4 *)*puVar5;
    local_154 = (undefined4 *)puVar5[1];
    local_150 = (undefined4 *)puVar5[2];
    puVar4 = local_1b8[0];
  }
  puVar13 = (undefined4 *)&SUB_00000002;
  puVar5 = (undefined4 *)0x0;
  if (local_1ec != (undefined4 *)0x3 || local_1f0 != (undefined4 *)0x0) {
    local_70 = local_e0;
    local_6c = puStack_dc;
    local_68 = puStack_d8;
    local_64 = puStack_d4;
    local_60 = puStack_d0;
    local_5c = local_cc;
    local_58 = local_c8;
    local_54 = puStack_c4;
    local_50 = puStack_c0;
    local_4c = puStack_bc;
    local_48 = local_b8;
    puStack_44 = puStack_b4;
    puStack_40 = local_b0;
    puStack_3c = puStack_ac;
    local_38 = uStack_a8;
    uStack_34 = uStack_a4;
    puVar13 = local_1ec;
    puVar5 = local_1f0;
  }
  if (local_1e8 != (undefined4 *)0x3) {
    local_1ec = local_1e8;
    local_1e8 = puVar4;
    goto LAB_00905508;
  }
  local_1e8 = puVar4;
  goto LAB_009054f4;
}

