// FUN_0198ea08 @ 0198ea08 size=3980 calls_out=13 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0198ea08(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  byte *pbVar16;
  uint uVar17;
  int iVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  undefined4 *puVar22;
  bool bVar23;
  uint *puVar24;
  uint uVar25;
  uint *puVar26;
  uint *puVar27;
  uint uVar28;
  uint *puVar29;
  int *piVar30;
  uint *puVar31;
  int iVar32;
  uint *puVar33;
  uint *puVar34;
  uint uVar35;
  uint uVar36;
  uint *unaff_r9;
  uint *puVar37;
  uint uVar38;
  uint uVar39;
  int iVar40;
  undefined4 *puVar41;
  uint *puVar42;
  undefined8 uVar43;
  uint *local_150;
  uint *local_14c;
  uint *local_144;
  uint *local_140;
  byte *local_13c;
  uint *local_130;
  uint *local_12c;
  uint *local_128;
  uint *local_124;
  int local_120;
  uint *local_100;
  uint *local_e8;
  uint *local_a8;
  uint local_a4;
  uint *local_9c;
  uint *local_98;
  uint local_94;
  int local_90;
  uint local_8c;
  uint *local_88;
  uint *local_84;
  uint *local_80;
  uint *local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int *local_68;
  uint *local_64;
  uint *local_60;
  uint *local_5c;
  uint *local_58;
  uint *local_54;
  uint *local_50;
  uint *local_4c;
  byte *local_48;
  uint uStack_44;
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
    piVar30 = *(int **)(param_3 + 0xf8);
    local_100 = (uint *)&DAT_00000008;
    local_e8 = (uint *)0x0;
    puVar34 = *(uint **)(param_3 + 0xd8);
    puVar6 = *(uint **)(param_3 + 0xfc);
    puVar31 = *(uint **)(param_3 + 0x108);
    uVar36 = 0;
    uVar17 = *(uint *)(param_3 + 0x110);
    uVar38 = 0;
    if (puVar34 < (uint *)0x50000) {
      uVar38 = uVar17;
    }
    puVar24 = *(uint **)(param_2 + 0xc);
    if (*(char *)(param_2 + 0x88) == '\0') {
      uVar38 = 0;
    }
    puVar7 = *(uint **)(param_2 + 8);
    puVar8 = (uint *)((int)puVar7 + (int)puVar31);
    uVar9 = (int)puVar24 - (int)puVar31;
    uVar1 = (uint)puVar34 >> 0x10;
    iVar32 = 4;
    if (4 < uVar1) {
      iVar32 = 0xc;
    }
    puVar27 = *(uint **)(param_2 + 0x70);
    iVar10 = 0;
    uVar20 = *(uint *)(param_2 + 0x74);
    if (4 < uVar1) {
      iVar10 = 8;
    }
    uVar11 = uVar20 - uVar17;
    uVar25 = (uint)puVar34 & 0xff;
    puVar14 = puVar27;
    do {
      iVar40 = local_78;
      puVar42 = (uint *)0x0;
      iVar18 = 4;
      if (*(char *)(local_74 + 0x21) == '\b') {
        iVar18 = 0xc;
      }
      puVar19 = (uint *)0x0;
      uVar21 = 0;
      pbVar12 = (byte *)((int)local_7c +
                        ((iVar18 + *(int *)(local_74 + 0x24)) -
                        (*(int *)(local_74 + 0x1c) + *(int *)(local_74 + 0x18))));
      puVar37 = unaff_r9;
      puVar33 = local_7c;
      while( true ) {
        local_78 = local_78 + -1;
        puVar26 = (uint *)((int)puVar33 + 1);
        uVar39 = (uint)(byte)*puVar33;
        if ((uVar21 == 0x3f) && (1 < uVar39)) {
          local_a4 = 6;
          local_7c = puVar26;
          goto LAB_0198f504;
        }
        uVar35 = uVar21 & 0x3f;
        uVar28 = uVar39 & 0x7f;
        uVar15 = uVar35 - 0x20;
        uVar13 = uVar28 << uVar35;
        if (-1 < (int)uVar15) {
          uVar13 = 0;
        }
        puVar42 = (uint *)(uVar13 | (uint)puVar42);
        uVar13 = uVar28 >> (0x20 - uVar35 & 0xff);
        if (-1 < (int)uVar15) {
          uVar13 = uVar28 << (uVar15 & 0xff);
        }
        puVar19 = (uint *)(uVar13 | (uint)puVar19);
        puVar37 = puVar14;
        if ((uint)(int)(char)(byte)*puVar33 < 0x80000000) break;
        uVar21 = uVar21 + 7;
        puVar33 = puVar26;
        if (local_78 == 0) {
          local_a8 = (uint *)0x0;
          local_78 = 0;
          local_124 = (uint *)((int)local_7c + iVar40);
          local_a4 = 0x13;
          local_98 = local_124;
          local_7c = local_124;
          goto LAB_0198f500;
        }
      }
      unaff_r9 = puVar14;
      if (puVar42 == (uint *)0x0 && puVar19 == (uint *)0x0) {
        local_6c = local_6c + -1;
        local_124 = (uint *)0x0;
        local_7c = puVar26;
      }
      else {
        if ((puVar19 != (uint *)0x0) || (*(byte **)(local_70 + 8) <= (byte *)((int)puVar42 + -1))) {
          puVar41 = *(undefined4 **)(local_70 + 0xc);
          local_a4 = 0x12;
          if (puVar41 != (undefined4 *)0x0) {
            local_120 = *(int *)(local_70 + 0x10);
            while( true ) {
              uVar13 = 0xffffffff;
              uVar21 = (uint)*(ushort *)((int)puVar41 + 0x4d6);
              iVar40 = uVar21 << 3;
              puVar22 = puVar41;
              do {
                if (iVar40 == 0) goto LAB_0198ecf8;
                puVar33 = (uint *)*puVar22;
                puVar29 = (uint *)puVar22[1];
                iVar40 = iVar40 + -8;
                uVar13 = uVar13 + 1;
                puVar22 = puVar22 + 2;
                uVar15 = (uint)(puVar29 <= puVar19 &&
                               (uint)(puVar42 <= puVar33) <= (uint)((int)puVar29 - (int)puVar19)) -
                         (uint)(puVar19 <= puVar29 &&
                               (uint)(puVar33 <= puVar42) <= (uint)((int)puVar19 - (int)puVar29));
              } while (uVar15 == 1);
              uVar21 = uVar13;
              if ((uVar15 & 0xff) == 0) break;
LAB_0198ecf8:
              if (local_120 == 0) goto LAB_0198f5d0;
              local_120 = local_120 + -1;
              puVar41 = (undefined4 *)puVar41[uVar21 + 0x136];
            }
            local_124 = puVar41 + uVar13 * 0x1a + 0x16;
            goto LAB_0198ed24;
          }
LAB_0198f5d0:
          local_a8 = puVar19;
          local_98 = puVar42;
          local_7c = puVar26;
LAB_0198f500:
          local_9c = local_124;
LAB_0198f504:
          uVar25 = uVar39;
LAB_0198f508:
LAB_0198f50c:
          if (local_88 != (uint *)0x0) {
            thunk_FUN_01be4678(local_84);
          }
          iVar32 = local_90;
          if (uVar36 != 0) {
            piVar30 = (int *)(local_90 + 8);
            do {
              if (piVar30[-2] == 0) {
                if (*piVar30 != 0) {
                  thunk_FUN_01be4678(piVar30[-1]);
                }
                if (piVar30[2] != 0) {
                  thunk_FUN_01be4678(piVar30[1]);
                }
              }
              piVar30 = piVar30 + 10;
              uVar36 = uVar36 - 1;
            } while (uVar36 != 0);
          }
          iVar10 = 1;
          if (local_94 != 0) {
            thunk_FUN_01be4678(iVar32);
          }
          goto LAB_0198f6d4;
        }
        local_124 = (uint *)(((int)puVar42 + -1) * 0x68 + *(int *)(local_70 + 4));
LAB_0198ed24:
        if (*(byte *)((int)local_124 + 0x62) == 1) {
          local_6c = local_6c + 1;
        }
        if ((ushort)local_124[0x18] == 0x2e) {
          local_7c = puVar26;
          uVar43 = FUN_0134bd24();
          iVar40 = (int)((ulonglong)uVar43 >> 0x20);
          puVar37 = (uint *)uVar43;
          if (iVar40 != 0) {
            iVar40 = iVar40 << 4;
            bVar3 = false;
            bVar4 = false;
            bVar5 = false;
            bVar23 = false;
            do {
              local_40 = *puVar37;
              local_3c = puVar37[1];
              local_38 = (uint *)puVar37[2];
              local_34 = (uint *)puVar37[3];
              FUN_019901d0(&local_68,&local_7c,*(undefined4 *)(local_74 + 0x20),&local_40);
              if (local_68 == (int *)0x2e && local_64 == (uint *)0x0) {
                local_9c = local_5c;
                local_98 = local_58;
                local_a8 = local_54;
                puVar37 = (uint *)((uint)local_60 >> 0x10);
                uVar25 = ((uint)local_60 & 0xffff) >> 8;
                local_a4 = (uint)local_60 & 0xff;
                goto LAB_0198f50c;
              }
              uVar21 = (uint)local_58 & 0xffff;
              if (uVar21 == 0x55) {
                FUN_01993028(&local_40,&local_68);
                if ((local_40 & 0x3f) == 0x16) {
                  puVar42 = local_38;
                  uVar21 = uVar38;
LAB_0198f104:
                  local_13c = (byte *)((int)puVar42 + uVar21);
                  bVar23 = true;
                  goto LAB_0198edfc;
                }
                bVar23 = false;
                if (local_40 != 0x18) goto LAB_0198edfc;
                if (uVar20 < uVar17) {
LAB_0198f7c8:
                  local_a4 = 0x13;
                  local_98 = puVar27;
                }
                else {
                  local_a4 = 0x38;
                  lVar2 = (ulonglong)(((uint)puVar34 & 0xffff) >> 8) * ZEXT48(local_38);
                  uVar21 = (uint)lVar2;
                  if ((int)((ulonglong)lVar2 >> 0x20) == 0) {
                    if (uVar21 <= uVar11) {
                      puVar42 = (uint *)((int)((int)puVar27 + uVar17) + uVar21);
                      uVar21 = uVar11 - uVar21;
                      if (((uint)puVar34 & 0xff00) == 0x800) {
                        if (uVar21 < 8) goto LAB_0198f7ec;
                        if (*(byte *)((int)puVar42 + 7) != 0 ||
                            *(uint *)((int)puVar42 + 3) >> 8 != 0) goto LAB_0198f7fc;
                        puVar42 = (uint *)(*(uint *)((int)puVar42 + 3) << 0x18 |
                                          (uint)(uint3)*puVar42);
                      }
                      else {
                        if (uVar21 < 4) {
LAB_0198f7ec:
                          local_a4 = 0x13;
                          local_9c = puVar42;
                          local_98 = puVar42;
                          goto LAB_0198f7fc;
                        }
                        puVar42 = (uint *)*puVar42;
                      }
                      uVar21 = uVar17;
                      goto LAB_0198f104;
                    }
                    puVar27 = (uint *)((int)puVar27 + uVar17);
                    goto LAB_0198f7c8;
                  }
                }
LAB_0198f7fc:
                uVar25 = 0;
                local_a8 = (uint *)0x0;
                goto LAB_0198f508;
              }
              if (uVar21 == 0x12) {
                FUN_01993028(&local_40,&local_68);
                if ((local_40 & 0x3f) == 0) {
                  bVar4 = true;
                  local_130 = local_34;
                  puVar14 = local_38;
                }
                else if (local_40 == 7) {
                  local_14c = local_38;
                  local_150 = local_34;
                  bVar5 = true;
                }
                else if (local_40 == 0xc) {
                  if (puVar24 < puVar31) {
LAB_0198f860:
                    local_a4 = 0x13;
                    local_128 = (uint *)0x0;
                    local_12c = puVar7;
                  }
                  else {
                    uVar21 = (uint)((ulonglong)uVar25 * ZEXT48(local_38));
                    if ((int)((ulonglong)uVar25 * ZEXT48(local_38) >> 0x20) == 0) {
                      if (uVar9 < uVar21) {
                        puVar7 = puVar8;
                        goto LAB_0198f860;
                      }
                      local_a4 = 0x19;
                      if (uVar25 - 1 < 8) {
                        puVar14 = (uint *)((int)puVar8 + uVar21);
                        uVar39 = uVar9 - uVar21;
                        switch(uVar25) {
                        case 1:
                          if (uVar9 != uVar21) {
                            local_12c = (uint *)(uint)(byte)*puVar14;
LAB_0198f208:
                            local_128 = (uint *)0x0;
                            bVar4 = true;
                            local_130 = (uint *)0x0;
                            puVar14 = local_12c;
                            goto LAB_0198edfc;
                          }
                          break;
                        case 2:
                          if (1 < uVar39) {
                            local_12c = (uint *)(uint)(ushort)*puVar14;
                            goto LAB_0198f208;
                          }
                          break;
                        default:
                          goto switchD_0198efbc_caseD_3;
                        case 4:
                          if (3 < uVar39) {
                            local_12c = (uint *)*puVar14;
                            goto LAB_0198f208;
                          }
                          break;
                        case 8:
                          if (7 < uVar39) {
                            local_130 = (uint *)(*(uint *)((int)puVar14 + 3) >> 8 |
                                                (uint)*(byte *)((int)puVar14 + 7) << 0x18);
                            local_12c = (uint *)((uint)(uint3)*puVar14 |
                                                *(uint *)((int)puVar14 + 3) << 0x18);
                            bVar4 = true;
                            puVar14 = local_12c;
                            local_128 = local_130;
                            goto LAB_0198edfc;
                          }
                        }
                        local_128 = (uint *)0x0;
                        local_a4 = 0x13;
                        local_12c = puVar14;
                        local_9c = puVar14;
                      }
                    }
                    else {
                      local_a4 = 0x38;
                    }
                  }
switchD_0198efbc_caseD_3:
                  local_98 = local_12c;
                  local_a8 = local_128;
                  goto LAB_0198f890;
                }
              }
              else if (uVar21 == 0x11) {
                FUN_01993028(&local_40,&local_68);
                if ((local_40 & 0x3f) == 0) {
                  local_140 = local_38;
                  local_144 = local_34;
                  bVar3 = true;
                }
                else if (local_40 == 0xc) {
                  if (puVar24 < puVar31) {
LAB_0198f7e4:
                    local_a4 = 0x13;
                    local_a8 = (uint *)0x0;
                    local_98 = puVar7;
                  }
                  else {
                    uVar21 = (uint)((ulonglong)uVar25 * ZEXT48(local_38));
                    if ((int)((ulonglong)uVar25 * ZEXT48(local_38) >> 0x20) == 0) {
                      if (uVar9 < uVar21) {
                        puVar7 = puVar8;
                        goto LAB_0198f7e4;
                      }
                      local_a4 = 0x19;
                      if (uVar25 - 1 < 8) {
                        puVar42 = (uint *)((int)puVar8 + uVar21);
                        uVar39 = uVar9 - uVar21;
                        switch(uVar25) {
                        case 1:
                          if (uVar9 != uVar21) {
                            local_140 = (uint *)(uint)(byte)*puVar42;
LAB_0198f184:
                            local_a8 = (uint *)0x0;
                            bVar3 = true;
                            local_144 = (uint *)0x0;
                            local_98 = local_140;
                            goto LAB_0198edfc;
                          }
                          break;
                        case 2:
                          if (1 < uVar39) {
                            local_140 = (uint *)(uint)(ushort)*puVar42;
                            goto LAB_0198f184;
                          }
                          break;
                        default:
                          goto switchD_0198eeec_caseD_3;
                        case 4:
                          if (3 < uVar39) {
                            local_140 = (uint *)*puVar42;
                            goto LAB_0198f184;
                          }
                          break;
                        case 8:
                          if (7 < uVar39) {
                            local_144 = (uint *)(*(uint *)((int)puVar42 + 3) >> 8 |
                                                (uint)*(byte *)((int)puVar42 + 7) << 0x18);
                            local_140 = (uint *)((uint)(uint3)*puVar42 |
                                                *(uint *)((int)puVar42 + 3) << 0x18);
                            bVar3 = true;
                            local_a8 = local_144;
                            local_98 = local_140;
                            goto LAB_0198edfc;
                          }
                        }
                        local_a8 = (uint *)0x0;
                        local_a4 = 0x13;
                        local_9c = puVar42;
                        local_98 = puVar42;
                      }
                    }
                    else {
                      local_a4 = 0x38;
                    }
                  }
switchD_0198eeec_caseD_3:
LAB_0198f890:
                  goto LAB_0198f50c;
                }
              }
LAB_0198edfc:
              puVar37 = puVar37 + 4;
              iVar40 = iVar40 + -0x10;
            } while (iVar40 != 0);
            if (bVar23) {
              pbVar16 = *(byte **)(param_2 + 0x68 + iVar32);
              puVar42 = *(uint **)(param_2 + 0x68 + iVar10);
              if (pbVar16 < local_13c) {
                local_a8 = (uint *)0x0;
                local_a4 = 0x13;
                uVar25 = 0;
                puVar37 = (uint *)0x0;
                local_98 = puVar42;
              }
              else {
                local_50 = (uint *)((int)puVar42 + (int)local_13c);
                bVar23 = false;
                local_4c = (uint *)((int)pbVar16 - (int)local_13c);
                local_48 = (byte *)CONCAT31(local_48._1_3_,4 < uVar1);
                local_68 = piVar30;
                local_64 = puVar6;
                local_60 = puVar7;
                local_5c = puVar24;
                local_58 = puVar31;
                local_54 = puVar34;
                while( true ) {
                  FUN_019965d8(&local_40,&local_68);
                  puVar26 = local_2c;
                  puVar19 = local_30;
                  puVar33 = local_34;
                  puVar42 = local_38;
                  if (local_40 == 2 && local_3c == 0) break;
                  if ((local_40 & 1) == 0) {
                    if (!bVar23) goto LAB_0198f4bc;
                    goto LAB_0198f464;
                  }
                  puVar37 = puVar19;
                  if (local_34 <= local_2c &&
                      (uint)(local_30 <= local_38) <= (uint)((int)local_34 - (int)local_2c)) {
                    if (local_e8 == local_88) {
                      FUN_0199800c(&local_88);
                      local_100 = local_84;
                    }
                    local_80 = (uint *)((int)local_e8 + 1);
                    puVar29 = local_100 + (int)local_e8 * 6;
                    *puVar29 = (uint)puVar42;
                    puVar29[1] = (uint)puVar33;
                    puVar29[2] = (uint)puVar19;
                    puVar29[3] = (uint)puVar26;
                    puVar29[4] = uVar36;
                    bVar23 = true;
                    local_e8 = local_80;
                  }
                }
                local_a4 = (uint)local_38 & 0xff;
                local_9c = local_34;
                if (local_a4 == 0x52) {
                  if (((uint)local_38 >> 8 & 1) == 0) goto LAB_0198f4bc;
                  local_9c = local_34;
LAB_0198f464:
                  local_68 = (int *)0x2;
                  local_48 = pbVar12;
                  if (uVar36 == local_94) {
                    FUN_01996570(&local_94);
                  }
                  local_8c = uVar36 + 1;
                  puVar42 = (uint *)(local_90 + uVar36 * 0x28);
                  *puVar42 = (uint)local_68;
                  puVar42[1] = (uint)local_64;
                  puVar42[2] = (uint)local_60;
                  puVar42[3] = (uint)local_5c;
                  puVar42[4] = (uint)local_58;
                  puVar42[5] = (uint)local_54;
                  puVar42[6] = (uint)local_50;
                  puVar42[7] = (uint)local_4c;
                  puVar42[8] = (uint)local_48;
                  puVar42[9] = uStack_44;
                  uVar36 = local_8c;
                  goto LAB_0198f4bc;
                }
                uVar25 = (uint)local_38 >> 8 & 0xff;
                local_98 = local_30;
                local_a8 = local_2c;
                puVar37 = (uint *)((uint)local_38 >> 0x10);
              }
              goto LAB_0198f50c;
            }
            unaff_r9 = puVar37;
            if (bVar3) {
              if (bVar4) {
                if (local_144 <= local_130 &&
                    (uint)(puVar14 <= local_140) <= (uint)((int)local_144 - (int)local_130)) {
                  puVar42 = puVar14;
                  puVar33 = local_130;
                  if (local_e8 == local_88) {
                    FUN_0199800c(&local_88);
                    local_100 = local_84;
                  }
LAB_0198f43c:
                  local_80 = (uint *)((int)local_e8 + 1);
                  puVar19 = local_100 + (int)local_e8 * 6;
                  *puVar19 = (uint)local_140;
                  puVar19[1] = (uint)local_144;
                  puVar19[2] = (uint)puVar42;
                  puVar19[3] = (uint)puVar33;
                  puVar19[4] = uVar36;
                  local_e8 = local_80;
                  goto LAB_0198f464;
                }
              }
              else {
                if (bVar5) {
                  puVar42 = (uint *)((int)local_140 + (int)local_14c);
                  puVar33 = (uint *)((byte *)((int)local_144 + (int)local_150) +
                                    CARRY4((uint)local_140,(uint)local_14c));
                  if (local_144 <= puVar33 &&
                      (uint)(puVar42 <= local_140) <= (uint)((int)local_144 - (int)puVar33)) {
                    if (local_e8 == local_88) {
                      FUN_0199800c(&local_88);
                      local_100 = local_84;
                    }
                    goto LAB_0198f43c;
                  }
                }
LAB_0198f4bc:
                unaff_r9 = puVar37;
              }
            }
          }
        }
        else {
          local_7c = puVar26;
          uVar43 = FUN_0134bd24();
          FUN_01995c3c(&local_68,&local_7c,*(undefined4 *)(local_74 + 0x20),(int)uVar43,
                       (int)((ulonglong)uVar43 >> 0x20));
          if ((char)local_68 != 'R') {
            local_9c = local_64;
            puVar37 = (uint *)((uint)local_68 >> 0x10);
            local_98 = local_60;
            local_a8 = local_5c;
            uVar25 = ((uint)local_68 & 0xffff) >> 8;
            local_a4 = (uint)local_68 & 0xff;
            goto LAB_0198f50c;
          }
        }
      }
    } while (local_78 != 0);
    if (&DAT_00000001 < local_e8) {
      if (&DAT_00000014 < local_e8) {
        FUN_01997f08();
      }
      else {
        iVar32 = 0;
        puVar6 = local_84 + 6;
        puVar31 = local_84;
        do {
          puVar34 = puVar6;
          uVar36 = *puVar34;
          uVar38 = puVar34[1];
          if (uVar38 <= puVar31[1] && (uint)(*puVar31 <= uVar36) <= uVar38 - puVar31[1]) {
            local_68 = (int *)puVar31[8];
            local_64 = (uint *)puVar31[9];
            local_60 = (uint *)puVar31[10];
            local_5c = (uint *)puVar31[0xb];
            iVar10 = iVar32;
            puVar6 = puVar34;
            do {
              puVar31 = puVar6 + -6;
              *puVar6 = *puVar31;
              puVar6[1] = puVar6[-5];
              puVar6[2] = puVar6[-4];
              puVar6[3] = puVar6[-3];
              puVar6[4] = puVar6[-2];
              puVar6[5] = puVar6[-1];
              if (iVar10 == 0) {
                puVar31 = local_84;
                break;
              }
              puVar24 = puVar6 + -0xc;
              puVar7 = puVar6 + -0xb;
              iVar10 = iVar10 + 0x18;
              puVar6 = puVar31;
            } while (uVar38 <= *puVar7 && (uint)(*puVar24 <= uVar36) <= uVar38 - *puVar7);
            *puVar31 = uVar36;
            puVar31[1] = uVar38;
            puVar31[2] = (uint)local_68;
            puVar31[3] = (uint)local_64;
            puVar31[4] = (uint)local_60;
            puVar31[5] = (uint)local_5c;
          }
          iVar32 = iVar32 + -0x18;
          puVar6 = puVar34 + 6;
          puVar31 = puVar34;
        } while (puVar34 + 6 != local_84 + (int)local_e8 * 6);
      }
    }
  }
  local_a4 = local_8c;
  iVar32 = local_90;
  if (local_8c < local_94) {
    if (local_8c == 0) {
      thunk_FUN_01be4678(local_90);
      iVar32 = 8;
    }
    else {
      iVar10 = local_8c * 0x28;
      iVar32 = FUN_01298554(local_90,local_94 * 0x28,8,iVar10);
      if (iVar32 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(8,iVar10);
      }
    }
  }
  local_98 = local_80;
  if (local_80 < local_88) {
    if (local_80 == (uint *)0x0) {
      thunk_FUN_01be4678(local_84);
      local_9c = (uint *)&DAT_00000008;
    }
    else {
      iVar10 = (int)local_80 * 0x18;
      local_9c = (uint *)FUN_01298554(local_84,(int)local_88 * 0x18,8,iVar10);
      if (local_9c == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(8,iVar10);
      }
    }
  }
  else {
    local_9c = local_84;
  }
  uVar25 = (local_a4 & 0xffff) >> 8;
  puVar37 = (uint *)(local_a4 >> 0x10);
  local_a4 = local_a4 & 0xff;
  local_a8 = (uint *)0x0;
  iVar10 = 0;
LAB_0198f6d4:
  local_58 = (uint *)(uVar25 << 8 | (int)puVar37 << 0x10 | local_a4);
  if (*param_1 != 2) {
    local_50 = local_98;
    local_54 = local_9c;
    local_68 = param_1;
    local_60 = (uint *)iVar10;
    local_5c = (uint *)iVar32;
    local_4c = local_a8;
    FUN_019981bc(&local_68);
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_00526af1,0x1d,&DAT_01d27e44);
  }
  param_1[2] = (int)local_58;
  param_1[3] = (int)local_9c;
  param_1[4] = (int)local_98;
  *param_1 = iVar10;
  param_1[1] = iVar32;
  param_1[5] = (int)local_a8;
  return;
}

