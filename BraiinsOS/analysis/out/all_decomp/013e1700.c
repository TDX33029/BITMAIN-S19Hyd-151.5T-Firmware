// FUN_013e1700 @ 013e1700 size=5120 calls_out=32 calls_in=1
// strings: 

void FUN_013e1700(uint *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  code *pcVar2;
  undefined1 uVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint *puVar15;
  char *pcVar16;
  undefined *puVar17;
  byte *pbVar18;
  uint *puVar19;
  char *pcVar20;
  uint *puVar21;
  uint *puVar22;
  uint *puVar23;
  undefined4 uVar24;
  byte bVar25;
  uint *puVar26;
  uint uVar27;
  undefined4 uVar28;
  byte bVar29;
  uint *puVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  undefined4 uVar34;
  uint *puVar35;
  uint *puVar36;
  undefined4 uVar37;
  int iVar38;
  uint **ppuVar39;
  int iVar40;
  uint uVar41;
  int *piVar42;
  uint uVar43;
  bool bVar44;
  bool bVar45;
  uint local_17c;
  uint local_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  uint local_14c;
  uint *local_148;
  uint local_140;
  uint local_13c;
  uint *local_138;
  uint *local_134;
  uint *local_130;
  uint *local_12c;
  uint *local_128;
  uint local_124;
  uint local_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  undefined4 local_108;
  uint *local_104;
  uint *puStack_100;
  uint *puStack_fc;
  uint *puStack_f8;
  undefined4 local_f4;
  uint *local_f0;
  uint *puStack_ec;
  uint *puStack_e8;
  uint *puStack_e4;
  uint *local_e0;
  uint local_dc;
  uint local_d8;
  uint *local_d0;
  uint *local_cc;
  uint *local_c8;
  uint *local_c0;
  uint *local_bc;
  uint *local_b8;
  int local_b0;
  int local_ac;
  uint local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  uint *local_98;
  uint *local_94;
  uint *local_90;
  uint *local_8c;
  uint *local_88;
  uint *local_84;
  uint *local_80;
  uint *local_7c;
  uint *puStack_78;
  uint uStack_74;
  undefined4 local_70;
  int local_68;
  int local_64;
  uint local_60;
  uint *local_5c;
  uint *puStack_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  uint uStack_48;
  uint *local_40;
  uint *local_3c;
  uint *local_38;
  uint *local_34;
  uint *puStack_30;
  uint local_2c;
  uint local_28;
  
  puVar35 = (uint *)param_2[2];
  puVar26 = (uint *)0x0;
  if (puVar35 == (uint *)0x0) {
    puVar9 = (uint *)&DAT_00000004;
    local_130 = (uint *)0x0;
  }
  else {
    puVar9 = (uint *)thunk_FUN_016d4a50((int)puVar35 * 0x1c);
    if (puVar9 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,(int)puVar35 * 0x1c);
    }
    local_130 = puVar35;
  }
  local_98 = (uint *)param_2[1];
  puVar30 = local_98 + (int)puVar35 * 7;
  local_90 = (uint *)*param_2;
  local_128 = (uint *)0x0;
  local_12c = puVar9;
  local_94 = local_98;
  local_8c = puVar30;
  if (puVar35 != (uint *)0x0) {
    local_138 = &local_120;
    puVar23 = (uint *)0x0;
    puVar35 = local_98;
    local_94 = local_98;
    do {
      puVar36 = puVar35 + 7;
      puVar26 = puVar23;
      if (*puVar35 == 8) goto LAB_013e1930;
      local_120 = puVar35[1];
      uStack_11c = puVar35[2];
      uStack_118 = puVar35[3];
      uStack_114 = puVar35[4];
      uStack_110 = puVar35[5];
      uStack_10c = puVar35[6];
      local_124 = *puVar35;
      FUN_013e2e04(&local_40,&local_124);
      uVar32 = local_28;
      puVar26 = local_34;
      puVar35 = local_38;
      local_88 = local_40;
      local_84 = local_3c;
      local_80 = local_38;
      local_7c = local_34;
      puStack_78 = puStack_30;
      uStack_74 = local_2c;
      if (local_40 == (uint *)&DAT_00000007) {
        local_38 = local_3c;
        local_40 = puVar35;
        local_3c = puVar35;
        if ((uint *)((int)local_130 - (int)puVar23) < local_34) {
          local_34 = puVar35 + (int)local_34 * 7;
          FUN_01401968(&local_130,puVar23,puVar26,4,0x1c);
          puVar23 = local_128;
          puVar9 = local_12c;
        }
        else {
          local_34 = puVar35 + (int)local_34 * 7;
        }
        FUN_016dd1aa(puVar9 + (int)puVar23 * 7,puVar35,(int)puVar26 * 0x1c);
        puVar26 = (uint *)((int)puVar23 + (int)puVar26);
        local_34 = puVar35;
        local_128 = puVar26;
        FUN_013fc820(&local_40);
        thunk_FUN_016d3fb4(uVar32);
        if (local_88 != (uint *)&DAT_00000007) {
          FUN_013e0a18(&local_88);
        }
      }
      else {
        if (puVar23 == local_130) {
          FUN_01401574(&local_130);
          puVar9 = local_12c;
        }
        puVar26 = (uint *)((int)puVar23 + 1);
        puVar35 = puVar9 + (int)puVar23 * 7;
        *puVar35 = (uint)local_40;
        puVar35[1] = (uint)local_3c;
        puVar35[2] = (uint)local_38;
        puVar35[3] = (uint)local_34;
        puVar35[4] = (uint)puStack_30;
        puVar35[5] = local_2c;
        puVar35[6] = local_28;
        local_128 = puVar26;
      }
      puVar23 = puVar26;
      puVar35 = puVar36;
    } while (puVar36 != puVar30);
    puVar36 = puVar30;
LAB_013e1930:
    local_94 = puVar36;
  }
  FUN_013fc820(&local_98);
  if (puVar26 == (uint *)0x1) {
    local_128 = (uint *)0x0;
    uVar32 = local_12c[1];
    uVar10 = local_12c[2];
    *param_1 = *local_12c;
    param_1[1] = uVar32;
    param_1[2] = uVar10;
    uVar32 = local_12c[4];
    uVar10 = local_12c[5];
    uVar41 = local_12c[6];
    param_1[3] = local_12c[3];
    param_1[4] = uVar32;
    param_1[5] = uVar10;
    param_1[6] = uVar41;
    goto LAB_013e22a8;
  }
  if (puVar26 == (uint *)0x0) {
    bVar45 = true;
    local_80 = (uint *)0x0;
    local_84 = (uint *)&DAT_00000001;
    local_88 = (uint *)0x0;
    FUN_013f9ed8((uint)&local_40 | 4,&local_88);
    bVar44 = local_34 == (uint *)0x0;
    local_40 = (uint *)&DAT_00000001;
    bVar7 = !bVar44;
    puVar26 = local_38;
    if (bVar7) {
      puVar26 = (uint *)((int)local_38 + (int)local_34 * 2);
      bVar44 = puVar26 == (uint *)&SUB_00000002;
    }
    uVar32 = (uint)bVar7;
    if (bVar44) {
      puVar26 = (uint *)thunk_FUN_016d4a50(0x34);
    }
    else {
      uVar32 = 1;
      bVar45 = (uint)(int)*(char *)((int)puVar26 + -1) < 0x80000000;
      puVar26 = (uint *)thunk_FUN_016d4a50(0x34);
    }
    if (puVar26 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x34);
    }
    *puVar26 = uVar32;
    puVar26[1] = 1;
    puVar26[2] = uVar32;
    puVar26[3] = 1;
    puVar26[4] = 1;
    puVar26[5] = 0;
    puVar26[6] = 0;
    puVar26[7] = 0;
    puVar26[8] = 0;
    puVar26[9] = 0;
    puVar26[10] = 0;
    puVar26[0xb] = 0;
    *(undefined2 *)((int)puVar26 + 0x31) = 0;
    *(bool *)(puVar26 + 0xc) = bVar45;
    param_1[1] = (uint)local_40;
    param_1[2] = (uint)local_3c;
    param_1[3] = (uint)local_38;
    param_1[4] = (uint)local_34;
    param_1[5] = (uint)puStack_30;
    param_1[6] = (uint)puVar26;
    *param_1 = 2;
    goto LAB_013e22a8;
  }
  iVar31 = 0;
  puVar30 = local_12c + (int)puVar26 * 7;
  puVar9 = (uint *)0x4;
  local_38 = (uint *)0x0;
  local_3c = (uint *)0x4;
  local_40 = (uint *)0x0;
  puVar26 = local_12c;
  puVar35 = (uint *)0xffffffff;
  do {
    if (*puVar26 != 1) {
LAB_013e1af8:
      if (local_40 != (uint *)0x0) {
        thunk_FUN_016d3fb4(local_3c);
      }
      goto LAB_013e1b50;
    }
    uVar32 = puVar26[2];
    FUN_013f87b4(&local_88,puVar26[1],uVar32);
    puVar23 = local_84;
    if (((char)local_88 == '\x02') || (((uint)local_88 & 1) != 0)) goto LAB_013e1af8;
    uVar10 = 1;
    if ((uint *)0x7f < local_84) {
      uVar10 = 2;
    }
    if (((uint *)0x7ff < local_84) && (uVar10 = 4, local_84 < (uint *)0x10000)) {
      uVar10 = 3;
    }
    if (uVar32 != uVar10) goto LAB_013e1af8;
    if ((uint *)((int)puVar35 + 1) == local_40) {
      FUN_014014b4(&local_40);
      puVar9 = local_3c;
    }
    puVar22 = local_3c;
    puVar36 = local_40;
    *(uint **)((int)puVar9 + iVar31) = puVar23;
    puVar23 = (uint *)((int)puVar35 + 2);
    puVar26 = puVar26 + 7;
    iVar31 = iVar31 + 4;
    puVar35 = (uint *)((int)puVar35 + 1);
    local_38 = puVar23;
  } while (puVar26 != puVar30);
  if (local_40 != (uint *)0x80000000) {
    uVar32 = (int)puVar23 * 8;
    uVar11 = 0;
    if (0x7ffffffc < uVar32) {
LAB_013e1ec0:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar11,uVar32);
    }
    puVar26 = (uint *)0x0;
    if (uVar32 == 0) {
      puVar35 = (uint *)&DAT_00000004;
      puVar23 = (uint *)0x0;
    }
    else {
      puVar35 = (uint *)thunk_FUN_016d4a50(uVar32);
      if (puVar35 == (uint *)0x0) {
        uVar11 = 4;
        goto LAB_013e1ec0;
      }
    }
    local_38 = (uint *)0x0;
    do {
      uVar32 = *(uint *)((int)puVar22 + (int)puVar26 * 4);
      iVar31 = iVar31 + -4;
      iVar40 = (int)puVar26 * 2;
      puVar35[iVar40] = uVar32;
      puVar26 = (uint *)((int)puVar26 + 1);
      (puVar35 + iVar40)[1] = uVar32;
    } while (iVar31 != 0);
    local_40 = puVar23;
    local_3c = puVar35;
    if (puVar36 != (uint *)0x0) {
      thunk_FUN_016d3fb4(puVar22);
    }
    local_84 = local_3c;
    local_88 = local_40;
    local_7c = (uint *)((uint)local_7c & 0xffffff00);
    local_80 = puVar26;
    FUN_013f9548(&local_88);
    local_40 = (uint *)0x0;
    local_3c = local_88;
    local_38 = local_84;
    local_34 = local_80;
    puStack_30 = local_7c;
    FUN_013e2f08(param_1,&local_40);
    goto LAB_013e22a8;
  }
