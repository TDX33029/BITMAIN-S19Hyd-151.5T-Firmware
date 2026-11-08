// FUN_016dfcb0 @ 016dfcb0 size=3804 calls_out=34 calls_in=1
// strings: internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016dfcb0(uint *param_1,uint *param_2)

{
  byte *pbVar1;
  code *pcVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  byte *pbVar11;
  uint *puVar12;
  undefined *puVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint uVar19;
  uint *puVar20;
  uint *puVar21;
  undefined1 *puVar22;
  int iVar23;
  undefined4 uVar24;
  uint *puVar25;
  bool bVar26;
  bool bVar27;
  int local_140;
  int local_138;
  uint *local_134;
  uint *local_130;
  uint *local_12c;
  undefined1 *local_128;
  uint *local_124;
  undefined1 *local_120;
  uint local_11c;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  undefined4 local_100;
  uint *local_fc;
  uint *puStack_f8;
  uint uStack_f4;
  uint *puStack_f0;
  undefined4 local_ec;
  uint *local_e8;
  uint *puStack_e4;
  uint uStack_e0;
  uint *puStack_dc;
  uint *local_d8;
  uint *local_d4;
  uint local_d0;
  uint *local_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  uint *local_a0;
  uint *local_9c;
  undefined1 *local_98;
  uint *local_94;
  uint *local_90;
  uint *local_8c;
  uint *local_88;
  uint *local_84;
  uint *puStack_80;
  uint uStack_7c;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint *local_60;
  uint *local_5c;
  uint *local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint *local_40;
  uint *local_3c;
  uint *local_38;
  uint *local_34;
  uint *puStack_30;
  uint uStack_2c;
  uint local_28;
  
  puVar22 = (undefined1 *)param_2[2];
  puVar18 = (undefined1 *)0x0;
  if (puVar22 == (undefined1 *)0x0) {
    puVar6 = (uint *)&SUB_00000004;
    local_128 = (undefined1 *)0x0;
  }
  else {
    puVar6 = (uint *)FUN_01298504((int)puVar22 * 0x1c,4);
    if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,(int)puVar22 * 0x1c);
    }
    local_128 = puVar22;
  }
  local_d8 = (uint *)param_2[1];
  puVar25 = local_d8 + (int)puVar22 * 7;
  local_d0 = *param_2;
  local_120 = (undefined1 *)0x0;
  local_124 = puVar6;
  local_d4 = local_d8;
  local_cc = puVar25;
  if (puVar22 != (undefined1 *)0x0) {
    puVar22 = (undefined1 *)0x0;
    puVar10 = local_d8;
    local_d4 = local_d8;
    do {
      puVar16 = puVar10 + 7;
      puVar18 = puVar22;
      if (*puVar10 == 8) goto LAB_016dfee0;
      local_118 = puVar10[1];
      uStack_114 = puVar10[2];
      uStack_110 = puVar10[3];
      uStack_10c = puVar10[4];
      uStack_108 = puVar10[5];
      uStack_104 = puVar10[6];
      local_11c = *puVar10;
      FUN_016e0e70(&local_40,&local_11c);
      uVar7 = local_28;
      puVar21 = local_34;
      puVar20 = local_38;
      local_90 = local_40;
      local_8c = local_3c;
      local_88 = local_38;
      local_84 = local_34;
      puStack_80 = puStack_30;
      uStack_7c = uStack_2c;
      if (local_40 == (uint *)&DAT_00000007) {
        local_38 = local_3c;
        local_40 = puVar20;
        local_3c = puVar20;
        if (local_128 + -(int)puVar22 < local_34) {
          local_34 = puVar20 + (int)local_34 * 7;
          FUN_006520b4(&local_128,puVar22,puVar21,4,0x1c);
          puVar22 = local_120;
          puVar6 = local_124;
        }
        else {
          local_34 = puVar20 + (int)local_34 * 7;
        }
        FUN_01bed4e2(puVar6 + (int)puVar22 * 7,puVar20,(int)puVar21 * 0x1c);
        puVar18 = puVar22 + (int)puVar21;
        local_34 = puVar20;
        local_120 = puVar18;
        FUN_016f5408(&local_40);
        thunk_FUN_01be4678(uVar7);
        if (local_90 != (uint *)&DAT_00000007) {
          FUN_016df4b4(&local_90);
        }
      }
      else {
        if (puVar22 == local_128) {
          FUN_015f5b48(&local_128);
          puVar6 = local_124;
        }
        puVar18 = puVar22 + 1;
        puVar20 = puVar6 + (int)puVar22 * 7;
        *puVar20 = (uint)local_40;
        puVar20[1] = (uint)local_3c;
        puVar20[2] = (uint)local_38;
        puVar20[3] = (uint)local_34;
        puVar20[4] = (uint)puStack_30;
        puVar20[5] = uStack_2c;
        puVar20[6] = local_28;
        local_120 = puVar18;
      }
      puVar20 = puVar10 + 7;
      puVar22 = puVar18;
      puVar10 = puVar16;
      local_12c = puVar16;
    } while (puVar20 != puVar25);
    puVar16 = puVar25;
LAB_016dfee0:
    local_d4 = puVar16;
  }
  FUN_016f5408(&local_d8);
  if (puVar18 == (undefined1 *)0x1) {
    local_120 = (undefined1 *)0x0;
    if (*local_124 == 8) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d0a1f8);
    }
    *param_1 = *local_124;
    uVar7 = local_124[2];
    uVar8 = local_124[3];
    uVar14 = local_124[4];
    uVar15 = local_124[5];
    uVar17 = local_124[6];
    param_1[1] = local_124[1];
    param_1[2] = uVar7;
    param_1[3] = uVar8;
    param_1[4] = uVar14;
    param_1[5] = uVar15;
    param_1[6] = uVar17;
    goto LAB_016e0474;
  }
  if (puVar18 == (undefined1 *)0x0) {
    local_88 = (uint *)0x0;
    local_8c = (uint *)&DAT_00000001;
    local_90 = (uint *)0x0;
    FUN_016f6888((uint)&local_40 | 4,&local_90);
    local_40 = (uint *)&DAT_00000001;
    uVar7 = FUN_016deccc(&local_40);
    param_1[1] = (uint)local_40;
    param_1[2] = (uint)local_3c;
    param_1[3] = (uint)local_38;
    param_1[4] = (uint)local_34;
    param_1[5] = (uint)puStack_30;
    param_1[6] = uVar7;
    *param_1 = 2;
    goto LAB_016e0474;
  }
  iVar23 = 0;
  puVar16 = local_124 + (int)puVar18 * 7;
  puVar25 = (uint *)0x4;
  local_38 = (uint *)0x0;
  local_3c = (uint *)0x4;
  local_40 = (uint *)0x0;
  puVar6 = local_124;
  puVar10 = (uint *)0xffffffff;
  do {
    if (*puVar6 != 1) {
LAB_016e0050:
      FUN_0134aee0(local_40,local_3c,4,4);
      goto LAB_016e0064;
    }
    uVar7 = puVar6[2];
    FUN_016f33c8(&local_90,puVar6[1],uVar7);
    puVar20 = local_8c;
    if (((char)local_90 == '\x02') || (((uint)local_90 & 1) != 0)) goto LAB_016e0050;
    uVar8 = 1;
    if ((uint *)0x7f < local_8c) {
      uVar8 = 2;
    }
    if (((uint *)0x7ff < local_8c) && (uVar8 = 4, local_8c < (uint *)0x10000)) {
      uVar8 = 3;
    }
    if (uVar7 != uVar8) goto LAB_016e0050;
    if ((uint *)((int)puVar10 + 1) == local_40) {
      FUN_01a54b48(&local_40);
      puVar25 = local_3c;
    }
    puVar12 = local_3c;
    puVar21 = local_40;
    *(uint **)((int)puVar25 + iVar23) = puVar20;
    puVar20 = (uint *)((int)puVar10 + 2);
    puVar6 = puVar6 + 7;
    iVar23 = iVar23 + 4;
    puVar10 = (uint *)((int)puVar10 + 1);
    local_38 = puVar20;
  } while (puVar6 != puVar16);
  if (local_40 != (uint *)0x80000000) {
    uVar7 = (int)puVar20 * 8;
    uVar24 = 0;
    if (0x7ffffffc < uVar7) {
LAB_016e019c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar24,uVar7);
    }
    puVar6 = (uint *)0x0;
    if (uVar7 == 0) {
      puVar25 = (uint *)&SUB_00000004;
      puVar20 = (uint *)0x0;
    }
    else {
      uVar24 = 4;
      puVar25 = (uint *)FUN_01298504(uVar7,4);
      if (puVar25 == (uint *)0x0) goto LAB_016e019c;
    }
    local_38 = (uint *)0x0;
    do {
      uVar7 = *(uint *)((int)puVar12 + (int)puVar6 * 4);
      iVar23 = iVar23 + -4;
      iVar5 = (int)puVar6 * 2;
      puVar25[iVar5] = uVar7;
      puVar6 = (uint *)((int)puVar6 + 1);
      (puVar25 + iVar5)[1] = uVar7;
    } while (iVar23 != 0);
    local_40 = puVar20;
    local_3c = puVar25;
    FUN_0134aee0(puVar21,puVar12,4,4);
    local_8c = local_3c;
    local_90 = local_40;
    local_84 = (uint *)((uint)local_84 & 0xffffff00);
    local_88 = puVar6;
    FUN_016f5e30(&local_90);
    local_3c = local_90;
    local_38 = local_8c;
    local_34 = local_88;
    puStack_30 = local_84;
    local_40 = (uint *)0x0;
    FUN_016e0ee8(param_1,&local_40);
    goto LAB_016e0474;
  }
