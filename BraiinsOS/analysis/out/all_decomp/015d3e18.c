// FUN_015d3e18 @ 015d3e18 size=3956 calls_out=13 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015d3e18(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  undefined4 *puVar21;
  uint *puVar22;
  uint uVar23;
  bool bVar24;
  uint *puVar25;
  uint uVar26;
  uint *puVar27;
  uint *puVar28;
  int iVar29;
  uint *puVar30;
  uint *puVar31;
  uint *puVar32;
  int iVar33;
  int *piVar34;
  uint *puVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint *puVar39;
  uint *local_150;
  uint *local_14c;
  uint *local_148;
  uint *local_144;
  uint *local_140;
  uint *local_13c;
  byte *local_138;
  uint *local_134;
  uint *local_12c;
  uint *local_128;
  uint *local_124;
  int local_120;
  uint *local_100;
  uint *local_e8;
  uint *local_a8;
  uint local_a0;
  uint *local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint *local_88;
  uint *local_84;
  uint *local_80;
  uint *local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  uint *local_68;
  uint *local_64;
  uint *local_60;
  uint *local_5c;
  uint *local_58;
  uint *local_54;
  uint *local_50;
  uint *local_4c;
  byte *local_48;
  undefined4 uStack_44;
  uint local_40;
  uint local_3c;
  uint *local_38;
  uint *local_34;
  uint *local_30;
  uint *local_2c;
  
  local_78 = *(int *)(param_3 + 0xd4);
  local_90 = 8;
  local_84 = (uint *)&DAT_00000008;
  local_7c = *(uint **)(param_3 + 0xd0);
  local_70 = *(int *)(param_3 + 0x100) + 8;
  local_8c = 0;
  local_94 = 0;
  local_80 = (uint *)0x0;
  local_88 = (uint *)0x0;
  local_6c = 0;
  local_74 = param_3 + 0xb8;
  if (local_78 != 0) {
    puVar27 = *(uint **)(param_3 + 0xf8);
    local_100 = (uint *)&DAT_00000008;
    local_e8 = (uint *)0x0;
    puVar31 = *(uint **)(param_3 + 0xd8);
    puVar5 = *(uint **)(param_3 + 0xfc);
    puVar28 = *(uint **)(param_3 + 0x108);
    uVar37 = 0;
    uVar16 = *(uint *)(param_3 + 0x110);
    uVar36 = 0;
    if (puVar31 < (uint *)0x50000) {
      uVar36 = uVar16;
    }
    puVar22 = *(uint **)(param_2 + 0xc);
    if (*(char *)(param_2 + 0x88) == '\0') {
      uVar36 = 0;
    }
    puVar6 = *(uint **)(param_2 + 8);
    puVar7 = (uint *)((int)puVar6 + (int)puVar28);
    uVar8 = (int)puVar22 - (int)puVar28;
    uVar1 = (uint)puVar31 >> 0x10;
    iVar29 = 4;
    if (4 < uVar1) {
      iVar29 = 0xc;
    }
    puVar25 = *(uint **)(param_2 + 0x70);
    iVar9 = 0;
    uVar19 = *(uint *)(param_2 + 0x74);
    if (4 < uVar1) {
      iVar9 = 8;
    }
    uVar10 = uVar19 - uVar16;
    local_98 = (uint)puVar31 & 0xff;
    do {
      puVar39 = (uint *)0x0;
      puVar32 = (uint *)0x0;
      iVar13 = 4;
      if (*(char *)(local_74 + 0x21) == '\b') {
        iVar13 = 0xc;
      }
      uVar20 = 0;
      pbVar11 = (byte *)((int)local_7c +
                        ((iVar13 + *(int *)(local_74 + 0x24)) -
                        (*(int *)(local_74 + 0x1c) + *(int *)(local_74 + 0x18))));
      puVar18 = local_7c;
      iVar13 = local_78;
      while( true ) {
        iVar13 = iVar13 + -1;
        puVar30 = (uint *)((int)puVar18 + 1);
        uVar38 = (uint)(byte)*puVar18;
        puVar35 = local_7c;
        if ((uVar20 == 0x3f) && (1 < uVar38)) {
          local_a0 = 6;
          local_148 = puVar32;
          local_7c = puVar30;
          local_78 = iVar13;
          goto LAB_015d4914;
        }
        uVar23 = uVar20 & 0x3f;
        uVar26 = uVar38 & 0x7f;
        uVar17 = uVar23 - 0x20;
        uVar14 = uVar26 << uVar23;
        if (-1 < (int)uVar17) {
          uVar14 = 0;
        }
        puVar39 = (uint *)(uVar14 | (uint)puVar39);
        uVar14 = uVar26 >> (0x20 - uVar23 & 0xff);
        if (-1 < (int)uVar17) {
          uVar14 = uVar26 << (uVar17 & 0xff);
        }
        puVar32 = (uint *)(uVar14 | (uint)puVar32);
        if ((uint)(int)(char)(byte)*puVar18 < 0x80000000) break;
        uVar20 = uVar20 + 7;
        puVar18 = puVar30;
        if (iVar13 == 0) {
          puVar32 = (uint *)0x0;
          local_124 = (uint *)((int)local_7c + local_78);
          local_78 = 0;
          local_a0 = 0x13;
          local_a8 = local_124;
          local_7c = local_124;
          goto LAB_015d4910;
        }
      }
      if (puVar39 == (uint *)0x0 && puVar32 == (uint *)0x0) {
        local_6c = local_6c + -1;
        local_124 = (uint *)0x0;
        local_7c = puVar30;
        local_78 = iVar13;
        goto LAB_015d420c;
      }
      if ((puVar32 != (uint *)0x0) || (*(byte **)(local_70 + 8) <= (byte *)((int)puVar39 + -1))) {
        puVar12 = *(undefined4 **)(local_70 + 0xc);
        local_a0 = 0x12;
        if (puVar12 != (undefined4 *)0x0) {
          local_120 = *(int *)(local_70 + 0x10);
          while( true ) {
            uVar20 = (uint)*(ushort *)((int)puVar12 + 0x4d6);
            uVar14 = 0xffffffff;
            iVar33 = uVar20 << 3;
            puVar21 = puVar12;
            do {
              if (iVar33 == 0) goto LAB_015d40fc;
              puVar18 = (uint *)*puVar21;
              puVar35 = (uint *)puVar21[1];
              iVar33 = iVar33 + -8;
              uVar14 = uVar14 + 1;
              local_7c = (uint *)((int)puVar39 - (int)puVar18);
              puVar21 = puVar21 + 2;
              uVar17 = (uint)(puVar35 <= puVar32 &&
                             (uint)(puVar39 <= puVar18) <= (uint)((int)puVar35 - (int)puVar32)) -
                       (uint)(puVar32 <= puVar35 &&
                             (uint)(puVar18 <= puVar39) <= (uint)((int)puVar32 - (int)puVar35));
            } while (uVar17 == 1);
            uVar20 = uVar14;
            if ((uVar17 & 0xff) == 0) break;
LAB_015d40fc:
            if (local_120 == 0) goto LAB_015d49e4;
            local_120 = local_120 + -1;
            puVar12 = (undefined4 *)puVar12[uVar20 + 0x136];
          }
          local_124 = puVar12 + uVar14 * 0x1a + 0x16;
          goto LAB_015d4128;
        }
LAB_015d49e4:
        puVar35 = local_7c;
        local_a8 = puVar39;
        local_7c = puVar30;
        local_78 = iVar13;
LAB_015d4910:
        local_148 = puVar32;
        local_9c = local_124;
LAB_015d4914:
        local_98 = uVar38;
LAB_015d4918:
        if (local_88 != (uint *)0x0) {
          thunk_FUN_016d3fb4(local_84);
        }
        uVar36 = local_90;
        if (uVar37 != 0) {
          piVar34 = (int *)(local_90 + 8);
          do {
            if (piVar34[-2] == 0) {
              if (*piVar34 != 0) {
                thunk_FUN_016d3fb4(piVar34[-1]);
              }
              if (piVar34[2] != 0) {
                thunk_FUN_016d3fb4(piVar34[1]);
              }
            }
            piVar34 = piVar34 + 10;
            uVar37 = uVar37 - 1;
          } while (uVar37 != 0);
        }
        uVar37 = 0;
        uVar16 = 1;
        if (local_94 != 0) {
          thunk_FUN_016d3fb4(uVar36);
        }
        goto LAB_015d4acc;
      }
      local_124 = (uint *)(((int)puVar39 + -1) * 0x68 + *(int *)(local_70 + 4));
LAB_015d4128:
      if (*(byte *)((int)local_124 + 0x62) == 1) {
        local_6c = local_6c + 1;
      }
      if ((ushort)local_124[0x18] == 0x2e) {
        if (*local_124 == 1) {
          puVar32 = (uint *)local_124[2];
          uVar20 = local_124[3];
        }
        else {
          uVar20 = local_124[1];
          if (5 < uVar20) goto LAB_015d4da8;
          puVar32 = local_124 + 2;
        }
        local_7c = puVar30;
        local_78 = iVar13;
        if (uVar20 != 0) {
          iVar33 = uVar20 << 4;
          puVar35 = (uint *)0x0;
          bVar3 = false;
          bVar4 = false;
          bVar24 = false;
          do {
            local_40 = *puVar32;
            local_3c = puVar32[1];
            local_38 = (uint *)puVar32[2];
            local_34 = (uint *)puVar32[3];
            FUN_015d5608(&local_68,&local_7c,*(undefined4 *)(local_74 + 0x20),&local_40);
            if (local_68 == (uint *)&DAT_0000002e && local_64 == (uint *)0x0) {
              local_9c = local_5c;
              local_a8 = local_58;
              puVar5 = local_60;
              local_148 = local_54;
              goto LAB_015d49cc;
            }
            uVar20 = (uint)local_58 & 0xffff;
            if (uVar20 == 0x55) {
              FUN_015d855c(&local_40,&local_68);
              if ((local_40 & 0x3f) == 0x16) {
                puVar39 = local_38;
                uVar20 = uVar36;
LAB_015d4534:
                local_138 = (byte *)((int)puVar39 + uVar20);
                bVar24 = true;
                goto LAB_015d4238;
              }
              bVar24 = false;
              if (local_40 != 0x18) goto LAB_015d4238;
              if (uVar19 < uVar16) {
LAB_015d4ba0:
                local_a0 = 0x13;
                local_a8 = puVar25;
              }
              else {
                local_a0 = 0x38;
                lVar2 = (ulonglong)(((uint)puVar31 & 0xffff) >> 8) * ZEXT48(local_38);
                uVar20 = (uint)lVar2;
                if ((int)((ulonglong)lVar2 >> 0x20) == 0) {
                  if (uVar20 <= uVar10) {
                    puVar39 = (uint *)((int)((int)puVar25 + uVar16) + uVar20);
                    uVar20 = uVar10 - uVar20;
                    if (((uint)puVar31 & 0xff00) == 0x800) {
                      if (uVar20 < 8) goto LAB_015d4bc4;
                      if (*(byte *)((int)puVar39 + 7) != 0 || *(uint *)((int)puVar39 + 3) >> 8 != 0)
                      goto LAB_015d4bd4;
                      puVar39 = (uint *)(*(uint *)((int)puVar39 + 3) << 0x18 | (uint)(uint3)*puVar39
                                        );
                    }
                    else {
                      if (uVar20 < 4) {
LAB_015d4bc4:
                        local_a0 = 0x13;
                        local_a8 = puVar39;
                        local_9c = puVar39;
                        goto LAB_015d4bd4;
                      }
                      puVar39 = (uint *)*puVar39;
                    }
                    uVar20 = uVar16;
                    goto LAB_015d4534;
                  }
                  puVar25 = (uint *)((int)puVar25 + uVar16);
                  goto LAB_015d4ba0;
                }
              }
LAB_015d4bd4:
              local_148 = (uint *)0x0;
              local_98 = 0;
              goto LAB_015d4918;
            }
            if (uVar20 == 0x12) {
              FUN_015d855c(&local_40,&local_68);
              if ((local_40 & 0x3f) == 0) {
                local_140 = local_38;
                local_144 = local_34;
                bVar4 = true;
              }
              else if (local_40 == 7) {
                puVar35 = (uint *)&DAT_00000001;
                local_14c = local_38;
                local_150 = local_34;
              }
              else if (local_40 == 0xc) {
                if (puVar22 < puVar28) {
LAB_015d4c3c:
                  local_a0 = 0x13;
                  local_128 = (uint *)0x0;
                  local_12c = puVar6;
                }
                else {
                  uVar20 = (uint)((ulonglong)local_98 * ZEXT48(local_38));
                  if ((int)((ulonglong)local_98 * ZEXT48(local_38) >> 0x20) == 0) {
                    if (uVar8 < uVar20) {
                      puVar6 = puVar7;
                      goto LAB_015d4c3c;
                    }
                    local_a0 = 0x19;
                    if (local_98 - 1 < 8) {
                      puVar39 = (uint *)((int)puVar7 + uVar20);
                      uVar38 = uVar8 - uVar20;
                      switch(local_98) {
                      case 1:
                        if (uVar8 != uVar20) {
                          local_12c = (uint *)(uint)(byte)*puVar39;
LAB_015d4630:
                          local_128 = (uint *)0x0;
                          bVar4 = true;
                          local_144 = (uint *)0x0;
                          local_140 = local_12c;
                          goto LAB_015d4238;
                        }
                        break;
                      case 2:
                        if (1 < uVar38) {
                          local_12c = (uint *)(uint)(ushort)*puVar39;
                          goto LAB_015d4630;
                        }
                        break;
                      default:
                        goto switchD_015d43ec_caseD_3;
                      case 4:
                        if (3 < uVar38) {
                          local_12c = (uint *)*puVar39;
                          goto LAB_015d4630;
                        }
                        break;
                      case 8:
                        if (7 < uVar38) {
                          local_128 = (uint *)(*(uint *)((int)puVar39 + 3) >> 8 |
                                              (uint)*(byte *)((int)puVar39 + 7) << 0x18);
                          local_12c = (uint *)((uint)(uint3)*puVar39 |
                                              *(uint *)((int)puVar39 + 3) << 0x18);
                          bVar4 = true;
                          local_144 = local_128;
                          local_140 = local_12c;
                          goto LAB_015d4238;
                        }
                      }
                      local_128 = (uint *)0x0;
                      local_a0 = 0x13;
                      local_12c = puVar39;
                      local_9c = puVar39;
                    }
                  }
                  else {
                    local_a0 = 0x38;
                  }
                }
switchD_015d43ec_caseD_3:
                local_a8 = local_12c;
                local_148 = local_128;
                goto LAB_015d4918;
              }
            }
            else if (uVar20 == 0x11) {
              FUN_015d855c(&local_40,&local_68);
              if ((local_40 & 0x3f) == 0) {
                local_134 = local_38;
                local_13c = local_34;
                bVar3 = true;
              }
              else if (local_40 == 0xc) {
                if (puVar22 < puVar28) {
LAB_015d4bbc:
                  local_a0 = 0x13;
                  local_148 = (uint *)0x0;
                  local_a8 = puVar6;
                }
                else {
                  uVar20 = (uint)((ulonglong)local_98 * ZEXT48(local_38));
                  if ((int)((ulonglong)local_98 * ZEXT48(local_38) >> 0x20) == 0) {
                    if (uVar8 < uVar20) {
                      puVar6 = puVar7;
                      goto LAB_015d4bbc;
                    }
                    local_a0 = 0x19;
                    if (local_98 - 1 < 8) {
                      puVar39 = (uint *)((int)puVar7 + uVar20);
                      uVar38 = uVar8 - uVar20;
                      switch(local_98) {
                      case 1:
                        if (uVar8 != uVar20) {
                          local_134 = (uint *)(uint)(byte)*puVar39;
LAB_015d45b0:
                          local_148 = (uint *)0x0;
                          bVar3 = true;
                          local_13c = (uint *)0x0;
                          local_a8 = local_134;
                          goto LAB_015d4238;
                        }
                        break;
                      case 2:
                        if (1 < uVar38) {
                          local_134 = (uint *)(uint)(ushort)*puVar39;
                          goto LAB_015d45b0;
                        }
                        break;
                      default:
                        goto switchD_015d4320_caseD_3;
                      case 4:
                        if (3 < uVar38) {
                          local_134 = (uint *)*puVar39;
                          goto LAB_015d45b0;
                        }
                        break;
                      case 8:
                        if (7 < uVar38) {
                          local_148 = (uint *)(*(uint *)((int)puVar39 + 3) >> 8 |
                                              (uint)*(byte *)((int)puVar39 + 7) << 0x18);
                          local_134 = (uint *)((uint)(uint3)*puVar39 |
                                              *(uint *)((int)puVar39 + 3) << 0x18);
                          bVar3 = true;
                          local_13c = local_148;
                          local_a8 = local_134;
                          goto LAB_015d4238;
                        }
                      }
                      local_148 = (uint *)0x0;
                      local_a0 = 0x13;
                      local_a8 = puVar39;
                      local_9c = puVar39;
                    }
                  }
                  else {
                    local_a0 = 0x38;
                  }
                }
switchD_015d4320_caseD_3:
                goto LAB_015d4918;
              }
            }
LAB_015d4238:
            puVar32 = puVar32 + 4;
            iVar33 = iVar33 + -0x10;
          } while (iVar33 != 0);
          if (bVar24) {
            pbVar15 = *(byte **)(param_2 + 0x68 + iVar29);
            puVar32 = *(uint **)(param_2 + 0x68 + iVar9);
            if (pbVar15 < local_138) {
              local_148 = (uint *)0x0;
              local_a0 = 0x13;
              puVar35 = (uint *)0x0;
              local_98 = 0;
              local_a8 = puVar32;
            }
            else {
              local_50 = (uint *)((int)puVar32 + (int)local_138);
              bVar24 = false;
              local_4c = (uint *)((int)pbVar15 - (int)local_138);
              local_48 = (byte *)CONCAT31(local_48._1_3_,4 < uVar1);
              local_68 = puVar27;
              local_64 = puVar5;
              local_60 = puVar6;
              local_5c = puVar22;
              local_58 = puVar28;
              local_54 = puVar31;
              while( true ) {
                FUN_015dbca4(&local_40,&local_68);
                puVar35 = local_2c;
                puVar18 = local_30;
                puVar39 = local_34;
                puVar32 = local_38;
                if (local_40 == 2 && local_3c == 0) break;
                if ((local_40 & 1) == 0) {
                  if (!bVar24) goto LAB_015d420c;
                  goto LAB_015d4884;
                }
                if (local_34 <= local_2c &&
                    (uint)(local_30 <= local_38) <= (uint)((int)local_34 - (int)local_2c)) {
                  if (local_e8 == local_88) {
                    FUN_015dd640(&local_88);
                    local_100 = local_84;
                  }
                  bVar24 = true;
                  local_80 = (uint *)((int)local_e8 + 1);
                  puVar30 = local_100 + (int)local_e8 * 6;
                  *puVar30 = (uint)puVar32;
                  puVar30[1] = (uint)puVar39;
                  puVar30[2] = (uint)puVar18;
                  puVar30[3] = (uint)puVar35;
                  puVar30[4] = uVar37;
                  local_e8 = local_80;
                }
              }
              local_a0 = (uint)local_38 & 0xff;
              local_9c = local_34;
              if (local_a0 == 0x52) {
                if (((uint)local_38 >> 8 & 1) == 0) {
                  goto LAB_015d420c;
                }
                local_9c = local_34;
LAB_015d4884:
                local_68 = (uint *)&SUB_00000002;
                local_48 = pbVar11;
                if (uVar37 == local_94) {
                  FUN_015dbc3c(&local_94);
                }
                local_8c = uVar37 + 1;
                puVar12 = (undefined4 *)(local_90 + uVar37 * 0x28);
                *puVar12 = local_68;
                puVar12[1] = local_64;
                puVar12[2] = local_60;
                puVar12[3] = local_5c;
                puVar12[4] = local_58;
                puVar12[5] = local_54;
                puVar12[6] = local_50;
                puVar12[7] = local_4c;
                puVar12[8] = local_48;
                puVar12[9] = uStack_44;
                uVar37 = local_8c;
                goto LAB_015d420c;
              }
              local_98 = (uint)local_38 >> 8 & 0xff;
              local_a8 = local_30;
              puVar35 = (uint *)((uint)local_38 >> 0x10);
              local_148 = local_2c;
            }
            goto LAB_015d4918;
          }
          if (bVar3) {
            if (bVar4) {
              if (local_13c <= local_144 &&
                  (uint)(local_140 <= local_134) <= (uint)((int)local_13c - (int)local_144)) {
                puVar32 = local_140;
                puVar39 = local_144;
                if (local_e8 == local_88) {
                  FUN_015dd640(&local_88);
                  local_100 = local_84;
                }
LAB_015d4860:
                local_80 = (uint *)((int)local_e8 + 1);
                puVar18 = local_100 + (int)local_e8 * 6;
                *puVar18 = (uint)local_134;
                puVar18[1] = (uint)local_13c;
                puVar18[2] = (uint)puVar32;
                puVar18[3] = (uint)puVar39;
                puVar18[4] = uVar37;
                local_e8 = local_80;
                goto LAB_015d4884;
              }
            }
            else if (puVar35 != (uint *)0x0) {
              puVar32 = (uint *)((int)local_134 + (int)local_14c);
              puVar39 = (uint *)((byte *)((int)local_13c + (int)local_150) +
                                CARRY4((uint)local_134,(uint)local_14c));
              if (local_13c <= puVar39 &&
                  (uint)(puVar32 <= local_134) <= (uint)((int)local_13c - (int)puVar39)) {
                if (local_e8 == local_88) {
                  FUN_015dd640(&local_88);
                  local_100 = local_84;
                }
                goto LAB_015d4860;
              }
            }
          }
        }
      }
      else {
        if (*local_124 == 1) {
          puVar32 = (uint *)local_124[2];
          uVar20 = local_124[3];
        }
        else {
          uVar20 = local_124[1];
          if (5 < uVar20) {
LAB_015d4da8:
            local_7c = puVar30;
            local_78 = iVar13;
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,uVar20,5,&DAT_018822e4);
          }
          puVar32 = local_124 + 2;
        }
        local_7c = puVar30;
        local_78 = iVar13;
        FUN_015db29c(&local_68,&local_7c,*(undefined4 *)(local_74 + 0x20),puVar32,uVar20);
        if ((char)local_68 != 'R') {
          local_9c = local_64;
          local_a8 = local_60;
          puVar5 = local_68;
          local_148 = local_5c;
LAB_015d49cc:
          local_98 = ((uint)puVar5 & 0xffff) >> 8;
          puVar35 = (uint *)((uint)puVar5 >> 0x10);
          local_a0 = (uint)puVar5 & 0xff;
          goto LAB_015d4918;
        }
      }
LAB_015d420c:
    } while (local_78 != 0);
    if (&DAT_00000001 < local_e8) {
      if (&DAT_00000014 < local_e8) {
        FUN_015dd540();
      }
      else {
        iVar29 = 0;
        puVar5 = local_84 + 6;
        puVar27 = local_84;
        do {
          puVar28 = puVar5;
          uVar37 = *puVar28;
          uVar36 = puVar28[1];
          if (uVar36 <= puVar27[1] && (uint)(*puVar27 <= uVar37) <= uVar36 - puVar27[1]) {
            local_68 = (uint *)puVar27[8];
            local_64 = (uint *)puVar27[9];
            local_60 = (uint *)puVar27[10];
            local_5c = (uint *)puVar27[0xb];
            iVar9 = iVar29;
            puVar5 = puVar28;
            do {
              puVar27 = puVar5 + -6;
              *puVar5 = *puVar27;
              puVar5[1] = puVar5[-5];
              puVar5[2] = puVar5[-4];
              puVar5[3] = puVar5[-3];
              puVar5[4] = puVar5[-2];
              puVar5[5] = puVar5[-1];
              if (iVar9 == 0) {
                puVar27 = local_84;
                break;
              }
              puVar31 = puVar5 + -0xc;
              puVar22 = puVar5 + -0xb;
              iVar9 = iVar9 + 0x18;
              puVar5 = puVar27;
            } while (uVar36 <= *puVar22 && (uint)(*puVar31 <= uVar37) <= uVar36 - *puVar22);
            puVar27[2] = (uint)local_68;
            puVar27[3] = (uint)local_64;
            puVar27[4] = (uint)local_60;
            puVar27[5] = (uint)local_5c;
            *puVar27 = uVar37;
            puVar27[1] = uVar36;
          }
          iVar29 = iVar29 + -0x18;
          puVar5 = puVar28 + 6;
          puVar27 = puVar28;
        } while (puVar28 + 6 != local_84 + (int)local_e8 * 6);
      }
    }
  }
  local_a0 = local_8c;
  uVar37 = local_90;
  if (local_8c < local_94) {
    if (local_8c != 0) {
      iVar29 = local_8c * 0x28;
      uVar37 = thunk_FUN_016d4ea4(local_90,iVar29);
      if (uVar37 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(8,iVar29);
      }
      goto LAB_015d4a3c;
    }
    thunk_FUN_016d3fb4(local_90);
    uVar37 = 8;
    if (local_88 <= local_80) goto LAB_015d4aa0;
  }
  else {
LAB_015d4a3c:
    if (local_88 <= local_80) {
LAB_015d4aa0:
      local_a8 = local_80;
      local_9c = local_84;
      goto LAB_015d4ab8;
    }
  }
  local_a8 = local_80;
  if (local_80 == (uint *)0x0) {
    thunk_FUN_016d3fb4(local_84);
    local_9c = (uint *)&DAT_00000008;
  }
  else {
    iVar29 = (int)local_80 * 0x18;
    local_9c = (uint *)thunk_FUN_016d4ea4(local_84,iVar29);
    if (local_9c == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,iVar29);
    }
  }
LAB_015d4ab8:
  local_98 = (local_a0 & 0xffff) >> 8;
  puVar35 = (uint *)(local_a0 >> 0x10);
  local_a0 = local_a0 & 0xff;
  local_148 = (uint *)0x0;
  uVar16 = 0;
LAB_015d4acc:
  local_58 = (uint *)(local_98 << 8 | (int)puVar35 << 0x10 | local_a0);
  if (*param_1 != 2) {
    local_54 = local_9c;
    local_68 = param_1;
    local_60 = (uint *)uVar16;
    local_5c = (uint *)uVar37;
    local_50 = local_a8;
    local_4c = local_148;
    FUN_015dd7f0(&local_68);
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00410ac0,0x1d,&DAT_018ab248);
  }
  param_1[2] = (uint)local_58;
  *param_1 = uVar16;
  param_1[1] = uVar37;
  param_1[3] = (uint)local_9c;
  param_1[4] = (uint)local_a8;
  param_1[5] = (uint)local_148;
  return;
}