LAB_013e1b50:
  puVar26 = (uint *)0x0;
  puVar35 = (uint *)0x1;
  local_38 = (uint *)0x0;
  local_3c = (uint *)0x1;
  local_40 = (uint *)0x0;
  if (local_128 == (uint *)0x0) {
    local_90 = (uint *)0x0;
    local_94 = (uint *)&DAT_00000001;
    local_98 = (uint *)0x0;
  }
  else {
    puVar30 = local_12c + (int)local_128 * 7;
    puVar9 = local_12c;
    do {
      puVar26 = local_38;
      if ((*puVar9 != 1) || (puVar9[2] != 1)) {
        if (local_40 != (uint *)0x0) {
          thunk_FUN_016d3fb4();
        }
        goto LAB_013e1c50;
      }
      uVar3 = *(undefined1 *)puVar9[1];
      if (local_38 == local_40) {
        FUN_006029c0(&local_40);
        puVar35 = local_3c;
      }
      puVar36 = local_3c;
      puVar23 = local_40;
      *(undefined1 *)((int)puVar35 + (int)puVar26) = uVar3;
      puVar26 = (uint *)((int)puVar26 + 1);
      puVar9 = puVar9 + 7;
      local_38 = puVar26;
    } while (puVar9 != puVar30);
    if (local_40 == (uint *)&DAT_80000000) {
LAB_013e1c50:
      puVar35 = local_128;
      puVar26 = local_12c;
      local_38 = (uint *)0x0;
      local_3c = (uint *)&DAT_00000004;
      local_40 = (uint *)0x0;
      FUN_013f9dd4(&local_88,&local_40);
      if (puVar35 != (uint *)0x0) {
        puVar9 = puVar26;
        do {
          puVar30 = puVar9 + 7;
          if (*puVar9 != 2) {
LAB_013e1f18:
            if (local_88 != (uint *)0x0) {
              thunk_FUN_016d3fb4(local_84);
            }
            local_38 = (uint *)0x0;
            local_3c = (uint *)&DAT_00000001;
            local_40 = (uint *)0x0;
            FUN_013f9ed8(&local_88,&local_40);
            puVar9 = puVar26;
            goto LAB_013e1f68;
          }
          if (puVar9[1] == 1) {
            uVar32 = puVar9[4];
            uVar10 = puVar9[3];
            bVar45 = uVar32 == 0;
            if (!bVar45) {
              puVar9 = (uint *)(uVar10 + uVar32 * 2);
              bVar45 = puVar9 == (uint *)&SUB_00000002;
            }
            if ((bVar45) || (-1 < *(char *)((int)puVar9 + -1))) {
              puVar9 = (uint *)(uVar32 & 0x7fffffff);
              uVar11 = 0;
              if ((uint *)0x1fffffff < puVar9) {
LAB_013e1ecc:
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(uVar11,local_138);
              }
              puVar23 = (uint *)(uVar32 * 8);
              if ((uint *)0x7ffffffc < puVar23) goto LAB_013e1ecc;
              puVar36 = (uint *)0x0;
              if (puVar23 == (uint *)0x0) {
                local_138 = (uint *)&DAT_00000004;
                puVar22 = (uint *)0x0;
              }
              else {
                local_138 = (uint *)thunk_FUN_016d4a50(puVar23,local_138);
                puVar22 = puVar9;
                if (local_138 == (uint *)0x0) {
                  uVar11 = 4;
                  local_138 = puVar23;
                  goto LAB_013e1ecc;
                }
              }
              local_40 = puVar22;
              if ((uVar32 & 0x7fffffff) != 0) {
                puVar23 = local_138 + 1;
                pbVar18 = (byte *)(uVar10 + 1);
                puVar36 = (uint *)0x0;
                do {
                  bVar25 = *pbVar18;
                  puVar36 = (uint *)((int)puVar36 + 1);
                  pbVar1 = pbVar18 + -1;
                  pbVar18 = pbVar18 + 2;
                  puVar23[-1] = (uint)*pbVar1;
                  *puVar23 = (uint)bVar25;
                  puVar23 = puVar23 + 2;
                } while (puVar9 != puVar36);
              }
              local_34._1_3_ = (undefined3)((uint)local_34 >> 8);
              local_34 = (uint *)CONCAT31(local_34._1_3_,puVar36 == (uint *)0x0);
              local_3c = local_138;
              local_38 = puVar36;
              FUN_013f9548(&local_40);
              puVar22 = local_34;
              puVar36 = local_38;
              puVar23 = local_3c;
              puVar9 = local_40;
              if (local_40 != (uint *)&DAT_80000000) {
                if (local_38 != (uint *)0x0) {
                  if (local_80 == local_38) {
                    puVar15 = local_84 + 1;
                    puVar19 = local_3c + 1;
                    puVar21 = local_38;
                    do {
                      uVar10 = puVar19[-1];
                      uVar32 = puVar15[-1];
                      bVar45 = uVar32 != uVar10;
                      if (!bVar45) {
                        uVar10 = *puVar19;
                        uVar32 = *puVar15;
                      }
                      if (bVar45 || uVar32 != uVar10) goto LAB_013e1dfc;
                      puVar15 = puVar15 + 2;
                      puVar19 = puVar19 + 2;
                      puVar21 = (uint *)((int)puVar21 + -1);
                    } while (puVar21 != (uint *)0x0);
                  }
                  else {
LAB_013e1dfc:
                    if ((uint *)((int)local_88 - (int)local_80) < local_38) {
                      FUN_01401968(&local_88,local_80,local_38,4,8);
                    }
                    puVar21 = local_80;
                    FUN_016dd1aa(local_84 + (int)local_80 * 2,puVar23,(int)puVar36 << 3);
                    local_80 = (uint *)((int)puVar21 + (int)puVar36);
                    FUN_013f9548(&local_88);
                    local_7c = (uint *)CONCAT31(local_7c._1_3_,(byte)local_7c & (byte)puVar22);
                  }
                }
                if (puVar9 != (uint *)0x0) {
                  thunk_FUN_016d3fb4(puVar23);
                }
                goto LAB_013e1e4c;
              }
            }
            goto LAB_013e1f18;
          }
          FUN_013fa038(&local_88,puVar9 + 2);
LAB_013e1e4c:
          puVar9 = puVar30;
        } while (puVar30 != puVar26 + (int)puVar35 * 7);
      }
      local_104 = local_88;
      puStack_100 = local_84;
      puStack_fc = local_80;
      puStack_f8 = local_7c;
      puVar13 = &local_108;
      local_108 = 0;
      goto LAB_013e1ea0;
    }
    iVar31 = (int)puVar26 * 2;
    uVar11 = 0;
    if (iVar31 < 0) {
LAB_013e1ee4:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar11,iVar31);
    }
    puVar35 = (uint *)thunk_FUN_016d4a50(iVar31);
    if (puVar35 == (uint *)0x0) {
      uVar11 = 1;
      goto LAB_013e1ee4;
    }
    puVar9 = (uint *)0x0;
    local_90 = (uint *)0x0;
    do {
      uVar3 = *(undefined1 *)((int)puVar36 + (int)puVar9);
      puVar12 = (undefined1 *)((int)puVar35 + (int)puVar9 * 2);
      *puVar12 = uVar3;
      puVar9 = (uint *)((int)puVar9 + 1);
      puVar12[1] = uVar3;
    } while (puVar26 != puVar9);
    local_98 = puVar26;
    local_94 = puVar35;
    if (puVar23 != (uint *)0x0) {
      thunk_FUN_016d3fb4(puVar36);
    }
  }
  local_88 = local_98;
  local_84 = local_94;
  local_7c = (uint *)CONCAT31(local_7c._1_3_,puVar26 == (uint *)0x0);
  local_80 = puVar26;
  FUN_013f9740(&local_88);
  local_3c = local_88;
  local_38 = local_84;
  local_34 = local_80;
  puStack_30 = local_7c;
  local_40 = (uint *)&DAT_00000001;
  FUN_013e2f08(param_1,&local_40);
  goto LAB_013e22a8;