LAB_016e0064:
  puVar6 = (uint *)0x1;
  local_38 = (uint *)0x0;
  local_3c = (uint *)0x1;
  local_40 = (uint *)0x0;
  if (local_120 == (undefined1 *)0x0) {
    puVar25 = (uint *)0x0;
    puVar10 = (uint *)0x1;
    local_d4 = (uint *)&DAT_00000001;
    local_d8 = (uint *)0x0;
  }
  else {
    puVar20 = local_124 + (int)local_120 * 7;
    puVar16 = local_124;
    do {
      puVar21 = local_38;
      if ((*puVar16 != 1) || (puVar16[2] != 1)) {
        FUN_0134bd64(local_40);
        goto LAB_016e01b4;
      }
      uVar3 = *(undefined1 *)puVar16[1];
      if (local_38 == local_40) {
        FUN_006666a0(&local_40);
        puVar6 = local_3c;
      }
      puVar10 = local_3c;
      puVar25 = local_40;
      *(undefined1 *)((int)puVar6 + (int)puVar21) = uVar3;
      puVar21 = (uint *)((int)puVar21 + 1);
      puVar16 = puVar16 + 7;
      local_38 = puVar21;
    } while (puVar16 != puVar20);
    if (local_40 == (uint *)&DAT_80000000) {
LAB_016e01b4:
      puVar18 = local_120;
      puVar6 = local_124;
      local_38 = (uint *)0x0;
      local_3c = (uint *)&SUB_00000004;
      local_40 = (uint *)0x0;
      FUN_016f68e8(&local_d8,&local_40);
      if (puVar18 != (undefined1 *)0x0) {
        puVar9 = (undefined4 *)((uint)&local_40 | 4);
        puVar25 = puVar6;
        do {
          puVar10 = puVar25 + 7;
          if (*puVar25 != 2) {
LAB_016e0488:
            FUN_0134aee0(local_d8,local_d4,4,8);
            local_38 = (uint *)0x0;
            local_3c = (uint *)&DAT_00000001;
            local_40 = (uint *)0x0;
            FUN_016f6888(&local_d8,&local_40);
            puVar10 = (uint *)((uint)&local_40 | 4);
            puVar25 = puVar6;
            goto LAB_016e04d0;
          }
          if (puVar25[1] == 1) {
            puVar16 = (uint *)puVar25[4];
            puVar21 = (uint *)puVar25[3];
            if (puVar16 != (uint *)0x0) {
              puVar25 = (uint *)((int)puVar21 + (int)puVar16 * 2);
            }
            if ((puVar16 == (uint *)0x0 || puVar25 == (uint *)0x2) ||
               (-1 < *(char *)((int)puVar25 + -1))) {
              bVar27 = (uint *)0x1ffffffe < puVar16;
              bVar26 = puVar16 == (uint *)0x1fffffff;
              uVar24 = 0;
              puVar25 = puVar6;
              if (puVar16 < (uint *)0x20000000) {
                puVar25 = (uint *)((int)puVar16 << 3);
                bVar27 = (uint *)0x7ffffffb < puVar25;
                bVar26 = puVar25 == (uint *)0x7ffffffc;
              }
              puVar20 = local_12c;
              if (bVar27 && !bVar26) {
LAB_016e03b4:
                local_12c = puVar20;
                    /* WARNING: Subroutine does not return */
                FUN_00664620(uVar24,local_12c);
              }
              if (puVar25 == (uint *)0x0) {
                local_12c = (uint *)&SUB_00000004;
                local_a0 = (uint *)0x0;
              }
              else {
                uVar24 = 4;
                local_12c = (uint *)FUN_01298504(puVar25,4);
                puVar20 = puVar25;
                if (local_12c == (uint *)0x0) goto LAB_016e03b4;
                local_a0 = puVar16;
              }
              local_98 = (undefined1 *)0x0;
              local_38 = (uint *)0x0;
              if (puVar16 != (uint *)0x0) {
                puVar20 = local_12c + 1;
                pbVar11 = (byte *)((int)puVar21 + 1);
                puVar25 = puVar16;
                do {
                  bVar4 = *pbVar11;
                  puVar25 = (uint *)((int)puVar25 + -1);
                  pbVar1 = pbVar11 + -1;
                  pbVar11 = pbVar11 + 2;
                  puVar20[-1] = (uint)*pbVar1;
                  *puVar20 = (uint)bVar4;
                  puVar20 = puVar20 + 2;
                } while (puVar25 != (uint *)0x0);
                local_38 = puVar16;
              }
              local_34 = (uint *)CONCAT31(local_34._1_3_,local_38 == (uint *)0x0);
              local_9c = local_12c;
              local_40 = local_a0;
              local_3c = local_12c;
              FUN_016f5e30(&local_40);
              puVar25 = local_40;
              local_60 = (uint *)*puVar9;
              local_5c = (uint *)puVar9[1];
              puVar21 = (uint *)puVar9[2];
              local_58 = puVar21;
              if (local_40 != (uint *)&DAT_80000000) {
                local_90 = local_40;
                local_8c = local_60;
                local_88 = local_5c;
                local_84 = puVar21;
                FUN_016f64a0(&local_d8,&local_90);
                FUN_0134aee0(puVar25,local_8c,4,8);
                goto LAB_016e0384;
              }
            }
            goto LAB_016e0488;
          }
          FUN_016f64a0(&local_d8,puVar25 + 2);
LAB_016e0384:
          puVar25 = puVar10;
        } while (puVar10 != puVar6 + (int)puVar18 * 7);
      }
      local_fc = local_d8;
      puStack_f8 = local_d4;
      uStack_f4 = local_d0;
      puStack_f0 = local_cc;
      local_100 = 0;
      goto LAB_016e03a8;
    }
    iVar23 = (int)puVar21 * 2;
    uVar24 = 0;
    if (iVar23 < 0) {
LAB_016e0100:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar24,iVar23);
    }
    uVar24 = 1;
    puVar6 = (uint *)FUN_01298504(iVar23,1);
    if (puVar6 == (uint *)0x0) goto LAB_016e0100;
    puVar16 = (uint *)0x0;
    do {
      uVar3 = *(undefined1 *)((int)puVar10 + (int)puVar16);
      puVar18 = (undefined1 *)((int)puVar6 + (int)puVar16 * 2);
      *puVar18 = uVar3;
      puVar16 = (uint *)((int)puVar16 + 1);
      puVar18[1] = uVar3;
      local_d8 = puVar21;
      local_d4 = puVar6;
    } while (puVar21 != puVar16);
  }
  puVar6 = local_d8;
  local_d0 = 0;
  FUN_0134bd64(puVar25,puVar10);
  local_90 = local_d8;
  local_8c = local_d4;
  local_84 = (uint *)CONCAT31(local_84._1_3_,puVar6 == (uint *)0x0);
  local_88 = puVar6;
  FUN_016f6050(&local_90);
  local_3c = local_90;
  local_38 = local_8c;
  local_34 = local_88;
  puStack_30 = local_84;
  local_40 = (uint *)&DAT_00000001;
  FUN_016e0ee8(param_1,&local_40);
  goto LAB_016e0474;
