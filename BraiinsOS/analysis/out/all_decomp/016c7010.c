// FUN_016c7010 @ 016c7010 size=2908 calls_out=4 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016c7010(undefined4 *param_1,int *param_2,undefined4 *param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  byte **ppbVar7;
  undefined3 *puVar8;
  short *psVar9;
  uint uVar10;
  byte *pbVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined1 uVar16;
  uint uVar17;
  uint uVar18;
  short *psVar19;
  uint uVar20;
  uint *puVar21;
  undefined4 uVar22;
  byte *pbVar23;
  undefined4 uVar24;
  short *psVar25;
  uint uVar26;
  uint uVar27;
  uint *local_1c8;
  short *local_1c4;
  short *local_1b4;
  short *local_1a8;
  uint local_1a4;
  byte **local_1a0;
  short *local_19c;
  short *local_194;
  short *local_190;
  uint *local_18c;
  undefined4 local_180;
  byte *local_17c;
  uint local_178;
  short local_15c;
  undefined1 local_15a;
  undefined1 *local_158;
  undefined1 local_154;
  short *local_138;
  short *local_134;
  uint *local_130;
  short *local_12c;
  byte **local_128;
  undefined4 local_124;
  uint local_120;
  short *local_11c;
  undefined4 local_118;
  byte *local_114;
  uint local_110;
  short *local_f8;
  short *psStack_f4;
  uint *puStack_f0;
  short *psStack_ec;
  byte **local_e8;
  undefined4 uStack_e4;
  uint uStack_e0;
  short *psStack_dc;
  short local_d4;
  undefined1 local_d2;
  short *local_d0;
  short *local_cc;
  uint *local_c8;
  short *local_c4;
  byte **local_c0;
  byte local_bc;
  short local_bb;
  undefined1 local_b9;
  uint local_b8;
  short *local_b4;
  undefined4 local_b0;
  byte *local_ac;
  uint local_a8;
  byte *local_90;
  uint local_8c;
  uint local_88;
  short local_84;
  undefined1 local_82;
  undefined1 *local_80 [9];
  short *local_5c;
  uint *local_58;
  uint *local_54;
  short local_50;
  undefined1 local_4e;
  short local_4c;
  undefined1 local_4a;
  short *local_48;
  short *local_44;
  uint *local_40;
  short *local_3c;
  byte **local_38;
  byte local_34;
  short local_33;
  undefined1 local_31;
  uint local_30;
  short *local_2c;
  
  uVar17 = param_2[1];
  uVar26 = param_2[2];
  if (uVar17 <= uVar26) goto switchD_016c7624_default;
  iVar14 = *param_2;
  uVar20 = uVar26 + 1;
  param_2[2] = uVar20;
  bVar1 = *(byte *)(iVar14 + uVar26);
  if (((~bVar1 & 0x1f) == 0) || (uVar17 <= uVar20)) goto switchD_016c7624_default;
  bVar2 = *(byte *)(iVar14 + uVar20);
  uVar27 = (uint)bVar2;
  uVar20 = uVar26 + 2;
  param_2[2] = uVar20;
  if ((char)bVar2 < '\0') {
    switch(uVar27) {
    case 0x81:
      if (uVar17 <= uVar20) goto switchD_016c7624_default;
      bVar2 = *(byte *)(iVar14 + uVar20);
      uVar27 = (uint)bVar2;
      uVar20 = uVar26 + 3;
      param_2[2] = uVar20;
      if ((uint)(int)(char)bVar2 < 0x80000000) goto switchD_016c7624_default;
      goto LAB_016c7068;
    case 0x82:
      if (uVar17 <= uVar20) goto switchD_016c7624_default;
      uVar27 = uVar26 + 3;
      param_2[2] = uVar27;
      if (uVar17 <= uVar27) goto switchD_016c7624_default;
      cVar6 = *(char *)(iVar14 + uVar20);
      uVar20 = uVar26 + 4;
      uVar16 = *(undefined1 *)(iVar14 + uVar27);
      param_2[2] = uVar20;
      if (cVar6 == '\0') goto switchD_016c7624_default;
      uVar27 = (uint)CONCAT11(cVar6,uVar16);
      break;
    case 0x83:
      if (uVar17 <= uVar20) goto switchD_016c7624_default;
      bVar2 = *(byte *)(iVar14 + uVar20);
      uVar20 = uVar26 + 3;
      param_2[2] = uVar20;
      if (uVar17 <= uVar20) goto switchD_016c7624_default;
      uVar27 = uVar26 + 4;
      param_2[2] = uVar27;
      if (uVar17 <= uVar27) goto switchD_016c7624_default;
      bVar3 = *(byte *)(iVar14 + uVar20);
      uVar20 = uVar26 + 5;
      bVar4 = *(byte *)(iVar14 + uVar27);
      param_2[2] = uVar20;
      if (bVar2 == 0) goto switchD_016c7624_default;
      uVar27 = (uint)bVar3 << 8 | (uint)bVar2 << 0x10 | (uint)bVar4;
      break;
    case 0x84:
      if (uVar17 <= uVar20) goto switchD_016c7624_default;
      bVar2 = *(byte *)(iVar14 + uVar20);
      uVar20 = uVar26 + 3;
      param_2[2] = uVar20;
      if (uVar17 <= uVar20) goto switchD_016c7624_default;
      bVar3 = *(byte *)(iVar14 + uVar20);
      uVar20 = uVar26 + 4;
      param_2[2] = uVar20;
      if (uVar17 <= uVar20) goto switchD_016c7624_default;
      uVar27 = uVar26 + 5;
      param_2[2] = uVar27;
      if (uVar17 <= uVar27) goto switchD_016c7624_default;
      bVar4 = *(byte *)(iVar14 + uVar27);
      bVar5 = *(byte *)(iVar14 + uVar20);
      uVar20 = uVar26 + 6;
      param_2[2] = uVar20;
      if (bVar2 == 0) goto switchD_016c7624_default;
      uVar27 = (uint)bVar3 << 0x10 | (uint)bVar2 << 0x18 | (uint)bVar5 << 8 | (uint)bVar4;
      break;
    default:
      goto switchD_016c7624_default;
    }
    if (0xfffe < uVar27) goto switchD_016c7624_default;
  }
