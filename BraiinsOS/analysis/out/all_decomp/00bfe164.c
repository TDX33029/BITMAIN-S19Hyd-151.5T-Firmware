// FUN_00bfe164 @ 00bfe164 size=3760 calls_out=17 calls_in=0
// strings: \{HB:(\d+)\} | \{CHIP:(\d+)\} | \{ERR:([^}]+)\} | BUG: bad regex | BUG: bad regex | BUG: bad regex

void FUN_00bfe164(int *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 **ppuVar11;
  undefined4 uVar12;
  undefined4 **ppuVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint *puVar23;
  undefined4 **ppuVar24;
  undefined4 uVar25;
  int extraout_r12;
  int iVar26;
  int extraout_r12_00;
  char *pcVar27;
  int local_190;
  int local_18c;
  undefined4 **local_178;
  undefined4 **local_170;
  int local_150;
  int local_14c;
  int local_148;
  int local_140;
  int local_13c;
  int local_138;
  uint local_130;
  uint uStack_12c;
  int iStack_128;
  int iStack_124;
  uint local_120;
  uint local_11c;
  int iStack_118;
  int iStack_114;
  int local_108;
  undefined4 local_104;
  int *local_fc;
  undefined4 local_d0;
  undefined4 local_cc;
  uint local_c8;
  uint uStack_c4;
  int iStack_c0;
  int iStack_bc;
  uint uStack_b8;
  int *local_b4;
  undefined4 uStack_b0;
  int iStack_ac;
  int iStack_a8;
  uint uStack_a4;
  undefined4 **local_a0;
  undefined4 **local_9c;
  undefined4 **local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  uint local_78;
  uint local_74;
  int local_70;
  int local_6c;
  uint local_68;
  int *local_64;
  undefined4 uStack_60;
  int iStack_5c;
  int local_58;
  uint local_54;
  undefined4 *local_28;
  
  local_148 = 0;
  local_14c = 4;
  local_150 = 0;
  local_138 = 0;
  local_13c = 4;
  local_140 = 0;
  FUN_0135d818(&local_120,"\\{HB:(\\d+)\\}",0xc);
  if (local_120 == 0) {
    local_78 = local_11c;
    local_74 = iStack_118;
    local_70 = iStack_114;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: bad regex",0xe,&local_78,&DAT_018725ec,&DAT_01871cf8);
  }
  local_c8 = local_120;
  uStack_c4 = local_11c;
  iStack_c0 = iStack_118;
  iStack_bc = iStack_114;
  FUN_00bff338(&local_78,&local_c8,param_2,param_3);
  FUN_016dd1aa(&local_120,&local_78,0x50);
  local_d0 = param_2;
  local_cc = param_3;
  while (FUN_00bff58c(&local_78,&local_120), piVar3 = local_64, iVar18 = local_6c, iVar20 = local_70
        , iVar4 = local_148, local_78 != 2) {
    if ((local_78 & 1) != 0) {
      if (local_64[4] == 1) {
        uVar22 = 3;
        uVar16 = 2;
        if (3 < local_68) {
LAB_00bfe260:
          iVar19 = *(int *)(local_6c + uVar16 * 4);
          iVar26 = extraout_r12;
          if (iVar19 != 0) {
            iVar26 = *(int *)(local_6c + uVar22 * 4);
          }
          if (iVar19 != 0 && iVar26 != 0) {
            uVar22 = iVar26 - 1;
            uVar16 = iVar19 - 1;
            if (uVar22 < uVar16) goto LAB_00bff018;
            if (uVar16 != 0) {
              if (uVar16 < local_54) {
                if (*(char *)(local_58 + uVar16) < -0x40) goto LAB_00bff018;
              }
              else if (uVar16 != local_54) goto LAB_00bff018;
            }
            if (uVar22 != 0) {
              if (uVar22 < local_54) {
                if (*(char *)(local_58 + uVar22) < -0x40) {
LAB_00bff018:
                    /* WARNING: Subroutine does not return */
                  FUN_00faa8ac();
                }
              }
              else if (uVar22 != local_54) goto LAB_00bff018;
            }
            uVar22 = iVar26 - iVar19;
            if (uVar22 != 0) {
              pbVar5 = (byte *)(local_58 + uVar16);
              if (uVar22 == 1) {
                bVar14 = *pbVar5;
                if (bVar14 == 0x2b || bVar14 == 0x2d) goto LAB_00bfe2dc;
              }
              else {
                bVar14 = *pbVar5;
              }
              uVar16 = 0;
              if (bVar14 == 0x2b) {
                pbVar5 = pbVar5 + 1;
                uVar22 = uVar22 - 1;
              }
              if (uVar22 < 9) {
                for (; uVar22 != 0; uVar22 = uVar22 - 1) {
                  bVar14 = *pbVar5;
                  if (9 < bVar14 - 0x30) goto LAB_00bfe2dc;
                  pbVar5 = pbVar5 + 1;
                  uVar16 = (bVar14 - 0x30) + uVar16 * 10;
                }
LAB_00bfe3b8:
                if (local_148 == local_150) {
                  FUN_009f49d0(&local_150);
                }
                puVar6 = (undefined4 *)(local_14c + iVar4 * 8);
                *puVar6 = 0;
                puVar6[1] = uVar16;
                local_148 = iVar4 + 1;
              }
              else {
                while( true ) {
                  if (uVar22 == 0) goto LAB_00bfe3b8;
                  uVar15 = (uint)((ulonglong)uVar16 * 10);
                  if ((int)((ulonglong)uVar16 * 10 >> 0x20) != 0) break;
                  uVar17 = *pbVar5 - 0x30;
                  uVar16 = uVar17 + uVar15;
                  if ((9 < uVar17) ||
                     (uVar22 = uVar22 - 1, pbVar5 = pbVar5 + 1, CARRY4(uVar17,uVar15))) break;
                }
              }
            }
          }
        }
      }
      else if (((local_74 < (uint)local_64[4]) &&
               (puVar23 = (uint *)(local_64[3] + local_74 * 8), uVar16 = *puVar23,
               1 < puVar23[1] - uVar16)) &&
              (uVar22 = uVar16 + 1, uVar16 < local_68 && uVar22 < local_68)) goto LAB_00bfe260;
    }
LAB_00bfe2dc:
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_013c0df4(piVar3);
    }
    if (iVar20 != 0) {
      thunk_FUN_016d3fb4(iVar18);
    }
  }
  FUN_00bff8f0(&local_120);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *local_fc;
    bVar1 = (bool)hasExclusiveAccess(local_fc);
  } while (!bVar1);
  *local_fc = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_013c0df4(local_fc);
  }
  if (local_108 != 0) {
    thunk_FUN_016d3fb4(local_104);
  }
  FUN_00bff4c8(&local_c8);
  FUN_0135d818(&local_120,"\\{CHIP:(\\d+)\\}",0xe);
  if (local_120 == 0) {
    local_78 = local_11c;
    local_74 = iStack_118;
    local_70 = iStack_114;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: bad regex",0xe,&local_78,&DAT_018725ec,&DAT_01871d08);
  }
  local_c8 = local_120;
  uStack_c4 = local_11c;
  iStack_c0 = iStack_118;
  iStack_bc = iStack_114;
  FUN_00bff338(&local_78,&local_c8,param_2,param_3);
  FUN_016dd1aa(&local_120,&local_78,0x50);
  local_d0 = param_2;
  local_cc = param_3;
  while (FUN_00bff58c(&local_78,&local_120), piVar3 = local_64, iVar18 = local_6c, iVar20 = local_70
        , iVar4 = local_148, local_78 != 2) {
    if ((local_78 & 1) != 0) {
      if (local_64[4] == 1) {
        uVar22 = 3;
        uVar16 = 2;
        if (3 < local_68) {
LAB_00bfe550:
          iVar19 = *(int *)(local_6c + uVar16 * 4);
          iVar26 = extraout_r12_00;
          if (iVar19 != 0) {
            iVar26 = *(int *)(local_6c + uVar22 * 4);
          }
          if (iVar19 != 0 && iVar26 != 0) {
            uVar22 = iVar26 - 1;
            uVar16 = iVar19 - 1;
            if (uVar22 < uVar16) goto LAB_00bff02c;
            if (uVar16 != 0) {
              if (uVar16 < local_54) {
                if (*(char *)(local_58 + uVar16) < -0x40) goto LAB_00bff02c;
              }
              else if (uVar16 != local_54) goto LAB_00bff02c;
            }
            if (uVar22 != 0) {
              if (uVar22 < local_54) {
                if (*(char *)(local_58 + uVar22) < -0x40) {
LAB_00bff02c:
                    /* WARNING: Subroutine does not return */
                  FUN_00faa8ac();
                }
              }
              else if (uVar22 != local_54) goto LAB_00bff02c;
            }
            uVar22 = iVar26 - iVar19;
            if (uVar22 != 0) {
              pbVar5 = (byte *)(local_58 + uVar16);
              if (uVar22 == 1) {
                bVar14 = *pbVar5;
                if (bVar14 == 0x2b || bVar14 == 0x2d) goto LAB_00bfe5cc;
              }
              else {
                bVar14 = *pbVar5;
              }
              uVar16 = 0;
              if (bVar14 == 0x2b) {
                pbVar5 = pbVar5 + 1;
                uVar22 = uVar22 - 1;
              }
              if (uVar22 < 9) {
                for (; uVar22 != 0; uVar22 = uVar22 - 1) {
                  bVar14 = *pbVar5;
                  if (9 < bVar14 - 0x30) goto LAB_00bfe5cc;
                  pbVar5 = pbVar5 + 1;
                  uVar16 = (bVar14 - 0x30) + uVar16 * 10;
                }
LAB_00bfe6a8:
                if (local_148 == local_150) {
                  FUN_009f49d0(&local_150);
                }
                puVar6 = (undefined4 *)(local_14c + iVar4 * 8);
                *puVar6 = 2;
                puVar6[1] = uVar16;
                local_148 = iVar4 + 1;
              }
              else {
                while( true ) {
                  if (uVar22 == 0) goto LAB_00bfe6a8;
                  uVar15 = (uint)((ulonglong)uVar16 * 10);
                  if ((int)((ulonglong)uVar16 * 10 >> 0x20) != 0) break;
                  uVar17 = *pbVar5 - 0x30;
                  uVar16 = uVar17 + uVar15;
                  if ((9 < uVar17) ||
                     (uVar22 = uVar22 - 1, pbVar5 = pbVar5 + 1, CARRY4(uVar17,uVar15))) break;
                }
              }
            }
          }
        }
      }
      else if (((local_74 < (uint)local_64[4]) &&
               (puVar23 = (uint *)(local_64[3] + local_74 * 8), uVar16 = *puVar23,
               1 < puVar23[1] - uVar16)) &&
              (uVar22 = uVar16 + 1, uVar16 < local_68 && uVar22 < local_68)) goto LAB_00bfe550;
    }
LAB_00bfe5cc:
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_013c0df4(piVar3);
    }
    if (iVar20 != 0) {
      thunk_FUN_016d3fb4(iVar18);
    }
  }
  FUN_00bff8f0(&local_120);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *local_fc;
    bVar1 = (bool)hasExclusiveAccess(local_fc);
  } while (!bVar1);
  *local_fc = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_013c0df4(local_fc);
  }
  if (local_108 != 0) {
    thunk_FUN_016d3fb4(local_104);
  }
  FUN_00bff4c8(&local_c8);
  FUN_0135d818(&local_120,"\\{ERR:([^}]+)\\}",0xf);
  if (local_120 == 0) {
    local_78 = local_11c;
    local_74 = iStack_118;
    local_70 = iStack_114;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: bad regex",0xe,&local_78,&DAT_018725ec,&DAT_01871d18);
  }
  local_130 = local_120;
  uStack_12c = local_11c;
  iStack_128 = iStack_118;
  iStack_124 = iStack_114;
  FUN_00bff338(&local_78,&local_130,param_2,param_3);
  FUN_016dd1aa(&local_120,&local_78,0x50);
  local_d0 = param_2;
  local_cc = param_3;
  do {
    FUN_00bff58c(&local_c8,&local_120);
    uVar16 = uStack_a4;
    iVar4 = iStack_a8;
    if (local_c8 == 2) {
      FUN_00bff8f0(&local_120);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *local_fc;
        bVar1 = (bool)hasExclusiveAccess(local_fc);
      } while (!bVar1);
      *local_fc = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_013c0df4(local_fc);
      }
      if (local_108 != 0) {
        thunk_FUN_016d3fb4(local_104);
      }
      FUN_00bff4c8(&local_130);
      *param_1 = local_140;
      param_1[1] = local_13c;
      param_1[2] = local_138;
      param_1[3] = local_150;
      param_1[4] = local_14c;
      param_1[5] = local_148;
      return;
    }
    local_78 = local_c8;
    local_74 = uStack_c4;
    local_70 = iStack_c0;
    local_6c = iStack_bc;
    local_68 = uStack_b8;
    local_64 = local_b4;
    uStack_60 = uStack_b0;
    iStack_5c = iStack_ac;
    local_58 = iStack_a8;
    local_54 = uStack_a4;
    if ((local_c8 & 1) != 0) {
      if (local_b4[4] == 1) {
        uVar15 = 3;
        uVar22 = 2;
        if (3 < uStack_b8) {
LAB_00bfe858:
          iVar18 = *(int *)(iStack_bc + uVar22 * 4);
          iVar20 = iStack_ac;
          if (iVar18 != 0) {
            iVar20 = *(int *)(iStack_bc + uVar15 * 4);
          }
          if (iVar18 != 0 && iVar20 != 0) {
            DataMemoryBarrier(0xb);
            if (DAT_018cd9a0 == 0) {
              if (iVar20 - 1U < iVar18 - 1U) goto LAB_00bfee60;
            }
            else {
              local_a0 = &local_28;
              local_28 = &DAT_018cd980;
              FUN_015eedc4(&DAT_018cd9a0,1,&local_a0,&DAT_01872570,&DAT_018ac9b8);
              if (iVar20 - 1U < iVar18 - 1U) goto LAB_00bfee60;
            }
            uVar22 = iVar18 - 1;
            uVar15 = iVar20 - 1;
            if (uVar22 != 0) {
              if (uVar22 < uVar16) {
                if (*(char *)(iVar4 + uVar22) < -0x40) goto LAB_00bfee60;
              }
              else if (uVar22 != uVar16) goto LAB_00bfee60;
            }
            if (uVar15 != 0) {
              if (uVar15 < uVar16) {
                if (*(char *)(iVar4 + uVar15) < -0x40) goto LAB_00bfee60;
              }
              else if (uVar15 != uVar16) goto LAB_00bfee60;
            }
            ppuVar24 = (undefined4 **)(iVar20 - iVar18);
            pcVar27 = (char *)(iVar4 + uVar22);
            if (DAT_018cd98c != 0) {
              uVar7 = FUN_00c53ecc(DAT_018cd990,DAT_018cd994,DAT_018cd998,DAT_018cd99c,pcVar27,
                                   ppuVar24);
              uVar2 = DAT_018cd984;
              iVar26 = DAT_018cd980;
              uVar17 = uVar7 >> 0x19;
              iVar19 = 0;
              do {
                uVar7 = uVar2 & uVar7;
                uVar8 = *(uint *)(iVar26 + uVar7);
                uVar9 = uVar8 ^ uVar17 * 0x1010101;
                for (uVar9 = ~uVar9 & 0x80808080 & uVar9 + 0xfefefeff; uVar9 != 0;
                    uVar9 = uVar9 - 1 & uVar9) {
                  iVar21 = iVar26 + (uVar2 & uVar7 + ((uint)LZCOUNT(uVar9 << 0x18 |
                                                                    (uVar9 >> 8 & 0xff) << 0x10 |
                                                                    (uVar9 >> 0x10 & 0xff) << 8 |
                                                                    uVar9 >> 0x18) >> 3)) * -0x18;
                  if ((ppuVar24 == *(undefined4 ***)(iVar21 + -0x14)) &&
                     (iVar10 = thunk_FUN_016dd50a(pcVar27,*(undefined4 *)(iVar21 + -0x18),ppuVar24),
                     iVar10 == 0)) {
                    if (uVar22 != 0) {
                      if (uVar22 < uVar16) {
                        if (*pcVar27 < -0x40) goto LAB_00bfee60;
                      }
                      else if (uVar22 != uVar16) goto LAB_00bfee60;
                    }
                    if (uVar15 != 0) {
                      if (uVar15 < uVar16) {
                        if (*(char *)(iVar4 + uVar15) < -0x40) goto LAB_00bfee60;
                      }
                      else if (uVar15 != uVar16) goto LAB_00bfee60;
                    }
                    uVar12 = 0;
                    ppuVar13 = local_170;
                    if ((int)ppuVar24 < 0) goto LAB_00bfefc0;
                    ppuVar11 = (undefined4 **)&DAT_00000001;
                    uVar12 = 0;
                    ppuVar13 = (undefined4 **)0x0;
                    if (iVar20 != iVar18) {
                      ppuVar11 = (undefined4 **)thunk_FUN_016d4a50(ppuVar24,local_170);
                      if (ppuVar11 == (undefined4 **)0x0) goto LAB_00bfefb8;
                      ppuVar13 = ppuVar24;
                    }
                    FUN_016dd1aa(ppuVar11,pcVar27,ppuVar24);
                    iVar4 = *(int *)(iVar21 + -0xc);
                    if (iVar4 < 0) {
LAB_00bfeff0:
                    /* WARNING: Subroutine does not return */
                      FUN_00600af4(uVar12,local_18c);
                    }
                    uVar12 = *(undefined4 *)(iVar21 + -0x10);
                    uVar25 = 0;
                    if (iVar4 == 0) {
                      local_18c = 1;
                      iVar20 = 0;
                    }
                    else {
                      local_18c = thunk_FUN_016d4a50(iVar4);
                      if (local_18c == 0) {
                        uVar12 = 1;
                        local_18c = iVar4;
                        goto LAB_00bfeff0;
                      }
                      iVar20 = iVar4;
                    }
                    FUN_016dd1aa(local_18c,uVar12,iVar4);
                    iVar18 = *(int *)(iVar21 + -4);
                    if (iVar18 < 0) {
LAB_00bff008:
                    /* WARNING: Subroutine does not return */
                      FUN_00600af4(uVar25,local_190);
                    }
                    uVar12 = *(undefined4 *)(iVar21 + -8);
                    if (iVar18 == 0) {
                      local_190 = 1;
                      iVar26 = 0;
                    }
                    else {
                      local_190 = thunk_FUN_016d4a50(iVar18);
                      if (local_190 == 0) {
                        uVar25 = 1;
                        local_190 = iVar18;
                        goto LAB_00bff008;
                      }
                      iVar26 = iVar18;
                    }
                    FUN_016dd1aa(local_190,uVar12,iVar18);
                    iVar19 = local_138;
                    local_a0 = ppuVar13;
                    local_9c = ppuVar11;
                    local_98 = ppuVar24;
                    local_94 = iVar20;
                    local_90 = local_18c;
                    local_8c = iVar4;
                    local_88 = iVar26;
                    local_84 = local_190;
                    local_80 = iVar18;
                    if (local_138 == local_140) {
                      FUN_009f4c54(&local_140);
                    }
                    puVar6 = (undefined4 *)(local_13c + iVar19 * 0x24);
                    *puVar6 = local_a0;
                    puVar6[1] = local_9c;
                    puVar6[2] = local_98;
                    puVar6[3] = local_94;
                    puVar6[4] = local_90;
                    puVar6[5] = local_8c;
                    puVar6[6] = local_88;
                    puVar6[7] = local_84;
                    puVar6[8] = local_80;
                    local_170 = ppuVar11;
                    goto LAB_00bfee0c;
                  }
                }
                if ((uVar8 & 0x80808080 & uVar8 << 1) != 0) break;
                iVar19 = iVar19 + 4;
                uVar7 = uVar7 + iVar19;
              } while( true );
            }
            if (uVar22 != 0) {
              if (uVar22 < uVar16) {
                if (*pcVar27 < -0x40) goto LAB_00bfee60;
              }
              else if (uVar22 != uVar16) goto LAB_00bfee60;
            }
            if (uVar15 != 0) {
              if (uVar15 < uVar16) {
                if (*(char *)(iVar4 + uVar15) < -0x40) {
LAB_00bfee60:
                    /* WARNING: Subroutine does not return */
                  FUN_00faa8ac(iVar4,uVar16,iVar18 + -1,iVar20 + -1,&DAT_01871d28);
                }
              }
              else if (uVar15 != uVar16) goto LAB_00bfee60;
            }
            uVar12 = 0;
            ppuVar13 = local_178;
            if ((int)ppuVar24 < 0) {
LAB_00bfefc0:
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(uVar12,ppuVar13);
            }
            if (iVar20 == iVar18) {
              local_178 = (undefined4 **)&DAT_00000001;
              ppuVar13 = (undefined4 **)0x0;
            }
            else {
              local_178 = (undefined4 **)thunk_FUN_016d4a50(ppuVar24,local_178);
              if (local_178 == (undefined4 **)0x0) {
LAB_00bfefb8:
                uVar12 = 1;
                ppuVar13 = ppuVar24;
                goto LAB_00bfefc0;
              }
              ppuVar13 = ppuVar24;
            }
            FUN_016dd1aa(local_178,pcVar27,ppuVar24);
            iVar4 = thunk_FUN_016d4a50(0x18);
            if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,0x18);
            }
            FUN_016dd1aa(iVar4,&DAT_00351fe8,0x18);
            iVar20 = thunk_FUN_016d4a50(0x1f);
            if (iVar20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,0x1f);
            }
            FUN_016dd1aa(iVar20,&DAT_00352000,0x1f);
            iVar19 = local_138;
            local_80 = 0x1f;
            local_8c = 0x18;
            local_88 = 0x1f;
            local_94 = 0x18;
            local_a0 = ppuVar13;
            local_9c = local_178;
            local_98 = ppuVar24;
            local_90 = iVar4;
            local_84 = iVar20;
            if (local_138 == local_140) {
              FUN_009f4c54(&local_140);
            }
            puVar6 = (undefined4 *)(local_13c + iVar19 * 0x24);
            *puVar6 = local_a0;
            puVar6[1] = local_9c;
            puVar6[2] = local_98;
            puVar6[3] = local_94;
            puVar6[4] = local_90;
            puVar6[5] = local_8c;
            puVar6[6] = local_88;
            puVar6[7] = local_84;
            puVar6[8] = local_80;
LAB_00bfee0c:
            local_138 = iVar19 + 1;
          }
        }
      }
      else if (((uStack_c4 < (uint)local_b4[4]) &&
               (puVar23 = (uint *)(local_b4[3] + uStack_c4 * 8), uVar22 = *puVar23,
               1 < puVar23[1] - uVar22)) &&
              (uVar15 = uVar22 + 1, uVar22 < uStack_b8 && uVar15 < uStack_b8)) goto LAB_00bfe858;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *local_64;
      bVar1 = (bool)hasExclusiveAccess(local_64);
    } while (!bVar1);
    *local_64 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_013c0df4(local_64);
    }
    if (local_70 != 0) {
      thunk_FUN_016d3fb4(local_6c);
    }
  } while( true );
}

