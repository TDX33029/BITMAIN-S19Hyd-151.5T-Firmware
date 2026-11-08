// FUN_01253150 @ 01253150 size=3440 calls_out=25 calls_in=1
// strings: user-- | user-- | enabled | MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01253150(undefined4 *param_1,undefined4 *param_2)

{
  uint *puVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint **ppuVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  uint unaff_r4;
  undefined4 uVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  undefined4 uVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  undefined1 uVar25;
  bool bVar26;
  uint local_1fc;
  uint local_1f8;
  uint local_1f0;
  uint local_1e8;
  uint local_1e4;
  uint *local_1dc;
  int local_1d8;
  uint *local_1cc;
  uint *local_1c8;
  uint *local_1c4;
  uint *local_1c0;
  undefined4 local_1bc;
  uint *local_1b8;
  int local_1b4;
  uint local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  uint local_1a0;
  int local_19c;
  uint local_198;
  uint local_190;
  uint uStack_18c;
  uint *puStack_188;
  uint uStack_184;
  uint uStack_180;
  uint *puStack_17c;
  uint uStack_178;
  uint uStack_174;
  uint uStack_170;
  uint *local_168;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  uint uStack_158;
  uint local_154;
  uint uStack_150;
  uint uStack_14c;
  uint uStack_148;
  uint uStack_144;
  uint *local_140;
  uint *local_13c;
  uint local_138;
  uint local_134;
  uint *local_130;
  uint local_12c;
  uint local_128;
  uint *local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  undefined4 *local_10c;
  undefined4 *local_108;
  int iStack_104;
  undefined4 *local_fc;
  undefined4 *local_f8;
  undefined4 *local_f4;
  undefined4 *local_f0;
  int local_ec;
  uint *local_e8;
  uint *puStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  undefined4 *local_d8;
  undefined4 *local_d4;
  uint local_d0;
  undefined4 *local_cc;
  int local_c8;
  uint *local_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint *puStack_b4;
  uint local_b0;
  uint local_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint *local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint local_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint *local_68;
  uint local_64;
  uint local_60;
  undefined4 local_5c;
  uint *local_58;
  undefined4 local_54;
  uint local_50;
  uint local_4c;
  uint *local_48;
  uint uStack_44;
  uint local_40;
  uint *puStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined1 uStack_25;
  
  if ((undefined1 *)*param_2 == &DAT_80000014) {
    local_1bc = param_2[1];
    puVar19 = (uint *)param_2[2];
    uVar13 = param_2[3];
    local_1b4 = 0;
    uVar18 = 0x6666;
    if (uVar13 < 0x6666) {
      uVar18 = uVar13;
    }
    puVar15 = puVar19 + uVar13 * 4;
    local_1c4 = puVar19;
    local_1c0 = puVar19;
    local_1b8 = puVar15;
    if (uVar13 == 0) {
      local_19c = 4;
      uVar18 = 0;
    }
    else {
      unaff_r4 = uVar18 * 0x28;
      local_19c = FUN_01298504(unaff_r4,4);
      if (local_19c == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,unaff_r4);
      }
    }
    puVar5 = (undefined4 *)((uint)&local_68 | 4);
    iVar6 = (int)&local_54 + 1;
    puVar7 = (uint *)((uint)&local_140 | 4);
    uVar13 = (uint)&local_140 | 5;
    puVar8 = (undefined4 *)((uint)&local_98 | 4);
    puVar9 = (undefined4 *)((uint)&local_e8 | 4);
    puVar10 = (uint *)((uint)&local_110 | 4);
    puVar11 = (uint *)((uint)&local_168 | 4);
    local_198 = 0;
    local_1d8 = 0;
    local_1a0 = uVar18;
LAB_01253280:
    if (puVar19 != puVar15) {
      local_1dc = puVar19 + 4;
      uVar18 = *puVar19;
      local_1c0 = local_1dc;
    }
    if (!(puVar19 == puVar15 || uVar18 == 0x80000015)) {
      uVar16 = puVar19[2];
      uVar20 = puVar19[3];
      *puVar10 = puVar19[1];
      puVar10[1] = uVar16;
      puVar10[2] = uVar20;
      local_1d8 = local_1d8 + 1;
      uVar16 = 0x15;
      if ((int)uVar18 < 0) {
        uVar16 = uVar18 ^ 0x80000000;
      }
      local_1b4 = local_1d8;
      local_110 = uVar18;
      if (uVar16 == 0x14) {
        local_ec = 0;
        local_f4 = local_10c;
        local_f0 = local_108 + iStack_104 * 4;
        local_f8 = local_108;
        local_fc = local_108;
        FUN_012232c4(&local_58,&local_fc);
        puVar19 = local_58;
        cVar3 = (char)local_54;
        if (local_58 == (uint *)0x2) {
          if ((char)local_54 == '\x03') {
            uVar17 = 0;
LAB_01253d3c:
            FUN_0123c028(&local_140,uVar17,&DAT_01c248f4,&DAT_01d064b8);
LAB_01253a00:
            if (local_140 != (uint *)0x2) goto LAB_01253a5c;
          }
          else {
            FUN_01223374(&local_58,&local_fc);
            uVar20 = local_4c;
            uVar16 = local_50;
            puVar19 = local_54;
            if (local_58 != (uint *)0x2) {
              local_130 = local_48;
              local_12c = uStack_44;
              local_128 = local_40;
              local_124 = puStack_3c;
              local_120 = local_38;
              local_11c = uStack_34;
              local_118 = uStack_30;
              local_114 = uStack_2c;
              local_13c = local_54;
              local_138 = local_50;
              local_134 = local_4c;
              local_140 = local_58;
              goto LAB_01253a5c;
            }
            if (local_54 == (uint *)0x80000000) {
              uVar17 = 1;
              goto LAB_01253d3c;
            }
            FUN_01223374(&local_58,&local_fc);
            uVar23 = local_4c;
            uVar22 = local_50;
            puVar24 = local_54;
            if (local_58 != (uint *)0x2) {
              local_130 = local_48;
              local_12c = uStack_44;
              local_128 = local_40;
              local_124 = puStack_3c;
              local_120 = local_38;
              local_11c = uStack_34;
              local_118 = uStack_30;
              local_114 = uStack_2c;
              local_13c = local_54;
              local_138 = local_50;
              local_134 = local_4c;
              local_140 = local_58;
LAB_012539ec:
              FUN_019bb7e0(puVar19,uVar16);
              goto LAB_01253a00;
            }
            if (local_54 == (uint *)0x80000000) {
              FUN_0123c028(&local_58,2,&DAT_01c248f4,&DAT_01d064b8);
              local_140 = local_58;
              local_13c = local_54;
              local_138 = local_50;
              local_134 = local_4c;
              local_130 = local_48;
              local_12c = uStack_44;
              local_128 = local_40;
              local_124 = puStack_3c;
              local_120 = local_38;
              local_11c = uStack_34;
              local_118 = uStack_30;
              local_114 = uStack_2c;
              goto LAB_012539ec;
            }
            puVar4 = local_f8;
            if (local_f8 == local_f0) {
LAB_012536e4:
              local_f8 = puVar4;
              FUN_0123c028(&local_58,3,&DAT_01c248f4,&DAT_01d064b8);
LAB_01253718:
              local_140 = local_58;
              local_13c = local_54;
              local_138 = local_50;
              local_134 = local_4c;
              local_130 = local_48;
              local_12c = uStack_44;
              local_128 = local_40;
              local_124 = puStack_3c;
              local_120 = local_38;
              local_11c = uStack_34;
              local_118 = uStack_30;
              local_114 = uStack_2c;
              FUN_019bb7e0(puVar24,uVar22);
              goto LAB_012539ec;
            }
            puVar14 = (uint *)*local_f8;
            puVar4 = local_f8 + 4;
            if (puVar14 == (uint *)0x80000015) goto LAB_012536e4;
            uVar17 = local_f8[2];
            uVar21 = local_f8[3];
            *puVar5 = local_f8[1];
            puVar5[1] = uVar17;
            puVar5[2] = uVar21;
            local_ec = local_ec + 1;
            local_f8 = local_f8 + 4;
            local_68 = puVar14;
            FUN_0123da34(&local_58,&local_68);
            if (local_58 != (uint *)0x2) {
              local_c0 = local_48;
              uStack_bc = uStack_44;
              uStack_b8 = local_40;
              puStack_b4 = puStack_3c;
              local_b0 = local_38;
              local_ac = uStack_34;
              uStack_a8 = uStack_30;
              uStack_a4 = uStack_2c;
              goto LAB_01253718;
            }
            puVar4 = local_f8;
            if (local_54 == (uint *)0x80000001) goto LAB_012536e4;
            local_130 = puVar24;
            local_120 = local_50;
            local_11c = local_4c;
            local_138 = uVar16;
            local_12c = uVar22;
            local_124 = local_54;
            local_128 = uVar23;
            local_134 = uVar20;
            local_13c = puVar19;
            local_118 = CONCAT31(local_118._1_3_,cVar3);
            local_140 = (uint *)0x2;
          }
          local_98 = (uint *)*puVar7;
          uStack_94 = puVar7[1];
          uStack_90 = puVar7[2];
          uStack_8c = puVar7[3];
          uStack_88 = puVar7[4];
          local_84 = puVar7[5];
          uStack_80 = puVar7[6];
          uStack_7c = puVar7[7];
          uStack_78 = puVar7[8];
          uStack_74 = puVar7[9];
          FUN_01222e2c(&local_58,&local_fc);
          if (local_58 != (uint *)0x2) {
            ppuVar12 = &local_98;
            goto LAB_012539a8;
          }
          goto LAB_01253980;
        }
        FUN_01bed4e2(uVar13,iVar6,0x2b);
        local_13c = (uint *)CONCAT31(local_13c._1_3_,cVar3);
        local_140 = puVar19;
LAB_01253a5c:
        FUN_01264ff4(&local_fc);
        goto LAB_01253a64;
      }
      if (uVar16 == 0x15) {
        uVar16 = 3;
        local_c8 = 0;
        local_e8 = (uint *)0x80000015;
        local_1c8 = (uint *)0x80000000;
        puVar24 = (uint *)0x80000001;
        local_d4 = local_10c;
        local_cc = local_10c + (int)local_108 * 8;
        local_d8 = local_10c;
        local_1cc = (uint *)0x80000000;
        local_d0 = uVar18;
LAB_0125332c:
        puVar4 = local_d4;
        uVar25 = (undefined1)uVar16;
        bVar26 = local_d4 == local_cc;
        if (!bVar26) {
          puVar19 = (uint *)*local_d4;
          local_d4 = local_d4 + 8;
        }
        if (bVar26 || puVar19 == (uint *)0x80000015) goto switchD_012534bc_caseD_4;
        local_c8 = local_c8 + 1;
        uVar17 = puVar4[2];
        uVar21 = puVar4[3];
        *puVar5 = puVar4[1];
        puVar5[1] = uVar17;
        puVar5[2] = uVar21;
        local_58 = (uint *)puVar4[4];
        local_54 = (uint *)puVar4[5];
        local_50 = puVar4[6];
        local_4c = puVar4[7];
        local_68 = puVar19;
        if (local_e8 != (uint *)0x80000015) {
          FUN_012222e0(&local_e8);
        }
        uVar22 = local_60;
        uVar20 = local_64;
        local_e8 = local_58;
        puStack_e4 = local_54;
        uStack_e0 = local_50;
        uStack_dc = local_4c;
        uVar23 = 0x15;
        if ((int)puVar19 < 0) {
          uVar23 = (uint)puVar19 ^ 0x80000000;
        }
        uVar17 = local_5c;
        switch(uVar23) {
        case 1:
          uVar22 = local_64 & 0xff;
          uVar17 = 0;
        case 4:
          FUN_012266f8(&local_58,&switchD_012533c4::switchdataD_012533c8,uVar22,uVar17);
          goto LAB_0125348c;
        default:
          FUN_012223f8(&local_58,&local_68,&uStack_25,&DAT_01c24764);
          goto LAB_012534a4;
        case 0xc:
          FUN_012320d0(&local_58,local_60,local_5c);
          goto LAB_0125347c;
        case 0xd:
          FUN_012320d0(&local_58,local_64,local_60);
          break;
        case 0xe:
          FUN_01225e20(&local_58,local_60,local_5c);
LAB_0125347c:
          FUN_019bb7e0(uVar20,uVar22);
LAB_0125348c:
          if ((uVar23 | 2) != 0xe) break;
          goto LAB_012534a4;
        case 0xf:
          FUN_01225e20(&local_58,local_64,local_60);
        }
        FUN_012222e0(&local_68);
LAB_012534a4:
        puVar1 = local_58;
        puVar14 = local_e8;
        uVar2 = (char)local_54;
        puVar19 = (uint *)((uint)local_54 & 0xff);
        if (local_58 != (uint *)0x2) {
          FUN_01bed4e2(&local_98,iVar6,0x2b);
          FUN_01bed4e2(uVar13,&local_98,0x2b);
          local_13c = (uint *)CONCAT31(local_13c._1_3_,uVar2);
          bVar26 = true;
          local_140 = puVar1;
          goto LAB_012538f8;
        }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(puVar19) {
        case (uint *)0x0:
          if (uVar16 == 3) {
            FUN_01222d6c(&local_58,&local_e8);
            puVar19 = local_58;
            uVar25 = (char)local_54;
            uVar16 = (uint)local_54 & 0xff;
            if (local_58 == (uint *)0x2) goto LAB_0125332c;
            FUN_01bed4e2(uVar13,iVar6,0x2b);
            local_140 = puVar19;
            bVar26 = true;
            local_13c = (uint *)CONCAT31(local_13c._1_3_,uVar25);
          }
          else {
            FUN_0123c090(&local_58,"enabled",7);
LAB_01253dc0:
            local_140 = local_58;
            local_13c = local_54;
            local_138 = local_50;
            local_134 = local_4c;
            local_130 = local_48;
            local_12c = uStack_44;
            local_128 = local_40;
            local_124 = puStack_3c;
            local_120 = local_38;
            local_11c = uStack_34;
            local_118 = uStack_30;
            local_114 = uStack_2c;
            bVar26 = true;
          }
          break;
        case (uint *)0x1:
          if (local_1cc != (uint *)0x80000000) {
            FUN_0123c090(&local_58,"url",3);
            goto LAB_01253dc0;
          }
          FUN_01223264(&local_58,&local_e8);
          local_1cc = local_54;
          if (local_58 == (uint *)0x2) {
            local_1e4 = local_50;
            unaff_r4 = local_4c;
            puVar19 = (uint *)&DAT_80000000;
            goto LAB_0125332c;
          }
          local_130 = local_48;
          local_12c = uStack_44;
          local_128 = local_40;
          local_124 = puStack_3c;
          local_120 = local_38;
          local_11c = uStack_34;
          local_118 = uStack_30;
          local_114 = uStack_2c;
          bVar26 = true;
          local_138 = local_50;
          local_13c = local_54;
          local_134 = local_4c;
          local_140 = local_58;
          local_1cc = (uint *)0x80000000;
          break;
        case (uint *)0x2:
          if (local_1c8 != (uint *)0x80000000) {
            FUN_0123c090(&local_58,"user--",4);
            goto LAB_01253dc0;
          }
          FUN_01223264(&local_58,&local_e8);
          local_1c8 = local_54;
          local_1f8 = local_4c;
          if (local_58 == (uint *)0x2) {
            local_1f0 = local_50;
            goto LAB_0125332c;
          }
          local_130 = local_48;
          local_12c = uStack_44;
          local_128 = local_40;
          local_124 = puStack_3c;
          local_120 = local_38;
          local_11c = uStack_34;
          local_118 = uStack_30;
          local_114 = uStack_2c;
          bVar26 = true;
          local_138 = local_50;
          local_13c = local_54;
          local_134 = local_4c;
          local_140 = local_58;
          local_1c8 = (uint *)0x80000000;
          break;
        case (uint *)0x3:
          if (puVar24 != (uint *)0x80000001) {
            FUN_0123c090(&local_58,&DAT_00571120,8);
            goto LAB_01253dc0;
          }
          local_e8 = (uint *)0x80000015;
          if (puVar14 == (uint *)0x80000015) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements"
                         ,0x2c,&DAT_01cfa02c);
          }
          puVar19 = (uint *)puVar9[1];
          uVar17 = puVar9[2];
          *puVar8 = *puVar9;
          puVar8[1] = puVar19;
          puVar8[2] = uVar17;
          local_98 = puVar14;
          FUN_0123da34(&local_58,&local_98);
          local_1e8 = local_50;
          local_1fc = local_4c;
          puVar24 = local_54;
          if (local_58 != (uint *)0x2) goto LAB_01253cd4;
          goto LAB_0125332c;
        case (uint *)0x4:
switchD_012534bc_caseD_4:
          if (uVar16 == 3) {
            uVar25 = 2;
          }
          puVar19 = local_1cc;
          uVar16 = local_1e4;
          if (local_1cc == (uint *)0x80000000) {
            FUN_0123bf6c(&local_58,"url",3);
            unaff_r4 = local_4c;
            puVar19 = local_54;
            uVar16 = local_50;
            if (local_58 != (uint *)0x2) {
              local_130 = local_48;
              local_12c = uStack_44;
              local_128 = local_40;
              local_124 = puStack_3c;
              local_120 = local_38;
              local_11c = uStack_34;
              local_118 = uStack_30;
              local_114 = uStack_2c;
              bVar26 = true;
              local_140 = local_58;
              local_134 = local_4c;
              local_138 = local_50;
              local_13c = local_54;
              local_1cc = (uint *)0x80000000;
              break;
            }
          }
          if (local_1c8 == (uint *)0x80000000) {
            bVar26 = local_1cc == (uint *)0x80000000;
            FUN_0123bf6c(&local_58,"user--",4);
            if (local_58 != (uint *)0x2) {
              local_130 = local_48;
              local_12c = uStack_44;
              local_128 = local_40;
              local_124 = puStack_3c;
              local_120 = local_38;
              local_11c = uStack_34;
              local_118 = uStack_30;
              local_114 = uStack_2c;
              local_138 = local_50;
              local_134 = local_4c;
              local_13c = local_54;
              local_140 = local_58;
              FUN_019bb7e0(puVar19,uVar16);
              local_1c8 = (uint *)0x80000000;
              break;
            }
            local_1f8 = local_4c;
            local_1c8 = local_54;
            local_12c = local_50;
          }
          else {
            local_12c = local_1f0;
          }
          local_118 = CONCAT31(local_118._1_3_,uVar25);
          local_11c = local_1fc;
          if (puVar24 == (uint *)0x80000001) {
            puVar24 = (uint *)0x80000000;
          }
          local_120 = local_1e8;
          local_130 = local_1c8;
          local_128 = local_1f8;
          local_140 = (uint *)0x2;
          local_13c = puVar19;
          local_138 = uVar16;
          local_134 = unaff_r4;
          local_124 = puVar24;
          goto LAB_01253950;
        }
LAB_012538f8:
        if (-0x7fffffff < (int)puVar24) {
          FUN_019bb7e0(puVar24,local_1e8);
        }
        goto LAB_01253910;
      }
      FUN_012223f8(&local_140,&local_110,&uStack_25,&DAT_01c24644);
      goto LAB_01253a84;
    }