LAB_016e0790:
  do {
    if (bVar26) {
      if (local_130 == local_134) goto LAB_016e0874;
    }
    else {
      if (((uint)((int)local_134 - (int)local_130) >> 2) * -0x49249249 <= uVar8) {
LAB_016e0874:
        local_b0 = 0;
        local_b8 = 0;
        local_a4 = 0;
        local_ac = 0;
        local_98 = puVar18;
        local_b4 = 4;
        local_140 = 4;
        local_a8 = 4;
        local_a0 = puVar6;
        local_130 = (uint *)0x0;
        local_138 = 0;
        local_94 = local_134;
        goto LAB_016e08d8;
      }
      local_130 = local_130 + uVar8 * 7;
    }
    if (*local_130 != 6) break;
    uVar15 = local_130[3];
    uVar8 = uVar7;
    if (uVar15 < uVar7) {
      uVar8 = uVar15;
    }
    if (uVar15 == 0) break;
    uVar19 = local_130[2];
    uVar17 = 0;
    uVar15 = uVar14;
    do {
      iVar23 = FUN_016e1bc0(uVar15,uVar19);
      if (iVar23 == 0) {
        if (uVar7 < uVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,uVar17,uVar7,&DAT_01d0a1e8);
        }
        goto LAB_016e0824;
      }
      uVar17 = uVar17 + 1;
      uVar19 = uVar19 + 0x1c;
      uVar15 = uVar15 + 0x1c;
    } while (uVar8 != uVar17);
    uVar17 = uVar8;