LAB_013e26c0:
  do {
    if (bVar45) {
      if (puVar35 == local_134) goto LAB_013e27ac;
      uVar43 = *puVar35;
      puVar9 = puVar35;
    }
    else {
      if (((uint)((int)local_134 - (int)puVar35) >> 2) * -0x49249249 <= uVar10) {
LAB_013e27ac:
        local_90 = local_c0;
        piVar42 = (int *)((uint)&local_40 | 4);
        local_a8 = 0;
        local_b0 = 0;
        iVar40 = 0;
        iVar31 = 0;
        local_9c = 0;
        local_a4 = 0;
        puVar13 = (undefined4 *)((uint)&local_88 | 4);
        local_ac = 4;
        local_13c = 4;
        local_a0 = 4;
        local_98 = puVar26;
        local_8c = local_134;
        goto LAB_013e2838;
      }
      uVar43 = puVar35[uVar10 * 7];
      puVar9 = puVar35 + uVar10 * 7;
    }
    ppuVar39 = &local_c0;
    if (uVar43 != 6) break;
    ppuVar39 = &local_c0;
    puVar35 = puVar9 + 7;
    uVar43 = puVar9[3];
    uVar10 = uVar32;
    if (uVar43 < uVar32) {
      uVar10 = uVar43;
    }
    if (uVar43 == 0) break;
    uVar33 = puVar9[2];
    uVar27 = 0;
    uVar43 = uVar41;
    do {
      iVar31 = FUN_013e3e74(uVar43,uVar33);
      if (iVar31 == 0) {
        uVar10 = uVar27;
        if (uVar32 < uVar27) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar27,uVar32,&DAT_01894fb8);
        }
        break;
      }
      uVar27 = uVar27 + 1;
      uVar33 = uVar33 + 0x1c;
      uVar43 = uVar43 + 0x1c;
    } while (uVar10 != uVar27);
    uVar32 = uVar10;
    bVar45 = true;
    uVar10 = 0;
  } while (uVar32 != 0);