LAB_01253e18:
    param_1[1] = local_1a0;
    param_1[2] = local_19c;
    param_1[3] = local_198;
    *param_1 = 2;
    local_1b0 = param_1[1];
    uStack_1ac = param_1[2];
    uStack_1a8 = param_1[3];
    FUN_01222e2c(&local_58,&local_1c4);
    if (local_58 == (uint *)0x2) {
      *param_1 = 2;
    }
    else {
      *param_1 = local_58;
      param_1[1] = local_54;
      param_1[2] = local_50;
      param_1[3] = local_4c;
      param_1[4] = local_48;
      param_1[5] = uStack_44;
      param_1[6] = local_40;
      param_1[7] = puStack_3c;
      param_1[8] = local_38;
      param_1[9] = uStack_34;
      param_1[10] = uStack_30;
      param_1[0xb] = uStack_2c;
      FUN_01222bcc(&local_1b0);
    }
  }
  else {
    FUN_012223f8(param_1,param_2,&uStack_25,&DAT_01c24614);
  }
  return;
LAB_01253cd4:
  local_130 = local_48;
  local_12c = uStack_44;
  local_128 = local_40;
  local_124 = puStack_3c;
  local_120 = local_38;
  local_11c = uStack_34;
  local_118 = uStack_30;
  local_114 = uStack_2c;
  bVar26 = true;
  local_134 = local_4c;
  local_138 = local_50;
  local_13c = local_54;
  local_140 = local_58;