LAB_016e0824:
    uVar8 = 0;
    bVar26 = true;
    uVar7 = uVar17;
    local_130 = local_130 + 7;
  } while (uVar17 != 0);
LAB_016e06a8:
  puVar6 = (uint *)((uint)&local_d8 | 4);
  *puVar6 = (uint)local_128;
  puVar6[1] = (uint)local_124;
  puVar6[2] = (uint)local_120;
  goto LAB_016e06b8;
  while( true ) {
    local_90 = (uint *)*puVar9;
    FUN_01bed864((uint)&local_90 | 4,puVar9 + 1,0x18);
    local_40 = local_90;
    local_3c = local_8c;
    local_38 = local_88;
    local_34 = local_84;
    puStack_30 = puStack_80;
    uStack_2c = uStack_7c;
    local_90 = (uint *)0x0;
    FUN_016df1bc();
    puVar25 = puVar9 + 7;
    if (local_40 != (uint *)&DAT_00000006) {
      local_9c = puVar25;
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d0a1d8);
    }
    local_70 = *puVar10;
    local_6c = puVar10[1];
    local_68 = puVar10[2];
    if (local_68 < uVar7) {
      local_9c = puVar25;
      FUN_00666560(uVar7,local_68,&DAT_01d0a1c8);
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xfdee,0x16e0bac);
      (*pcVar2)();
    }
    puVar16 = (uint *)(local_68 - uVar7);
    iVar23 = (int)puVar16 * 0x1c;
    if (puVar16 == (uint *)0x0) {
      puVar21 = (uint *)&SUB_00000004;
      puVar20 = (uint *)0x0;
    }
    else {
      puVar21 = (uint *)FUN_01298504(iVar23,4);
      puVar20 = puVar16;
      if (puVar21 == (uint *)0x0) {
        local_9c = puVar25;
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,iVar23);
      }
    }
    local_68 = uVar7;
    local_60 = puVar20;
    local_5c = puVar21;
    local_58 = puVar16;
    FUN_01bed4e2(puVar21,local_6c + uVar7 * 0x1c,iVar23);
    FUN_016e1024(&local_40,&local_60);
    if (local_138 == local_ac) {
      FUN_015f5b48(&local_ac);
      local_140 = local_a8;
    }
    puVar9 = (undefined4 *)(local_140 + (int)local_130);
    *puVar9 = local_40;
    puVar9[1] = local_3c;
    puVar9[2] = local_38;
    puVar9[3] = local_34;
    puVar9[4] = puStack_30;
    puVar9[5] = uStack_2c;
    puVar9[6] = local_28;
    local_138 = local_138 + 1;
    local_a4 = local_138;
    if (local_b0 == 0) {
      FUN_01334e1c(&local_b8);
      local_b8 = local_70;
      local_b4 = local_6c;
      local_b0 = local_68;
    }
    else {
      FUN_01334e1c(&local_70);
    }
    local_130 = (uint *)((int)local_130 + 0x1c);
    if (puVar25 == local_134) break;
