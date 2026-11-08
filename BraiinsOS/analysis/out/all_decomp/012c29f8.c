// FUN_012c29f8 @ 012c29f8 size=3440 calls_out=19 calls_in=1
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_012c29f8(uint *param_1,int *param_2,uint *param_3,uint *param_4,undefined4 *param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  byte *pbVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  byte bVar20;
  uint uVar21;
  uint *puVar22;
  undefined4 uVar23;
  uint *puVar24;
  uint *******pppppppuVar25;
  int *piVar26;
  int *piVar27;
  uint uVar28;
  uint *puVar29;
  uint *puVar30;
  uint uVar31;
  uint ******ppppppuVar32;
  int extraout_r12;
  uint *puVar33;
  int *local_134;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  uint ******local_108;
  byte *local_104;
  uint ******local_100;
  uint local_fc;
  byte *local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint ******local_e0;
  uint local_dc;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  int local_cc;
  int *local_c8;
  int local_c4;
  uint *******local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  uint ******local_b4;
  uint auStack_b0 [3];
  uint local_a4 [3];
  uint ******local_98;
  uint auStack_94 [3];
  undefined1 auStack_88 [12];
  uint auStack_7c [3];
  uint *******local_70;
  int iStack_6c;
  uint *puStack_68;
  uint *local_64;
  uint local_60;
  uint *local_5c;
  int local_58;
  uint local_54;
  uint *******local_50;
  undefined4 *local_4c;
  uint *******local_48;
  undefined4 local_44;
  uint *******local_40;
  uint local_3c;
  uint *******local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  ppppppuVar32 = (uint ******)param_2[2];
  piVar27 = (int *)param_2[1];
  if (ppppppuVar32 == (uint ******)0x0) {
    pbVar3 = &DAT_00000001;
  }
  else {
    pbVar3 = (byte *)thunk_FUN_016d4a50(ppppppuVar32);
    if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,ppppppuVar32);
    }
  }
  FUN_016dd1aa(pbVar3,piVar27,ppppppuVar32);
  uVar21 = param_5[3];
  if (0x3333333 < uVar21) {
    uVar4 = 0;
    puVar33 = param_1;
LAB_012c2a68:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar4,puVar33);
  }
  puVar33 = (uint *)(uVar21 * 0x28);
  if (puVar33 == (uint *)0x0) {
    local_ec = 4;
    local_f0 = 0;
  }
  else {
    local_ec = thunk_FUN_016d4a50(puVar33);
    if (local_ec == 0) {
      uVar4 = 4;
      goto LAB_012c2a68;
    }
    local_f0 = uVar21;
  }
  local_fc = *param_3;
  local_f8 = (byte *)param_3[1];
  local_f4 = param_3[2];
  local_e4 = *param_4;
  local_e0 = (uint ******)param_4[1];
  local_dc = param_4[2];
  local_e8 = 0;
  local_10c = 0;
  local_110 = 0;
  local_114 = 0;
  local_118 = 0;
  local_108 = ppppppuVar32;
  local_104 = pbVar3;
  local_100 = ppppppuVar32;
  if (local_f4 == 0) {
    uVar21 = thunk_FUN_016d4a50(0x11);
    if (uVar21 == 0) {
      uVar12 = 0x11;
      uVar4 = 1;
      goto LAB_012c2dc0;
    }
    FUN_016dd1aa(uVar21,&DAT_003b7568,0x11);
    param_1[0xd] = 0x80000000;
    *param_1 = 2;
    param_1[1] = 0x11;
    param_1[2] = uVar21;
    param_1[3] = 0x11;
  }
  else {
    if (ppppppuVar32 != (uint ******)0x0) {
      pbVar5 = pbVar3 + 1;
      uVar12 = (uint)*pbVar3;
      if ((char)*pbVar3 < '\0') {
        uVar28 = pbVar3[1] & 0x3f;
        if (uVar12 < 0xe0) {
          uVar14 = (uVar12 & 0x1f) << 6;
          uVar12 = uVar28 | uVar14;
          pbVar5 = pbVar3 + 2;
          uVar14 = pbVar3[1] & 0x1f | uVar14;
        }
        else {
          uVar28 = uVar28 << 6;
          uVar7 = pbVar3[2] & 0x3f | uVar28;
          if (uVar12 < 0xf0) {
            uVar14 = (uVar12 & 0x1f) << 0xc;
            uVar12 = uVar7 | uVar14;
            pbVar5 = pbVar3 + 3;
            uVar14 = pbVar3[2] & 0x1f | uVar28 | uVar14;
          }
          else {
            uVar7 = uVar7 << 6;
            uVar14 = (uVar12 & 7) << 0x12;
            uVar12 = pbVar3[3] & 0x3f | uVar7 | uVar14;
            pbVar5 = pbVar3 + 4;
            uVar14 = pbVar3[3] & 0x1f | uVar7 | uVar14;
          }
        }
      }
      else {
        uVar14 = uVar12 & 0xffffffdf;
      }
      if ((uVar14 - 0x41 < 0x1a) || (uVar12 == 0x5f || uVar12 == 0x3a)) {
        if (pbVar5 == pbVar3 + (int)ppppppuVar32) {
          uVar12 = (uVar21 + 1) * 0xc;
LAB_012c2ddc:
          iVar13 = uVar21 + 1;
          local_c8 = (int *)thunk_FUN_016d4a50(uVar12);
          if (local_c8 == (int *)0x0) {
            uVar4 = 4;
LAB_012c2dc0:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar4,uVar12);
          }
          local_cc = iVar13;
          if (iVar13 != 0) goto LAB_012c2e18;
        }
        else {
          do {
            puVar16 = (undefined1 *)(uint)*pbVar5;
            if ((char)*pbVar5 < '\0') {
              uVar12 = pbVar5[1] & 0x3f;
              if (puVar16 < (undefined1 *)0xe0) {
                uVar28 = ((uint)puVar16 & 0x1f) << 6;
                puVar16 = (undefined1 *)(uVar12 | uVar28);
                uVar28 = pbVar5[1] & 0x1f | uVar28;
                pbVar5 = pbVar5 + 2;
              }
              else {
                uVar12 = uVar12 << 6;
                uVar14 = pbVar5[2] & 0x3f | uVar12;
                if (puVar16 < (undefined1 *)0xf0) {
                  uVar28 = ((uint)puVar16 & 0x1f) << 0xc;
                  puVar16 = (undefined1 *)(uVar14 | uVar28);
                  uVar28 = pbVar5[2] & 0x1f | uVar12 | uVar28;
                  pbVar5 = pbVar5 + 3;
                }
                else {
                  uVar14 = uVar14 << 6;
                  uVar28 = ((uint)puVar16 & 7) << 0x12;
                  puVar16 = (undefined1 *)(pbVar5[3] & 0x3f | uVar14 | uVar28);
                  if (puVar16 == &DAT_00110000) break;
                  uVar28 = pbVar5[3] & 0x1f | uVar14 | uVar28;
                  pbVar5 = pbVar5 + 4;
                }
              }
            }
            else {
              uVar28 = (uint)puVar16 & 0x1fffdf;
              pbVar5 = pbVar5 + 1;
            }
            if (((0x19 < uVar28 - 0x41) &&
                (puVar16 != (undefined1 *)0x3a && puVar16 != (undefined1 *)0x5f)) &&
               ((undefined1 *)0x9 < puVar16 + -0x30)) goto LAB_012c2b4c;
          } while (pbVar5 != pbVar3 + (int)ppppppuVar32);
          if (0xaaaaaaa < uVar21 + 1) {
            uVar4 = 0;
            uVar12 = uVar21;
            goto LAB_012c2dc0;
          }
          uVar12 = (uVar21 + 1) * 0xc;
          if (uVar12 != 0) goto LAB_012c2ddc;
          local_c8 = (int *)&DAT_00000004;
          local_cc = 0;
        }
        local_c4 = 0;
        FUN_015f37b0(&local_cc);
LAB_012c2e18:
        local_134 = local_c8;
        iVar13 = param_2[1];
        iVar15 = param_2[2];
        *local_c8 = *param_2;
        local_c8[1] = iVar13;
        uVar28 = param_5[1];
        puVar22 = (uint *)*param_5;
        local_c8[2] = iVar15;
        local_c4 = 1;
        puVar24 = puVar22 + 1;
        uVar14 = ~*puVar22 & 0x80808080;
        local_b8 = 0;
        local_c0 = (uint *******)0x0;
        puVar33 = puVar22;
        puVar30 = puVar24;
        uVar12 = uVar21;
LAB_012c2e94:
        if (uVar12 != 0) {
          puVar29 = puVar30;
          if (uVar14 == 0) {
            do {
              puVar30 = puVar29 + 1;
              uVar14 = *puVar29;
              puVar33 = puVar33 + -0x18;
              puVar29 = puVar30;
            } while ((uVar14 & 0x80808080) == 0x80808080);
            uVar14 = uVar14 & 0x80808080 ^ 0x80808080;
          }
          uVar7 = LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                          (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18);
          iVar13 = (uVar7 >> 3) * -2 - (uVar7 >> 3);
          local_b4 = (uint ******)(puVar33 + iVar13 * 2 + -6);
          pppppppuVar25 = (uint *******)puVar33[iVar13 * 2 + -4];
          uVar7 = puVar33[iVar13 * 2 + -5];
          iVar13 = FUN_012c3ac4(uVar7,pppppppuVar25);
          if (iVar13 != 0) goto code_r0x012c2efc;
          local_70 = &local_b4;
          local_4c = (undefined4 *)&LAB_012cd034;
          local_50 = (uint *******)&local_70;
          puVar33 = auStack_b0;
          FUN_00600d2c(puVar33,&DAT_005849a3,&local_50);
          goto LAB_012c31cc;
        }
        uVar4 = param_5[4];
        local_30 = local_b8;
        if (local_c0 == (uint *******)0x0) {
          local_30 = 0;
        }
        uVar17 = param_5[5];
        uVar18 = param_5[6];
        uVar19 = param_5[7];
        local_34 = uStack_bc;
        local_44 = uStack_bc;
        local_38 = local_c0;
        local_48 = local_c0;
        local_50 = (uint *******)(uint)(local_c0 != (uint *******)0x0);
        local_3c = 0;
        local_4c = (undefined4 *)0x0;
        iVar13 = 1;
        local_40 = local_50;
LAB_012c3024:
        iVar15 = FUN_012bffbc(&local_50);
        if (iVar15 != 0) {
          if (uVar21 != 0) {
            uVar23 = *(undefined4 *)(iVar15 + 4);
            uVar7 = *(uint *)(iVar15 + 8);
            uVar14 = FUN_01620b88(uVar4,uVar17,uVar18,uVar19,uVar23,uVar7);
            uVar12 = uVar14 >> 0x19;
            iVar15 = 0;
            while( true ) {
              uVar14 = uVar28 & uVar14;
              uVar31 = *(uint *)((int)puVar22 + uVar14);
              uVar9 = uVar31 ^ uVar12 * 0x1010101;
              for (uVar9 = ~uVar9 & 0x80808080 & uVar9 + 0xfefefeff; uVar9 != 0;
                  uVar9 = uVar9 - 1 & uVar9) {
                uVar10 = uVar14 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                                 (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3)
                         & uVar28;
                if ((uVar7 == puVar22[uVar10 * -6 + -4]) &&
                   (iVar11 = thunk_FUN_016dd50a(uVar23,puVar22[uVar10 * -6 + -5],uVar7), iVar11 == 0
                   )) {
                  uVar14 = puVar22[uVar10 * -6 + -1];
                  uVar12 = puVar22[uVar10 * -6 + -2];
                  if (uVar14 == 0) {
                    uVar7 = 1;
                  }
                  else {
                    uVar7 = thunk_FUN_016d4a50(uVar14);
                    if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00600af4(1,uVar14);
                    }
                  }
                  FUN_016dd1aa(uVar7,uVar12,uVar14);
                  if (iVar13 == local_cc) {
                    FUN_015f37b0(&local_cc);
                    local_134 = local_c8;
                  }
                  local_c4 = iVar13 + 1;
                  puVar33 = (uint *)(local_134 + iVar13 * 3);
                  *puVar33 = uVar14;
                  puVar33[1] = uVar7;
                  puVar33[2] = uVar14;
                  iVar13 = local_c4;
                  goto LAB_012c3024;
                }
              }
              if ((uVar31 & 0x80808080 & uVar31 << 1) != 0) break;
              iVar15 = iVar15 + 4;
              uVar14 = uVar14 + iVar15;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_0188d29c);
        }
        iVar15 = local_dc * 0xc;
        ppppppuVar32 = local_e0;
        while (piVar6 = local_c8, iVar15 != 0) {
          local_98 = ppppppuVar32;
          iVar11 = FUN_012c3ac4(ppppppuVar32[1],ppppppuVar32[2]);
          if (iVar11 == 0) {
            local_4c = (undefined4 *)&LAB_012cd034;
            local_50 = (uint *******)&local_70;
            puVar33 = auStack_94;
            local_70 = &local_98;
            FUN_00600d2c(puVar33,&DAT_005849a3,&local_50);
            goto LAB_012c31d0;
          }
          local_4c = (undefined4 *)&LAB_01110b14;
          local_50 = &local_98;
          FUN_00600d2c(auStack_88,&DAT_00583604,&local_50);
          iVar11 = FUN_012c0348(&local_c0,auStack_88);
          ppppppuVar32 = ppppppuVar32 + 3;
          iVar15 = iVar15 + -0xc;
          if (iVar11 != 0) {
            local_4c = (undefined4 *)&LAB_01110b14;
            puVar33 = auStack_7c;
            local_50 = &local_98;
            FUN_00600d2c(puVar33,&DAT_0057993d,&local_50);
            goto LAB_012c31d0;
          }
        }
        iVar15 = -0x340d631c;
        uVar12 = 0x84222325;
        local_118 = 0x84222325;
        local_114 = 0xcbf29ce4;
        if (iVar13 != 0) {
          local_118 = 0x84222325;
          local_114 = 0xcbf29ce4;
          piVar27 = local_c8;
          do {
            iVar11 = piVar27[2];
            if (iVar11 != 0) {
              pbVar3 = (byte *)piVar27[1];
              do {
                iVar11 = iVar11 + -1;
                uVar14 = local_118 ^ *pbVar3;
                lVar1 = (ulonglong)uVar14 * 0x1b3;
                local_118 = (uint)lVar1;
                local_114 = local_114 * 0x1b3 + uVar14 * 0x100 + (int)((ulonglong)lVar1 >> 0x20);
                pbVar3 = pbVar3 + 1;
              } while (iVar11 != 0);
            }
            uVar14 = local_118 ^ 0xff;
            piVar27 = piVar27 + 3;
            lVar1 = (ulonglong)uVar14 * 0x1b3;
            local_118 = (uint)lVar1;
            local_114 = local_114 * 0x1b3 + uVar14 * 0x100 + (int)((ulonglong)lVar1 >> 0x20);
          } while (piVar27 != local_c8 + iVar13 * 3);
        }
        uVar14 = local_f4;
        pbVar3 = local_f8;
        if (local_f4 == 0) {
          uVar12 = 0xaf64724c;
          uVar4 = 0x8602eb6e;
        }
        else {
          do {
            uVar14 = uVar14 - 1;
            uVar7 = uVar12 ^ *pbVar3;
            lVar1 = (ulonglong)uVar7 * 0x1b3;
            uVar12 = (uint)lVar1;
            iVar15 = iVar15 * 0x1b3 + uVar7 * 0x100 + (int)((ulonglong)lVar1 >> 0x20);
            pbVar3 = pbVar3 + 1;
          } while (uVar14 != 0);
          lVar1 = (ulonglong)(uVar12 ^ 0xff) * 0x1b3;
          uVar4 = (undefined4)lVar1;
          uVar12 = iVar15 * 0x1b3 + (uVar12 ^ 0xff) * 0x100 + (int)((ulonglong)lVar1 >> 0x20);
        }
        uVar2 = CONCAT44(uStack_bc,uVar4);
        local_38 = local_c0;
        local_30 = local_b8;
        if (local_c0 == (uint *******)0x0) {
          local_30 = 0;
        }
        local_48 = local_c0;
        local_50 = (uint *******)(uint)(local_c0 != (uint *******)0x0);
        local_34 = uStack_bc;
        local_3c = 0;
        local_44 = uStack_bc;
        local_4c = (undefined4 *)0x0;
        local_40 = local_50;
        while( true ) {
          uVar14 = (uint)uVar2;
          puVar33 = (uint *)0x12c34c0;
          iVar15 = FUN_012bffbc(&local_50);
          uVar2 = uVar2 & 0xffffffff;
          if (iVar15 == 0) break;
          iVar11 = *(int *)(iVar15 + 8);
          if (iVar11 != 0) {
            pbVar3 = *(byte **)(iVar15 + 4);
            do {
              iVar11 = iVar11 + -1;
              uVar7 = uVar14 ^ *pbVar3;
              uVar2 = (ulonglong)uVar7 * 0x1b3;
              uVar14 = (uint)uVar2;
              uVar12 = uVar12 * 0x1b3 + uVar7 * 0x100 + (int)(uVar2 >> 0x20);
              pbVar3 = pbVar3 + 1;
            } while (iVar11 != 0);
          }
          uVar14 = (uint)uVar2 ^ 0xff;
          uVar2 = (ulonglong)uVar14 * 0x1b3;
          uVar12 = uVar12 * 0x1b3 + uVar14 * 0x100 + (int)(uVar2 >> 0x20);
        }
        if (uVar28 == 0) {
          local_70 = (uint *******)0x0;
          iStack_6c = extraout_r12;
        }
        else {
          puVar33 = puVar22 + uVar28 * -6 + -6;
          iStack_6c = uVar28 * 0x19 + 0x1d;
          local_70 = (uint *******)&DAT_00000004;
        }
        uVar7 = ~*puVar22 & 0x80808080;
        local_110 = uVar14;
        local_10c = uVar12;
        puStack_68 = puVar33;
        local_64 = puVar22;
        local_60 = uVar7;
        local_5c = puVar24;
        local_58 = (int)puVar22 + uVar28 + 1;
        local_54 = uVar21;
        while (uVar12 = local_e8, uVar21 != 0) {
          uVar28 = uVar7;
          puVar33 = puVar24;
          if (uVar7 == 0) {
            do {
              puVar24 = puVar33 + 1;
              uVar28 = *puVar33;
              puVar22 = puVar22 + -0x18;
              puVar33 = puVar24;
            } while ((uVar28 & 0x80808080) == 0x80808080);
            uVar28 = uVar28 & 0x80808080 ^ 0x80808080;
          }
          uVar21 = uVar21 - 1;
          uVar7 = uVar28 - 1 & uVar28;
          uVar28 = (uint)LZCOUNT(uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 |
                                 (uVar28 >> 0x10 & 0xff) << 8 | uVar28 >> 0x18) >> 3;
          pppppppuVar25 = (uint *******)puVar22[uVar28 * -6 + -6];
          if (pppppppuVar25 == (uint *******)&DAT_80000000) goto LAB_012c366c;
          local_4c = (undefined4 *)puVar22[uVar28 * -6 + -5];
          local_48 = (uint *******)puVar22[uVar28 * -6 + -4];
          local_40 = (uint *******)puVar22[uVar28 * -6 + -3];
          local_3c = puVar22[uVar28 * -6 + -2];
          local_38 = (uint *******)puVar22[uVar28 * -6 + -1];
          local_2c = 0;
          local_30 = 0;
          local_34 = CONCAT31(local_34._1_3_,1);
          local_44 = CONCAT31(local_44._1_3_,1);
          local_50 = pppppppuVar25;
          if (local_e8 == local_f0) {
            FUN_012bda90(&local_f0);
          }
          puVar8 = (undefined4 *)(local_ec + uVar12 * 0x28);
          *puVar8 = local_50;
          puVar8[1] = local_4c;
          puVar8[2] = local_48;
          puVar8[3] = local_44;
          puVar8[4] = local_40;
          puVar8[5] = local_3c;
          puVar8[6] = local_38;
          puVar8[7] = local_34;
          puVar8[8] = local_30;
          puVar8[9] = local_2c;
          local_e8 = uVar12 + 1;
        }
        uVar21 = 0;
LAB_012c366c:
        local_64 = puVar22;
        local_60 = uVar7;
        local_5c = puVar24;
        local_54 = uVar21;
        FUN_012b58a0(&local_70);
        if (1 < local_e8) {
          if (local_e8 < 0x15) {
            FUN_012bbec8();
          }
          else {
            FUN_012bc558(local_ec);
          }
        }
        *param_1 = local_118;
        param_1[1] = local_114;
        param_1[2] = local_110;
        param_1[3] = local_10c;
        param_1[4] = (uint)local_108;
        param_1[5] = (uint)local_104;
        param_1[6] = (uint)local_100;
        param_1[7] = local_fc;
        param_1[8] = (uint)local_f8;
        param_1[9] = local_f4;
        param_1[10] = local_f0;
        param_1[0xb] = local_ec;
        param_1[0xc] = local_e8;
        param_1[0xd] = local_e4;
        param_1[0xe] = (uint)local_e0;
        param_1[0xf] = local_dc;
        FUN_012c1b60(&local_c0);
        piVar27 = piVar6 + 1;
        for (; iVar13 != 0; iVar13 = iVar13 + -1) {
          if (piVar27[-1] != 0) {
            thunk_FUN_016d3fb4(*piVar27);
          }
          piVar27 = piVar27 + 3;
        }
        if (local_cc == 0) {
          return;
        }
        goto LAB_012c2c20;
      }
    }
