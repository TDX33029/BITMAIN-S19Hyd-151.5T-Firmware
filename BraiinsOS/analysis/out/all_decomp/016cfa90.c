// FUN_016cfa90 @ 016cfa90 size=2404 calls_out=5 calls_in=3
// strings: 

void FUN_016cfa90(undefined4 *param_1,byte *param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 **ppuVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  bool bVar13;
  undefined1 *puVar14;
  undefined1 *unaff_r5;
  uint uVar15;
  undefined4 uVar16;
  undefined1 *puVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 *unaff_r9;
  undefined1 *unaff_r11;
  undefined1 *puVar21;
  undefined8 uVar22;
  undefined1 *local_1e0;
  undefined1 *local_1dc;
  int local_1d8;
  uint local_1d4;
  int local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  int local_170;
  undefined4 local_16c;
  undefined1 *local_158;
  undefined1 *local_154;
  undefined1 *local_150;
  undefined1 *local_14c;
  undefined1 *local_148;
  undefined1 *local_144;
  undefined1 *local_140;
  undefined1 *local_13c;
  undefined1 *local_138;
  undefined1 *local_134;
  undefined1 *local_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  undefined1 *local_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  undefined1 *local_110;
  undefined1 *local_10c;
  undefined4 local_f0;
  byte *local_ec;
  uint local_e8;
  byte *local_cc;
  uint local_c8;
  uint local_c4;
  undefined1 *local_c0;
  undefined1 *local_bc;
  undefined1 *local_b8;
  undefined1 *local_b4;
  undefined1 *local_b0;
  undefined1 *local_ac;
  undefined1 *local_a8;
  undefined1 *local_a4;
  undefined1 *local_a0;
  undefined1 *local_9c;
  undefined1 *local_98;
  undefined1 *local_94;
  undefined1 *puStack_90;
  undefined1 *puStack_8c;
  undefined1 *local_88;
  undefined1 *puStack_84;
  undefined1 *puStack_80;
  undefined1 *puStack_7c;
  undefined4 local_78;
  byte *local_74;
  uint local_70;
  byte *local_54;
  uint local_50;
  uint local_4c;
  undefined1 *local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  
  FUN_016cce5c(&local_1d8);
  if (local_1d8 != 1) {
    uVar12 = 0x80000000;
    if (local_170 == 0) {
      uVar12 = 0x80000001;
    }
    if ((local_1d4 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(local_1d0);
    }
    param_1[6] = local_18c;
    param_1[8] = local_170;
    param_1[9] = local_16c;
    *param_1 = 0;
    param_1[1] = 0x80000000;
    param_1[2] = local_198;
    param_1[3] = local_194;
    param_1[4] = 0x80000000;
    param_1[5] = local_190;
    param_1[7] = uVar12;
    if (local_1d8 == 0) {
      return;
    }
    goto LAB_016cfbe8;
  }
  if (local_1d0 != -0x7fffffe0) {
    param_1[2] = local_1d0;
    param_1[3] = uStack_1cc;
    param_1[4] = uStack_1c8;
    param_1[5] = uStack_1c4;
    param_1[6] = local_1c0;
    param_1[7] = uStack_1bc;
    param_1[8] = uStack_1b8;
    param_1[9] = uStack_1b4;
    *param_1 = 1;
    return;
  }
  puVar17 = &DAT_8000001d;
  local_130 = (undefined1 *)0x80000000;
  local_110 = &DAT_8000001d;
  local_10c = (undefined1 *)CONCAT31(local_10c._1_3_,0x13);
  puVar14 = local_10c;
  if (param_3 == (undefined1 *)0x0) {
switchD_016cfd68_default:
    local_f0 = 0x80000000;
    uVar22 = FUN_016c3a1c(&local_f0);
LAB_016cfb0c:
    local_144 = (undefined1 *)((ulonglong)uVar22 >> 0x20);
    local_13c = (undefined1 *)uVar22;
    local_158 = (undefined1 *)0x1;
    local_150 = puVar17;
    local_14c = puVar14;
    local_148 = unaff_r5;
    local_140 = unaff_r9;
    local_138 = param_3;
    local_134 = unaff_r11;
    FUN_016c3a1c(&local_130);
LAB_016cfb38:
    *param_1 = 1;
    param_1[1] = local_bc;
    param_1[2] = 0x80000000;
    param_1[3] = local_b4;
    param_1[4] = local_b0;
    ppuVar8 = &local_158;
    param_1[5] = local_ac;
    param_1[6] = local_a8;
    param_1[7] = local_a4;
    param_1[8] = local_a0;
    param_1[9] = local_9c;
  }
  else {
    if ((~*param_2 & 0x1f) == 0 || param_3 == (undefined1 *)0x1) goto switchD_016cfd68_default;
    uVar9 = (uint)param_2[1];
    if ((char)param_2[1] < '\0') {
      switch(uVar9) {
      case 0x81:
        if (((undefined1 *)0x2 < param_3) && (0x7fffffff < (uint)(int)(char)param_2[2])) {
          uVar9 = (uint)param_2[2];
          uVar11 = 3;
          goto LAB_016cfc34;
        }
        break;
      case 0x82:
        if (((undefined1 *)0x3 < param_3) && (param_2[2] != 0)) {
          uVar9 = (uint)CONCAT11(param_2[2],param_2[3]);
          uVar11 = 4;
LAB_016cfea8:
          unaff_r5 = (undefined1 *)0xffff;
          if (uVar9 < 0xffff) goto LAB_016cfc34;
        }
        break;
      case 0x83:
        if ((((undefined1 *)0x2 < param_3) && ((undefined1 *)0x4 < param_3)) && (param_2[2] != 0)) {
          uVar9 = (uint)param_2[3] << 8 | (uint)param_2[2] << 0x10 | (uint)param_2[4];
          uVar11 = 5;
          goto LAB_016cfea8;
        }
        break;
      case 0x84:
        if (((undefined1 *)0x2 < param_3) && (param_3 != (undefined1 *)0x3)) {
          if ((((undefined1 *)0x5 < param_3) || (param_3 == (undefined1 *)0x3)) && (param_2[2] != 0)
             ) {
            uVar11 = 6;
            uVar9 = (uint)param_2[3] << 0x10 | (uint)param_2[2] << 0x18 | (uint)param_2[4] << 8 |
                    (uint)param_2[5];
            goto LAB_016cfea8;
          }
        }
      }
      goto switchD_016cfd68_default;
    }
    uVar11 = 2;
LAB_016cfc34:
    puVar21 = (undefined1 *)(uVar11 + uVar9);
    unaff_r11 = puVar21;
    if (((CARRY4(uVar11,uVar9)) || (param_3 < puVar21)) || (*param_2 != 0x30))
    goto switchD_016cfd68_default;
    local_ec = param_2 + uVar11;
    local_f0 = 0x8000002d;
    bVar1 = false;
    local_98 = &DAT_8000001d;
    local_c4 = 0;
    local_94 = (undefined1 *)CONCAT31(local_94._1_3_,0x14);
    local_e8 = uVar9;
    local_cc = local_ec;
    local_c8 = uVar9;
    if (uVar9 == 0) {
switchD_016d0140_default:
      local_78 = 0x80000000;
      bVar13 = true;
      local_b8 = &DAT_8000001d;
      local_b4 = local_94;
      local_b0 = puStack_90;
      local_ac = puStack_8c;
      local_a8 = local_88;
      local_a4 = puStack_84;
      local_a0 = puStack_80;
      local_9c = puStack_7c;
      local_c0 = (undefined1 *)0x1;
      FUN_016c3a1c(&local_78);
    }
    else {
      local_c4 = 1;
      if ((~*local_ec & 0x1f) == 0 || uVar9 == 1) goto switchD_016d0140_default;
      uVar18 = (uint)local_ec[1];
      uVar11 = 2;
      local_c4 = 2;
      if ((char)local_ec[1] < '\0') {
        switch(uVar18) {
        case 0x81:
          if (2 < uVar9) {
            uVar18 = (uint)local_ec[2];
            uVar11 = 3;
            local_c4 = 3;
            if (0x7fffffff < (uint)(int)(char)local_ec[2]) goto LAB_016cfef0;
          }
          break;
        case 0x82:
          if ((2 < uVar9) && (local_c4 = 3, uVar9 != 3)) {
            uVar11 = 4;
            local_c4 = 4;
            if (local_ec[2] != 0) {
              uVar18 = (uint)CONCAT11(local_ec[2],local_ec[3]);
LAB_016d036c:
              if (uVar18 < 0xffff) goto LAB_016cfef0;
            }
          }
          break;
        case 0x83:
          if (2 < uVar9) {
            local_c4 = 3;
            if ((uVar9 != 3) && (local_c4 = 4, 4 < uVar9)) {
              uVar11 = 5;
              local_c4 = 5;
              if (local_ec[2] != 0) {
                uVar18 = (uint)local_ec[3] << 8 | (uint)local_ec[2] << 0x10 | (uint)local_ec[4];
                goto LAB_016d036c;
              }
            }
          }
          break;
        case 0x84:
          if (2 < uVar9) {
            local_c4 = 3;
            if (uVar9 != 3) {
              local_c4 = 4;
              if ((4 < uVar9) && (local_c4 = 5, uVar9 != 5)) {
                uVar11 = 6;
                local_c4 = 6;
                if (local_ec[2] != 0) {
                  uVar18 = (uint)local_ec[3] << 0x10 | (uint)local_ec[2] << 0x18 |
                           (uint)local_ec[4] << 8 | (uint)local_ec[5];
                  goto LAB_016d036c;
                }
              }
            }
          }
        }
        goto switchD_016d0140_default;
      }
LAB_016cfef0:
      uVar15 = uVar11 + uVar18;
      if (((CARRY4(uVar11,uVar18)) || (uVar9 < uVar15)) || (local_c4 = uVar15, *local_ec != 0x30))
      goto switchD_016d0140_default;
      local_74 = local_ec + uVar11;
      local_78 = 0x8000002d;
      local_4c = 0;
      local_70 = uVar18;
      local_54 = local_74;
      local_50 = uVar18;
      FUN_016c607c(&local_48,&local_54,2);
      if (((local_48 == (undefined1 *)0x8000002d) &&
          (FUN_016c607c(&local_48,&local_54,0x30), local_48 == (undefined1 *)0x8000002d)) &&
         ((FUN_016c607c(&local_48,&local_54,0x30), local_48 == (undefined1 *)0x8000002d &&
          (FUN_016c607c(&local_48,&local_54,0x30), local_48 == (undefined1 *)0x8000002d)))) {
        FUN_016c607c(&local_48,&local_54,0x30);
        puVar14 = local_40;
        puVar17 = local_44;
        if ((local_48 != (undefined1 *)0x8000002d) ||
           (FUN_016c607c(&local_48,&local_54,0x30), local_48 != (undefined1 *)0x8000002d))
        goto LAB_016d01c0;
        local_140 = (undefined1 *)0x80000001;
        local_144 = local_40;
        local_148 = local_44;
        local_14c = (undefined1 *)0x80000000;
        local_158 = (undefined1 *)0x80000000;
        local_154 = puVar17;
        local_150 = puVar14;
        if (local_4c == local_50) {
          puVar10 = (undefined4 *)((uint)&local_c0 | 4);
          *puVar10 = 0x80000000;
          puVar10[1] = puVar17;
          puVar10[2] = puVar14;
          puVar10[3] = 0x80000000;
          puVar10[4] = local_44;
          puVar10[5] = local_40;
          puVar10[6] = 0x80000001;
          puVar10[7] = local_13c;
          puVar10[8] = local_138;
          bVar13 = false;
          local_c0 = (undefined1 *)0x0;
          FUN_016c3a1c(&local_98);
          bVar1 = true;
        }
        else {
          bVar13 = true;
          local_b8 = local_98;
          local_b4 = local_94;
          local_b0 = puStack_90;
          local_ac = puStack_8c;
          local_a8 = local_88;
          local_a4 = puStack_84;
          local_a0 = puStack_80;
          local_9c = puStack_7c;
          local_c0 = (undefined1 *)0x1;
          FUN_016c3af4(&local_158);
          bVar1 = false;
        }
      }
      else {
LAB_016d01c0:
        bVar13 = true;
        local_c0 = (undefined1 *)0x1;
        local_b8 = local_48;
        local_b4 = local_44;
        local_b0 = local_40;
        local_ac = local_3c;
        local_a8 = local_38;
        local_a4 = local_34;
        local_a0 = local_30;
        local_9c = local_2c;
        FUN_016c3a1c(&local_98);
        bVar1 = false;
      }
    }
    FUN_016c607c(&local_158,&local_cc,0x30);
    if (local_158 != (undefined1 *)0x8000002d) {
LAB_016cfd9c:
      param_3 = local_140;
      unaff_r9 = local_148;
      unaff_r5 = local_150;
      puVar14 = local_154;
      puVar17 = local_158;
      local_1e0 = local_14c;
      local_1dc = local_144;
      unaff_r11 = local_13c;
      if (bVar1) {
        if (((uint)local_bc & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_b8);
        }
        if (((uint)local_b0 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_ac);
        }
        if ((-0x7fffffff < (int)local_a4) && (local_a4 != (undefined1 *)0x0)) {
          thunk_FUN_016d3fb4(local_a0);
        }
      }
      else {
        FUN_016c3a1c(&local_b8);
      }
LAB_016cfec4:
      uVar22 = CONCAT44(local_1e0,local_1dc);
      FUN_016c3a1c(&local_110);
      goto LAB_016cfb0c;
    }
    FUN_016c607c(&local_158,&local_cc,3);
    unaff_r11 = local_9c;
    puVar7 = local_a0;
    puVar6 = local_a4;
    unaff_r9 = local_a8;
    puVar5 = local_ac;
    unaff_r5 = local_b0;
    puVar4 = local_b4;
    puVar3 = local_b8;
    puVar17 = local_bc;
    puVar14 = local_10c;
    uVar2 = CONCAT44(local_a4,local_a0);
    if (local_158 != (undefined1 *)0x8000002d) goto LAB_016cfd9c;
    local_1e0 = local_ac;
    local_1dc = local_a4;
    if (bVar13) {
      puVar14 = local_b4;
      param_3 = local_a0;
      puVar17 = local_b8;
      goto LAB_016cfec4;
    }
    if (local_c4 != local_c8) {
      param_3 = (undefined1 *)0x7fffffff;
      if (((uint)local_bc & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(local_b8);
      }
      if (((uint)unaff_r5 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(puVar5);
      }
      uVar22 = CONCAT44(puVar6,puVar7);
      if ((-0x7fffffff < (int)puVar6) && (uVar22 = uVar2, puVar6 != (undefined1 *)0x0)) {
        uVar22 = thunk_FUN_016d3fb4();
      }
      puVar17 = &DAT_8000001d;
      goto LAB_016cfb0c;
    }
    FUN_016c3a1c(&local_110);
    if (puVar21 != param_3) {
      local_150 = local_130;
      local_14c = puStack_12c;
      local_148 = puStack_128;
      local_144 = puStack_124;
      local_140 = local_120;
      local_13c = puStack_11c;
      local_138 = puStack_118;
      local_134 = puStack_114;
      local_158 = (undefined1 *)0x1;
      if (((uint)puVar17 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(puVar3);
      }
      if (((uint)unaff_r5 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(puVar5);
      }
      if ((-0x7fffffff < (int)puVar6) && (puVar6 != (undefined1 *)0x0)) {
        thunk_FUN_016d3fb4(puVar7);
      }
      goto LAB_016cfb38;
    }
    local_138 = puVar7;
    local_13c = puVar6;
    local_144 = puVar5;
    local_154 = puVar17;
    local_14c = puVar4;
    local_134 = unaff_r11;
    local_140 = unaff_r9;
    local_148 = unaff_r5;
    local_150 = puVar3;
    local_158 = (undefined1 *)0x0;
    FUN_016c3a1c(&local_130);
    puVar10 = (undefined4 *)((uint)&local_158 | 4);
    uVar12 = puVar10[1];
    uVar16 = puVar10[2];
    uVar19 = puVar10[3];
    param_1[1] = *puVar10;
    param_1[2] = uVar12;
    param_1[3] = uVar16;
    param_1[4] = uVar19;
    uVar12 = puVar10[5];
    uVar16 = puVar10[6];
    uVar19 = puVar10[7];
    uVar20 = puVar10[8];
    ppuVar8 = &local_c0;
    param_1[5] = puVar10[4];
    param_1[6] = uVar12;
    param_1[7] = uVar16;
    param_1[8] = uVar19;
    param_1[9] = uVar20;
    *param_1 = 0;
  }
  local_b8 = (undefined1 *)0x80000000;
  local_c0 = (undefined1 *)0x1;
  FUN_016c3a1c(ppuVar8 + 2);
LAB_016cfbe8:
  FUN_016c3a1c(&local_1d0);
  return;
}