LAB_016e08d8:
    puVar9 = (undefined4 *)((int)puVar6 + (int)local_130);
    if ((uint *)*puVar9 == (uint *)&DAT_00000008) {
      local_134 = (uint *)((int)puVar6 + (int)local_130 + 0x1c);
      break;
    }
  }
  local_9c = local_134;
  FUN_016f5408(&local_a0);
  local_50 = local_b8;
  local_4c = local_b4;
  local_48 = local_b0;
  FUN_016dfcb0(&local_40,&local_ac);
  uVar7 = local_48;
  if (local_48 == local_50) {
    FUN_015f5b48(&local_50);
  }
  puVar9 = (undefined4 *)(local_4c + uVar7 * 0x1c);
  *puVar9 = local_40;
  puVar9[1] = local_3c;
  puVar9[2] = local_38;
  puVar9[3] = local_34;
  puVar9[4] = puStack_30;
  puVar9[5] = uStack_2c;
  puVar9[6] = local_28;
  local_48 = uVar7 + 1;
  FUN_016e1024(&local_d8,&local_50);
  if (local_d8 != (uint *)&DAT_00000008) {
    *param_1 = (uint)local_d8;
    param_1[1] = (uint)local_d4;
    param_1[2] = local_d0;
    param_1[3] = (uint)local_cc;
    param_1[4] = uStack_c8;
    param_1[5] = uStack_c4;
    param_1[6] = uStack_c0;
    return;
  }