LAB_01253910:
  if (local_1c8 != (uint *)0x80000000) {
    FUN_019bb7e0(local_1c8,local_1f0);
  }
  if ((bool)(bVar26 & local_1cc != (uint *)0x80000000)) {
    FUN_019bb7e0(local_1cc,local_1e4);
  }
  if (local_140 == (uint *)0x2) {
LAB_01253950:
    local_c0 = (uint *)*puVar7;
    uStack_bc = puVar7[1];
    uStack_b8 = puVar7[2];
    puStack_b4 = (uint *)puVar7[3];
    local_b0 = puVar7[4];
    local_ac = puVar7[5];
    uStack_a8 = puVar7[6];
    uStack_a4 = puVar7[7];
    uStack_a0 = puVar7[8];
    uStack_9c = puVar7[9];
    FUN_01222c98(&local_58,&local_e8);
    if (local_58 == (uint *)0x2) {
LAB_01253980:
      local_140 = (uint *)0x2;
    }
    else {
      ppuVar12 = &local_c0;
LAB_012539a8:
      local_140 = local_58;
      local_13c = local_54;
      local_138 = local_50;
      local_134 = local_4c;
      local_130 = local_48;
      local_12c = uStack_44;
      local_128 = local_40;
      local_124 = puStack_3c;
      local_120 = local_38;
      local_11c = uStack_34;
      local_118 = uStack_30;
      local_114 = uStack_2c;
      FUN_00b9c308(ppuVar12);
    }
  }
  else {
    FUN_01222c4c(&local_e8);
  }