LAB_012c2b4c:
    local_50 = &local_108;
    local_4c = &DAT_006043a8;
    FUN_00600d2c(&local_d8,&DAT_0057dfbf,&local_50);
    param_1[0xd] = 0x80000000;
    *param_1 = 2;
    param_1[1] = local_d8;
    param_1[2] = uStack_d4;
    param_1[3] = uStack_d0;
  }
  bVar20 = 1;
LAB_012c2bf8:
  FUN_012c39c4(&local_118);
  FUN_012b56f4(param_5);
  if ((bool)(bVar20 & *param_2 != 0)) {
    piVar6 = piVar27;
LAB_012c2c20:
    thunk_FUN_016d3fb4(piVar6);
  }
  return;
code_r0x012c2efc:
  if (pppppppuVar25 == (uint *******)0x0) {
    puVar8 = (undefined4 *)0x1;
  }
  else {
    puVar8 = (undefined4 *)thunk_FUN_016d4a50(pppppppuVar25);
    if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,pppppppuVar25);
    }
  }
  FUN_016dd1aa(puVar8,uVar7,pppppppuVar25);
  local_50 = pppppppuVar25;
  local_4c = puVar8;
  local_48 = pppppppuVar25;
  iVar13 = FUN_012c0348(&local_c0,&local_50);
  uVar12 = uVar12 - 1;
  uVar14 = uVar14 - 1 & uVar14;
  if (iVar13 != 0) goto code_r0x012c2f5c;
  goto LAB_012c2e94;
code_r0x012c2f5c:
  local_50 = &local_b4;
  local_4c = (undefined4 *)&LAB_01110b14;
  puVar33 = local_a4;
  FUN_00600d2c(puVar33,&DAT_0056e053,&local_50);
LAB_012c31cc:
  iVar13 = 1;
LAB_012c31d0:
  uVar21 = *puVar33;
  uVar12 = puVar33[1];
  uVar28 = puVar33[2];
  param_1[0xd] = 0x80000000;
  *param_1 = 2;
  param_1[1] = uVar21;
  param_1[2] = uVar12;
  param_1[3] = uVar28;
  FUN_012c1b60(&local_c0);
  piVar6 = local_c8;
  piVar26 = local_c8 + 1;
  for (; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (piVar26[-1] != 0) {
      thunk_FUN_016d3fb4(*piVar26);
    }
    piVar26 = piVar26 + 3;
  }
  if (local_cc != 0) {
    thunk_FUN_016d3fb4(piVar6);
  }
  bVar20 = 0;
  goto LAB_012c2bf8;
}