LAB_013e2180:
  local_d0 = *ppuVar39;
  local_cc = ppuVar39[1];
  local_c8 = ppuVar39[2];
  goto LAB_013e218c;
  while( true ) {
    puVar9 = puVar14 + 7;
    uVar11 = puVar14[2];
    uVar24 = puVar14[3];
    uVar28 = puVar14[4];
    uVar34 = puVar14[5];
    uVar37 = puVar14[6];
    *puVar13 = puVar14[1];
    puVar13[1] = uVar11;
    puVar13[2] = uVar24;
    puVar13[3] = uVar28;
    puVar13[4] = uVar34;
    puVar13[5] = uVar37;
    local_3c = local_84;
    local_38 = local_80;
    local_34 = local_7c;
    puStack_30 = puStack_78;
    local_2c = uStack_74;
    local_88 = (uint *)0x0;
    local_40 = puVar35;
    FUN_013e0514();
    FUN_013e0a18(&local_88);
    thunk_FUN_016d3fb4(local_70);
    if (local_40 != (uint *)&DAT_00000006) {
      local_94 = puVar9;
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_01894fa8);
    }
    local_68 = *piVar42;
    local_64 = piVar42[1];
    local_60 = piVar42[2];
    if (local_60 < uVar32) {
      local_94 = puVar9;
      FUN_0060297c(uVar32,local_60,&DAT_01894f98);
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xfdee,0x13e2ac4);
      (*pcVar2)();
    }
    iVar38 = local_60 - uVar32;
    FUN_01401878(&local_40,iVar38,4,0x1c);
    iVar8 = local_64;
    if (local_40 == (uint *)&DAT_00000001) {
      local_94 = puVar9;
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(local_3c,local_38);
    }
    local_5c = local_3c;
    puStack_58 = local_38;
    local_60 = uVar32;
    iStack_54 = iVar38;
    FUN_016dd1aa(local_38,local_64 + uVar32 * 0x1c,iVar38 * 0x1c);
    FUN_013e317c(&local_40,&local_5c);
    if (iVar31 == local_a4) {
      FUN_01401574(&local_a4);
      local_13c = local_a0;
    }
    iVar31 = iVar31 + 1;
    puVar14 = (undefined4 *)(local_13c + iVar40);
    *puVar14 = local_40;
    puVar14[1] = local_3c;
    puVar14[2] = local_38;
    puVar14[3] = local_34;
    puVar14[4] = puStack_30;
    puVar14[5] = local_2c;
    puVar14[6] = local_28;
    local_9c = iVar31;
    if (local_a8 == 0) {
      FUN_013e0b9c(&local_b0);
      local_b0 = local_68;
      local_ac = local_64;
      local_a8 = local_60;
    }
    else {
      FUN_013e75f4(&local_68);
      if (local_68 != 0) {
        thunk_FUN_016d3fb4(iVar8);
      }
    }
    iVar40 = iVar40 + 0x1c;
    if (puVar9 == local_134) break;