LAB_01253a64:
  if ((0x7fffffff < uVar18) && ((undefined1 *)(uVar18 & 0xfffffffe) != &DAT_80000014)) {
    FUN_012222e0(&local_110);
  }
LAB_01253a84:
  unaff_r4 = local_198;
  if (local_140 != (uint *)0x2) {
    local_190 = local_138;
    uStack_18c = local_134;
    puStack_188 = local_130;
    uStack_184 = local_12c;
    uStack_180 = local_128;
    puStack_17c = local_124;
    uStack_178 = local_120;
    uStack_174 = local_11c;
    uStack_170 = local_118;
    *param_1 = local_140;
    param_1[1] = local_13c;
    param_1[2] = local_138;
    param_1[3] = local_134;
    param_1[4] = local_130;
    param_1[5] = local_12c;
    param_1[6] = local_128;
    param_1[7] = local_124;
    param_1[8] = local_120;
    param_1[9] = local_11c;
    param_1[10] = local_118;
    param_1[0xb] = local_114;
    FUN_01222bcc(&local_1a0);
    FUN_01264ff4(&local_1c4);
    return;
  }
  local_190 = local_138;
  uStack_18c = local_134;
  puStack_188 = local_130;
  uStack_184 = local_12c;
  uStack_180 = local_128;
  puStack_17c = local_124;
  uStack_178 = local_120;
  uStack_174 = local_11c;
  uStack_170 = local_118;
  if (local_13c == (uint *)0x80000000) goto LAB_01253e18;
  local_168 = local_13c;
  *puVar11 = local_138;
  puVar11[1] = local_134;
  puVar11[2] = (uint)local_130;
  puVar11[3] = local_12c;
  puVar11[4] = local_128;
  puVar11[5] = (uint)local_124;
  puVar11[6] = local_120;
  puVar11[7] = local_11c;
  puVar11[8] = local_118;
  if (local_198 == local_1a0) {
    FUN_00a20cf4(&local_1a0);
  }
  puVar19 = (uint *)(local_19c + unaff_r4 * 0x28);
  *puVar19 = (uint)local_168;
  puVar19[1] = uStack_164;
  puVar19[2] = uStack_160;
  puVar19[3] = uStack_15c;
  puVar19[4] = uStack_158;
  puVar19[5] = local_154;
  puVar19[6] = uStack_150;
  puVar19[7] = uStack_14c;
  puVar19[8] = uStack_148;
  puVar19[9] = uStack_144;
  local_198 = unaff_r4 + 1;
  uVar18 = uStack_14c;
  puVar19 = local_1dc;
  goto LAB_01253280;
}

