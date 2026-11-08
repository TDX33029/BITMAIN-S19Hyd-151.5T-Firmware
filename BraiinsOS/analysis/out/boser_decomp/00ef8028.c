// FUN_00ef8028 @ 00ef8028 size=3408 calls_out=24 calls_in=1
// strings: Struct | delimited length exceeded | invalid tag value: 0 | invalid tag value: 0 | recursion limit reached | recursion limit reached

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int ******* FUN_00ef8028(char param_1,int *******param_2,undefined4 *param_3,int param_4)

{
  undefined1 uVar1;
  ushort uVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *******pppppppiVar7;
  int iVar8;
  int *******pppppppiVar9;
  int ******ppppppiVar10;
  char *pcVar11;
  int *******pppppppiVar12;
  undefined *puVar13;
  uint uVar14;
  uint uVar15;
  int ******ppppppiVar16;
  int *******pppppppiVar17;
  int *******pppppppiVar18;
  int *******pppppppiVar19;
  int *******pppppppiVar20;
  int ******ppppppiVar21;
  int *piVar22;
  int ******ppppppiVar23;
  ushort *puVar24;
  uint uVar25;
  int *******pppppppiVar26;
  int iVar27;
  ushort *puVar28;
  uint uVar29;
  undefined4 uVar30;
  undefined8 uVar31;
  int *******local_1a4;
  undefined4 local_17c;
  int *******local_178;
  int *******local_16c;
  int ******local_164;
  int *******local_13c;
  int ******local_12c;
  int *******local_128;
  int ******local_124;
  undefined1 *local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  int *******pppppppiStack_114;
  undefined1 *local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  int *******pppppppiStack_104;
  int ******local_100;
  int *******local_fc;
  int ******local_f8;
  int *******local_f4;
  int *******local_f0;
  undefined4 local_ec;
  int *******local_e8;
  undefined1 *local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  int *******pppppppiStack_d4;
  int *******local_d0;
  int *******pppppppiStack_cc;
  int *******pppppppiStack_c8;
  int *******pppppppiStack_c4;
  int *******pppppppiStack_c0;
  int *******local_b8;
  int *******local_b4;
  int *******pppppppiStack_b0;
  int *******pppppppiStack_ac;
  int *******pppppppiStack_a8;
  int *******local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int *******local_88;
  int *******local_84;
  int *******local_80;
  int *******local_7c;
  int *******local_78;
  int *******pppppppiStack_74;
  int *******pppppppiStack_70;
  int *******pppppppiStack_6c;
  int *******local_68;
  int local_64;
  int *******local_60;
  int local_5c;
  int *******local_58;
  int *******local_54;
  int *******local_50;
  int *******pppppppiStack_4c;
  int *******local_48;
  int *******pppppppiStack_44;
  int *******pppppppiStack_40;
  int *******pppppppiStack_3c;
  int *******local_38;
  int *******local_34;
  int *******local_30;
  int *******pppppppiStack_2c;
  
  local_100 = (int ******)CONCAT31(local_100._1_3_,param_1);
  local_b8 = (int *******)CONCAT31(local_b8._1_3_,2);
  if (param_1 == '\x02') {
    if (param_4 == 0) {
      uVar30 = 0x17;
      pcVar11 = "recursion limit reached";
LAB_00ef8cd4:
      pppppppiVar7 = (int *******)FUN_01aa0da0(pcVar11,uVar30);
      return pppppppiVar7;
    }
    piVar22 = (int *)*param_3;
    FUN_00ef78d0(&local_88,*piVar22);
    if (local_88 == (int *******)&DAT_00000001) {
LAB_00ef807c:
      pppppppiVar7 = local_84;
    }
    else {
      if ((uint)(local_80 <= *(int ********)(*piVar22 + 4)) <= (uint)-(int)local_7c) {
        uVar30 = 0x10;
        pcVar11 = "buffer underflow";
        goto LAB_00ef8cd4;
      }
      uVar25 = (int)*(int ********)(*piVar22 + 4) - (int)local_80;
      puVar4 = (undefined4 *)((uint)&local_88 | 4);
      puVar5 = (undefined4 *)((uint)&local_d0 | 4);
      puVar6 = (undefined4 *)((uint)&local_58 | 4);
      do {
        if (*(uint *)(*piVar22 + 4) <= uVar25) {
          if (*(uint *)(*piVar22 + 4) == uVar25) {
            return (int *******)0x0;
          }
          uVar30 = 0x19;
          pcVar11 = "delimited length exceeded";
          goto LAB_00ef8cd4;
        }
        FUN_00ef78d0(&local_88);
        if (local_88 == (int *******)&DAT_00000001) goto LAB_00ef807c;
        local_b8 = local_80;
        local_b4 = local_7c;
        if (local_7c != (int *******)0x0) {
          puVar13 = &DAT_00591421;
          local_58 = (int *******)&local_b8;
LAB_00ef8bc8:
          local_54 = (int *******)FUN_012fd074;
          pppppppiVar20 = (int *******)&local_88;
          pppppppiVar7 = (int *******)&local_58;
          goto LAB_00ef8bd4;
        }
        local_100 = (int ******)((uint)local_80 & 7);
        local_fc = (int *******)0x0;
        uVar14 = ((uint)local_80 ^ 4) & 7;
        if ((0xf3U >> uVar14 & 1) == 0) {
          puVar13 = &DAT_00596158;
          local_58 = &local_100;
          goto LAB_00ef8bc8;
        }
        uVar15 = (uint)local_80 >> 3;
        if (uVar15 == 0) {
          pppppppiVar7 = (int *******)FUN_01aa0da0("invalid tag value: 0",0x14);
          break;
        }
        if (uVar15 == 1) {
          local_120 = &DAT_80000005;
          local_124 = (int ******)0x0;
          local_128 = (int *******)&DAT_00000001;
          local_12c = (int ******)0x0;
          if (param_4 + -1 == 0) {
            uVar30 = 0x17;
            pcVar11 = "recursion limit reached";
          }
          else {
            FUN_00ef78d0(&local_88,*piVar22);
            if (local_88 == (int *******)&DAT_00000001) {
LAB_00ef8af8:
              pppppppiVar7 = local_84;
              goto LAB_00ef8b34;
            }
            if ((uint)-(int)local_7c < (uint)(local_80 <= *(int ********)(*piVar22 + 4))) {
              uVar14 = (int)*(int ********)(*piVar22 + 4) - (int)local_80;
              while( true ) {
                ppppppiVar10 = local_124;
                pppppppiVar7 = local_128;
                ppppppiVar21 = local_12c;
                if (*(uint *)(*piVar22 + 4) <= uVar14) break;
                FUN_00ef78d0(&local_88);
                if (local_88 == (int *******)&DAT_00000001) goto LAB_00ef8af8;
                local_b8 = local_80;
                local_b4 = local_7c;
                if (local_7c != (int *******)0x0) {
                  local_54 = (int *******)FUN_012fd074;
                  local_58 = (int *******)&local_b8;
                  FUN_01a8da38(&local_88,&DAT_00591421,&local_58);
                  pppppppiVar7 = (int *******)FUN_01aa428c(&local_88);
                  goto LAB_00ef8b30;
                }
                local_100 = (int ******)((uint)local_80 & 7);
                local_fc = (int *******)0x0;
                uVar15 = ((uint)local_80 ^ 4) & 7;
                if ((0xf3U >> uVar15 & 1) == 0) {
                  local_54 = (int *******)FUN_012fd074;
                  local_58 = &local_100;
                  FUN_00664898(&local_88,&DAT_00596158,&local_58);
                  pppppppiVar7 = (int *******)FUN_01aa428c(&local_88);
                  goto LAB_00ef8b30;
                }
                uVar29 = (uint)local_80 >> 3;
                if (uVar29 == 0) {
                  pppppppiVar7 = (int *******)FUN_01aa0da0("invalid tag value: 0",0x14);
                  goto LAB_00ef8b30;
                }
                uVar1 = (&DAT_00571008)[uVar15];
                if (uVar29 == 1) {
                  pppppppiVar7 = (int *******)FUN_01016c90(uVar1,&local_12c,param_3);
                }
                else if (uVar29 == 2) {
                  pppppppiVar7 = (int *******)FUN_00f02650(uVar1,&local_120,param_3,param_4 + -2);
                }
                else {
                  pppppppiVar7 = (int *******)FUN_00ef7b80(uVar1,uVar29,param_3,param_4 + -2);
                }
                if (pppppppiVar7 != (int *******)0x0) goto LAB_00ef8b34;
              }
              if (*(uint *)(*piVar22 + 4) == uVar14) {
                local_110 = local_120;
                uStack_10c = uStack_11c;
                uStack_108 = uStack_118;
                pppppppiStack_104 = pppppppiStack_114;
                local_13c = (int *******)*param_2;
                if (local_13c != (int *******)0x0) {
                  local_164 = param_2[1];
                  do {
                    pppppppiVar19 = local_13c + 0x2d;
                    pppppppiVar20 = (int *******)(uint)*(ushort *)((int)local_13c + 0x13a);
                    pppppppiVar26 = (int *******)&DAT_ffffffff;
                    iVar27 = (int)pppppppiVar20 * 0xc;
                    do {
                      if (iVar27 == 0) goto LAB_00ef83a0;
                      ppppppiVar23 = pppppppiVar19[2];
                      ppppppiVar16 = ppppppiVar23;
                      if (ppppppiVar10 < ppppppiVar23) {
                        ppppppiVar16 = ppppppiVar10;
                      }
                      iVar8 = FUN_01bed842(pppppppiVar7,pppppppiVar19[1],ppppppiVar16);
                      if (iVar8 == 0) {
                        iVar8 = (int)ppppppiVar10 - (int)ppppppiVar23;
                      }
                      iVar27 = iVar27 + -0xc;
                      pppppppiVar26 = (int *******)((int)pppppppiVar26 + 1);
                      pppppppiVar19 = pppppppiVar19 + 3;
                    } while ((char)((0 < iVar8) - (iVar8 < 0)) == '\x01');
                    pppppppiVar20 = pppppppiVar26;
                    if (0 < iVar8 == iVar8 < 0) {
                      FUN_019bb7e0(ppppppiVar21,pppppppiVar7);
                      goto LAB_00ef8404;
                    }
LAB_00ef83a0:
                    if (local_164 == (int ******)0x0) goto LAB_00ef83f0;
                    local_164 = (int ******)((int)local_164 + -1);
                    local_13c = (int *******)local_13c[(int)(pppppppiVar20 + 0x14)];
                  } while( true );
                }
                local_13c = (int *******)0x0;
                pppppppiVar20 = pppppppiStack_114;
LAB_00ef83f0:
                if (ppppppiVar21 == (int ******)0x80000000) {
                  local_13c = pppppppiVar7;
                  pppppppiVar26 = param_2;
LAB_00ef8404:
                  local_13c = local_13c + (int)pppppppiVar26 * 4;
                  local_88 = (int *******)*local_13c;
                  local_84 = (int *******)local_13c[1];
                  local_80 = (int *******)local_13c[2];
                  local_7c = (int *******)local_13c[3];
                  FUN_01bed864(local_13c,&local_110,0x10);
                  if (local_88 != (int *******)0x80000006) {
                    FUN_014880e4(&local_88);
                  }
                }
                else {
                  local_100 = ppppppiVar21;
                  local_ec = 0;
                  local_f0 = local_13c;
                  local_f8 = ppppppiVar10;
                  local_fc = pppppppiVar7;
                  local_e0 = local_120;
                  uStack_dc = uStack_11c;
                  uStack_d8 = uStack_118;
                  pppppppiStack_d4 = pppppppiStack_114;
                  local_f4 = param_2;
                  local_e8 = pppppppiVar20;
                  if (local_13c == (int *******)0x0) {
                    ppppppiVar21 = (int ******)FUN_01498c44();
                    *param_2 = ppppppiVar21;
                    *(undefined2 *)((int)ppppppiVar21 + 0x13a) = 0;
                    ppppppiVar21[0x2c] = (int *****)0x0;
                    param_2[1] = (int ******)0x0;
                    FUN_01488b78(&local_38,ppppppiVar21,&local_100,&local_e0);
                  }
                  else {
                    puVar24 = (ushort *)((int)local_13c + 0x13a);
                    if (*puVar24 < 0xb) {
                      FUN_010167ac(&local_88,&local_f0,&local_100,&local_e0);
                      local_34 = local_84;
                      local_38 = local_88;
                      local_30 = local_80;
                    }
                    else {
                      uVar14 = 4;
                      bVar3 = false;
                      if (&SUB_00000004 < pppppppiVar20) {
                        if (pppppppiVar20 == (int *******)&DAT_00000005) {
                          uVar14 = 5;
                        }
                        else {
                          if (pppppppiVar20 == (int *******)&DAT_00000006) {
                            uVar14 = 5;
                            pppppppiVar20 = (int *******)0x0;
                          }
                          else {
                            pppppppiVar20 = (int *******)((int)pppppppiVar20 + -7);
                            uVar14 = 6;
                          }
                          bVar3 = true;
                        }
                      }
                      local_16c = (int *******)FUN_01498c44();
                      *(undefined2 *)((int)local_16c + 0x13a) = 0;
                      local_16c[0x2c] = (int ******)0x0;
                      pppppppiVar7 = local_13c + uVar14 * 3 + 0x2d;
                      local_178 = (int *******)*pppppppiVar7;
                      uVar15 = (uint)*puVar24 + ~uVar14;
                      pppppppiVar26 = (int *******)pppppppiVar7[1];
                      pppppppiVar19 = (int *******)pppppppiVar7[2];
                      *(undefined2 *)((int)local_16c + 0x13a) = (short)uVar15;
                      pppppppiVar7 = local_13c + uVar14 * 4;
                      local_d0 = (int *******)*pppppppiVar7;
                      pppppppiStack_cc = (int *******)pppppppiVar7[1];
                      pppppppiStack_c8 = (int *******)pppppppiVar7[2];
                      pppppppiStack_c4 = (int *******)pppppppiVar7[3];
                      if (0xb < uVar15) {
                    /* WARNING: Subroutine does not return */
                        FUN_012faff4(0,uVar15,0xb,&DAT_01d2ff10);
                      }
                      FUN_01bed4e2(local_16c + 0x2d,local_13c + (uVar14 + 1) * 3 + 0x2d,uVar15 * 0xc
                                  );
                      FUN_01bed4e2(local_16c,local_13c + (uVar14 + 1) * 4,uVar15 * 0x10);
                      *puVar24 = (ushort)uVar14;
                      *puVar6 = local_d0;
                      puVar6[1] = pppppppiStack_cc;
                      puVar6[2] = pppppppiStack_c8;
                      puVar6[3] = pppppppiStack_c4;
                      local_7c = local_58;
                      local_78 = local_54;
                      pppppppiStack_74 = local_50;
                      pppppppiStack_70 = pppppppiStack_4c;
                      pppppppiStack_6c = local_48;
                      local_5c = 0;
                      local_64 = 0;
                      local_34 = (int *******)0x0;
                      local_38 = local_16c;
                      if (!bVar3) {
                        local_38 = local_13c;
                      }
                      local_68 = local_13c;
                      local_88 = local_178;
                      local_84 = pppppppiVar26;
                      local_80 = pppppppiVar19;
                      local_60 = local_16c;
                      local_30 = pppppppiVar20;
                      FUN_010167ac(&local_58,&local_38,&local_100,&local_e0);
                      pppppppiVar20 = local_54;
                      pppppppiVar7 = local_58;
                      local_1a4 = local_50;
                      local_17c = *puVar4;
                      uVar30 = puVar4[1];
                      local_b8 = local_7c;
                      local_b4 = local_78;
                      pppppppiStack_b0 = pppppppiStack_74;
                      pppppppiStack_ac = pppppppiStack_70;
                      pppppppiStack_a8 = pppppppiStack_6c;
                      if (local_178 == (int *******)&DAT_80000000) {
                        local_34 = local_54;
                        local_38 = local_58;
                        local_30 = local_50;
                      }
                      else {
                        if ((int *******)local_13c[0x2c] == (int *******)0x0) {
                          local_164 = (int ******)0x0;
                        }
                        else {
                          local_164 = (int ******)0x0;
                          pppppppiVar26 = (int *******)local_13c[0x2c];
                          pppppppiVar19 = local_16c;
                          do {
                            pppppppiVar9 = pppppppiVar26;
                            uVar14 = (uint)*(ushort *)(local_13c + 0x4e);
                            local_a0 = local_17c;
                            local_a4 = local_178;
                            local_98 = *puVar5;
                            uStack_94 = puVar5[1];
                            uStack_90 = puVar5[2];
                            uStack_8c = puVar5[3];
                            puVar24 = (ushort *)((int)pppppppiVar9 + 0x13a);
                            uVar2 = *puVar24;
                            local_d0 = local_7c;
                            pppppppiStack_cc = local_78;
                            pppppppiStack_c8 = pppppppiStack_74;
                            pppppppiStack_c4 = pppppppiStack_70;
                            pppppppiStack_c0 = pppppppiStack_6c;
                            local_b8 = local_7c;
                            local_b4 = local_78;
                            pppppppiStack_b0 = pppppppiStack_74;
                            pppppppiStack_ac = pppppppiStack_70;
                            pppppppiStack_a8 = pppppppiStack_6c;
                            uStack_9c = uVar30;
                            if (uVar2 < 0xb) {
                              local_88 = (int *******)*puVar5;
                              local_84 = (int *******)puVar5[1];
                              local_80 = (int *******)puVar5[2];
                              local_7c = (int *******)puVar5[3];
                              FUN_01016864(pppppppiVar9,uVar14,&local_a4,&local_88,pppppppiVar19);
                              goto LAB_00ef8ac0;
                            }
                            bVar3 = false;
                            uVar15 = 4;
                            if (4 < uVar14) {
                              if (uVar14 == 5) {
                                uVar15 = 5;
                              }
                              else if (uVar14 == 6) {
                                bVar3 = true;
                                uVar14 = 0;
                                uVar15 = 5;
                              }
                              else {
                                uVar14 = uVar14 - 7;
                                bVar3 = true;
                                uVar15 = 6;
                              }
                            }
                            local_16c = (int *******)FUN_01498c24();
                            puVar28 = (ushort *)((int)local_16c + 0x13a);
                            *puVar28 = 0;
                            local_16c[0x2c] = (int ******)0x0;
                            pppppppiVar17 = pppppppiVar9 + uVar15 * 3 + 0x2d;
                            pppppppiVar26 = (int *******)*pppppppiVar17;
                            uVar29 = (uint)*puVar24 + ~uVar15;
                            pppppppiVar12 = (int *******)pppppppiVar17[1];
                            pppppppiVar18 = (int *******)pppppppiVar17[2];
                            pppppppiVar17 = pppppppiVar9 + uVar15 * 4;
                            *puVar28 = (ushort)uVar29;
                            local_38 = (int *******)*pppppppiVar17;
                            local_34 = (int *******)pppppppiVar17[1];
                            local_30 = (int *******)pppppppiVar17[2];
                            pppppppiStack_2c = (int *******)pppppppiVar17[3];
                            if (0xb < uVar29) {
                    /* WARNING: Subroutine does not return */
                              FUN_012faff4(0,uVar29,0xb,&DAT_01d2ff10);
                            }
                            FUN_01bed4e2(local_16c + 0x2d,pppppppiVar9 + (uVar15 + 1) * 3 + 0x2d,
                                         uVar29 * 0xc);
                            FUN_01bed4e2(local_16c,pppppppiVar9 + (uVar15 + 1) * 4,uVar29 * 0x10);
                            *puVar24 = (ushort)uVar15;
                            local_48 = local_38;
                            pppppppiStack_44 = local_34;
                            pppppppiStack_40 = local_30;
                            pppppppiStack_3c = pppppppiStack_2c;
                            uVar29 = (uint)*puVar28;
                            iVar27 = uVar29 + 1;
                            local_58 = pppppppiVar26;
                            local_54 = pppppppiVar12;
                            local_50 = pppppppiVar18;
                            if (0xb < uVar29) {
                    /* WARNING: Subroutine does not return */
                              FUN_012faff4(0,iVar27,0xc,&DAT_01d2ff20);
                            }
                            if (uVar2 - uVar15 != iVar27) {
                    /* WARNING: Subroutine does not return */
                              FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
                            }
                            local_164 = (int ******)((int)local_164 + 1);
                            FUN_01bed4e2(local_16c + 0x50,pppppppiVar9 + uVar15 + 0x51,iVar27 * 4);
                            uVar15 = 0;
                            do {
                              ppppppiVar21 = (local_16c + 0x50)[uVar15];
                              *(short *)(ppppppiVar21 + 0x4e) = (short)uVar15;
                              ppppppiVar21[0x2c] = (int *****)local_16c;
                              if (uVar29 <= uVar15) break;
                              uVar15 = uVar15 + 1;
                            } while (uVar15 <= uVar29);
                            local_88 = local_58;
                            local_84 = local_54;
                            local_80 = local_50;
                            local_7c = pppppppiStack_4c;
                            local_78 = local_48;
                            pppppppiStack_74 = pppppppiStack_44;
                            pppppppiStack_70 = pppppppiStack_40;
                            pppppppiStack_6c = pppppppiStack_3c;
                            local_58 = (int *******)*puVar5;
                            local_54 = (int *******)puVar5[1];
                            local_50 = (int *******)puVar5[2];
                            pppppppiStack_4c = (int *******)puVar5[3];
                            pppppppiVar26 = local_16c;
                            if (!bVar3) {
                              pppppppiVar26 = pppppppiVar9;
                            }
                            local_68 = pppppppiVar9;
                            local_64 = (int)local_164;
                            local_60 = local_16c;
                            local_5c = (int)local_164;
                            FUN_01016864(pppppppiVar26,uVar14,&local_a4,&local_58,pppppppiVar19);
                            local_17c = *puVar4;
                            uVar30 = puVar4[1];
                            local_b8 = local_7c;
                            local_b4 = local_78;
                            pppppppiStack_b0 = pppppppiStack_74;
                            pppppppiStack_ac = pppppppiStack_70;
                            pppppppiStack_a8 = pppppppiStack_6c;
                            local_178 = local_88;
                            if (local_88 == (int *******)&DAT_80000000) goto LAB_00ef8ac0;
                            pppppppiVar26 = (int *******)pppppppiVar9[0x2c];
                            pppppppiVar19 = local_16c;
                            local_13c = pppppppiVar9;
                          } while ((int *******)pppppppiVar9[0x2c] != (int *******)0x0);
                        }
                        *puVar4 = local_17c;
                        puVar4[1] = uVar30;
                        local_7c = local_b8;
                        local_78 = local_b4;
                        pppppppiStack_74 = pppppppiStack_b0;
                        pppppppiStack_70 = pppppppiStack_ac;
                        pppppppiStack_6c = pppppppiStack_a8;
                        local_5c = (int)local_164;
                        local_64 = (int)local_164;
                        local_60 = local_16c;
                        local_88 = local_178;
                        local_d0 = local_b8;
                        pppppppiStack_cc = local_b4;
                        pppppppiStack_c8 = pppppppiStack_b0;
                        pppppppiStack_c4 = pppppppiStack_ac;
                        pppppppiStack_c0 = pppppppiStack_a8;
                        local_68 = local_13c;
                        if (*param_2 == (int ******)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_012fb0cc(&DAT_01d2fee0);
                        }
                        uVar31 = FUN_01488ce4(*param_2,param_2[1]);
                        *(undefined8 *)param_2 = uVar31;
                        local_58 = (int *******)*puVar5;
                        local_54 = (int *******)puVar5[1];
                        local_50 = (int *******)puVar5[2];
                        pppppppiStack_4c = (int *******)puVar5[3];
                        FUN_01488c10((int)uVar31,(int)((ulonglong)uVar31 >> 0x20),&local_88,
                                     &local_58,local_16c,local_164);
LAB_00ef8ac0:
                        local_34 = pppppppiVar20;
                        local_38 = pppppppiVar7;
                        local_30 = local_1a4;
                      }
                    }
                  }
                  param_2[2] = (int ******)((int)param_2[2] + 1);
                }
                pppppppiVar7 = (int *******)0x0;
                goto LAB_00ef8aec;
              }
              uVar30 = 0x19;
              pcVar11 = "delimited length exceeded";
            }
            else {
              uVar30 = 0x10;
              pcVar11 = "buffer underflow";
            }
          }
          pppppppiVar7 = (int *******)FUN_01aa0da0(pcVar11,uVar30);
LAB_00ef8b30:
LAB_00ef8b34:
          FUN_014880e4(&local_120);
          FUN_019bb7e0(local_12c,local_128);
          ppppppiVar21 = pppppppiVar7[2];
          if (ppppppiVar21 == *pppppppiVar7) {
            FUN_018fa978(pppppppiVar7);
          }
          ppppppiVar10 = pppppppiVar7[1] + (int)ppppppiVar21 * 4;
          *ppppppiVar10 = (int *****)"Struct";
          ppppppiVar10[1] = (int *****)0x6;
          ppppppiVar10[2] = (int *****)&DAT_00531558;
          ppppppiVar10[3] = (int *****)0x6;
          pppppppiVar7[2] = (int ******)((int)ppppppiVar21 + 1);
          return pppppppiVar7;
        }
        pppppppiVar7 = (int *******)
                       FUN_00ef7b80((&DAT_00571008)[uVar14],uVar15,param_3,param_4 + -1);
LAB_00ef8aec:
      } while (pppppppiVar7 == (int *******)0x0);
    }
  }
  else {
    local_80 = (int *******)&local_b8;
    pppppppiVar20 = (int *******)&local_58;
    puVar13 = &DAT_005bfb48;
    local_7c = (int *******)FUN_00ef7f4c;
    local_84 = (int *******)FUN_00ef7f4c;
    local_88 = &local_100;
    pppppppiVar7 = (int *******)&local_88;
LAB_00ef8bd4:
    FUN_01a8da38(pppppppiVar20,puVar13,pppppppiVar7);
    pppppppiVar7 = (int *******)FUN_01aa428c(pppppppiVar20);
  }
  return pppppppiVar7;
}