LAB_016e06b8:
  puVar6 = (uint *)((uint)&local_d8 | 4);
  local_128 = (undefined1 *)*puVar6;
  local_124 = (uint *)puVar6[1];
  local_120 = (undefined1 *)puVar6[2];
  uVar7 = FUN_016dee78(local_124,(int)local_124 + (int)local_120 * 0x1c);
  param_1[1] = (uint)local_128;
  param_1[2] = (uint)local_124;
  param_1[3] = (uint)local_120;
  param_1[6] = uVar7;
  *param_1 = 7;
  return;
LAB_016e04d0:
  do {
    puVar16 = puVar25 + 7;
    if (*puVar25 != 2) {
LAB_016e0668:
      FUN_0134aee0(local_d8,local_d4,1,2);
      puVar6 = local_124;
      puVar18 = local_128;
      if (((local_120 < (undefined1 *)0x2) || (*local_124 != 6)) || (local_124[3] == 0))
      goto LAB_016e06a8;
      uVar14 = local_124[2];
      local_134 = local_124 + (int)local_120 * 7;
      bVar26 = false;
      uVar8 = 1;
      local_130 = local_124;
      uVar7 = local_124[3];
      goto LAB_016e0790;
    }
    uVar7 = puVar25[1];
    if (uVar7 != 1) {
      uVar8 = puVar25[3];
      puVar25 = (uint *)puVar25[4];
      if (puVar25 != (uint *)0x0) {
        uVar7 = uVar8 + (int)puVar25 * 8;
      }
      if ((puVar25 == (uint *)0x0 || uVar7 == 8) || (*(uint *)(uVar7 - 4) < 0x80)) {
        uVar24 = 0;
        puVar20 = puVar21;
        if ((int)((uint)puVar25 | (int)puVar25 << 1) < 0) {
LAB_016e0658:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar24,puVar20);
        }
        puVar20 = (uint *)((int)puVar25 << 1);
        if (puVar20 == (uint *)0x0) {
          puVar21 = (uint *)&DAT_00000001;
          local_a0 = (uint *)0x0;
        }
        else {
          uVar24 = 1;
          puVar21 = (uint *)FUN_01298504(puVar20,1);
          if (puVar21 == (uint *)0x0) goto LAB_016e0658;
          local_a0 = puVar25;
        }
        local_98 = (undefined1 *)0x0;
        puVar20 = (uint *)0x0;
        local_9c = puVar21;
        if (puVar25 != (uint *)0x0) {
          puVar22 = (undefined1 *)((int)puVar21 + 1);
          puVar12 = (uint *)(uVar8 + 4);
          puVar20 = puVar25;
          do {
            uVar7 = puVar12[-1];
            if (0xff < uVar7) {
              puVar13 = &DAT_01d130f8;
LAB_016e0744:
                    /* WARNING: Subroutine does not return */
              FUN_013073dc(&DAT_00533467,0x2b,&local_40,&DAT_01d13118,puVar13);
            }
            if (0xff < *puVar12) {
              puVar13 = &DAT_01d13108;
              goto LAB_016e0744;
            }
            *puVar22 = (char)*puVar12;
            puVar12 = puVar12 + 2;
            puVar22[-1] = (char)uVar7;
            puVar22 = puVar22 + 2;
            puVar20 = (uint *)((int)puVar20 + -1);
          } while (puVar20 != (uint *)0x0);
          puVar20 = puVar25;
        }
        local_34 = (uint *)CONCAT31(local_34._1_3_,puVar20 == (uint *)0x0);
        local_40 = local_a0;
        local_3c = puVar21;
        local_38 = puVar20;
        FUN_016f6050(&local_40);
        puVar25 = local_40;
        local_60 = (uint *)*puVar10;
        local_5c = (uint *)puVar10[1];
        local_58 = (uint *)puVar10[2];
        if (local_40 != (uint *)&DAT_80000000) {
          local_90 = local_40;
          local_8c = local_60;
          local_88 = local_5c;
          local_84 = local_58;
          FUN_016f67a8(&local_d8,&local_90);
          FUN_0134aee0(puVar25,local_8c,1,2);
          goto LAB_016e0630;
        }
      }
      goto LAB_016e0668;
    }
    FUN_016f67a8(&local_d8,puVar25 + 2);
LAB_016e0630:
    puVar25 = puVar16;
  } while (puVar16 != puVar6 + (int)puVar18 * 7);
  local_e8 = local_d8;
  puStack_e4 = local_d4;
  uStack_e0 = local_d0;
  puStack_dc = local_cc;
  local_ec = 1;
LAB_016e03a8:
  FUN_016e0ee8(param_1);
LAB_016e0474:
  FUN_01334e1c(&local_128);
  return;
}