LAB_016c7068:
  if (((CARRY4(uVar20,uVar27)) || (uVar17 < uVar20 + uVar27)) ||
     (param_2[2] = uVar20 + uVar27, bVar1 != 0xa0)) {
switchD_016c7624_default:
    local_180 = 0x80000000;
    uVar15 = param_3[1];
    uVar22 = param_3[2];
    uVar24 = param_3[3];
    *param_1 = *param_3;
    param_1[1] = uVar15;
    param_1[2] = uVar22;
    param_1[3] = uVar24;
    uVar15 = param_3[5];
    uVar22 = param_3[6];
    uVar24 = param_3[7];
    param_1[4] = param_3[4];
    param_1[5] = uVar15;
    param_1[6] = uVar22;
    param_1[7] = uVar24;
    FUN_016c3a1c(&local_180);
    return;
  }
  pbVar23 = (byte *)(iVar14 + uVar20);
  local_180 = 0x8000002d;
  local_158 = &DAT_8000001d;
  local_154 = 6;
  local_17c = pbVar23;
  local_178 = uVar27;
  FUN_016c3c8c(&local_138,&local_158);
  if (uVar27 == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = 1;
    if ((~*pbVar23 & 0x1f) != 0 && uVar27 != 1) {
      uVar26 = (uint)pbVar23[1];
      if ((char)pbVar23[1] < '\0') {
        uVar17 = 2;
        switch(uVar26) {
        case 0x81:
          if (2 < uVar27) {
            uVar17 = 3;
            if (0x7fffffff < (uint)(int)(char)pbVar23[2]) {
              uVar26 = (uint)pbVar23[2];
              goto LAB_016c70f4;
            }
          }
          break;
        case 0x82:
          if ((2 < uVar27) && (uVar17 = 3, uVar27 != 3)) {
            uVar17 = 4;
            if (pbVar23[2] != 0) {
              uVar26 = (uint)CONCAT11(pbVar23[2],pbVar23[3]);
LAB_016c793c:
              if (uVar26 < 0xffff) goto LAB_016c70f4;
            }
          }
          break;
        case 0x83:
          if (((2 < uVar27) && (uVar17 = 3, uVar27 != 3)) && (uVar17 = 4, 4 < uVar27)) {
            uVar17 = 5;
            if (pbVar23[2] != 0) {
              uVar26 = (uint)pbVar23[3] << 8 | (uint)pbVar23[2] << 0x10 | (uint)pbVar23[4];
              goto LAB_016c793c;
            }
          }
          break;
        case 0x84:
          if ((2 < uVar27) && (uVar17 = 3, uVar27 != 3)) {
            uVar17 = 4;
            if ((4 < uVar27) && (uVar17 = 5, uVar27 != 5)) {
              if (pbVar23[2] != 0) {
                uVar17 = 6;
                uVar26 = (uint)pbVar23[3] << 0x10 | (uint)pbVar23[2] << 0x18 | (uint)pbVar23[4] << 8
                         | (uint)pbVar23[5];
                goto LAB_016c793c;
              }
              uVar17 = 6;
            }
          }
        }
      }
      else {
        uVar17 = 2;
LAB_016c70f4:
        uVar20 = uVar26 + uVar17;
        if ((!CARRY4(uVar26,uVar17)) && (uVar20 <= uVar27)) {
          if (*pbVar23 == 0x30) {
            pbVar23 = pbVar23 + uVar17;
            puVar8 = (undefined3 *)((uint)&local_48 | 5);
            local_118 = 0x8000002d;
            local_f8 = local_138;
            psStack_f4 = local_134;
            puStack_f0 = local_130;
            psStack_ec = local_12c;
            local_e8 = local_128;
            uStack_e4 = local_124;
            uStack_e0 = local_120;
            psStack_dc = local_11c;
            local_1b4 = *(short **)(param_4 + 0x28);
            uVar17 = 0;
            local_114 = pbVar23;
            local_110 = uVar26;
            do {
              FUN_016c3c8c(&local_d0,&local_158);
              psVar9 = local_b4;
              local_120 = local_b8;
              bVar1 = local_bc;
              ppbVar7 = local_c0;
              psVar19 = local_c4;
              local_18c = local_c8;
              local_190 = local_cc;
              psVar25 = local_d0;
              uVar18 = uVar17;
              if (uVar26 <= uVar17) goto LAB_016c73f0;
              uVar10 = uVar17 + 1;
              if (((~pbVar23[uVar17] & 0x1f) == 0) || (uVar26 <= uVar10))
              goto switchD_016c72c8_default;
              pbVar11 = pbVar23 + uVar10;
              uVar10 = uVar17 + 2;
              uVar13 = (uint)*pbVar11;
              if (-1 < (char)*pbVar11) {
                uVar18 = uVar10;
LAB_016c71cc:
                uVar10 = uVar18 + uVar13;
                if ((CARRY4(uVar18,uVar13)) || (uVar26 < uVar10)) goto LAB_016c73f0;
                if (pbVar23[uVar17] != 0x30) goto switchD_016c72c8_default;
                local_ac = pbVar23 + uVar18;
                local_b0 = 0x8000002d;
                local_88 = 0;
                local_a8 = uVar13;
                local_90 = local_ac;
                local_8c = uVar13;
                FUN_016c607c(&local_48,&local_90,6);
                local_18c = local_40;
                local_190 = local_44;
                if (local_48 == (short *)0x8000002d) {
                  FUN_016c624c(&local_48,&local_90);
                  psVar19 = local_44;
                  if (local_48 != (short *)0x8000002d) {
                    local_84 = local_33;
                    local_1a8 = *(short **)((int)puVar8 + 0x17);
                    local_1a4 = (uint)local_34;
                    local_19c = local_3c;
                    local_190 = (short *)CONCAT31(*puVar8,local_44._0_1_);
                    local_1a0 = local_38;
                    local_82 = local_31;
                    uVar26 = *(uint *)((int)puVar8 + 0x13);
                    local_18c = local_40;
                    psVar25 = local_48;
                    goto switchD_016c74ec_caseD_1b;
                  }
                  FUN_016c607c(&local_48,&local_90,4);
                  if (local_48 != (short *)0x8000002d) {
                    local_19c = local_3c;
                    local_1a0 = local_38;
                    local_1a8 = local_2c;
                    local_1a4 = (uint)local_34;
                    local_84 = local_33;
                    local_82 = local_31;
                    uVar26 = local_30;
                    local_18c = local_40;
                    psVar25 = local_48;
                    local_190 = local_44;
                    goto switchD_016c74ec_caseD_1b;
                  }
                  psVar25 = (short *)0x8000002d;
                  if ((local_18c == (uint *)0x3) && (*local_190 == 0x1d55)) {
                    psVar25 = (short *)&DAT_80000024;
                    switch((char)local_190[1]) {
                    case '\x14':
                      local_80[0] = &DAT_8000000b;
                      local_5c = local_44;
                      local_58 = local_40;
                      local_54 = (uint *)0x0;
                      FUN_016c607c(&local_48,&local_5c,2);
                      puVar21 = local_40;
                      psVar25 = local_44;
                      if (local_48 == (short *)0x8000002d) {
                        psVar19 = (short *)&DAT_80000000;
                        if (local_40 == (uint *)0x0) goto LAB_016c7b44;
                        local_48 = (short *)&DAT_80000000;
                        FUN_016c3a1c(&local_48);
                        psVar9 = (short *)((int)psVar25 + 1);
                        if ((int)(char)*psVar25 != 0) {
                          puVar12 = puVar21;
                          psVar9 = psVar25;
                          if (0x7fffffff < (uint)(int)(char)*psVar25) goto LAB_016c7b44;
LAB_016c75e4:
                          puVar21 = puVar12;
                          psVar25 = psVar9;
                          if (puVar12 < &DAT_00000015) goto LAB_016c75ec;
                          goto LAB_016c7bb0;
                        }
                        puVar12 = (uint *)((int)puVar21 + -1);
                        if (puVar12 != (uint *)0x0) {
                          if (*(char *)psVar9 < '\0') goto LAB_016c75e4;
                          goto LAB_016c7b44;
                        }
LAB_016c75ec:
                        if (local_54 == local_58) {
                          FUN_016c3a1c(local_80);
                          local_1c8 = puVar21;
                          local_1c4 = psVar25;
                          goto switchD_016c74ec_caseD_23;
                        }
                      }
                      else {
                        local_19c = local_3c;
                        local_1a0 = local_38;
                        local_1a4 = (uint)local_34;
                        local_1c4 = local_44;
                        local_1a8 = local_2c;
                        local_4a = local_31;
                        local_4c = local_33;
                        local_1c8 = local_40;
                        psVar19 = local_48;
                        uVar26 = local_30;
LAB_016c7b44:
                        local_34 = (byte)local_1a4;
                        local_38 = local_1a0;
                        local_3c = local_19c;
                        local_40 = local_1c8;
                        local_44 = local_1c4;
                        local_48 = psVar19;
                        FUN_016c3a1c(&local_48);
                        local_50 = local_4c;
                        local_4e = local_4a;
LAB_016c7bb0:
                        FUN_016c3a1c(local_80);
                      }
                      local_82 = local_4e;
                      psVar25 = (short *)&DAT_8000000b;
                      local_84 = local_50;
                      local_18c = local_1c8;
                      local_190 = local_1c4;
                      break;
                    default:
                      goto switchD_016c74ec_caseD_15;
                    case '\x1b':
                      break;
                    case '\x1c':
                      if (local_1b4 == (short *)0x0) {
                        *(short **)(param_4 + 0x28) = local_44;
                        *(uint **)(param_4 + 0x2c) = local_40;
                        local_1b4 = local_44;
                        goto switchD_016c74ec_caseD_23;
                      }
                      psVar25 = (short *)0x80000009;
                      break;
                    case '#':
                      goto switchD_016c74ec_caseD_23;
                    }
                    goto switchD_016c74ec_caseD_1b;
                  }
switchD_016c74ec_caseD_15:
                  if (((uint)psVar19 & 1) != 0) {
                    psVar25 = (short *)0x80000021;
                    goto switchD_016c74ec_caseD_1b;
                  }
switchD_016c74ec_caseD_23:
                  if (local_88 != local_8c) {
                    local_1a8 = local_b4;
                    local_19c = local_c4;
                    local_1a0 = local_c0;
                    local_d4 = local_bb;
                    local_d2 = local_b9;
                    psVar25 = local_d0;
                    local_190 = local_cc;
                    local_18c = local_c8;
                    local_120 = local_b8;
                    bVar1 = local_bc;
                    goto joined_r0x016c7450;
                  }
                  FUN_016c3a1c(&local_d0);
                  goto LAB_016c7454;
                }
                local_19c = local_3c;
                local_1a0 = local_38;
                local_1a8 = local_2c;
                local_1a4 = (uint)local_34;
                local_84 = local_33;
                local_82 = local_31;
                uVar26 = local_30;
                psVar25 = local_48;
switchD_016c74ec_caseD_1b:
                local_d2 = local_82;
                local_d4 = local_84;
                FUN_016c3a1c(&local_d0);
                local_120 = uVar26;
LAB_016c7a50:
                local_15a = local_d2;
                local_15c = local_d4;
                local_194 = psVar25;
                goto LAB_016c7a7c;
              }
              switch(uVar13) {
              case 0x81:
                if (uVar26 <= uVar10) break;
                uVar18 = uVar17 + 3;
                if (0x7fffffff < (uint)(int)(char)pbVar23[uVar10]) {
                  uVar13 = (uint)pbVar23[uVar10];
                  goto LAB_016c71cc;
                }
                goto LAB_016c73f0;
              case 0x82:
                if (uVar10 < uVar26) {
                  if (uVar17 + 3 < uVar26) {
                    uVar18 = uVar17 + 4;
                    if (pbVar23[uVar10] != 0) {
                      uVar13 = (uint)CONCAT11(pbVar23[uVar10],pbVar23[uVar17 + 3]);
LAB_016c73dc:
                      if (uVar13 < 0xffff) goto LAB_016c71cc;
                    }
                  }
                  else {
LAB_016c74c8:
                    uVar18 = uVar17 + 3;
                  }
                  goto LAB_016c73f0;
                }
                break;
              case 0x83:
                if (uVar10 < uVar26) {
                  if (uVar26 <= uVar17 + 3) goto LAB_016c74c8;
                  if (uVar17 + 4 < uVar26) {
                    uVar18 = uVar17 + 5;
                    if (pbVar23[uVar10] != 0) {
                      uVar13 = (uint)pbVar23[uVar17 + 3] << 8 | (uint)pbVar23[uVar10] << 0x10 |
                               (uint)pbVar23[uVar17 + 4];
                      goto LAB_016c73dc;
                    }
                  }
                  else {
LAB_016c75a0:
                    uVar18 = uVar17 + 4;
                  }
                  goto LAB_016c73f0;
                }
                break;
              case 0x84:
                if (uVar10 < uVar26) {
                  if (uVar26 <= uVar17 + 3) goto LAB_016c74c8;
                  if (uVar26 <= uVar17 + 4) goto LAB_016c75a0;
                  uVar13 = uVar17 + 5;
                  if (uVar13 < uVar26) {
                    uVar18 = uVar17 + 6;
                    if (pbVar23[uVar10] != 0) {
                      uVar13 = (uint)pbVar23[uVar17 + 3] << 0x10 | (uint)pbVar23[uVar10] << 0x18 |
                               (uint)pbVar23[uVar17 + 4] << 8 | (uint)pbVar23[uVar13];
                      goto LAB_016c73dc;
                    }
                  }
                  else {
                    uVar18 = uVar13;
                  }
                  goto LAB_016c73f0;
                }
              }
switchD_016c72c8_default:
              uVar18 = uVar10;
LAB_016c73f0:
              local_b0 = 0x80000000;
              local_d2 = local_b9;
              local_d4 = local_bb;
              FUN_016c3a1c(&local_b0);
              local_1a8 = psVar9;
              uVar10 = uVar18;
              local_19c = psVar19;
              local_1a0 = ppbVar7;
joined_r0x016c7450:
              local_1a4 = (uint)bVar1;
              if (psVar25 != (short *)0x8000002d) goto LAB_016c7a50;
LAB_016c7454:
              uVar17 = uVar10;
            } while (uVar10 != uVar26);
            local_194 = (short *)0x8000002d;
            local_1a4 = uVar10;
            local_120 = uVar26;
            local_1a0 = &local_90;
            local_1a8 = psVar25;
            local_19c = local_190;
            local_190 = &local_bb;
            local_18c = &local_b8;
LAB_016c7a7c:
            uVar16 = (undefined1)local_1a4;
            FUN_016c3a1c(&local_f8);
            FUN_016c3a1c(&local_158);
            local_134 = local_190;
            local_130 = local_18c;
            local_138 = local_194;
            local_12c = local_19c;
            local_128 = local_1a0;
            local_11c = local_1a8;
            goto joined_r0x016c77dc;
          }
          uVar17 = uVar20;
        }
      }
    }
  }
  local_15a = local_124._3_1_;
  local_118 = 0x80000000;
  local_15c = local_124._1_2_;
  FUN_016c3a1c(&local_118);
  FUN_016c3a1c(&local_158);
  uVar20 = uVar17;
  uVar16 = (undefined1)local_124;
joined_r0x016c77dc:
  if (local_138 != (short *)0x8000002d) {
    *(undefined1 *)((int)param_1 + 0x17) = local_15a;
    param_1[1] = local_134;
    param_1[6] = local_120;
    param_1[2] = local_130;
    *(undefined1 *)(param_1 + 5) = uVar16;
    *(short *)((int)param_1 + 0x15) = local_15c;
    param_1[7] = local_11c;
    *param_1 = local_138;
    param_1[3] = local_12c;
    param_1[4] = local_128;
    FUN_016c3a1c(param_3);
    return;
  }
  if (uVar20 == uVar27) {
    *param_1 = 0x8000002d;
    FUN_016c3a1c();
    return;
  }
  uVar15 = param_3[1];
  uVar22 = param_3[2];
  uVar24 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar15;
  param_1[2] = uVar22;
  param_1[3] = uVar24;
  uVar15 = param_3[5];
  uVar22 = param_3[6];
  uVar24 = param_3[7];
  param_1[4] = param_3[4];
  param_1[5] = uVar15;
  param_1[6] = uVar22;
  param_1[7] = uVar24;
  return;
}