LAB_013e2838:
    puVar14 = (undefined4 *)((int)puVar26 + iVar40);
    puVar35 = (uint *)*puVar14;
    if (puVar35 == (uint *)&DAT_00000008) {
      local_134 = (uint *)((int)puVar26 + iVar40 + 0x1c);
      break;
    }
  }
  local_94 = local_134;
  FUN_013fc820(&local_98);
  local_50 = local_b0;
  iStack_4c = local_ac;
  uStack_48 = local_a8;
  FUN_013e1700(&local_40,&local_a4);
  FUN_013e3118(&local_50,&local_40);
  FUN_013e317c(&local_40,&local_50);
  local_d0 = local_3c;
  local_cc = local_38;
  local_c8 = local_34;
  local_e0 = puStack_30;
  local_dc = local_2c;
  local_d8 = local_28;
  if (local_40 != (uint *)&DAT_00000008) {
    *param_1 = (uint)local_40;
    param_1[1] = (uint)local_3c;
    param_1[2] = (uint)local_38;
    param_1[3] = (uint)local_34;
    param_1[4] = (uint)puStack_30;
    param_1[5] = local_2c;
    param_1[6] = local_28;
    return;
  }
LAB_013e218c:
  local_128 = local_c8;
  local_12c = local_cc;
  local_130 = local_d0;
  if (local_c8 == (uint *)0x0) {
    bVar25 = 1;
    local_138 = (uint *)0x0;
    bVar29 = 1;
    uVar10 = 0;
    local_13c = 0;
    uVar32 = 0;
    local_14c = 0;
    uVar41 = 0;
    local_168 = 0;
    local_16c = 0;
    local_170 = 0;
  }
  else {
    puVar26 = (uint *)local_cc[6];
    local_170 = *puVar26;
    local_178 = puVar26[1];
    local_174 = puVar26[3];
    local_17c = puVar26[5];
    local_14c = puVar26[6];
    local_13c = puVar26[7];
    uVar43 = puVar26[2];
    local_168 = puVar26[4];
    bVar25 = *(byte *)((int)puVar26 + 0x31);
    uVar41 = puVar26[8];
    uVar32 = puVar26[9];
    uVar10 = puVar26[10];
    bVar29 = (byte)puVar26[0xc];
    local_138 = (uint *)puVar26[0xb];
    local_16c = uVar43;
    if (local_c8 != (uint *)&DAT_00000001) {
      local_140 = uVar43 ^ 1;
      iVar31 = (int)local_c8 * 0x1c + -0x1c;
      uVar27 = local_170 ^ 1;
      local_164 = local_170;
      local_148 = local_cc + 0xd;
      local_134 = (uint *)local_168;
      do {
        bVar6 = bVar29 & 1;
        bVar29 = 0;
        piVar42 = (int *)*local_148;
        if (bVar6 != 0) {
          bVar29 = *(byte *)(piVar42 + 0xc);
        }
        bVar45 = CARRY4((uint)local_138,piVar42[0xb]);
        local_138 = (uint *)((int)local_138 + piVar42[0xb]);
        if (bVar45) {
          local_138 = (uint *)0xffffffff;
        }
        if (((uint)local_134 & 1) == 0) {
          local_134 = (uint *)0x0;
          if (piVar42[4] != 0) goto LAB_013e2484;
        }
        else if ((piVar42[4] == 0) || (local_134 = (uint *)0x1, local_17c != piVar42[5])) {
LAB_013e2484:
          local_168 = 0;
          local_134 = (uint *)0x0;
        }
        bVar6 = bVar25 & 1;
        bVar25 = 0;
        if (bVar6 != 0) {
          bVar25 = *(byte *)((int)piVar42 + 0x31);
        }
        if ((uVar27 & 1) == 0) {
          if (*piVar42 == 0) {
            uVar27 = 1;
            local_170 = 0;
            local_164 = 0;
          }
          else {
            uVar27 = 0;
            if ((local_164 & local_178 <= (uint)piVar42[1]) == 0) {
              local_170 = 1;
              local_178 = piVar42[1];
            }
            local_164 = 1;
          }
        }
        else {
          uVar27 = 1;
        }
        if ((local_140 & 1) == 0) {
          if (piVar42[2] == 1) {
            if ((uVar43 & (uint)piVar42[3] <= local_174) == 0) {
              local_16c = 1;
              local_174 = piVar42[3];
            }
            local_140 = 0;
            uVar43 = 1;
          }
          else {
            local_16c = 0;
            local_140 = 1;
            uVar43 = 0;
          }
        }
        else {
          local_140 = 1;
        }
        iVar31 = iVar31 + -0x1c;
        uVar32 = piVar42[9] | uVar32;
        local_14c = piVar42[6] | local_14c;
        uVar41 = piVar42[8] & uVar41;
        uVar10 = piVar42[10] | uVar10;
        local_13c = piVar42[7] & local_13c;
        local_148 = local_148 + 7;
      } while (iVar31 != 0);
      bVar25 = bVar25 & 1;
      bVar29 = bVar29 & 1;
    }
  }
  puVar26 = (uint *)thunk_FUN_016d4a50(0x34);
  if (puVar26 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x34);
  }
  *(undefined1 *)((int)puVar26 + 0x31) = 0;
  puVar26[0xb] = (uint)local_138;
  *puVar26 = local_170;
  puVar26[1] = local_178;
  puVar26[2] = local_16c;
  puVar26[3] = local_174;
  puVar26[4] = local_168;
  puVar26[5] = local_17c;
  puVar26[6] = local_14c;
  puVar26[7] = local_13c;
  *(byte *)((int)puVar26 + 0x32) = bVar25;
  *(byte *)(puVar26 + 0xc) = bVar29;
  puVar26[8] = uVar41;
  puVar26[9] = uVar32;
  puVar26[10] = uVar10;
  param_1[6] = (uint)puVar26;
  *param_1 = 7;
  param_1[1] = (uint)local_130;
  param_1[2] = (uint)local_12c;
  param_1[3] = (uint)local_128;
  return;
LAB_013e1f68:
  do {
    puVar30 = puVar9 + 7;
    if (*puVar9 != 2) {
LAB_013e212c:
      if (local_88 != (uint *)0x0) {
        thunk_FUN_016d3fb4(local_84);
      }
      puVar26 = local_12c;
      ppuVar39 = &local_130;
      local_b8 = local_128;
      local_bc = local_12c;
      local_c0 = local_130;
      if (((local_128 < (uint *)0x2) || (*local_12c != 6)) || (uVar32 = local_12c[3], uVar32 == 0))
      goto LAB_013e2180;
      uVar41 = local_12c[2];
      bVar45 = false;
      local_134 = local_12c + (int)local_128 * 7;
      uVar10 = 1;
      puVar35 = local_12c;
      goto LAB_013e26c0;
    }
    if (puVar9[1] != 1) {
      uVar32 = puVar9[3];
      uVar10 = puVar9[4];
      bVar45 = uVar10 == 0;
      if (!bVar45) {
        puVar9 = (uint *)(uVar32 + uVar10 * 8);
        bVar45 = puVar9 == (uint *)&DAT_00000008;
      }
      if ((bVar45) || (puVar9[-1] < 0x80)) {
        puVar9 = (uint *)(uVar10 & 0x1fffffff);
        puVar23 = (uint *)0x0;
        if (puVar9 == (uint *)0x0) {
          puVar36 = (uint *)&DAT_00000001;
          puVar22 = (uint *)0x0;
        }
        else {
          puVar36 = (uint *)thunk_FUN_016d4a50((int)puVar9 << 1);
          puVar22 = puVar9;
          if (puVar36 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,(int)puVar9 << 1);
          }
        }
        if ((uVar10 & 0x1fffffff) != 0) {
          puVar12 = (undefined1 *)((int)puVar36 + 1);
          puVar21 = (uint *)(uVar32 + 4);
          puVar23 = (uint *)0x0;
          do {
            uVar32 = puVar21[-1];
            if (0xff < uVar32) {
              puVar17 = &DAT_0189ded0;
LAB_013e266c:
                    /* WARNING: Subroutine does not return */
              FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_40,&DAT_0189dfc0,puVar17);
            }
            uVar10 = *puVar21;
            if (0xff < uVar10) {
              puVar17 = &DAT_0189dee0;
              goto LAB_013e266c;
            }
            puVar23 = (uint *)((int)puVar23 + 1);
            puVar21 = puVar21 + 2;
            *puVar12 = (char)uVar10;
            puVar12[-1] = (char)uVar32;
            puVar12 = puVar12 + 2;
          } while (puVar9 != puVar23);
        }
        local_34._1_3_ = (undefined3)((uint)local_34 >> 8);
        local_34 = (uint *)CONCAT31(local_34._1_3_,puVar23 == (uint *)0x0);
        local_40 = puVar22;
        local_3c = puVar36;
        local_38 = puVar23;
        FUN_013f9740(&local_40);
        puVar36 = local_38;
        puVar23 = local_3c;
        puVar9 = local_40;
        if (local_40 != (uint *)&DAT_80000000) {
          if (local_38 != (uint *)0x0) {
            bVar25 = (byte)local_34;
            if (local_80 == local_38) {
              pcVar16 = (char *)((int)local_84 + 1);
              pcVar20 = (char *)((int)local_3c + 1);
              puVar22 = local_38;
              do {
                cVar4 = pcVar20[-1];
                cVar5 = pcVar16[-1];
                bVar45 = cVar5 != cVar4;
                if (!bVar45) {
                  cVar5 = *pcVar20;
                  cVar4 = *pcVar16;
                }
                if (bVar45 || cVar4 != cVar5) goto LAB_013e20b4;
                pcVar16 = pcVar16 + 2;
                pcVar20 = pcVar20 + 2;
                puVar22 = (uint *)((int)puVar22 + -1);
              } while (puVar22 != (uint *)0x0);
            }
            else {
LAB_013e20b4:
              if ((uint *)((int)local_88 - (int)local_80) < local_38) {
                FUN_01401968(&local_88,local_80,local_38,1,2);
              }
              puVar22 = local_80;
              FUN_016dd1aa((int)local_84 + (int)local_80 * 2,puVar23,(int)puVar36 << 1);
              local_80 = (uint *)((int)puVar22 + (int)puVar36);
              FUN_013f9740(&local_88);
              local_7c = (uint *)CONCAT31(local_7c._1_3_,(byte)local_7c & bVar25);
            }
          }
          if (puVar9 != (uint *)0x0) {
            thunk_FUN_016d3fb4(puVar23);
          }
          goto LAB_013e1f5c;
        }
      }
      goto LAB_013e212c;
    }
    FUN_013fa11c(&local_88,puVar9 + 2);
LAB_013e1f5c:
    puVar9 = puVar30;
  } while (puVar30 != puVar26 + (int)puVar35 * 7);
  local_f0 = local_88;
  puStack_ec = local_84;
  puStack_e8 = local_80;
  puStack_e4 = local_7c;
  puVar13 = &local_f4;
  local_f4 = 1;
LAB_013e1ea0:
  FUN_013e2f08(param_1,puVar13);
LAB_013e22a8:
  FUN_013e75f4(&local_130);
  if (local_130 == (uint *)0x0) {
    return;
  }
  thunk_FUN_016d3fb4(local_12c);
  return;
}

