// FUN_01325da0 @ 01325da0 size=21368 calls_out=8 calls_in=2
// strings: internal error: entered unreachable code

void FUN_01325da0(uint *param_1,undefined1 *param_2,char *param_3,uint param_4,byte *param_5,
                 uint param_6,int param_7)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  uint uVar4;
  byte bVar5;
  uint *puVar6;
  uint uVar7;
  undefined2 uVar8;
  uint uVar9;
  undefined *puVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined *puVar16;
  uint uVar17;
  int iVar18;
  char cVar19;
  int iVar20;
  uint *puVar21;
  byte *pbVar22;
  char *pcVar23;
  uint uVar24;
  uint *puVar25;
  uint uVar26;
  uint uVar27;
  bool bVar28;
  ulonglong uVar29;
  uint local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  byte *local_44;
  byte *local_30;
  uint local_2c;
  uint local_28;
  
  puVar6 = &switchD_01325ddc::switchdataD_01325de0;
  local_44 = param_5;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_2) {
  case 0:
    iVar18 = *(int *)(param_2 + 4);
    uVar24 = 0;
    uVar4 = 0;
    local_2c = param_6;
LAB_01325e3c:
    if (uVar24 <= param_6) {
      pcVar23 = param_3 + uVar4;
      uVar7 = param_4 - uVar4;
      uVar13 = param_6 - uVar24;
      pbVar22 = param_5 + uVar24;
      uVar12 = uVar7;
      if (uVar13 < uVar7) {
        uVar12 = uVar13;
      }
      uVar17 = 0;
      if (((((uint)pbVar22 ^ (uint)pcVar23) & 3) == 0) &&
         (uVar9 = -(int)pcVar23 & 3, (uVar9 | 8) <= uVar12)) {
        if (uVar9 != 0) {
          do {
            bVar2 = pcVar23[uVar17];
            uVar14 = (uint)bVar2;
            if ((char)bVar2 < '\0') goto LAB_01325f64;
            pbVar22[uVar17] = bVar2;
            uVar17 = uVar17 + 1;
          } while (uVar9 != uVar17);
        }
        do {
          uVar26 = *(uint *)(param_3 + uVar17 + uVar4 + 4);
          uVar9 = *(uint *)((int)(param_3 + uVar17 + uVar4 + 4) + -4);
          *(uint *)(pbVar22 + uVar17) = uVar9;
          *(uint *)((int)(pbVar22 + uVar17) + 4) = uVar26;
          uVar27 = uVar26 & 0x80808080;
          uVar14 = uVar9 & 0x80808080;
          if (uVar27 != 0 || uVar14 != 0) {
            uVar12 = (uint)LZCOUNT((uVar9 >> 7 & 1) << 0x18 | (uVar14 >> 0xf & 1) << 0x10 |
                                   (uVar14 >> 0x17 & 1) << 8 | uVar9 >> 0x1f) >> 3;
            if (uVar14 == 0) {
              uVar12 = ((uint)LZCOUNT((uVar26 >> 7 & 1) << 0x18 | (uVar27 >> 0xf & 1) << 0x10 |
                                      (uVar27 >> 0x17 & 1) << 8 | uVar26 >> 0x1f) >> 3) + 4;
            }
            uVar17 = uVar12 + uVar17;
            uVar14 = (uint)(byte)pcVar23[uVar17];
            goto LAB_01325f64;
          }
          uVar17 = uVar17 + 8;
        } while (uVar17 <= uVar12 - 8);
      }
      if (uVar17 < uVar12) {
        while( true ) {
          bVar2 = pcVar23[uVar17];
          uVar14 = (uint)bVar2;
          if ((char)bVar2 < '\0') break;
          pbVar22[uVar17] = bVar2;
          uVar17 = uVar17 + 1;
          if (uVar12 == uVar17) goto LAB_013267bc;
        }
LAB_01325f64:
        uVar9 = uVar17 + uVar24;
        uVar12 = uVar17 + uVar4;
        if (param_6 <= uVar9 + 2) {
          uVar24 = 1;
          goto LAB_013267d0;
        }
        uVar1 = *(ushort *)(iVar18 + -0x100 + uVar14 * 2);
        uVar12 = uVar12 + 1;
        while( true ) {
          if (uVar1 == 0) {
            *param_1 = uVar12;
            *(undefined1 *)((int)param_1 + 6) = 0;
            *(undefined2 *)(param_1 + 1) = 0x102;
            goto LAB_01326948;
          }
          pbVar22 = param_5 + uVar9;
          if (uVar1 < 0x800) {
            iVar20 = 2;
            *pbVar22 = (byte)(uVar1 >> 6) | 0xc0;
            iVar15 = 1;
          }
          else {
            *pbVar22 = (byte)(uVar1 >> 0xc) | 0xe0;
            iVar15 = 2;
            pbVar22[1] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
            iVar20 = 3;
          }
          uVar9 = uVar9 + iVar20;
          pbVar22[iVar15] = (byte)uVar1 & 0x3f | 0x80;
          if (param_4 <= uVar12) break;
          if (param_6 <= uVar9 + 2) {
            *param_1 = uVar12;
            uVar11 = 1;
            goto LAB_01327bec;
          }
          uVar7 = uVar12 + 1;
          uVar13 = (uint)(byte)param_3[uVar12];
          if (-1 < param_3[uVar12]) {
            iVar15 = 0;
            do {
              uVar4 = uVar7 + iVar15;
              uVar24 = uVar9 + iVar15 + 1;
              param_5[iVar15 + uVar9] = (byte)uVar13;
              if (0x3b < uVar13) {
                if (uVar4 <= param_4) goto LAB_01325e3c;
                puVar16 = &DAT_01ce5fec;
                goto LAB_0132ac90;
              }
              if ((param_4 - 1) - uVar12 == iVar15) {
                uVar11 = 0;
                *param_1 = param_4;
LAB_01326940:
                *(undefined1 *)(param_1 + 1) = uVar11;
                uVar9 = uVar24;
                goto LAB_01326948;
              }
              if (param_6 <= uVar9 + iVar15 + 3) {
                *param_1 = uVar4;
                uVar11 = 1;
                goto LAB_01326940;
              }
              iVar20 = iVar15 + uVar12 + 1;
              iVar15 = iVar15 + 1;
              uVar13 = (uint)(byte)param_3[iVar20];
            } while (-1 < param_3[iVar20]);
            uVar9 = uVar9 + iVar15;
            uVar7 = uVar7 + iVar15;
          }
          uVar1 = *(ushort *)(iVar18 + -0x100 + uVar13 * 2);
          uVar12 = uVar7;
        }
        *param_1 = uVar12;
        uVar11 = 0;
LAB_01327bec:
        *(undefined1 *)(param_1 + 1) = uVar11;
      }
      else {
LAB_013267bc:
        uVar9 = uVar12 + uVar24;
        uVar12 = uVar12 + uVar4;
        uVar24 = 0;
        if (uVar13 < uVar7) {
          uVar24 = 1;
        }
LAB_013267d0:
        *param_1 = uVar12;
        param_1[1] = (uint)&local_30 & 0xffffff03 | uVar24;
      }
LAB_01326948:
      param_1[2] = uVar9;
      return;
    }
LAB_0132ad4c:
    puVar16 = &DAT_01ce5ffc;
    goto LAB_0132afcc;
  case 1:
    uVar12 = *(uint *)(param_2 + 4);
    local_4c = *(int *)(param_2 + 8);
    uVar7 = 0;
    iVar18 = *(int *)(param_2 + 0xc);
    local_54 = (uint)(byte)param_2[0x11];
    local_50 = (uint)(byte)param_2[0x10];
    uVar24 = 0;
    do {
      uVar4 = uVar7;
      local_48 = uVar12;
      while( true ) {
        if (iVar18 == 0) {
          if (param_4 < uVar4) {
            puVar16 = &DAT_01ce5f4c;
            goto LAB_0132ac90;
          }
          if (param_6 < uVar24) {
            puVar16 = &DAT_01ce5f5c;
            goto LAB_0132afcc;
          }
          uVar7 = param_4 - uVar4;
          uVar13 = param_6 - uVar24;
          uVar12 = uVar7;
          if (uVar13 < uVar7) {
            uVar12 = uVar13;
          }
          uVar12 = FUN_013258e0(param_3 + uVar4,uVar12);
          if (uVar13 < uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,uVar12,uVar13,&DAT_01ce5f6c);
          }
          if (uVar7 < uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,uVar12,uVar7,&DAT_01ce5f7c);
          }
          FUN_01bed4e2(param_5 + uVar24,param_3 + uVar4,uVar12);
          uVar24 = uVar12 + uVar24;
          uVar4 = uVar12 + uVar4;
        }
        if (param_4 <= uVar4) {
          if (param_7 != 0 && iVar18 != 0) goto LAB_013268fc;
          uVar11 = 0;
          goto LAB_0132691c;
        }
        uVar13 = uVar24 + 3;
        if (param_6 <= uVar13) {
          uVar11 = 1;
          goto LAB_0132691c;
        }
        bVar2 = param_3[uVar4];
        uVar17 = (uint)bVar2;
        uVar7 = uVar4 + 1;
        if (iVar18 != 0) break;
        uVar4 = uVar7;
        if ((char)bVar2 < '\0') {
          if (uVar17 < 0xc2) {
LAB_01328b1c:
            *(undefined1 *)((int)param_1 + 6) = 0;
            *(undefined2 *)(param_1 + 1) = 0x102;
            goto LAB_01326920;
          }
          if (uVar17 < 0xe0) {
            iVar18 = 1;
            local_48 = uVar17 & 0x1f;
            *(uint *)(param_2 + 4) = local_48;
            *(undefined4 *)(param_2 + 0xc) = 1;
          }
          else {
            if (uVar17 < 0xf0) {
              local_48 = 0xf;
              iVar18 = 2;
              if (uVar17 == 0xe0) {
                uVar11 = 0xa0;
                local_50 = 0xa0;
LAB_01326534:
                param_2[0x10] = uVar11;
              }
              else if (uVar17 == 0xed) {
                uVar11 = 0x9f;
                local_54 = 0x9f;
                goto LAB_01326548;
              }
            }
            else {
              if (0xf4 < uVar17) goto LAB_01328b1c;
              local_48 = 7;
              iVar18 = 3;
              if (uVar17 != 0xf4) {
                if (uVar17 != 0xf0) goto LAB_01326550;
                uVar11 = 0x90;
                local_50 = 0x90;
                goto LAB_01326534;
              }
              uVar11 = 0x8f;
              local_54 = 0x8f;
LAB_01326548:
              param_2[0x11] = uVar11;
            }
LAB_01326550:
            local_48 = uVar17 & local_48;
            *(uint *)(param_2 + 4) = local_48;
            *(int *)(param_2 + 0xc) = iVar18;
          }
        }
        else {
          param_5[uVar24] = bVar2;
          uVar24 = uVar24 + 1;
          iVar18 = 0;
        }
      }
      if ((uVar17 < local_50) || (local_54 < uVar17)) {
        *(undefined2 *)(param_2 + 0x10) = 0xbf80;
LAB_013268fc:
        *(undefined4 *)(param_2 + 4) = 0;
        *(undefined4 *)(param_2 + 8) = 0;
        *(undefined4 *)(param_2 + 0xc) = 0;
        *(undefined1 *)((int)param_1 + 6) = 0;
        *(char *)((int)param_1 + 5) = (char)local_4c + '\x01';
        uVar11 = 2;
LAB_0132691c:
        *(undefined1 *)(param_1 + 1) = uVar11;
LAB_01326920:
        param_1[2] = uVar24;
        *param_1 = uVar4;
        return;
      }
      *(undefined2 *)(param_2 + 0x10) = 0xbf80;
      uVar17 = uVar17 & 0x3f;
      local_50 = 0x80;
      local_4c = local_4c + 1;
      uVar12 = uVar17 | local_48 << 6;
      *(uint *)(param_2 + 4) = uVar12;
      *(int *)(param_2 + 8) = local_4c;
      local_54 = 0xbf;
      if (local_4c == iVar18) {
        bVar2 = (byte)uVar17;
        bVar5 = (byte)local_48;
        if (iVar18 == 3) {
          pbVar22 = param_5 + uVar24;
          *pbVar22 = (byte)((local_48 & 0x3ffffff) >> 0xc) | 0xf0;
          uVar13 = uVar24 + 4;
          pbVar22[3] = bVar2 | 0x80;
          pbVar22[2] = bVar5 & 0x3f | 0x80;
          pbVar22[1] = (byte)((local_48 & 0x3ffffff) >> 6) & 0x3f | 0x80;
        }
        else {
          uVar4 = local_48 << 6 & 0xffff;
          if ((uVar17 | uVar4) < 0x800) {
            param_5[uVar24] = bVar5 | 0xc0;
            uVar13 = uVar24 + 2;
            (param_5 + uVar24)[1] = bVar2 | 0x80;
          }
          else {
            pbVar22 = param_5 + uVar24;
            *pbVar22 = (byte)(uVar4 >> 0xc) | 0xe0;
            pbVar22[2] = bVar2 | 0x80;
            pbVar22[1] = bVar5 & 0x3f | 0x80;
          }
        }
        uVar12 = 0;
        *(undefined4 *)(param_2 + 4) = 0;
        iVar18 = 0;
        *(undefined4 *)(param_2 + 8) = 0;
        local_4c = 0;
        *(undefined4 *)(param_2 + 0xc) = 0;
        uVar24 = uVar13;
      }
    } while( true );
  case 2:
    uVar4 = 0;
    uVar24 = 0;
    local_28 = 0;
    local_2c = param_6;
    local_30 = param_5;
    if (param_2[7] == '\x01') {
      if (param_6 < 3) {
        local_28 = 0;
        *param_1 = 0;
LAB_013268bc:
        uVar11 = 1;
LAB_013268c0:
        *(undefined1 *)(param_1 + 1) = uVar11;
        uVar24 = local_28;
        goto LAB_01329f88;
      }
      uVar24 = 1;
      param_2[7] = 0;
      *param_5 = param_2[8];
      local_28 = 1;
    }
    cVar19 = param_2[9];
    if (cVar19 != '\0') {
      bVar2 = param_2[10];
      uVar17 = uVar24 + 3;
      uVar7 = (uint)(byte)param_2[0xb];
      uVar13 = (uint)(byte)param_2[0xc];
      uVar12 = 0;
LAB_01326214:
      if (param_4 != uVar12) {
        if (param_6 <= uVar17) {
          *param_1 = 0;
          uVar11 = 1;
          goto LAB_013278b4;
        }
        uVar4 = uVar12 + 1;
        param_2[9] = 0;
        iVar18 = (int)param_3[uVar12];
        if (cVar19 == '\x01') {
          uVar7 = iVar18 - 0x30;
          if ((uVar7 & 0xff) < 10) goto code_r0x0132624c;
          if (bVar2 < 0x20) {
            uVar7 = iVar18 - 0x40;
            if (0x3e < (uVar7 & 0xff)) {
              if (-2 < iVar18) {
LAB_01327c68:
                uVar8 = 2;
                *(undefined1 *)(param_1 + 1) = 2;
                if (iVar18 < 0) {
                  *param_1 = uVar4;
                }
                else {
                  *param_1 = uVar12;
LAB_0132a110:
                  uVar8 = 1;
                }
LAB_0132a114:
                *(undefined2 *)((int)param_1 + 5) = uVar8;
                goto LAB_01329f88;
              }
              uVar7 = iVar18 - 0x41;
            }
            iVar18 = 0;
            uVar13 = 0x77c;
            uVar12 = (short)(ushort)bVar2 * 0xbe + (uVar7 & 0xff);
            do {
              iVar15 = iVar18 + (uVar13 >> 1);
              uVar13 = uVar13 - (uVar13 >> 1);
              uVar7 = uVar12 & 0xffff;
              if (*(ushort *)(&UNK_0044cdea + iVar15 * 2) <= uVar7) {
                iVar18 = iVar15;
              }
            } while (1 < uVar13);
            if (*(ushort *)(&UNK_0044cdea + iVar18 * 2) == uVar7) {
              puVar3 = (ushort *)(&UNK_0044ad6c + iVar18 * 2);
LAB_01328bec:
              uVar12 = (uint)*puVar3;
            }
            else {
              if (*(ushort *)(&UNK_0044cdea + iVar18 * 2) < uVar7) {
                iVar18 = iVar18 + 1;
              }
              uVar7 = iVar18 - 1;
              if (0x77b < uVar7) {
LAB_0132b188:
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(0xffffffff,0x77c,&DAT_01ce502c);
              }
              uVar12 = (uVar12 - *(ushort *)(&UNK_0044cdea + uVar7 * 2)) +
                       (uint)*(ushort *)(&UNK_0044ad6c + uVar7 * 2);
            }
LAB_01328c2c:
            param_5[uVar24] = (byte)((uVar12 & 0xffff) >> 0xc) | 0xe0;
LAB_01329750:
            param_5[uVar24 + 2] = (byte)uVar12 & 0x3f | 0x80;
            param_5[uVar24 + 1] = (byte)(uVar12 >> 6) & 0x3f | 0x80;
            uVar24 = uVar17;
            goto LAB_01329770;
          }
          uVar7 = iVar18 + 0x5f;
          uVar13 = uVar7 & 0xff;
          if (uVar13 < 0x5e) {
            if ((byte)(bVar2 - 0x2f) < 0x48) {
              uVar12 = (uint)*(ushort *)
                              (&UNK_00432302 +
                              uVar13 * 2 + (short)(ushort)(byte)(bVar2 - 0x2f) * 0xbc);
              bVar2 = (byte)(*(ushort *)
                              (&UNK_00432302 +
                              uVar13 * 2 + (short)(ushort)(byte)(bVar2 - 0x2f) * 0xbc) >> 0xc);
LAB_01329748:
              param_5[uVar24] = bVar2 | 0xe0;
              goto LAB_01329750;
            }
            if (bVar2 != 0x20) {
              if (bVar2 == 0x25) {
                uVar12 = iVar18 + 0x20U & 0xff;
                if (uVar12 < 0x16) {
                  puVar3 = (ushort *)(&DAT_0044c092 + uVar12 * 2);
                  goto LAB_0132a1c8;
                }
              }
              else if (bVar2 == 0x27) {
                if (uVar13 < 0x20) {
                  puVar16 = &DAT_0043eb12;
                  goto LAB_0132a1c4;
                }
              }
              else if (0x76 < bVar2) {
                uVar12 = ((short)(bVar2 - 0x77 & 0xff) * 0x5e + (uVar7 & 0xff)) - 0x1dcc;
                bVar2 = (byte)((uVar12 & 0xffff) >> 0xc);
                goto LAB_01329748;
              }
              iVar15 = (short)(bVar2 - 0x21 & 0xff) * 0x5e + (uVar7 & 0xff);
              uVar29 = FUN_0132b6b4(&DAT_004494dc,0x2e,iVar15);
              iVar18 = (int)(uVar29 >> 0x20);
              if ((uVar29 & 1) == 0) {
                if (0x2dffffffff < uVar29) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb12c(iVar18,0x2e,&DAT_01ce501c);
                }
                uVar12 = (uint)*(ushort *)(&DAT_0044e998 + iVar18 * 2);
              }
              else {
                uVar7 = iVar18 - 1;
                if (0x2d < uVar7) {
LAB_0132b210:
                    /* WARNING: Subroutine does not return */
                  FUN_012fb12c(uVar7,0x2e,&DAT_01ce502c);
                }
                uVar12 = ((uint)*(ushort *)(&DAT_0044e998 + uVar7 * 2) + iVar15) -
                         (uint)*(ushort *)(&DAT_004494dc + uVar7 * 2);
              }
              goto LAB_0132ab6c;
            }
            puVar16 = &DAT_00443ed4;
LAB_0132a1c4:
            puVar3 = (ushort *)(puVar16 + uVar13 * 2);
LAB_0132a1c8:
            uVar1 = *puVar3;
            uVar12 = (uint)uVar1;
            pbVar22 = param_5 + uVar24;
            if (0x7ff < uVar12) {
              pbVar22[2] = (byte)uVar1 & 0x3f | 0x80;
              *pbVar22 = (byte)(uVar1 >> 0xc) | 0xe0;
              pbVar22[1] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
              uVar24 = uVar17;
              goto LAB_01329770;
            }
          }
          else {
            uVar7 = iVar18 - 0x40;
            if (0x3e < (uVar7 & 0xff)) {
              if (-0x60 < iVar18) goto LAB_01327c68;
              uVar7 = iVar18 - 0x41;
            }
            uVar13 = ((uint)(byte)(bVar2 - 0x20) * 2 + (uint)(byte)(bVar2 - 0x20)) * 0x20 +
                     (uVar7 & 0xff);
            uVar12 = uVar13 - 0x360;
            if (uVar12 < 0x1f7b) {
              uVar29 = FUN_0132b6b4(&DAT_0044dce2,0x65b,uVar12);
              iVar18 = (int)(uVar29 >> 0x20);
              if ((uVar29 & 1) == 0) {
                if (0x65affffffff < uVar29) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb12c(iVar18,0x65b,&DAT_01ce501c);
                }
                puVar3 = (ushort *)(&DAT_0044c0be + iVar18 * 2);
                goto LAB_01328bec;
              }
              uVar7 = iVar18 - 1;
              if (0x65a < uVar7) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar7,0x65b,&DAT_01ce502c);
              }
              uVar12 = (uVar12 - *(ushort *)(&DAT_0044dce2 + uVar7 * 2)) +
                       (uint)*(ushort *)(&DAT_0044c0be + uVar7 * 2);
              goto LAB_01328c2c;
            }
            if (0x35f < uVar13) {
              uVar13 = uVar13 - 0x22db;
              if (100 < uVar13) {
LAB_0132b1d4:
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar13,0x65,&DAT_01ce500c);
              }
              uVar12 = (uint)*(ushort *)(&DAT_004321b0 + uVar13 * 2);
              bVar2 = (byte)(*(ushort *)(&DAT_004321b0 + uVar13 * 2) >> 0xc);
              goto LAB_01329748;
            }
            uVar29 = FUN_0132b6b4(&DAT_00447b9e,0x3b,uVar13);
            iVar18 = (int)(uVar29 >> 0x20);
            if ((uVar29 & 1) == 0) {
              if (0x3affffffff < uVar29) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(iVar18,0x3b,&DAT_01ce501c);
              }
              uVar12 = (uint)*(ushort *)(&DAT_0044cd74 + iVar18 * 2);
            }
            else {
              uVar7 = iVar18 - 1;
              if (0x3a < uVar7) {
LAB_0132b1f0:
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar7,0x3b,&DAT_01ce502c);
              }
              uVar12 = (*(ushort *)(&DAT_0044cd74 + uVar7 * 2) + uVar13) -
                       (uint)*(ushort *)(&DAT_00447b9e + uVar7 * 2);
            }
            uVar7 = uVar12 & 0xffff;
            if (0x7ff < uVar7) goto LAB_0132aba4;
          }
          (param_5 + uVar24)[1] = (byte)uVar12 & 0x3f | 0x80;
          param_5[uVar24] = (byte)(uVar12 >> 6) | 0xc0;
          uVar24 = uVar24 | 2;
          goto LAB_01329770;
        }
        if (cVar19 == '\x02') {
          uVar13 = iVar18 + 0x7f;
          if ((uVar13 & 0xff) < 0x7e) {
            cVar19 = '\x03';
            param_2[0xc] = (char)uVar13;
            param_2[9] = 3;
            uVar12 = uVar4;
            goto LAB_01326214;
          }
          param_2[8] = (char)uVar7 + '0';
          uVar11 = 1;
          param_2[7] = 1;
        }
        else {
          if ((iVar18 - 0x30U & 0xff) < 10) {
            uVar12 = (short)((ushort)uVar7 & 0xff) * 0x4ec +
                     (short)(ushort)bVar2 * 0x3138 + (iVar18 - 0x30U & 0xff) +
                     ((uVar13 & 0xff) * 4 + (uVar13 & 0xff)) * 2;
            if (uVar12 < 0x99fc) {
              if (uVar12 == 0x1d21) {
                pbVar22 = param_5 + uVar24;
                pbVar22[0] = 0xee;
                pbVar22[1] = 0x9f;
                pbVar22[2] = 0x87;
                uVar24 = uVar17;
              }
              else {
                uVar29 = FUN_0132b6b4(&DAT_004495a6,0xce,uVar12);
                iVar18 = (int)(uVar29 >> 0x20);
                if ((uVar29 & 1) == 0) {
                  if (0xcdffffffff < uVar29) {
                    /* WARNING: Subroutine does not return */
                    FUN_012fb12c(iVar18,0xce,&DAT_01ce501c);
                  }
                  uVar12 = (uint)*(ushort *)(&DAT_00449340 + iVar18 * 2);
                }
                else {
                  uVar7 = iVar18 - 1;
                  if (0xcd < uVar7) {
LAB_0132b1c4:
                    /* WARNING: Subroutine does not return */
                    FUN_012fb12c(uVar7,0xce,&DAT_01ce502c);
                  }
                  uVar12 = (*(ushort *)(&DAT_00449340 + uVar7 * 2) + uVar12) -
                           (uint)*(ushort *)(&DAT_004495a6 + uVar7 * 2);
                }
LAB_0132ab6c:
                uVar7 = uVar12 & 0xffff;
                if (uVar7 < 0x800) {
                  (param_5 + uVar24)[1] = (byte)uVar12 & 0x3f | 0x80;
                  param_5[uVar24] = (byte)(uVar12 >> 6) | 0xc0;
                  uVar24 = uVar24 | 2;
                }
                else {
LAB_0132aba4:
                  pbVar22 = param_5 + uVar24;
                  pbVar22[2] = (byte)uVar12 & 0x3f | 0x80;
                  pbVar22[1] = (byte)(uVar12 >> 6) & 0x3f | 0x80;
                  *pbVar22 = (byte)(uVar7 >> 0xc) | 0xe0;
                  uVar24 = uVar17;
                }
              }
            }
            else {
              if (0xfffff < uVar12 - 0x2e248) {
                *(undefined1 *)((int)param_1 + 6) = 0;
                uVar8 = 0x402;
LAB_01329fac:
                *(undefined2 *)(param_1 + 1) = uVar8;
LAB_01329fe8:
                *param_1 = uVar4;
                goto LAB_01329f88;
              }
              uVar12 = uVar12 - 0x1e248;
              param_5[uVar17] = (byte)uVar12 & 0x3f | 0x80;
              pbVar22 = param_5 + uVar24;
              *pbVar22 = (byte)(uVar12 >> 0x12) | 0xf0;
              pbVar22[2] = (byte)(uVar12 >> 6) & 0x3f | 0x80;
              uVar24 = uVar24 | 4;
              pbVar22[1] = (byte)(uVar12 >> 0xc) & 0x3f | 0x80;
            }
            goto LAB_01329770;
          }
          param_2[10] = (char)uVar13;
          param_2[9] = 1;
          param_2[7] = 1;
          uVar11 = 2;
          param_2[8] = (char)uVar7 + '0';
        }
        *(undefined1 *)((int)param_1 + 6) = uVar11;
        *(undefined2 *)(param_1 + 1) = 0x102;
        *param_1 = uVar12;
        goto LAB_01329f88;
      }
      if (param_7 == 0) {
        uVar11 = 0;
        *param_1 = param_4;
LAB_013278b4:
        *(undefined1 *)(param_1 + 1) = uVar11;
      }
      else {
        param_2[9] = 0;
        *(undefined1 *)((int)param_1 + 6) = 0;
        *(char *)((int)param_1 + 5) = cVar19;
        *(undefined1 *)(param_1 + 1) = 2;
        *param_1 = param_4;
      }
LAB_01329f88:
      param_1[2] = uVar24;
      return;
    }
LAB_01329770:
    do {
      if (param_6 < uVar24) {
        puVar16 = &DAT_01ce504c;
        goto LAB_0132afcc;
      }
      uVar13 = param_4 - uVar4;
      pcVar23 = param_3 + uVar4;
      uVar7 = param_6 - uVar24;
      param_5 = param_5 + uVar24;
      uVar12 = uVar13;
      if (uVar7 < uVar13) {
        uVar12 = uVar7;
      }
      uVar17 = 0;
      if (((((uint)param_5 ^ (uint)pcVar23) & 3) == 0) &&
         (uVar9 = -(int)pcVar23 & 3, (uVar9 | 8) <= uVar12)) {
        if (uVar9 != 0) {
          do {
            uVar14 = (uint)pcVar23[uVar17];
            if ((int)uVar14 < 0) goto LAB_0132987c;
            param_5[uVar17] = pcVar23[uVar17];
            uVar17 = uVar17 + 1;
          } while (uVar9 != uVar17);
        }
        do {
          uVar26 = *(uint *)(param_3 + uVar17 + uVar4 + 4);
          uVar9 = *(uint *)((int)(param_3 + uVar17 + uVar4 + 4) + -4);
          *(uint *)(param_5 + uVar17) = uVar9;
          *(uint *)((int)(param_5 + uVar17) + 4) = uVar26;
          uVar27 = uVar26 & 0x80808080;
          uVar14 = uVar9 & 0x80808080;
          if (uVar27 != 0 || uVar14 != 0) {
            uVar12 = (uint)LZCOUNT((uVar9 >> 7 & 1) << 0x18 | (uVar14 >> 0xf & 1) << 0x10 |
                                   (uVar14 >> 0x17 & 1) << 8 | uVar9 >> 0x1f) >> 3;
            if (uVar14 == 0) {
              uVar12 = ((uint)LZCOUNT((uVar26 >> 7 & 1) << 0x18 | (uVar27 >> 0xf & 1) << 0x10 |
                                      (uVar27 >> 0x17 & 1) << 8 | uVar26 >> 0x1f) >> 3) + 4;
            }
            uVar17 = uVar12 + uVar17;
            uVar14 = (uint)(byte)pcVar23[uVar17];
            goto LAB_0132987c;
          }
          uVar17 = uVar17 + 8;
        } while (uVar17 <= uVar12 - 8);
      }
      if (uVar12 <= uVar17) {
LAB_01329f60:
        local_28 = uVar12 + uVar24;
        uVar12 = uVar12 + uVar4;
        uVar24 = 0;
        if (uVar7 < uVar13) {
          uVar24 = 1;
        }
LAB_01329f74:
        *param_1 = uVar12;
        param_1[1] = (uint)&local_30 & 0xffffff03 | uVar24;
        uVar24 = local_28;
        goto LAB_01329f88;
      }
      while( true ) {
        uVar14 = (uint)pcVar23[uVar17];
        if ((int)uVar14 < 0) break;
        param_5[uVar17] = pcVar23[uVar17];
        uVar17 = uVar17 + 1;
        if (uVar12 == uVar17) goto LAB_01329f60;
      }
LAB_0132987c:
      local_28 = uVar17 + uVar24;
      uVar12 = uVar17 + uVar4;
      if (param_6 <= local_28 + 3) {
        uVar24 = 1;
        goto LAB_01329f74;
      }
      uVar4 = uVar12 + 1;
      do {
        uVar12 = uVar14 + 0x7f & 0xff;
        uVar24 = local_28;
        if (0x7d < uVar12) {
          if ((uVar14 & 0xff) == 0x80) {
            uVar24 = local_28 + 3;
            pbVar22 = local_30 + local_28;
            pbVar22[0] = 0xe2;
            pbVar22[1] = 0x82;
            pbVar22[2] = 0xac;
            goto LAB_01329f44;
          }
LAB_01329f9c:
          *(undefined1 *)((int)param_1 + 6) = 0;
          uVar8 = 0x102;
          goto LAB_01329fac;
        }
        uVar11 = (undefined1)(uVar14 + 0x7f);
        if (param_4 <= uVar4) {
          if (param_7 != 0) goto LAB_01329f9c;
          param_2[9] = 1;
          param_2[10] = uVar11;
          *(undefined1 *)(param_1 + 1) = 0;
          goto LAB_01329fe8;
        }
        uVar17 = uVar4 + 1;
        iVar18 = (int)param_3[uVar4];
        uVar7 = iVar18 - 0x30U & 0xff;
        if (uVar7 < 10) {
          bVar2 = (byte)(iVar18 - 0x30U);
          if (param_4 <= uVar17) {
            if (param_7 == 0) {
              param_2[9] = 2;
              param_2[0xb] = bVar2;
              param_2[10] = uVar11;
              *(undefined1 *)(param_1 + 1) = 0;
            }
            else {
              *(undefined1 *)((int)param_1 + 6) = 0;
              uVar8 = 0x202;
LAB_0132a0ec:
              *(undefined2 *)(param_1 + 1) = uVar8;
            }
            *param_1 = uVar17;
            goto LAB_01329f88;
          }
          bVar5 = param_3[uVar17] + 0x7f;
          if (0x7d < bVar5) {
            param_2[8] = bVar2 | 0x30;
            param_2[7] = 1;
            *(undefined1 *)((int)param_1 + 6) = 1;
            uVar8 = 0x102;
            goto LAB_0132a0ec;
          }
          uVar13 = uVar4 + 2;
          if (param_4 <= uVar13) {
            if (param_7 == 0) {
              param_2[10] = uVar11;
              param_2[9] = 3;
              param_2[0xc] = bVar5;
              param_2[0xb] = bVar2;
              *(undefined1 *)(param_1 + 1) = 0;
            }
            else {
              *(undefined1 *)((int)param_1 + 6) = 0;
              uVar8 = 0x302;
LAB_0132a084:
              *(undefined2 *)(param_1 + 1) = uVar8;
            }
            *param_1 = uVar13;
            goto LAB_01329f88;
          }
          if (9 < (byte)(param_3[uVar13] - 0x30U)) {
            param_2[9] = 1;
            param_2[7] = 1;
            *(undefined1 *)((int)param_1 + 6) = 2;
            uVar8 = 0x102;
            param_2[10] = bVar5;
            param_2[8] = bVar2 | 0x30;
            goto LAB_0132a084;
          }
          uVar17 = uVar4 + 3;
          uVar13 = (short)uVar12 * 0x3138 + (short)uVar7 * 0x4ec +
                   ((uint)bVar5 * 4 + (uint)bVar5) * 2 + (uint)(byte)(param_3[uVar13] - 0x30);
          if (uVar13 < 0x99fc) {
            puVar16 = &DAT_004495a6;
            if (uVar13 == 0x1d21) {
              pbVar22 = local_30 + local_28;
              pbVar22[0] = 0xee;
              pbVar22[1] = 0x9f;
              pbVar22[2] = 0x87;
              goto LAB_01329d1c;
            }
            iVar18 = 0;
            uVar24 = 0xce;
            do {
              iVar15 = iVar18 + (uVar24 >> 1);
              uVar24 = uVar24 - (uVar24 >> 1);
              uVar4 = uVar13 & 0xffff;
              if (*(ushort *)(&DAT_004495a6 + iVar15 * 2) <= uVar4) {
                iVar18 = iVar15;
              }
            } while (1 < uVar24);
            if (*(ushort *)(&DAT_004495a6 + iVar18 * 2) == uVar4) {
              puVar16 = &DAT_00449340;
              goto LAB_01329e4c;
            }
            if (*(ushort *)(&DAT_004495a6 + iVar18 * 2) < uVar4) {
              iVar18 = iVar18 + 1;
            }
            uVar7 = iVar18 - 1;
            if (uVar7 < 0xce) {
              puVar10 = &DAT_00449340;
              goto LAB_01329e90;
            }
            goto LAB_0132b1c4;
          }
          if (0xfffff < uVar13 - 0x2e248) {
            *(undefined1 *)((int)param_1 + 6) = 0;
            uVar8 = 0x402;
            goto LAB_0132a0ec;
          }
          uVar13 = uVar13 - 0x1e248;
          pbVar22 = local_30 + local_28;
          *pbVar22 = (byte)(uVar13 >> 0x12) | 0xf0;
          pbVar22[3] = (byte)uVar13 & 0x3f | 0x80;
          pbVar22[1] = (byte)(uVar13 >> 0xc) & 0x3f | 0x80;
          iVar18 = 4;
          pbVar22[2] = (byte)(uVar13 >> 6) & 0x3f | 0x80;
        }
        else if (uVar12 < 0x20) {
          uVar7 = iVar18 - 0x40;
          if (0x3e < (uVar7 & 0xff)) {
            if (-2 < iVar18) {
LAB_0132a0f8:
              uVar8 = 2;
              *(undefined1 *)(param_1 + 1) = 2;
              if (iVar18 < 0) {
                *param_1 = uVar17;
                goto LAB_0132a114;
              }
              *param_1 = uVar4;
              goto LAB_0132a110;
            }
            uVar7 = iVar18 - 0x41;
          }
          uVar4 = 0x77c;
          uVar24 = (short)uVar12 * 0xbe + (uVar7 & 0xff);
          iVar18 = 0;
          do {
            iVar15 = iVar18 + (uVar4 >> 1);
            uVar4 = uVar4 - (uVar4 >> 1);
            uVar12 = uVar24 & 0xffff;
            if (*(ushort *)(&UNK_0044cdea + iVar15 * 2) <= uVar12) {
              iVar18 = iVar15;
            }
          } while (1 < uVar4);
          if (*(ushort *)(&UNK_0044cdea + iVar18 * 2) == uVar12) {
            puVar3 = (ushort *)(&UNK_0044ad6c + iVar18 * 2);
LAB_01329a3c:
            uVar24 = (uint)*puVar3;
          }
          else {
            if (*(ushort *)(&UNK_0044cdea + iVar18 * 2) < uVar12) {
              iVar18 = iVar18 + 1;
            }
            uVar4 = iVar18 - 1;
            if (0x77b < uVar4) goto LAB_0132b188;
            uVar24 = (uVar24 - *(ushort *)(&UNK_0044cdea + uVar4 * 2)) +
                     (uint)*(ushort *)(&UNK_0044ad6c + uVar4 * 2);
          }
LAB_01329b84:
          bVar2 = (byte)((uVar24 & 0xffff) >> 0xc);
LAB_01329cfc:
          local_30[local_28] = bVar2 | 0xe0;
          bVar2 = (byte)(uVar24 >> 6) & 0x3f | 0x80;
LAB_01329d10:
          local_30[local_28 + 2] = (byte)uVar24 & 0x3f | 0x80;
          local_30[local_28 + 1] = bVar2;
LAB_01329d1c:
          iVar18 = 3;
        }
        else {
          uVar7 = iVar18 + 0x5f;
          uVar13 = uVar7 & 0xff;
          if (uVar13 < 0x5e) {
            uVar24 = uVar14 + 0x50 & 0xff;
            if (uVar24 < 0x48) {
              puVar3 = (ushort *)(&UNK_00432302 + uVar13 * 2 + (short)uVar24 * 0xbc);
LAB_01329cec:
              uVar24 = (uint)*puVar3;
              bVar2 = (byte)(*puVar3 >> 0xc);
              goto LAB_01329cfc;
            }
            uVar24 = uVar14 & 0xff;
            if (uVar24 == 0xa1) {
              puVar16 = &DAT_00443ed4;
            }
            else {
              if (uVar24 != 0xa6) {
                if (uVar24 == 0xa8) {
                  if (uVar13 < 0x20) {
                    puVar16 = &DAT_0043eb12;
                    goto LAB_01329d80;
                  }
                }
                else if (0x76 < uVar12) {
                  uVar24 = ((short)((short)uVar14 + 8U & 0xff) * 0x5e + (uVar7 & 0xff)) - 0x1dcc;
                  local_30[local_28] = (byte)((uVar24 & 0xffff) >> 0xc) | 0xe0;
                  bVar2 = (byte)(uVar24 >> 6) & 0xbf;
                  goto LAB_01329d10;
                }
LAB_01329df0:
                puVar16 = &DAT_004494dc;
                uVar24 = 0x2e;
                uVar13 = (short)((short)uVar14 + 0x5eU & 0xff) * 0x5e + (uVar7 & 0xff);
                iVar18 = 0;
                do {
                  iVar15 = iVar18 + (uVar24 >> 1);
                  uVar24 = uVar24 - (uVar24 >> 1);
                  if (*(ushort *)(&DAT_004494dc + iVar15 * 2) <= uVar13) {
                    iVar18 = iVar15;
                  }
                } while (1 < uVar24);
                if (*(ushort *)(&DAT_004494dc + iVar18 * 2) == uVar13) {
                  puVar16 = &DAT_0044e998;
                  goto LAB_01329e4c;
                }
                if (*(ushort *)(&DAT_004494dc + iVar18 * 2) < uVar13) {
                  iVar18 = iVar18 + 1;
                }
                uVar7 = iVar18 - 1;
                if (uVar7 < 0x2e) {
                  puVar10 = &DAT_0044e998;
                  goto LAB_01329e90;
                }
                goto LAB_0132b210;
              }
              uVar13 = iVar18 + 0x20U & 0xff;
              if (0x15 < uVar13) goto LAB_01329df0;
              puVar16 = &DAT_0044c092;
            }
LAB_01329d80:
            uVar24 = (uint)*(ushort *)(puVar16 + uVar13 * 2);
            if (0x7ff < uVar24) {
              bVar2 = (byte)(*(ushort *)(puVar16 + uVar13 * 2) >> 0xc);
              goto LAB_01329ee4;
            }
          }
          else {
            uVar12 = iVar18 - 0x40;
            if (0x3e < (uVar12 & 0xff)) {
              if (-0x60 < iVar18) goto LAB_0132a0f8;
              uVar12 = iVar18 - 0x41;
            }
            uVar13 = ((uVar14 + 0x5f & 0xff) * 2 + (uVar14 + 0x5f & 0xff)) * 0x20 + (uVar12 & 0xff);
            uVar24 = uVar13 - 0x360;
            if (uVar24 < 0x1f7b) {
              iVar18 = 0;
              uVar4 = 0x65b;
              do {
                iVar15 = iVar18 + (uVar4 >> 1);
                uVar4 = uVar4 - (uVar4 >> 1);
                uVar12 = uVar24 & 0xffff;
                if (*(ushort *)(&DAT_0044dce2 + iVar15 * 2) <= uVar12) {
                  iVar18 = iVar15;
                }
              } while (1 < uVar4);
              if (*(ushort *)(&DAT_0044dce2 + iVar18 * 2) == uVar12) {
                puVar3 = (ushort *)(&DAT_0044c0be + iVar18 * 2);
                goto LAB_01329a3c;
              }
              if (*(ushort *)(&DAT_0044dce2 + iVar18 * 2) < uVar12) {
                iVar18 = iVar18 + 1;
              }
              uVar4 = iVar18 - 1;
              if (0x65a < uVar4) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar4,0x65b,&DAT_01ce502c);
              }
              uVar24 = (uVar24 - *(ushort *)(&DAT_0044dce2 + uVar4 * 2)) +
                       (uint)*(ushort *)(&DAT_0044c0be + uVar4 * 2);
              goto LAB_01329b84;
            }
            puVar16 = &DAT_00447b9e;
            if (0x35f < uVar13) {
              uVar13 = uVar13 - 0x22db;
              if (uVar13 < 0x65) {
                puVar3 = (ushort *)(&DAT_004321b0 + uVar13 * 2);
                goto LAB_01329cec;
              }
              goto LAB_0132b1d4;
            }
            iVar18 = 0;
            uVar24 = 0x3b;
            do {
              iVar15 = iVar18 + (uVar24 >> 1);
              uVar24 = uVar24 - (uVar24 >> 1);
              if (*(ushort *)(&DAT_00447b9e + iVar15 * 2) <= uVar13) {
                iVar18 = iVar15;
              }
            } while (1 < uVar24);
            if (*(ushort *)(&DAT_00447b9e + iVar18 * 2) == uVar13) {
              puVar16 = &DAT_0044cd74;
LAB_01329e4c:
              uVar24 = (uint)*(ushort *)(puVar16 + iVar18 * 2);
            }
            else {
              if (*(ushort *)(&DAT_00447b9e + iVar18 * 2) < uVar13) {
                iVar18 = iVar18 + 1;
              }
              uVar7 = iVar18 - 1;
              if (0x3a < uVar7) goto LAB_0132b1f0;
              puVar10 = &DAT_0044cd74;
LAB_01329e90:
              uVar24 = (*(ushort *)(puVar10 + uVar7 * 2) + uVar13) -
                       (uint)*(ushort *)(puVar16 + uVar7 * 2);
            }
            if (0x7ff < (uVar24 & 0xffff)) {
              bVar2 = (byte)((uVar24 & 0xffff) >> 0xc);
LAB_01329ee4:
              pbVar22 = local_30 + local_28;
              *pbVar22 = bVar2 | 0xe0;
              pbVar22[2] = (byte)uVar24 & 0x3f | 0x80;
              pbVar22[1] = (byte)(uVar24 >> 6) & 0x3f | 0x80;
              goto LAB_01329d1c;
            }
          }
          local_30[local_28] = (byte)(uVar24 >> 6) | 0xc0;
          iVar18 = 2;
          (local_30 + local_28)[1] = (byte)uVar24 & 0x3f | 0x80;
        }
        local_28 = local_28 + iVar18;
        if (param_4 <= uVar17) {
          uVar11 = 0;
          *param_1 = uVar17;
          goto LAB_013268c0;
        }
        if (local_2c <= local_28 + 3) {
          *param_1 = uVar17;
          goto LAB_013268bc;
        }
        uVar4 = uVar17 + 1;
        uVar14 = (uint)param_3[uVar17];
      } while ((int)uVar14 < 0);
      uVar24 = local_28 + 1;
      local_30[local_28] = param_3[uVar17];
LAB_01329f44:
      param_6 = local_2c;
      param_5 = local_30;
      local_28 = uVar24;
    } while (uVar4 <= param_4);
    puVar16 = &UNK_01ce503c;
    goto LAB_0132ac90;
  case 3:
    uVar24 = 0;
    iVar18 = 0;
    local_2c = param_6;
    if (param_2[1] != '\0') {
      param_2[1] = 0;
      if (param_4 == 0) {
LAB_01326798:
        if (param_7 == 0) {
          uVar11 = 0;
          param_1[2] = 0;
          *param_1 = 0;
LAB_0132a900:
          *(undefined1 *)(param_1 + 1) = uVar11;
          return;
        }
        uVar4 = 0;
        *(undefined1 *)((int)param_1 + 6) = 0;
        *(undefined2 *)(param_1 + 1) = 0x102;
        param_1[2] = 0;
        goto LAB_01327bdc;
      }
      if (param_6 < 4) {
LAB_01326820:
        param_1[2] = 0;
        *param_1 = 0;
LAB_01326828:
        uVar11 = 1;
        goto LAB_0132a900;
      }
      uVar24 = (uint)*param_3;
      uVar4 = uVar24 - 0x40;
      if (0x3e < (uVar4 & 0xff)) {
        if (0xa1 < (uVar24 + 1 & 0xff)) {
          uVar4 = uVar24 - 0x62;
          goto LAB_01327a5c;
        }
        goto LAB_013262e0;
      }
LAB_01327a5c:
      uVar4 = (short)(ushort)(byte)param_2[2] * 0x9d + (uVar4 & 0xff);
      uVar12 = uVar4 - 0x3ae;
      if ((0x4997 < uVar12) || (uVar1 = *(ushort *)(&DAT_004357e2 + uVar12 * 2), uVar1 == 0)) {
        if (uVar4 < 0x48c) {
          if (uVar4 == 0x46d) {
            param_5[2] = 0xcc;
            uVar8 = 0x8ac3;
            goto LAB_01328620;
          }
          if (uVar4 == 0x46f) {
            param_5[2] = 0xcc;
            uVar8 = 0x8ac3;
            goto LAB_01327b3c;
          }
        }
        else {
          if (uVar4 == 0x48c) {
            param_5[2] = 0xcc;
            uVar8 = 0xaac3;
LAB_01328620:
            *(undefined2 *)param_5 = uVar8;
            bVar2 = 0x84;
            goto LAB_0132862c;
          }
          if (uVar4 == 0x48e) {
            param_5[2] = 0xcc;
            uVar8 = 0xaac3;
LAB_01327b3c:
            *(undefined2 *)param_5 = uVar8;
            bVar2 = 0x8c;
            goto LAB_0132862c;
          }
        }
LAB_013262e0:
        *(undefined1 *)(param_1 + 1) = 2;
        if (0x7fffffff < uVar24) {
          param_1[2] = 0;
          uVar4 = 1;
LAB_0132a9e8:
          *param_1 = uVar4;
LAB_0132a9ec:
          *(undefined2 *)((int)param_1 + 5) = 2;
          return;
        }
        goto LAB_01328dc0;
      }
      bVar2 = (byte)(uVar1 >> 8);
      bVar5 = (byte)uVar1;
      if ((*(uint *)(&DAT_004451ec + (uVar12 >> 5) * 4) >> (uVar12 & 0x1f) & 1) == 0) {
        if (uVar1 < 0x800) {
          iVar18 = 1;
          *param_5 = (byte)(uVar1 >> 6) | 0xc0;
          uVar24 = 2;
          bVar2 = bVar5 & 0x3f | 0x80;
        }
        else {
          iVar18 = 2;
          *param_5 = bVar2 >> 4 | 0xe0;
          bVar2 = bVar5 & 0x3f | 0x80;
          param_5[1] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
          uVar24 = 3;
        }
      }
      else {
        param_5[1] = bVar2 >> 4 | 0xa0;
        *param_5 = 0xf0;
        bVar2 = bVar5 & 0x3f | 0x80;
        param_5[2] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
LAB_0132862c:
        uVar24 = 4;
        iVar18 = 3;
      }
      param_5[iVar18] = bVar2;
      iVar18 = 1;
    }
    for (; uVar24 <= param_6; uVar24 = uVar24 + 1) {
      uVar12 = param_4 - iVar18;
      uVar7 = param_6 - uVar24;
      pcVar23 = param_3 + iVar18;
      pbVar22 = param_5 + uVar24;
      uVar4 = uVar12;
      if (uVar7 < uVar12) {
        uVar4 = uVar7;
      }
      uVar13 = 0;
      if (((((uint)pbVar22 ^ (uint)pcVar23) & 3) == 0) &&
         (uVar17 = -(int)pcVar23 & 3, (uVar17 | 8) <= uVar4)) {
        if (uVar17 != 0) {
          do {
            uVar9 = (uint)pcVar23[uVar13];
            if ((int)uVar9 < 0) goto LAB_01328790;
            pbVar22[uVar13] = pcVar23[uVar13];
            uVar13 = uVar13 + 1;
          } while (uVar17 != uVar13);
        }
        do {
          uVar17 = *(uint *)(param_3 + uVar13 + iVar18 + 4);
          uVar9 = *(uint *)((int)(param_3 + uVar13 + iVar18 + 4) + -4);
          *(uint *)(pbVar22 + uVar13) = uVar9;
          *(uint *)((int)(pbVar22 + uVar13) + 4) = uVar17;
          uVar26 = uVar17 & 0x80808080;
          uVar14 = uVar9 & 0x80808080;
          if (uVar26 != 0 || uVar14 != 0) {
            uVar4 = (uint)LZCOUNT((uVar9 >> 7 & 1) << 0x18 | (uVar14 >> 0xf & 1) << 0x10 |
                                  (uVar14 >> 0x17 & 1) << 8 | uVar9 >> 0x1f) >> 3;
            if (uVar14 == 0) {
              uVar4 = ((uint)LZCOUNT((uVar17 >> 7 & 1) << 0x18 | (uVar26 >> 0xf & 1) << 0x10 |
                                     (uVar26 >> 0x17 & 1) << 8 | uVar17 >> 0x1f) >> 3) + 4;
            }
            uVar13 = uVar4 + uVar13;
            uVar9 = (uint)(byte)pcVar23[uVar13];
            goto LAB_01328790;
          }
          uVar13 = uVar13 + 8;
        } while (uVar13 <= uVar4 - 8);
      }
      if (uVar4 <= uVar13) {
LAB_013289b8:
        uVar24 = uVar4 + uVar24;
        uVar12 = (uint)(uVar7 < uVar12);
        uVar13 = uVar4;
LAB_013289d0:
        param_1[2] = uVar24;
        *param_1 = uVar13 + iVar18;
        param_1[1] = (uint)&local_30 & 0xffffff03 | uVar12;
        return;
      }
      while( true ) {
        uVar9 = (uint)pcVar23[uVar13];
        if ((int)uVar9 < 0) break;
        pbVar22[uVar13] = pcVar23[uVar13];
        uVar13 = uVar13 + 1;
        if (uVar4 == uVar13) goto LAB_013289b8;
      }
LAB_01328790:
      uVar24 = uVar13 + uVar24;
      if (param_6 <= uVar24 + 3) {
        uVar12 = 1;
        goto LAB_013289d0;
      }
      uVar4 = uVar13 + iVar18;
      do {
        uVar13 = uVar4;
        uVar7 = uVar13 + 1;
        uVar12 = uVar9 + 0x7f & 0xff;
        if (0x7d < uVar12) {
LAB_013289f4:
          *(undefined1 *)((int)param_1 + 6) = 0;
          *(undefined2 *)(param_1 + 1) = 0x102;
LAB_01328a60:
          param_1[2] = uVar24;
          *param_1 = uVar7;
          return;
        }
        if (param_4 <= uVar7) {
          if (param_7 == 0) {
            param_2[2] = (char)(uVar9 + 0x7f);
            param_2[1] = 1;
            *(undefined1 *)(param_1 + 1) = 0;
            goto LAB_01328a60;
          }
          goto LAB_013289f4;
        }
        uVar4 = uVar13 + 2;
        iVar18 = (int)param_3[uVar13 + 1];
        uVar17 = iVar18 - 0x40;
        if (0x3e < (uVar17 & 0xff)) {
          if ((iVar18 + 1U & 0xff) < 0xa2) goto LAB_01328a28;
          uVar17 = iVar18 - 0x62;
        }
        uVar12 = (short)uVar12 * 0x9d + (uVar17 & 0xff);
        uVar17 = uVar12 - 0x3ae;
        if ((uVar17 < 0x4998) && (uVar1 = *(ushort *)(&DAT_004357e2 + uVar17 * 2), uVar1 != 0)) {
          bVar2 = (byte)uVar1;
          bVar5 = (byte)(uVar1 >> 8);
          if ((*(uint *)(&DAT_004451ec + (uVar17 >> 5) * 4) >> (uVar17 & 0x1f) & 1) != 0) {
            pbVar22 = param_5 + uVar24;
            *pbVar22 = 0xf0;
            pbVar22[3] = bVar2 & 0x3f | 0x80;
            pbVar22[2] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
            pbVar22[1] = bVar5 >> 4 | 0xa0;
            goto LAB_01328904;
          }
          pbVar22 = param_5 + uVar24;
          if (uVar1 < 0x800) {
            iVar18 = 2;
            pbVar22[1] = bVar2 & 0x3f | 0x80;
            *pbVar22 = (byte)(uVar1 >> 6) | 0xc0;
          }
          else {
            pbVar22[2] = bVar2 & 0x3f | 0x80;
            iVar18 = 3;
            *pbVar22 = bVar5 >> 4 | 0xe0;
            pbVar22[1] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
          }
        }
        else {
          if (uVar12 < 0x48c) {
            if (uVar12 == 0x46d) {
              uVar12 = 0x8ac3;
              goto LAB_013288f8;
            }
            if (uVar12 != 0x46f) goto LAB_01328a28;
            uVar12 = 0x8ac3;
LAB_013288e4:
            uVar12 = uVar12 | 0x8ccc0000;
          }
          else {
            if (uVar12 != 0x48c) {
              if (uVar12 != 0x48e) {
LAB_01328a28:
                *(undefined1 *)(param_1 + 1) = 2;
                if (iVar18 < 0) {
                  param_1[2] = uVar24;
                  *param_1 = uVar4;
                  *(undefined2 *)((int)param_1 + 5) = 2;
                  return;
                }
                param_1[2] = uVar24;
                *param_1 = uVar7;
                *(undefined2 *)((int)param_1 + 5) = 1;
                return;
              }
              uVar12 = 0xaac3;
              goto LAB_013288e4;
            }
            uVar12 = 0xaac3;
LAB_013288f8:
            uVar12 = uVar12 | 0x84cc0000;
          }
          *(uint *)(param_5 + uVar24) = uVar12;
LAB_01328904:
          iVar18 = 4;
        }
        uVar24 = uVar24 + iVar18;
        if (param_4 <= uVar4) {
          param_1[2] = uVar24;
          *param_1 = uVar4;
          *(undefined1 *)(param_1 + 1) = 0;
          return;
        }
        if (param_6 <= uVar24 + 3) {
          param_1[2] = uVar24;
          *param_1 = uVar4;
          goto LAB_01326828;
        }
        uVar9 = (uint)param_3[uVar13 + 2];
      } while ((int)uVar9 < 0);
      iVar18 = uVar13 + 3;
      param_5[uVar24] = param_3[uVar13 + 2];
    }
    puVar16 = &DAT_01ce504c;
LAB_0132afcc:
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar24,param_6,param_6,puVar16);
  case 4:
    cVar19 = param_2[1];
    local_2c = param_6;
    local_30 = param_5;
    if (cVar19 == '\0') {
      uVar24 = 0;
      uVar12 = 0;
LAB_0132a31c:
      while (uVar24 <= param_6) {
        uVar13 = param_4 - uVar12;
        uVar7 = param_6 - uVar24;
        pcVar23 = param_3 + uVar12;
        pbVar22 = local_44 + uVar24;
        uVar4 = uVar13;
        if (uVar7 < uVar13) {
          uVar4 = uVar7;
        }
        uVar17 = 0;
        if (((((uint)pbVar22 ^ (uint)pcVar23) & 3) == 0) &&
           (uVar9 = -(int)pcVar23 & 3, (uVar9 | 8) <= uVar4)) {
          if (uVar9 != 0) {
            do {
              uVar14 = (uint)pcVar23[uVar17];
              if ((int)uVar14 < 0) goto LAB_0132a47c;
              pbVar22[uVar17] = pcVar23[uVar17];
              uVar17 = uVar17 + 1;
            } while (uVar9 != uVar17);
          }
          do {
            uVar26 = *(uint *)(param_3 + uVar17 + uVar12 + 4);
            uVar14 = *(uint *)((int)(param_3 + uVar17 + uVar12 + 4) + -4);
            *(uint *)(pbVar22 + uVar17) = uVar14;
            *(uint *)((int)(pbVar22 + uVar17) + 4) = uVar26;
            uVar9 = uVar26 & 0x80808080;
            uVar27 = uVar14 & 0x80808080;
            if (uVar9 != 0 || uVar27 != 0) {
              uVar4 = (uint)LZCOUNT((uVar14 >> 7 & 1) << 0x18 | (uVar27 >> 0xf & 1) << 0x10 |
                                    (uVar27 >> 0x17 & 1) << 8 | uVar14 >> 0x1f) >> 3;
              if (uVar27 == 0) {
                uVar4 = ((uint)LZCOUNT((uVar26 >> 7 & 1) << 0x18 | (uVar9 >> 0xf & 1) << 0x10 |
                                       (uVar9 >> 0x17 & 1) << 8 | uVar26 >> 0x1f) >> 3) + 4;
              }
              uVar17 = uVar4 + uVar17;
              uVar14 = (uint)(byte)pcVar23[uVar17];
              goto LAB_0132a47c;
            }
            uVar17 = uVar17 + 8;
          } while (uVar17 <= uVar4 - 8);
        }
        if (uVar4 <= uVar17) {
LAB_0132a8c4:
          uVar24 = uVar4 + uVar24;
          uVar4 = uVar4 + uVar12;
          uVar12 = (uint)(uVar7 < uVar13);
LAB_0132a8dc:
          *param_1 = uVar4;
          param_1[1] = (uint)&local_30 & 0xffffff03 | uVar12;
          param_1[2] = uVar24;
          return;
        }
        while( true ) {
          uVar14 = (uint)pcVar23[uVar17];
          if ((int)uVar14 < 0) break;
          pbVar22[uVar17] = pcVar23[uVar17];
          uVar17 = uVar17 + 1;
          if (uVar4 == uVar17) goto LAB_0132a8c4;
        }
LAB_0132a47c:
        uVar24 = uVar17 + uVar24;
        uVar4 = uVar17 + uVar12;
        if (param_6 <= uVar24 + 2) {
          uVar12 = 1;
          goto LAB_0132a8dc;
        }
        uVar12 = uVar4 + 1;
        local_28 = uVar24;
        do {
          uVar4 = uVar14 + 0x5f & 0xff;
          if (0x5d < uVar4) {
            if ((uVar14 & 0xff) == 0x8e) {
              if (uVar12 < param_4) {
                cVar19 = param_3[uVar12];
                uVar4 = (int)cVar19 + 0x5f;
                if ((uVar4 & 0xff) < 0x3f) {
                  local_44[uVar24] = 0xef;
                  uVar4 = (uVar4 & 0xff) - 0x9f;
                  bVar2 = 0xbf;
LAB_0132a610:
                  uVar17 = uVar12 + 1;
                  local_44[uVar24 + 2] = (byte)uVar4 & 0x3f | 0x80;
                  local_44[uVar24 + 1] = bVar2 & (byte)(uVar4 >> 6);
                  goto LAB_0132a620;
                }
                *(undefined1 *)(param_1 + 1) = 2;
                if (0x7fffffff < (uint)(int)cVar19) {
                  param_1[2] = uVar24;
                  *param_1 = uVar12 + 1;
                  goto LAB_0132a9ec;
                }
LAB_0132aa30:
                param_1[2] = uVar24;
                *param_1 = uVar12;
                goto LAB_01328dcc;
              }
              if (param_7 == 0) {
                *(undefined1 *)(param_1 + 1) = 0;
                uVar11 = 4;
LAB_0132aa08:
                param_2[1] = uVar11;
                goto LAB_0132aa10;
              }
            }
            else if ((uVar14 & 0xff) == 0x8f) {
              if (uVar12 < param_4) {
                cVar19 = param_3[uVar12];
                uVar4 = uVar12 + 1;
                uVar13 = (int)cVar19 + 0x5f;
                uVar7 = uVar13 & 0xff;
                if (uVar7 < 0x5e) {
                  if (param_4 <= uVar4) {
                    if (param_7 == 0) {
                      param_2[1] = 3;
                      param_2[2] = (char)uVar13;
                      *(undefined1 *)(param_1 + 1) = 0;
                    }
                    else {
                      *(undefined1 *)((int)param_1 + 6) = 0;
                      *(undefined2 *)(param_1 + 1) = 0x202;
                    }
                    param_1[2] = uVar24;
                    goto LAB_01327bdc;
                  }
                  uVar17 = uVar12 + 2;
                  cVar19 = param_3[uVar4];
                  uVar12 = (int)cVar19 + 0x5f;
                  if ((uVar12 & 0xff) < 0x5e) {
                    iVar18 = (short)uVar7 * 0x5e + (uVar12 & 0xff);
                    uVar4 = iVar18 - 0x582;
                    if (uVar4 < 0x16a9) {
                      puVar16 = &DAT_0043eb52;
                      goto LAB_0132a750;
                    }
                    uVar29 = FUN_01325cec(iVar18);
                    uVar4 = (uint)(uVar29 >> 0x20);
                    if ((uVar29 & 1) != 0) goto LAB_0132a66c;
                    if (10 < iVar18 - 0x255U) {
                      if (10 < iVar18 - 0x285U) {
                        *(undefined1 *)((int)param_1 + 6) = 0;
                        uVar8 = 0x302;
LAB_0132aa68:
                        *(undefined2 *)(param_1 + 1) = uVar8;
                        param_1[2] = uVar24;
                        *param_1 = uVar17;
                        return;
                      }
                      local_44[uVar24] = 0xd1;
                      local_30[uVar24 + 1] = (char)(iVar18 - 0x285U) + 0x92;
                      iVar18 = 2;
                      local_44 = local_30;
                      goto LAB_0132a784;
                    }
                    local_44[uVar24] = 0xd0;
                    local_30[uVar24 + 1] = (char)(iVar18 - 0x255U) + 0x82;
                    local_44 = local_30;
LAB_0132a6f8:
                    iVar18 = 2;
                    goto LAB_0132a784;
                  }
                  *(undefined1 *)(param_1 + 1) = 2;
                  if (cVar19 < 0) {
                    param_1[2] = uVar24;
                    *param_1 = uVar17;
                    goto LAB_0132aa80;
                  }
                }
                else {
                  *(undefined1 *)(param_1 + 1) = 2;
                  if (-1 < cVar19) goto LAB_0132aa30;
                }
                param_1[2] = uVar24;
                goto LAB_0132a9e8;
              }
              if (param_7 == 0) {
                *(undefined1 *)(param_1 + 1) = 0;
                uVar11 = 2;
                goto LAB_0132aa08;
              }
            }
LAB_0132a968:
            *(undefined1 *)((int)param_1 + 6) = 0;
            *(undefined2 *)(param_1 + 1) = 0x102;
LAB_0132aa10:
            param_1[2] = uVar24;
            goto LAB_0132aa14;
          }
          if (param_4 <= uVar12) {
            if (param_7 != 0) goto LAB_0132a968;
            param_2[1] = 1;
            param_2[2] = (char)(uVar14 + 0x5f);
            *(undefined1 *)(param_1 + 1) = 0;
            goto LAB_0132aa10;
          }
          uVar17 = uVar12 + 1;
          iVar18 = (int)param_3[uVar12];
          uVar7 = iVar18 + 0x5f;
          uVar13 = uVar7 & 0xff;
          if ((uVar4 == 3) && (uVar13 < 0x53)) {
            pbVar22 = local_44 + uVar24;
            *pbVar22 = 0xe3;
            pbVar22[2] = (byte)(iVar18 - 0x60U) & 0x3f | 0x80;
            pbVar22[1] = (byte)((iVar18 - 0x60U & 0xff) >> 6) | 0x80;
LAB_0132a620:
            iVar18 = 3;
          }
          else {
            if ((uVar4 == 4) && (uVar13 < 0x56)) {
              local_44[uVar24] = 0xe3;
              uVar4 = (uVar7 & 0xff) + 0x30a1;
              bVar2 = 0x87;
              goto LAB_0132a610;
            }
            if (0x5d < uVar13) {
              uVar8 = 2;
              *(undefined1 *)(param_1 + 1) = 2;
              if (-1 < iVar18) goto LAB_0132aa30;
              param_1[2] = uVar24;
              *param_1 = uVar17;
              goto LAB_01328dd0;
            }
            iVar15 = (short)uVar4 * 0x5e + (uVar7 & 0xff);
            uVar4 = iVar15 - 0x582;
            if (uVar4 < 0xb95) {
              puVar16 = &DAT_00447c16;
            }
            else {
              uVar4 = iVar15 - 0x1142;
              if (uVar4 < 0xd3e) {
                puVar16 = &DAT_0044ea8e;
              }
              else {
                uVar4 = iVar15 - 0x2050;
                if (0x167 < uVar4) {
                  uVar29 = FUN_01325c44(iVar15);
                  uVar4 = (uint)(uVar29 >> 0x20);
                  if ((uVar29 & 1) == 0) {
                    puVar3 = &DAT_0044953c;
                    uVar4 = 0;
                    while ((uint)*puVar3 <= iVar15 - (uint)puVar3[-1]) {
                      puVar3 = puVar3 + 3;
                      bVar28 = 0x32 < uVar4;
                      uVar4 = uVar4 + 3;
                      if (bVar28) {
                        *(undefined1 *)((int)param_1 + 6) = 0;
                        uVar8 = 0x202;
                        goto LAB_0132aa68;
                      }
                    }
                    iVar18 = uVar4 + 2;
                    if (0x33 < uVar4) goto LAB_0132b200;
                    uVar4 = (uint)(ushort)(&DAT_0044953a)[iVar18] + (iVar15 - (uint)puVar3[-1]);
                    if ((uVar4 & 0xffff) < 0x800) {
                      local_44[uVar24] = (byte)(uVar4 >> 6) | 0xc0;
                      iVar18 = 2;
                      (local_44 + uVar24)[1] = (byte)uVar4 & 0x3f | 0x80;
                      goto LAB_0132a784;
                    }
                    local_44[uVar24] = (byte)((uVar4 & 0xffff) >> 0xc) | 0xe0;
                    bVar2 = (byte)(uVar4 >> 6);
                  }
                  else {
LAB_0132a66c:
                    if ((uVar4 & 0xffff) < 0x800) {
                      local_44[uVar24] = (byte)(uVar4 >> 6) | 0xc0;
                      (local_44 + uVar24)[1] = (byte)uVar4 & 0x3f | 0x80;
                      goto LAB_0132a6f8;
                    }
                    local_44[uVar24] = (byte)((uVar4 & 0xffff) >> 0xc) | 0xe0;
                    bVar2 = (byte)(uVar4 >> 6);
                  }
                  local_44[uVar24 + 2] = (byte)uVar4 & 0x3f | 0x80;
                  local_44[uVar24 + 1] = bVar2 & 0x3f | 0x80;
                  goto LAB_0132a620;
                }
                puVar16 = &DAT_0045050a;
              }
            }
LAB_0132a750:
            uVar1 = *(ushort *)(puVar16 + uVar4 * 2);
            pbVar22 = local_44 + uVar24;
            *pbVar22 = (byte)(uVar1 >> 0xc) | 0xe0;
            pbVar22[2] = (byte)uVar1 & 0x3f | 0x80;
            pbVar22[1] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
            iVar18 = 3;
          }
LAB_0132a784:
          uVar24 = uVar24 + iVar18;
          if (param_4 <= uVar17) {
            param_1[2] = uVar24;
            *param_1 = uVar17;
LAB_0132a8fc:
            uVar11 = 0;
            goto LAB_0132a900;
          }
          if (local_2c <= uVar24 + 2) {
            param_1[2] = uVar24;
            *param_1 = uVar17;
            goto LAB_01326828;
          }
          uVar12 = uVar17 + 1;
          uVar14 = (uint)param_3[uVar17];
        } while ((int)uVar14 < 0);
        local_44[uVar24] = param_3[uVar17];
        uVar24 = uVar24 + 1;
        local_28 = uVar24;
        param_6 = local_2c;
      }
      puVar16 = &DAT_01ce5ffc;
      goto LAB_0132afcc;
    }
    uVar24 = (uint)(byte)param_2[2];
    for (uVar4 = 0; param_4 != uVar4; uVar4 = uVar4 + 1) {
      if (param_6 < 3) goto LAB_01326820;
      uVar12 = uVar4 + 1;
      param_2[1] = 0;
      iVar18 = (int)param_3[uVar4];
      uVar7 = iVar18 + 0x5f;
      if (cVar19 != '\x02') {
        if (cVar19 == '\x01') {
          uVar13 = uVar7 & 0xff;
          if ((0x52 < uVar13) || ((uVar24 & 0xff) != 3)) {
            if ((uVar13 < 0x56) && ((uVar24 & 0xff) == 4)) {
              *param_5 = 0xe3;
              uVar24 = (uVar7 & 0xff) + 0x30a1;
              bVar2 = (byte)(uVar24 >> 6) & 0x87;
              param_5[2] = (byte)uVar24 & 0x3f | 0x80;
            }
            else {
              if (0x5d < uVar13) goto LAB_01327cd0;
              iVar15 = (short)((ushort)uVar24 & 0xff) * 0x5e + (uVar7 & 0xff);
              uVar24 = iVar15 - 0x582;
              if (uVar24 < 0xb95) {
                puVar16 = &DAT_00447c16;
              }
              else {
                uVar24 = iVar15 - 0x1142;
                if (uVar24 < 0xd3e) {
                  puVar16 = &DAT_0044ea8e;
                }
                else {
                  uVar24 = iVar15 - 0x2050;
                  if (0x167 < uVar24) {
                    uVar29 = FUN_01325c44(iVar15);
                    uVar4 = (uint)(uVar29 >> 0x20);
                    if ((uVar29 & 1) == 0) {
                      puVar3 = &DAT_0044953c;
                      uVar24 = 0;
                      while ((uint)*puVar3 <= iVar15 - (uint)puVar3[-1]) {
                        puVar3 = puVar3 + 3;
                        bVar28 = 0x32 < uVar24;
                        uVar24 = uVar24 + 3;
                        if (bVar28) {
                          *(undefined1 *)((int)param_1 + 6) = 0;
                          *(undefined2 *)(param_1 + 1) = 0x202;
                          param_1[2] = 0;
LAB_0132aa14:
                          *param_1 = uVar12;
                          return;
                        }
                      }
                      iVar18 = uVar24 + 2;
                      if (0x33 < uVar24) {
LAB_0132b200:
                    /* WARNING: Subroutine does not return */
                        FUN_012fb12c(iVar18,0x36,&DAT_01ce5f9c);
                      }
                      uVar4 = (uint)(ushort)(&DAT_0044953a)[iVar18] + (iVar15 - (uint)puVar3[-1]);
                      if ((uVar4 & 0xffff) < 0x800) {
                        uVar24 = 2;
                        param_5[1] = (byte)uVar4 & 0x3f | 0x80;
                        *param_5 = (byte)(uVar4 >> 6) | 0xc0;
                      }
                      else {
                        uVar24 = 3;
                        param_5[2] = (byte)uVar4 & 0x3f | 0x80;
                        param_5[1] = (byte)(uVar4 >> 6) & 0x3f | 0x80;
                        *param_5 = (byte)((uVar4 & 0xffff) >> 0xc) | 0xe0;
                      }
                      local_28 = uVar24;
                    }
                    else {
                      bVar2 = (byte)(uVar29 >> 0x20);
                      if ((uVar4 & 0xffff) < 0x800) {
                        uVar24 = 2;
                        param_5[1] = bVar2 & 0x3f | 0x80;
                        *param_5 = (byte)(uVar4 >> 6) | 0xc0;
                      }
                      else {
                        uVar24 = 3;
                        param_5[2] = bVar2 & 0x3f | 0x80;
                        param_5[1] = (byte)(uVar4 >> 6) & 0x3f | 0x80;
                        *param_5 = (byte)((uVar4 & 0xffff) >> 0xc) | 0xe0;
                      }
                      local_28 = uVar24;
                    }
                    goto LAB_0132a31c;
                  }
                  puVar16 = &DAT_0045050a;
                }
              }
              uVar1 = *(ushort *)(puVar16 + uVar24 * 2);
              param_5[2] = (byte)uVar1 & 0x3f | 0x80;
              *param_5 = (byte)(uVar1 >> 0xc) | 0xe0;
              bVar2 = (byte)(uVar1 >> 6) & 0x3f | 0x80;
            }
            uVar24 = 3;
            param_5[1] = bVar2;
            local_28 = 3;
            goto LAB_0132a31c;
          }
          *param_5 = 0xe3;
          local_28 = 2;
          param_5[2] = (byte)(iVar18 - 0x60U) & 0x3f | 0x80;
          bVar2 = (byte)((iVar18 - 0x60U & 0xff) >> 6) | 0x80;
        }
        else {
          if (cVar19 == '\x03') {
            if (0x5d < (uVar7 & 0xff)) {
              *(undefined1 *)(param_1 + 1) = 2;
              if (iVar18 < 0) {
                *param_1 = uVar12;
                param_1[2] = 0;
LAB_0132aa80:
                uVar8 = 3;
                goto LAB_01328dd0;
              }
              param_1[2] = 0;
              goto LAB_0132a9e8;
            }
            iVar18 = (short)((ushort)uVar24 & 0xff) * 0x5e + (uVar7 & 0xff);
            if (iVar18 - 0x582U < 0x16a9) {
              uVar1 = *(ushort *)(&DAT_0043eb52 + (iVar18 - 0x582U) * 2);
              param_5[2] = (byte)uVar1 & 0x3f | 0x80;
              *param_5 = (byte)(uVar1 >> 0xc) | 0xe0;
              param_5[1] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
LAB_013279ac:
              uVar24 = 3;
            }
            else {
              uVar29 = FUN_01325cec(iVar18);
              uVar4 = (uint)(uVar29 >> 0x20);
              if ((uVar29 & 1) == 0) {
                if (iVar18 - 0x255U < 0xb) {
                  param_5[1] = (char)(iVar18 - 0x255U) + 0x82;
                  bVar2 = 0xd0;
                }
                else {
                  if (10 < iVar18 - 0x285U) {
                    *(undefined1 *)((int)param_1 + 6) = 0;
                    *(undefined2 *)(param_1 + 1) = 0x302;
                    param_1[2] = 0;
                    *param_1 = uVar12;
                    return;
                  }
                  param_5[1] = (char)(iVar18 - 0x285U) + 0x92;
                  bVar2 = 0xd1;
                }
                *param_5 = bVar2;
                uVar24 = 2;
              }
              else {
                bVar2 = (byte)(uVar29 >> 0x20);
                if (0x7ff < (uVar4 & 0xffff)) {
                  param_5[2] = bVar2 & 0x3f | 0x80;
                  param_5[1] = (byte)(uVar4 >> 6) & 0x3f | 0x80;
                  *param_5 = (byte)((uVar4 & 0xffff) >> 0xc) | 0xe0;
                  goto LAB_013279ac;
                }
                uVar24 = 2;
                param_5[1] = bVar2 & 0x3f | 0x80;
                *param_5 = (byte)(uVar4 >> 6) | 0xc0;
              }
            }
            local_28 = uVar24;
            goto LAB_0132a31c;
          }
          if (0x3e < (uVar7 & 0xff)) goto LAB_01327cd0;
          *param_5 = 0xef;
          uVar24 = (uVar7 & 0xff) - 0x9f;
          bVar2 = (byte)(uVar24 >> 6) & 0xbf;
          param_5[2] = (byte)uVar24 & 0x3f | 0x80;
        }
        uVar24 = 3;
        param_5[1] = bVar2;
        goto LAB_0132a31c;
      }
      if (0x5d < (uVar7 & 0xff)) {
LAB_01327cd0:
        *(undefined1 *)(param_1 + 1) = 2;
        if (iVar18 < 0) {
          *param_1 = uVar12;
          param_1[2] = 0;
          goto LAB_0132a9ec;
        }
        param_1[2] = 0;
        goto LAB_01328dc8;
      }
      cVar19 = '\x03';
      param_2[2] = (char)uVar7;
      param_2[1] = 3;
      uVar24 = uVar7;
    }
    if (param_7 != 0) {
      *(undefined1 *)((int)param_1 + 6) = 0;
      param_2[1] = 0;
      param_1[2] = 0;
      uVar11 = 1;
      if (cVar19 == '\x03') {
        uVar11 = 2;
      }
      *(undefined1 *)(param_1 + 1) = 2;
      *param_1 = param_4;
      *(undefined1 *)((int)param_1 + 5) = uVar11;
      return;
    }
    uVar11 = 0;
    *param_1 = param_4;
    param_1[2] = 0;
    goto LAB_0132a900;
  case 6:
    uVar24 = 0;
    uVar4 = 0;
    local_2c = param_6;
    local_30 = param_5;
    if (param_2[1] != '\0') {
      bVar2 = param_2[2];
      param_2[1] = 0;
      if (param_4 == 0) goto LAB_01326798;
      if (param_6 < 3) goto LAB_01326820;
      iVar18 = (int)*param_3;
      if ((bVar2 == 1) && ((iVar18 + 0x61U & 0xff) < 0x53)) {
        uVar24 = iVar18 - 0x5e;
        *param_5 = 0xe3;
        bVar2 = (byte)((uVar24 & 0xff) >> 6) | 0x80;
LAB_013285ac:
        bVar5 = (byte)uVar24;
        param_5[1] = bVar2;
        uVar24 = 3;
        iVar18 = 2;
      }
      else {
        uVar24 = iVar18 - 0x40;
        if (0x3e < (uVar24 & 0xff)) {
          if (-4 < iVar18) goto LAB_01328db8;
          uVar24 = iVar18 - 0x41;
        }
        if ((bVar2 == 2) && ((uVar24 & 0xff) < 0x56)) {
          *param_5 = 0xe3;
          uVar24 = (uVar24 & 0xff) + 0x30a1;
          bVar2 = (byte)(uVar24 >> 6) & 0x87;
          goto LAB_013285ac;
        }
        iVar15 = (short)(ushort)bVar2 * 0xbc + (uVar24 & 0xff);
        uVar24 = iVar15 - 0x582;
        if (uVar24 < 0xb95) {
          puVar16 = &DAT_00447c16;
LAB_01328e94:
          uVar1 = *(ushort *)(puVar16 + uVar24 * 2);
          uVar24 = (uint)uVar1;
          *param_5 = (byte)(uVar1 >> 0xc) | 0xe0;
          param_5[1] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
LAB_01328eb8:
          bVar5 = (byte)uVar24;
          iVar18 = 2;
          uVar24 = 3;
        }
        else {
          uVar24 = iVar15 - 0x1142;
          if (uVar24 < 0xd3e) {
            puVar16 = &DAT_0044ea8e;
            goto LAB_01328e94;
          }
          uVar24 = iVar15 - 0x29f8;
          if ((uVar24 < 0x168) || (uVar24 = iVar15 - 0x2050, uVar24 < 0x168)) {
            puVar16 = &DAT_0045050a;
            goto LAB_01328e94;
          }
          if (iVar15 - 0x2284U >> 3 < 0xeb) {
            uVar24 = iVar15 - 0x4284;
            param_5[1] = (byte)(uVar24 >> 6) & 0x3f | 0x80;
            *param_5 = (byte)((uVar24 & 0xffff) >> 0xc) | 0xe0;
            goto LAB_01328eb8;
          }
          uVar29 = FUN_01325c44(iVar15);
          uVar4 = (uint)(uVar29 >> 0x20);
          if ((uVar29 & 1) == 0) {
            puVar3 = &DAT_0044953c;
            uVar24 = 0;
            do {
              if (iVar15 - (uint)puVar3[-1] < (uint)*puVar3) {
                iVar18 = uVar24 + 2;
                if (0x33 < uVar24) goto LAB_0132b200;
                uVar4 = (uint)(ushort)(&DAT_0044953a)[iVar18] + (iVar15 - (uint)puVar3[-1]);
                uVar24 = uVar4 & 0xffff;
                if (uVar24 < 0x800) goto LAB_0132affc;
                param_5[1] = (byte)(uVar4 >> 6) & 0x3f | 0x80;
                goto LAB_0132b094;
              }
              puVar3 = puVar3 + 3;
              bVar28 = uVar24 < 0x33;
              uVar24 = uVar24 + 3;
            } while (bVar28);
            goto LAB_01328db8;
          }
          if ((uVar4 & 0xffff) < 0x800) {
LAB_0132affc:
            iVar18 = 1;
            *param_5 = (byte)(uVar4 >> 6) | 0xc0;
            uVar24 = 2;
          }
          else {
            param_5[1] = (byte)(uVar4 >> 6) & 0x3f | 0x80;
            uVar24 = uVar4 & 0xffff;
LAB_0132b094:
            iVar18 = 2;
            *param_5 = (byte)(uVar24 >> 0xc) | 0xe0;
            uVar24 = 3;
          }
          bVar5 = (byte)uVar4;
        }
      }
      uVar4 = 1;
      param_5[iVar18] = bVar5 & 0x3f | 0x80;
    }
    do {
      if (param_6 < uVar24) goto LAB_0132ad4c;
      uVar13 = param_4 - uVar4;
      uVar7 = param_6 - uVar24;
      param_5 = param_5 + uVar24;
      pcVar23 = param_3 + uVar4;
      uVar12 = uVar13;
      if (uVar7 < uVar13) {
        uVar12 = uVar7;
      }
      uVar17 = 0;
      if (((((uint)param_5 ^ (uint)pcVar23) & 3) == 0) &&
         (uVar9 = -(int)pcVar23 & 3, (uVar9 | 8) <= uVar12)) {
        if (uVar9 != 0) {
          do {
            uVar14 = (uint)pcVar23[uVar17];
            if ((int)uVar14 < 0) goto LAB_01329030;
            param_5[uVar17] = pcVar23[uVar17];
            uVar17 = uVar17 + 1;
          } while (uVar9 != uVar17);
        }
        do {
          uVar14 = *(uint *)(param_3 + uVar17 + uVar4 + 4);
          uVar27 = *(uint *)((int)(param_3 + uVar17 + uVar4 + 4) + -4);
          *(uint *)(param_5 + uVar17) = uVar27;
          *(uint *)((int)(param_5 + uVar17) + 4) = uVar14;
          uVar9 = uVar14 & 0x80808080;
          uVar26 = uVar27 & 0x80808080;
          if (uVar9 != 0 || uVar26 != 0) {
            uVar12 = (uint)LZCOUNT((uVar27 >> 7 & 1) << 0x18 | (uVar26 >> 0xf & 1) << 0x10 |
                                   (uVar26 >> 0x17 & 1) << 8 | uVar27 >> 0x1f) >> 3;
            if (uVar26 == 0) {
              uVar12 = ((uint)LZCOUNT((uVar14 >> 7 & 1) << 0x18 | (uVar9 >> 0xf & 1) << 0x10 |
                                      (uVar9 >> 0x17 & 1) << 8 | uVar14 >> 0x1f) >> 3) + 4;
            }
            uVar17 = uVar12 + uVar17;
            uVar14 = (uint)(byte)pcVar23[uVar17];
            goto LAB_01329030;
          }
          uVar17 = uVar17 + 8;
        } while (uVar17 <= uVar12 - 8);
      }
      if (uVar12 <= uVar17) {
LAB_01329440:
        uVar9 = uVar12 + uVar24;
        uVar12 = uVar12 + uVar4;
        uVar24 = 0;
        if (uVar7 < uVar13) {
          uVar24 = 1;
        }
LAB_01329454:
        *param_1 = uVar12;
        param_1[1] = (uint)&local_30 & 0xffffff03 | uVar24;
        param_1[2] = uVar9;
        return;
      }
      while( true ) {
        uVar14 = (uint)pcVar23[uVar17];
        if ((int)uVar14 < 0) break;
        param_5[uVar17] = pcVar23[uVar17];
        uVar17 = uVar17 + 1;
        if (uVar12 == uVar17) goto LAB_01329440;
      }
LAB_01329030:
      uVar9 = uVar17 + uVar24;
      uVar12 = uVar17 + uVar4;
      if (param_6 <= uVar9 + 2) {
        uVar24 = 1;
        goto LAB_01329454;
      }
      uVar4 = uVar12 + 1;
      do {
        uVar24 = uVar14 + 0x7f;
        if (0x1e < (uVar24 & 0xff)) {
          if (0xe2 < (uVar14 + 3 & 0xff)) {
            uVar24 = uVar14 + 0x3f;
            goto LAB_01329078;
          }
          if ((uVar14 + 0x5f & 0xff) < 0x3f) {
            pbVar22 = local_30 + uVar9;
            *pbVar22 = 0xef;
            uVar12 = (uVar14 + 0x5f & 0xff) - 0x9f;
            pbVar22[2] = (byte)uVar12 & 0x3f | 0x80;
            uVar24 = uVar9 + 3;
            pbVar22[1] = (byte)(uVar12 >> 6) & 0xbf;
          }
          else {
            if ((uVar14 & 0xff) != 0x80) {
LAB_01329478:
              *(undefined1 *)((int)param_1 + 6) = 0;
              *(undefined2 *)(param_1 + 1) = 0x102;
LAB_013294bc:
              param_1[2] = uVar9;
              *param_1 = uVar4;
              return;
            }
            (local_30 + uVar9)[0] = 0xc2;
            (local_30 + uVar9)[1] = 0x80;
            uVar24 = uVar9 + 2;
          }
          goto LAB_01329424;
        }
LAB_01329078:
        if (param_4 <= uVar4) {
          if (param_7 == 0) {
            param_2[2] = (char)uVar24;
            param_2[1] = 1;
            *(undefined1 *)(param_1 + 1) = 0;
            goto LAB_013294bc;
          }
          goto LAB_01329478;
        }
        uVar12 = uVar4 + 1;
        uVar24 = uVar24 & 0xff;
        iVar18 = (int)param_3[uVar4];
        if ((uVar24 == 1) && ((iVar18 + 0x61U & 0xff) < 0x53)) {
          pbVar22 = local_30 + uVar9;
          *pbVar22 = 0xe3;
          pbVar22[2] = (byte)(iVar18 - 0x5eU) & 0x3f | 0x80;
          pbVar22[1] = (byte)((iVar18 - 0x5eU & 0xff) >> 6) | 0x80;
LAB_0132912c:
          iVar18 = 3;
        }
        else {
          uVar7 = iVar18 - 0x40;
          if (0x3e < (uVar7 & 0xff)) {
            if (-4 < iVar18) {
LAB_013294cc:
              uVar8 = 2;
              *(undefined1 *)(param_1 + 1) = 2;
              if (iVar18 < 0) {
                param_1[2] = uVar9;
                *param_1 = uVar12;
              }
              else {
                uVar8 = 1;
                param_1[2] = uVar9;
                *param_1 = uVar4;
              }
              *(undefined2 *)((int)param_1 + 5) = uVar8;
              return;
            }
            uVar7 = iVar18 - 0x41;
          }
          if ((uVar24 == 2) && ((uVar7 & 0xff) < 0x56)) {
            uVar24 = (uVar7 & 0xff) + 0x30a1;
            pbVar22 = local_30 + uVar9;
            *pbVar22 = 0xe3;
            pbVar22[2] = (byte)uVar24 & 0x3f | 0x80;
            pbVar22[1] = (byte)(uVar24 >> 6) & 0x87;
            goto LAB_0132912c;
          }
          iVar15 = (short)uVar24 * 0xbc + (uVar7 & 0xff);
          uVar24 = iVar15 - 0x582;
          if (uVar24 < 0xb95) {
            puVar16 = &DAT_00447c16;
LAB_013291b0:
            uVar7 = (uint)*(ushort *)(puVar16 + uVar24 * 2);
            bVar2 = (byte)(*(ushort *)(puVar16 + uVar24 * 2) >> 0xc);
LAB_013291c4:
            pbVar22 = local_30 + uVar9;
            *pbVar22 = bVar2 | 0xe0;
            pbVar22[2] = (byte)uVar7 & 0x3f | 0x80;
            pbVar22[1] = (byte)(uVar7 >> 6) & 0x3f | 0x80;
LAB_013291e0:
            iVar18 = 3;
          }
          else {
            uVar24 = iVar15 - 0x1142;
            if (uVar24 < 0xd3e) {
              puVar16 = &DAT_0044ea8e;
              goto LAB_013291b0;
            }
            uVar24 = iVar15 - 0x29f8;
            if ((uVar24 < 0x168) || (uVar24 = iVar15 - 0x2050, uVar24 < 0x168)) {
              puVar16 = &DAT_0045050a;
              goto LAB_013291b0;
            }
            if (iVar15 - 0x2284U >> 3 < 0xeb) {
              uVar7 = iVar15 - 0x4284;
              bVar2 = (byte)((uVar7 & 0xffff) >> 0xc);
              goto LAB_013291c4;
            }
            uVar29 = FUN_01325c44(iVar15);
            uVar24 = (uint)(uVar29 >> 0x20);
            if ((uVar29 & 1) != 0) {
              bVar2 = (byte)(uVar29 >> 0x20);
              if ((uVar24 & 0xffff) < 0x800) {
                local_30[uVar9] = (byte)(uVar24 >> 6) | 0xc0;
                iVar18 = 2;
                (local_30 + uVar9)[1] = bVar2 & 0x3f | 0x80;
                goto LAB_013291ec;
              }
              pbVar22 = local_30 + uVar9;
              *pbVar22 = (byte)((uVar24 & 0xffff) >> 0xc) | 0xe0;
              pbVar22[2] = bVar2 & 0x3f | 0x80;
              pbVar22[1] = (byte)(uVar24 >> 6) & 0x3f | 0x80;
              goto LAB_013291e0;
            }
            puVar3 = &DAT_0044953c;
            uVar24 = 0;
            while ((uint)*puVar3 <= iVar15 - (uint)puVar3[-1]) {
              puVar3 = puVar3 + 3;
              bVar28 = 0x32 < uVar24;
              uVar24 = uVar24 + 3;
              if (bVar28) goto LAB_013294cc;
            }
            iVar18 = uVar24 + 2;
            if (0x33 < uVar24) goto LAB_0132b200;
            uVar24 = (uint)(ushort)(&DAT_0044953a)[iVar18] + (iVar15 - (uint)puVar3[-1]);
            if (0x7ff < (uVar24 & 0xffff)) {
              pbVar22 = local_30 + uVar9;
              *pbVar22 = (byte)((uVar24 & 0xffff) >> 0xc) | 0xe0;
              pbVar22[2] = (byte)uVar24 & 0x3f | 0x80;
              pbVar22[1] = (byte)(uVar24 >> 6) & 0x3f | 0x80;
              goto LAB_0132912c;
            }
            local_30[uVar9] = (byte)(uVar24 >> 6) | 0xc0;
            iVar18 = 2;
            (local_30 + uVar9)[1] = (byte)uVar24 & 0x3f | 0x80;
          }
        }
LAB_013291ec:
        uVar9 = uVar9 + iVar18;
        if (param_4 <= uVar12) {
          uVar11 = 0;
LAB_01329498:
          param_1[2] = uVar9;
          *param_1 = uVar12;
          *(undefined1 *)(param_1 + 1) = uVar11;
          return;
        }
        if (local_2c <= uVar9 + 2) {
          uVar11 = 1;
          goto LAB_01329498;
        }
        uVar4 = uVar4 + 2;
        uVar14 = (uint)param_3[uVar12];
      } while ((int)uVar14 < 0);
      uVar24 = uVar9 + 1;
      local_30[uVar9] = param_3[uVar12];
LAB_01329424:
      param_6 = local_2c;
      param_5 = local_30;
    } while (uVar4 <= param_4);
    puVar16 = &DAT_01ce5fec;
LAB_0132ac90:
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar4,param_4,param_4,puVar16);
  case 7:
    uVar24 = 0;
    uVar4 = 0;
    local_2c = param_6;
    local_30 = param_5;
    if (param_2[1] == '\0') {
LAB_01327e70:
LAB_01327e8c:
      if (uVar24 <= param_6) {
        uVar13 = param_4 - uVar4;
        uVar7 = param_6 - uVar24;
        pcVar23 = param_3 + uVar4;
        pbVar22 = param_5 + uVar24;
        uVar12 = uVar13;
        if (uVar7 < uVar13) {
          uVar12 = uVar7;
        }
        uVar17 = 0;
        if (((((uint)pbVar22 ^ (uint)pcVar23) & 3) == 0) &&
           (uVar9 = -(int)pcVar23 & 3, (uVar9 | 8) <= uVar12)) {
          if (uVar9 != 0) {
            do {
              uVar14 = (uint)pcVar23[uVar17];
              if ((int)uVar14 < 0) goto LAB_01327fbc;
              pbVar22[uVar17] = pcVar23[uVar17];
              uVar17 = uVar17 + 1;
            } while (uVar9 != uVar17);
          }
          do {
            uVar14 = *(uint *)(param_3 + uVar17 + uVar4 + 4);
            uVar27 = *(uint *)((int)(param_3 + uVar17 + uVar4 + 4) + -4);
            *(uint *)(pbVar22 + uVar17) = uVar27;
            *(uint *)((int)(pbVar22 + uVar17) + 4) = uVar14;
            uVar9 = uVar14 & 0x80808080;
            uVar26 = uVar27 & 0x80808080;
            if (uVar9 != 0 || uVar26 != 0) {
              uVar12 = (uint)LZCOUNT((uVar27 >> 7 & 1) << 0x18 | (uVar26 >> 0xf & 1) << 0x10 |
                                     (uVar26 >> 0x17 & 1) << 8 | uVar27 >> 0x1f) >> 3;
              if (uVar26 == 0) {
                uVar12 = ((uint)LZCOUNT((uVar14 >> 7 & 1) << 0x18 | (uVar9 >> 0xf & 1) << 0x10 |
                                        (uVar9 >> 0x17 & 1) << 8 | uVar14 >> 0x1f) >> 3) + 4;
              }
              uVar17 = uVar12 + uVar17;
              uVar14 = (uint)(byte)pcVar23[uVar17];
              goto LAB_01327fbc;
            }
            uVar17 = uVar17 + 8;
          } while (uVar17 <= uVar12 - 8);
        }
        if (uVar12 <= uVar17) {
LAB_013284e8:
          uVar4 = uVar12 + uVar4;
          uVar12 = uVar12 + uVar24;
          uVar24 = 0;
          if (uVar7 < uVar13) {
            uVar24 = 1;
          }
LAB_01328500:
          *param_1 = uVar4;
          param_1[1] = (uint)&local_30 & 0xffffff03 | uVar24;
          param_1[2] = uVar12;
          return;
        }
        while( true ) {
          uVar14 = (uint)pcVar23[uVar17];
          if ((int)uVar14 < 0) break;
          pbVar22[uVar17] = pcVar23[uVar17];
          uVar17 = uVar17 + 1;
          if (uVar12 == uVar17) goto LAB_013284e8;
        }
LAB_01327fbc:
        uVar4 = uVar17 + uVar4;
        uVar12 = uVar17 + uVar24;
        if (param_6 <= uVar12 + 2) {
          uVar24 = 1;
          goto LAB_01328500;
        }
        uVar7 = uVar4 + 1;
LAB_01327fe0:
        uVar24 = uVar14 + 0x7f;
        if (0x7d < (uVar24 & 0xff)) {
LAB_01328550:
          *(undefined1 *)((int)param_1 + 6) = 0;
          *(undefined2 *)(param_1 + 1) = 0x102;
LAB_01328cf0:
          param_1[2] = uVar12;
          *param_1 = uVar7;
          return;
        }
        if (param_4 <= uVar7) {
          if (param_7 == 0) {
            param_2[1] = 1;
            param_2[2] = (char)uVar24;
            *(undefined1 *)(param_1 + 1) = 0;
            goto LAB_01328cf0;
          }
          goto LAB_01328550;
        }
        uVar13 = uVar7 + 1;
        iVar18 = (int)param_3[uVar7];
        if ((uVar24 & 0xff) < 0x20) {
          if ((iVar18 + 0x7fU & 0xff) < 0x7e) {
            uVar4 = iVar18 - 0x4d;
          }
          else if ((iVar18 - 0x61U & 0xff) < 0x1a) {
            uVar4 = iVar18 - 0x47;
          }
          else {
            uVar4 = iVar18 - 0x41;
            if (0x19 < (uVar4 & 0xff)) goto LAB_01328df0;
          }
          uVar24 = (short)(uVar24 & 0xff) * 0xb2 + (uVar4 & 0xff);
          iVar18 = 0;
          uVar4 = 0x437;
          do {
            iVar15 = iVar18 + (uVar4 >> 1);
            uVar4 = uVar4 - (uVar4 >> 1);
            uVar17 = uVar24 & 0xffff;
            if (*(ushort *)(&UNK_0044a4fe + iVar15 * 2) <= uVar17) {
              iVar18 = iVar15;
            }
          } while (1 < uVar4);
          if (*(ushort *)(&UNK_0044a4fe + iVar18 * 2) == uVar17) {
            uVar24 = (uint)*(ushort *)(&UNK_00449820 + iVar18 * 2);
          }
          else {
            if (*(ushort *)(&UNK_0044a4fe + iVar18 * 2) < uVar17) {
              iVar18 = iVar18 + 1;
            }
            uVar4 = iVar18 - 1;
            if (0x436 < uVar4) goto LAB_0132b178;
            uVar24 = (uVar24 - *(ushort *)(&UNK_0044a4fe + uVar4 * 2)) +
                     (uint)*(ushort *)(&UNK_00449820 + uVar4 * 2);
          }
        }
        else {
          uVar1 = (short)uVar14 + 0x5f;
          uVar24 = iVar18 + 0x5fU & 0xff;
          if (uVar24 < 0x5e) {
            uVar17 = (short)(uVar1 & 0xff) * 0x5e + (iVar18 + 0x5fU & 0xff);
            uVar4 = uVar17 - 0x582;
            if (uVar4 < 0x92e) {
              puVar16 = &DAT_00443f90;
LAB_01328060:
              puVar3 = (ushort *)(puVar16 + uVar4 * 2);
LAB_01328064:
              uVar24 = (uint)*puVar3;
              bVar2 = (byte)(*puVar3 >> 0xc);
              goto LAB_013281b4;
            }
            if (0xa4 < uVar17) {
              uVar4 = uVar17 - 0xf0e;
              if (uVar4 < 0x1318) {
                puVar16 = &DAT_004418a4;
                goto LAB_01328060;
              }
              uVar14 = uVar14 & 0xff;
              if (uVar14 == 0xa6) {
                if (0x43 < uVar24) goto LAB_013283e0;
                puVar3 = (ushort *)(&DAT_0043227a + uVar24 * 2);
                goto LAB_01328064;
              }
              if (uVar14 == 0xa9) {
                if (0xf < uVar24) goto LAB_013283e0;
                uVar24 = (uint)*(ushort *)(&DAT_0056b608 + uVar24 * 2);
              }
              else {
                if ((uVar14 != 0xa8) || (0xe < uVar24)) {
LAB_013283e0:
                  uVar17 = uVar17 - 0xbc;
                  if (0x39e < uVar17) {
                    *(undefined1 *)((int)param_1 + 6) = 0;
                    *(undefined2 *)(param_1 + 1) = 0x202;
                    param_1[2] = uVar12;
                    *param_1 = uVar13;
                    return;
                  }
                  uVar29 = FUN_0132b6b4(&PTR_DAT_00449784,0x4d,uVar17);
                  iVar18 = (int)(uVar29 >> 0x20);
                  if ((uVar29 & 1) == 0) {
                    if (0x4cffffffff < uVar29) goto LAB_0132b248;
                    uVar24 = (uint)*(ushort *)(&DAT_0044e9f4 + iVar18 * 2);
                  }
                  else {
                    uVar4 = iVar18 - 1;
                    if (0x4c < uVar4) goto LAB_0132b234;
                    uVar24 = (*(ushort *)(&DAT_0044e9f4 + uVar4 * 2) + uVar17) -
                             (uint)*(ushort *)((int)&PTR_DAT_00449784 + uVar4 * 2);
                  }
                  uVar4 = uVar24 & 0xffff;
                  if (uVar4 < 0x80) {
                    param_1[2] = uVar12;
                    *(undefined1 *)((int)param_1 + 6) = 0;
                    *(undefined2 *)(param_1 + 1) = 0x202;
                    *param_1 = uVar13;
                    return;
                  }
                  if (0x7ff < uVar4) {
                    bVar2 = (byte)(uVar4 >> 0xc);
                    goto LAB_013284a4;
                  }
                  goto LAB_0132847c;
                }
                uVar24 = (uint)*(ushort *)(&DAT_00447b80 + uVar24 * 2);
                if (uVar24 == 0) {
                  param_1[2] = uVar12;
                  *(undefined1 *)((int)param_1 + 6) = 0;
                  *(undefined2 *)(param_1 + 1) = 0x202;
                  *param_1 = uVar13;
                  return;
                }
              }
              param_5[uVar12] = (byte)(uVar24 >> 6) | 0xc0;
              pbVar22 = local_30 + uVar12;
              param_5 = local_30;
              goto LAB_0132848c;
            }
            uVar24 = (uint)*(ushort *)(&DAT_00445d00 + uVar17 * 2);
            if (0x7ff < uVar24) {
              bVar2 = (byte)(*(ushort *)(&DAT_00445d00 + uVar17 * 2) >> 0xc);
LAB_013284a4:
              pbVar22 = param_5 + uVar12;
              *pbVar22 = bVar2 | 0xe0;
              pbVar22[2] = (byte)uVar24 & 0x3f | 0x80;
              pbVar22[1] = (byte)(uVar24 >> 6) & 0x3f | 0x80;
              goto LAB_013281d4;
            }
LAB_0132847c:
            pbVar22 = param_5 + uVar12;
            *pbVar22 = (byte)(uVar24 >> 6) | 0xc0;
LAB_0132848c:
            iVar18 = 2;
            pbVar22[1] = (byte)uVar24 & 0x3f | 0x80;
            goto LAB_013281d8;
          }
          if ((iVar18 + 0x7fU & 0xff) < 0x20) {
            uVar24 = iVar18 - 0x4d;
          }
          else if ((iVar18 - 0x61U & 0xff) < 0x1a) {
            uVar24 = iVar18 - 0x47;
          }
          else {
            uVar24 = iVar18 - 0x41;
            if (0x19 < (uVar24 & 0xff)) goto LAB_01328df0;
          }
          uVar24 = (short)(uVar1 & 0xff) * 0x54 + (uVar24 & 0xff);
          if (0xc35 < uVar24) {
LAB_01328df0:
            *(undefined1 *)(param_1 + 1) = 2;
            if (iVar18 < 0) {
              param_1[2] = uVar12;
              *param_1 = uVar13;
              goto LAB_0132a9ec;
            }
            param_1[2] = uVar12;
            *param_1 = uVar7;
            goto LAB_01328dcc;
          }
          iVar18 = 0;
          uVar4 = 0x217;
          do {
            iVar15 = iVar18 + (uVar4 >> 1);
            uVar4 = uVar4 - (uVar4 >> 1);
            if (*(ushort *)(&DAT_0044bc64 + iVar15 * 2) <= uVar24) {
              iVar18 = iVar15;
            }
          } while (1 < uVar4);
          if (*(ushort *)(&DAT_0044bc64 + iVar18 * 2) != uVar24) {
            if (*(ushort *)(&DAT_0044bc64 + iVar18 * 2) < uVar24) {
              iVar18 = iVar18 + 1;
            }
            uVar4 = iVar18 - 1;
            if (uVar4 < 0x217) {
              uVar24 = (uVar24 - *(ushort *)(&DAT_0044bc64 + uVar4 * 2)) +
                       (uint)*(ushort *)(&DAT_0044a0d0 + uVar4 * 2);
              goto LAB_013281a8;
            }
            goto LAB_0132b1b0;
          }
          uVar24 = (uint)*(ushort *)(&DAT_0044a0d0 + iVar18 * 2);
        }
LAB_013281a8:
        bVar2 = (byte)((uVar24 & 0xffff) >> 0xc);
LAB_013281b4:
        pbVar22 = param_5 + uVar12;
        *pbVar22 = bVar2 | 0xe0;
        pbVar22[2] = (byte)uVar24 & 0x3f | 0x80;
        pbVar22[1] = (byte)(uVar24 >> 6) & 0x3f | 0x80;
LAB_013281d4:
        iVar18 = 3;
LAB_013281d8:
        uVar12 = uVar12 + iVar18;
        if (param_4 <= uVar13) {
          param_1[2] = uVar12;
          *param_1 = uVar13;
          goto LAB_0132a8fc;
        }
        if (local_2c <= uVar12 + 2) {
          param_1[2] = uVar12;
          *param_1 = uVar13;
          goto LAB_01326828;
        }
        uVar17 = uVar7 + 2;
        uVar14 = (uint)param_3[uVar13];
        if ((int)uVar14 < 0) {
          uVar7 = uVar17;
        }
        else {
          iVar18 = 0;
          do {
            uVar4 = uVar17 + iVar18;
            uVar24 = uVar12 + iVar18 + 1;
            param_5[iVar18 + uVar12] = (byte)uVar14;
            if (0x3b < (uVar14 & 0xff)) {
              param_6 = local_2c;
              if (uVar4 <= param_4) goto LAB_01327e8c;
              puVar16 = &DAT_01ce5fec;
              goto LAB_0132ac90;
            }
            if ((param_4 - 2) - uVar7 == iVar18) {
              uVar11 = 0;
              param_1[2] = uVar24;
              *param_1 = param_4;
LAB_0132853c:
              *(undefined1 *)(param_1 + 1) = uVar11;
              return;
            }
            if (local_2c <= uVar12 + iVar18 + 3) {
              *param_1 = uVar4;
              uVar11 = 1;
              param_1[2] = uVar24;
              goto LAB_0132853c;
            }
            iVar15 = iVar18 + uVar7 + 2;
            iVar18 = iVar18 + 1;
            uVar14 = (uint)param_3[iVar15];
          } while (-1 < (int)uVar14);
          uVar12 = uVar12 + iVar18;
          uVar7 = uVar17 + iVar18;
        }
        goto LAB_01327fe0;
      }
      puVar16 = &DAT_01ce5ffc;
      goto LAB_0132afcc;
    }
    bVar2 = param_2[2];
    param_2[1] = 0;
    if (param_4 == 0) goto LAB_01326798;
    if (param_6 < 3) goto LAB_01326820;
    iVar18 = (int)*param_3;
    if (bVar2 < 0x20) {
      if ((iVar18 + 0x7fU & 0xff) < 0x7e) {
        uVar24 = iVar18 - 0x4d;
      }
      else if ((iVar18 - 0x61U & 0xff) < 0x1a) {
        uVar24 = iVar18 - 0x47;
      }
      else {
        uVar24 = iVar18 - 0x41;
        if (0x19 < (uVar24 & 0xff)) goto LAB_01328db8;
      }
      uVar4 = 0x437;
      uVar24 = (short)(ushort)bVar2 * 0xb2 + (uVar24 & 0xff);
      iVar18 = 0;
      do {
        iVar15 = iVar18 + (uVar4 >> 1);
        uVar4 = uVar4 - (uVar4 >> 1);
        uVar12 = uVar24 & 0xffff;
        if (*(ushort *)(&UNK_0044a4fe + iVar15 * 2) <= uVar12) {
          iVar18 = iVar15;
        }
      } while (1 < uVar4);
      if (*(ushort *)(&UNK_0044a4fe + iVar18 * 2) == uVar12) {
        uVar12 = (uint)*(ushort *)(&UNK_00449820 + iVar18 * 2);
      }
      else {
        if (*(ushort *)(&UNK_0044a4fe + iVar18 * 2) < uVar12) {
          iVar18 = iVar18 + 1;
        }
        uVar4 = iVar18 - 1;
        if (0x436 < uVar4) {
LAB_0132b178:
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar4,0x437,&DAT_01ce502c);
        }
        uVar12 = (uVar24 - *(ushort *)(&UNK_0044a4fe + uVar4 * 2)) +
                 (uint)*(ushort *)(&UNK_00449820 + uVar4 * 2);
      }
      iVar18 = 2;
      param_5[1] = (byte)(uVar12 >> 6) & 0x3f | 0x80;
      uVar24 = 3;
      *param_5 = (byte)((uVar12 & 0xffff) >> 0xc) | 0xe0;
LAB_01327e60:
      uVar4 = 1;
      param_5[iVar18] = (byte)uVar12 & 0x3f | 0x80;
      goto LAB_01327e70;
    }
    uVar4 = iVar18 + 0x5fU & 0xff;
    if (uVar4 < 0x5e) {
      uVar24 = (short)(ushort)(byte)(bVar2 - 0x20) * 0x5e + (iVar18 + 0x5fU & 0xff);
      uVar12 = uVar24 - 0x582;
      if (uVar12 < 0x92e) {
        puVar16 = &DAT_00443f90;
LAB_01326388:
        puVar3 = (ushort *)(puVar16 + uVar12 * 2);
LAB_0132638c:
        uVar12 = (uint)*puVar3;
      }
      else {
        if (0xa4 < uVar24) {
          uVar12 = uVar24 - 0xf0e;
          if (uVar12 < 0x1318) {
            puVar16 = &DAT_004418a4;
            goto LAB_01326388;
          }
          if (bVar2 == 0x25) {
            if (0x43 < uVar4) goto LAB_0132ace8;
            puVar3 = (ushort *)(&DAT_0043227a + uVar4 * 2);
            goto LAB_0132638c;
          }
          if (bVar2 == 0x28) {
            if (uVar4 < 0x10) {
              uVar12 = (uint)*(ushort *)(&DAT_0056b608 + uVar4 * 2);
              goto LAB_01327d5c;
            }
LAB_0132ace8:
            uVar24 = uVar24 - 0xbc;
            if (uVar24 < 0x39f) {
              uVar29 = FUN_0132b6b4(&PTR_DAT_00449784,0x4d,uVar24);
              iVar18 = (int)(uVar29 >> 0x20);
              if ((uVar29 & 1) == 0) {
                if (0x4cffffffff < uVar29) {
LAB_0132b248:
                    /* WARNING: Subroutine does not return */
                  FUN_012fb12c(iVar18,0x4d,&DAT_01ce501c);
                }
                uVar12 = (uint)*(ushort *)(&DAT_0044e9f4 + iVar18 * 2);
              }
              else {
                uVar4 = iVar18 - 1;
                if (0x4c < uVar4) {
LAB_0132b234:
                    /* WARNING: Subroutine does not return */
                  FUN_012fb12c(uVar4,0x4d,&DAT_01ce502c);
                }
                uVar12 = (*(ushort *)(&DAT_0044e9f4 + uVar4 * 2) + uVar24) -
                         (uint)*(ushort *)((int)&PTR_DAT_00449784 + uVar4 * 2);
              }
              uVar4 = uVar12 & 0xffff;
              if (0x7f < uVar4) {
                if (uVar4 < 0x800) {
                  uVar24 = 2;
                  iVar18 = 1;
                  bVar2 = (byte)(uVar12 >> 6) | 0xc0;
                }
                else {
                  iVar18 = 2;
                  uVar24 = 3;
                  param_5[1] = (byte)(uVar12 >> 6) & 0x3f | 0x80;
                  bVar2 = (byte)(uVar4 >> 0xc) | 0xe0;
                }
                *param_5 = bVar2;
                goto LAB_01327e60;
              }
            }
          }
          else {
            if ((bVar2 != 0x27) || (0xe < uVar4)) goto LAB_0132ace8;
            uVar12 = (uint)*(ushort *)(&DAT_00447b80 + uVar4 * 2);
            if (uVar12 != 0) {
              uVar24 = 2;
              *param_5 = (byte)(*(ushort *)(&DAT_00447b80 + uVar4 * 2) >> 6) | 0xc0;
              iVar18 = 1;
              goto LAB_01327e60;
            }
          }
          *(undefined1 *)((int)param_1 + 6) = 0;
          param_1[2] = 0;
          uVar4 = 1;
          *(undefined2 *)(param_1 + 1) = 0x202;
          goto LAB_01327bdc;
        }
        uVar12 = (uint)*(ushort *)(&DAT_00445d00 + uVar24 * 2);
        if (uVar12 < 0x800) {
LAB_01327d5c:
          uVar24 = 2;
          *param_5 = (byte)(uVar12 >> 6) | 0xc0;
          iVar18 = 1;
          goto LAB_01327e60;
        }
      }
      iVar18 = 2;
      *param_5 = (byte)(uVar12 >> 0xc) | 0xe0;
      uVar24 = 3;
      param_5[1] = (byte)(uVar12 >> 6) & 0x3f | 0x80;
      goto LAB_01327e60;
    }
    if ((iVar18 + 0x7fU & 0xff) < 0x20) {
      uVar24 = iVar18 - 0x4d;
    }
    else if ((iVar18 - 0x61U & 0xff) < 0x1a) {
      uVar24 = iVar18 - 0x47;
    }
    else {
      uVar24 = iVar18 - 0x41;
      if (0x19 < (uVar24 & 0xff)) goto LAB_01328db8;
    }
    uVar24 = (short)(ushort)(byte)(bVar2 - 0x20) * 0x54 + (uVar24 & 0xff);
    if (uVar24 < 0xc36) {
      uVar29 = FUN_0132b6b4(&DAT_0044bc64,0x217,uVar24);
      iVar18 = (int)(uVar29 >> 0x20);
      if ((uVar29 & 1) == 0) {
        if (0x216ffffffff < uVar29) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(iVar18,0x217,&DAT_01ce501c);
        }
        uVar12 = (uint)*(ushort *)(&DAT_0044a0d0 + iVar18 * 2);
      }
      else {
        uVar4 = iVar18 - 1;
        if (0x216 < uVar4) {
LAB_0132b1b0:
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar4,0x217,&DAT_01ce502c);
        }
        uVar12 = (uVar24 - *(ushort *)(&DAT_0044bc64 + uVar4 * 2)) +
                 (uint)*(ushort *)(&DAT_0044a0d0 + uVar4 * 2);
      }
      iVar18 = 2;
      param_5[1] = (byte)(uVar12 >> 6) & 0x3f | 0x80;
      *param_5 = (byte)((uVar12 & 0xffff) >> 0xc) | 0xe0;
      uVar24 = 3;
      goto LAB_01327e60;
    }
LAB_01328db8:
    uVar8 = 2;
    *(undefined1 *)(param_1 + 1) = 2;
    if (iVar18 < 0) {
      param_1[2] = 0;
      *param_1 = 1;
      goto LAB_01328dd0;
    }
LAB_01328dc0:
    uVar4 = 0;
    param_1[2] = 0;
LAB_01328dc8:
    *param_1 = uVar4;
LAB_01328dcc:
    uVar8 = 1;
LAB_01328dd0:
    *(undefined2 *)((int)param_1 + 5) = uVar8;
    return;
  case 8:
    if ((param_4 == 0) || ((param_2[1] & 1) != 0)) {
      uVar11 = 0;
    }
    else {
      if (2 < param_6) {
        param_4 = 1;
        *(undefined1 *)((int)param_1 + 6) = 0;
        *(undefined2 *)(param_1 + 1) = 0x102;
        param_2[1] = 1;
        goto LAB_013268e8;
      }
      uVar11 = 1;
      param_4 = 0;
    }
    *(undefined1 *)(param_1 + 1) = uVar11;
LAB_013268e8:
    *param_1 = param_4;
    param_1[2] = 0;
    return;
  case 9:
    if (param_4 == 0) {
      uVar11 = 0;
      uVar24 = 0;
      uVar4 = 0;
    }
    else {
      uVar24 = 0;
      uVar4 = 0;
      do {
        if (param_6 <= uVar4 + 2) {
          uVar11 = 1;
          goto LAB_01326850;
        }
        iVar18 = 1;
        bVar2 = param_3[uVar24];
        if (0x7fffffff < (uint)(int)(char)bVar2) {
          bVar5 = bVar2 & 0xbf;
          param_5[uVar4 + 1] = bVar2 >> 6 | 0x9c;
          bVar2 = 0xef;
          param_5[uVar4 + 2] = bVar5;
          iVar18 = 3;
        }
        uVar24 = uVar24 + 1;
        param_5[uVar4] = bVar2;
        uVar4 = iVar18 + uVar4;
      } while (param_4 != uVar24);
      uVar11 = 0;
      uVar24 = param_4;
    }
LAB_01326850:
    param_1[2] = uVar4;
    *param_1 = uVar24;
    *(undefined1 *)(param_1 + 1) = uVar11;
    return;
  case 10:
    if (param_2[7] != '\0') {
      if (2 < param_6) {
        uVar1 = *(ushort *)(param_2 + 4);
        bVar2 = (byte)uVar1;
        if (uVar1 < 0x80) {
          *param_5 = bVar2;
          uVar24 = 1;
        }
        else if (uVar1 < 0x800) {
          uVar24 = 2;
          param_5[1] = bVar2 & 0x3f | 0x80;
          puVar6 = (uint *)0xc0;
          *param_5 = (byte)(uVar1 >> 6) | 0xc0;
        }
        else {
          puVar6 = (uint *)0x2;
          param_5[2] = bVar2 & 0x3f | 0x80;
          uVar24 = 3;
          *param_5 = (byte)(uVar1 >> 0xc) | 0xe0;
          param_5[1] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
        }
        puVar21 = (uint *)0x0;
        *(undefined2 *)(param_2 + 4) = 0;
        param_2[7] = 0;
        goto LAB_01326ba8;
      }
LAB_01327a20:
      uVar24 = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      uVar4 = 0;
LAB_01327bd8:
      param_1[2] = uVar24;
LAB_01327bdc:
      *param_1 = uVar4;
      return;
    }
    puVar21 = (uint *)(uint)*(ushort *)(param_2 + 4);
    uVar24 = 0;
LAB_01326ba8:
    cVar19 = param_2[6];
    uVar4 = 0;
    bVar2 = param_2[2];
    puVar25 = (uint *)(uint)(byte)param_2[3];
LAB_01326bbc:
    bVar28 = (bVar2 & 1) == 0;
    if (bVar28) {
      puVar6 = (uint *)0xffff;
    }
    if (bVar28 && ((uint)puVar21 & (uint)puVar6) == 0) {
      if (cVar19 == '\0') {
        if (param_4 < uVar4) goto LAB_0132ac88;
        if (param_6 < uVar24) goto LAB_0132ac9c;
        uVar12 = param_4 - uVar4 >> 1;
        if (uVar12 != 0) {
          uVar17 = 0;
          uVar7 = param_6 - uVar24;
          uVar13 = 0;
          if ((*(ushort *)(param_3 + (uVar12 - 1) * 2 + uVar4) & 0xfc00) == 0xd800) {
            uVar12 = uVar12 - 1;
          }
          if (3 < uVar7) {
            uVar13 = 0;
            while( true ) {
              if (uVar7 < uVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_012faff4(uVar13,uVar7,uVar7,&DAT_01ce603c);
              }
              uVar9 = uVar12 - uVar17;
              if (uVar7 - uVar13 < uVar12 - uVar17) {
                uVar9 = uVar7 - uVar13;
              }
              if (uVar9 == 0) break;
              uVar14 = 0;
              puVar3 = (ushort *)(param_3 + uVar17 * 2 + uVar4);
              while( true ) {
                uVar26 = (uint)*puVar3;
                if (0x7f < uVar26) break;
                param_5[uVar14 + uVar13 + uVar24] = (byte)*puVar3;
                uVar14 = uVar14 + 1;
                puVar3 = puVar3 + 1;
                if (uVar9 == uVar14) goto LAB_0132725c;
              }
              uVar17 = uVar14 + uVar17;
              uVar13 = uVar14 + uVar13;
              if (uVar7 - 3 <= uVar13) goto LAB_01327270;
              uVar17 = uVar17 + 1;
              do {
                uVar9 = uVar26 + 0x2800 & 0xffff;
                if (uVar9 >> 0xb == 0) {
                  iVar18 = uVar17 * 2;
                  if (((uVar9 >> 10 != 0) || (uVar12 <= uVar17)) ||
                     (uVar27 = (uint)*(ushort *)(param_3 + iVar18 + uVar4),
                     (uVar27 & 0xfc00) != 0xdc00)) goto LAB_01327b98;
                  if (uVar7 <= uVar13) goto LAB_0132b104;
                  uVar9 = uVar26 * 0x400 + -0x35fdc00 + uVar27;
                  param_5[uVar13 + uVar24] = (byte)(uVar9 >> 0x12) | 0xf0;
                  uVar14 = uVar13 + 1;
                  if (uVar7 <= uVar14) goto LAB_0132b114;
                  param_5[uVar14 + uVar24] = (byte)(uVar9 >> 0xc) & 0x3f | 0x80;
                  uVar14 = uVar13 + 2;
                  if (uVar7 <= uVar14) goto LAB_0132b0e4;
                  param_5[uVar14 + uVar24] = (byte)(uVar9 >> 6) & 0x3f | 0x80;
                  uVar9 = uVar13 + 3;
                  if (uVar7 <= uVar9) goto LAB_0132b0f4;
                  uVar17 = uVar17 + 1;
                  iVar18 = 4;
                }
                else {
                  if (uVar26 < 0x800) {
                    if (uVar7 <= uVar13) goto LAB_0132b158;
                    uVar9 = uVar13 + 1;
                    param_5[uVar13 + uVar24] = (byte)(uVar26 >> 6) | 0xc0;
                    if (uVar7 <= uVar9) goto LAB_0132b168;
                    iVar18 = 2;
                  }
                  else {
                    if (uVar7 <= uVar13) goto LAB_0132b124;
                    uVar9 = uVar13 + 1;
                    param_5[uVar13 + uVar24] = (byte)(uVar26 >> 0xc) | 0xe0;
                    if (uVar7 <= uVar9) goto LAB_0132b134;
                    param_5[uVar9 + uVar24] = (byte)(uVar26 >> 6) & 0x3f | 0x80;
                    uVar9 = uVar13 + 2;
                    if (uVar7 <= uVar9) goto LAB_0132b148;
                    iVar18 = 3;
                  }
                  uVar27 = uVar26;
                }
                uVar13 = uVar13 + iVar18;
                param_5[uVar9 + uVar24] = (byte)uVar27 & 0x3f | 0x80;
                if ((uVar7 - 3 <= uVar13) || (uVar17 == uVar12)) goto LAB_01327270;
                if (uVar12 <= uVar17) goto LAB_0132abd0;
                iVar18 = uVar17 * 2;
                uVar17 = uVar17 + 1;
                uVar26 = (uint)*(ushort *)(param_3 + iVar18 + uVar4);
              } while (0x7f < uVar26);
              if (uVar7 <= uVar13) goto LAB_0132b19c;
              param_5[uVar13 + uVar24] = (byte)*(ushort *)(param_3 + iVar18 + uVar4);
              uVar13 = uVar13 + 1;
            }
            uVar9 = 0;
LAB_0132725c:
            uVar13 = uVar9 + uVar13;
            uVar17 = uVar9 + uVar17;
          }
          goto LAB_01327270;
        }
      }
      else {
        if (param_4 < uVar4) {
LAB_0132ac88:
          puVar16 = &DAT_01ce600c;
          goto LAB_0132ac90;
        }
        if (param_6 < uVar24) {
LAB_0132ac9c:
          puVar16 = &DAT_01ce601c;
          goto LAB_0132afcc;
        }
        uVar12 = param_4 - uVar4 >> 1;
        if (uVar12 != 0) {
          uVar17 = 0;
          uVar7 = param_6 - uVar24;
          uVar13 = 0;
          if ((*(ushort *)(param_3 + (uVar12 - 1) * 2 + uVar4) & 0xfc) == 0xd8) {
            uVar12 = uVar12 - 1;
          }
          if (3 < uVar7) {
            uVar13 = 0;
            while( true ) {
              if (uVar7 < uVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_012faff4(uVar13,uVar7,uVar7,&DAT_01ce603c);
              }
              uVar9 = uVar12 - uVar17;
              if (uVar7 - uVar13 < uVar12 - uVar17) {
                uVar9 = uVar7 - uVar13;
              }
              if (uVar9 == 0) break;
              uVar14 = 0;
              puVar3 = (ushort *)(param_3 + uVar17 * 2 + uVar4);
              while( true ) {
                uVar1 = *puVar3;
                uVar26 = ((uint)uVar1 << 0x18 | (uint)(uVar1 >> 8) << 0x10) >> 0x10;
                if (0x7f < uVar26) break;
                param_5[uVar14 + uVar13 + uVar24] = (byte)(uVar1 >> 8);
                uVar14 = uVar14 + 1;
                puVar3 = puVar3 + 1;
                if (uVar9 == uVar14) goto LAB_01327248;
              }
              uVar17 = uVar14 + uVar17;
              uVar13 = uVar14 + uVar13;
              if (uVar7 - 3 <= uVar13) goto LAB_01327270;
              uVar17 = uVar17 + 1;
              do {
                uVar9 = uVar26 + 0x2800 & 0xffff;
                if (uVar9 >> 0xb == 0) {
                  iVar18 = uVar17 * 2;
                  if (((uVar9 >> 10 != 0) || (uVar12 <= uVar17)) ||
                     (uVar9 = (uint)*(ushort *)(param_3 + iVar18 + uVar4) << 0x18,
                     (uVar9 & 0xfc000000) != 0xdc000000)) goto LAB_01327b98;
                  if (uVar7 <= uVar13) {
LAB_0132b104:
                    /* WARNING: Subroutine does not return */
                    FUN_012fb12c(uVar13,uVar7,&DAT_01ce604c);
                  }
                  iVar15 = uVar26 * 0x400;
                  uVar26 = (uVar9 | (uint)(*(ushort *)(param_3 + iVar18 + uVar4) >> 8) << 0x10) >>
                           0x10;
                  uVar9 = iVar15 + -0x35fdc00 + uVar26;
                  param_5[uVar13 + uVar24] = (byte)(uVar9 >> 0x12) | 0xf0;
                  uVar14 = uVar13 + 1;
                  if (uVar7 <= uVar14) {
LAB_0132b114:
                    /* WARNING: Subroutine does not return */
                    FUN_012fb12c(uVar14,uVar7,&DAT_01ce605c);
                  }
                  param_5[uVar14 + uVar24] = (byte)(uVar9 >> 0xc) & 0x3f | 0x80;
                  uVar14 = uVar13 + 2;
                  if (uVar7 <= uVar14) {
LAB_0132b0e4:
                    /* WARNING: Subroutine does not return */
                    FUN_012fb12c(uVar14,uVar7,&DAT_01ce606c);
                  }
                  param_5[uVar14 + uVar24] = (byte)(uVar9 >> 6) & 0x3f | 0x80;
                  uVar9 = uVar13 + 3;
                  if (uVar7 <= uVar9) {
LAB_0132b0f4:
                    /* WARNING: Subroutine does not return */
                    FUN_012fb12c(uVar9,uVar7,&DAT_01ce607c);
                  }
                  uVar17 = uVar17 + 1;
                  iVar18 = 4;
                }
                else if (uVar26 < 0x800) {
                  if (uVar7 <= uVar13) {
LAB_0132b158:
                    /* WARNING: Subroutine does not return */
                    FUN_012fb12c(uVar13,uVar7,&DAT_01ce60bc);
                  }
                  uVar9 = uVar13 + 1;
                  param_5[uVar13 + uVar24] = (byte)(uVar26 >> 6) | 0xc0;
                  if (uVar7 <= uVar9) {
LAB_0132b168:
                    /* WARNING: Subroutine does not return */
                    FUN_012fb12c(uVar9,uVar7,&DAT_01ce60cc);
                  }
                  iVar18 = 2;
                }
                else {
                  if (uVar7 <= uVar13) {
LAB_0132b124:
                    /* WARNING: Subroutine does not return */
                    FUN_012fb12c(uVar13,uVar7,&DAT_01ce608c);
                  }
                  uVar9 = uVar13 + 1;
                  param_5[uVar13 + uVar24] = (byte)(uVar26 >> 0xc) | 0xe0;
                  if (uVar7 <= uVar9) {
LAB_0132b134:
                    /* WARNING: Subroutine does not return */
                    FUN_012fb12c(uVar9,uVar7,&DAT_01ce609c);
                  }
                  param_5[uVar9 + uVar24] = (byte)(uVar26 >> 6) & 0x3f | 0x80;
                  uVar9 = uVar13 + 2;
                  if (uVar7 <= uVar9) {
LAB_0132b148:
                    /* WARNING: Subroutine does not return */
                    FUN_012fb12c(uVar9,uVar7,&DAT_01ce60ac);
                  }
                  iVar18 = 3;
                }
                param_5[uVar9 + uVar24] = (byte)uVar26 & 0x3f | 0x80;
                uVar13 = uVar13 + iVar18;
                if ((uVar7 - 3 <= uVar13) || (uVar17 == uVar12)) goto LAB_01327270;
                if (uVar12 <= uVar17) {
LAB_0132abd0:
                    /* WARNING: Subroutine does not return */
                  FUN_012fb0ec(&DAT_004507da,0x1e,&DAT_01ce602c);
                }
                iVar18 = uVar17 * 2;
                uVar17 = uVar17 + 1;
                uVar1 = *(ushort *)(param_3 + iVar18 + uVar4);
                uVar26 = (uVar1 & 0xff) << 8 | (uint)(uVar1 >> 8);
              } while (0x7f < uVar26);
              if (uVar7 <= uVar13) {
LAB_0132b19c:
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar13,uVar7,&DAT_01ce60dc);
              }
              param_5[uVar13 + uVar24] = (byte)(uVar1 >> 8);
              uVar13 = uVar13 + 1;
            }
            uVar9 = 0;
LAB_01327248:
            uVar13 = uVar9 + uVar13;
            uVar17 = uVar9 + uVar17;
          }
LAB_01327270:
          uVar24 = uVar13 + uVar24;
          uVar4 = uVar4 + uVar17 * 2;
        }
      }
    }
    if (param_4 <= uVar4) {
      if (param_7 == 0) {
LAB_01327a34:
        uVar11 = 0;
LAB_01327a38:
        *(undefined1 *)(param_1 + 1) = uVar11;
      }
      else {
        if (puVar21 == (uint *)0x0) {
          if ((bVar2 & 1) == 0) goto LAB_01327a34;
          if (param_6 <= uVar24 + 2) goto LAB_01327a20;
          uVar8 = 0x102;
        }
        else {
          if (param_6 <= uVar24 + 2) goto LAB_01327a20;
          uVar11 = 0;
          *(undefined2 *)(param_2 + 4) = 0;
          if ((bVar2 & 1) == 0) goto LAB_01327bcc;
          uVar8 = 0x302;
        }
        *(undefined1 *)((int)param_1 + 6) = 0;
        *(undefined2 *)(param_1 + 1) = uVar8;
        param_2[2] = 0;
      }
      goto LAB_01327bd8;
    }
    if (param_6 <= uVar24 + 3) {
      uVar11 = 1;
      goto LAB_01327a38;
    }
    pbVar22 = (byte *)(param_3 + uVar4);
    puVar6 = (uint *)(uint)*pbVar22;
    uVar4 = uVar4 + 1;
    if ((bVar2 & 1) == 0) {
      param_2[3] = *pbVar22;
      param_2[2] = 1;
      puVar25 = puVar6;
      goto LAB_01327208;
    }
    param_2[2] = 0;
    uVar12 = (int)puVar6 << 0x18;
    puVar6 = (uint *)((uint)puVar6 | (int)puVar25 << 8);
    if (cVar19 == '\0') {
      puVar6 = (uint *)((uVar12 | (int)puVar25 << 0x10) >> 0x10);
    }
    if (((uint)puVar6 & 0xfc00) == 0xd800) {
      *(short *)(param_2 + 4) = (short)puVar6;
      if (puVar21 != (uint *)0x0) goto LAB_01327bc4;
      puVar21 = puVar6;
    }
    else {
      bVar5 = (byte)puVar6;
      if (((uint)puVar6 & 0xfc00) == 0xdc00) {
        if (puVar21 == (uint *)0x0) {
          uVar11 = 0;
          goto LAB_01327bcc;
        }
        *(undefined2 *)(param_2 + 4) = 0;
        puVar6 = puVar6 + (int)puVar21 * 0x100 + -0xd7f700;
        pbVar22 = param_5 + uVar24;
        *pbVar22 = (byte)((uint)puVar6 >> 0x12) | 0xf0;
        uVar24 = uVar24 + 4;
        pbVar22[3] = bVar5 & 0x3f | 0x80;
        pbVar22[2] = (byte)((uint)puVar6 >> 6) & 0x3f | 0x80;
        puVar6 = (uint *)((uint)puVar6 >> 0xc & 0x3f | 0x80);
        pbVar22[1] = (byte)puVar6;
      }
      else {
        if (puVar21 != (uint *)0x0) {
          *(short *)(param_2 + 4) = (short)puVar6;
          param_2[7] = 1;
LAB_01327bc4:
          uVar11 = 2;
LAB_01327bcc:
          *(undefined1 *)((int)param_1 + 6) = uVar11;
          *(undefined2 *)(param_1 + 1) = 0x202;
          goto LAB_01327bd8;
        }
        pbVar22 = param_5 + uVar24;
        if (puVar6 < (uint *)0x80) {
          uVar24 = uVar24 + 1;
          *pbVar22 = bVar5;
        }
        else {
          if ((uint *)0x7ff < puVar6) {
            uVar12 = (uint)puVar6 >> 6;
            pbVar22[2] = bVar5 & 0x3f | 0x80;
            puVar6 = (uint *)((uint)puVar6 >> 0xc | 0xe0);
            pbVar22[1] = (byte)uVar12 & 0x3f | 0x80;
            *pbVar22 = (byte)puVar6;
            puVar21 = (uint *)0x0;
            uVar24 = uVar24 + 3;
            goto LAB_013271fc;
          }
          uVar12 = (uint)puVar6 >> 6;
          puVar6 = (uint *)((uint)puVar6 & 0x3f | 0x80);
          pbVar22[1] = (byte)puVar6;
          uVar24 = uVar24 + 2;
          *pbVar22 = (byte)uVar12 | 0xc0;
        }
      }
      puVar21 = (uint *)0x0;
    }
LAB_013271fc:
LAB_01327208:
    bVar2 = bVar2 ^ 1;
    goto LAB_01326bbc;
  }
  uVar4 = 0;
  uVar24 = 0;
  if (param_2[2] == '\0') {
LAB_01327358:
    if (param_4 != 0) {
      bVar2 = param_2[1];
      uVar12 = (uint)(byte)param_2[3];
      uVar7 = (uint)(byte)param_2[5];
      do {
        uVar13 = uVar4 + 2;
        if (param_6 <= uVar13) {
          uVar11 = 1;
          goto LAB_01327898;
        }
        uVar14 = uVar12 & 0xff;
        uVar9 = uVar24 + 1;
        bVar5 = param_3[uVar24];
        uVar26 = (uint)bVar5;
        uVar12 = (&switchD_0132739c::switchdataD_013273a0)[uVar14];
        uVar17 = (uint)(char)bVar5;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(uVar14) {
        case 0:
          if (uVar17 == 0x1b) goto LAB_013274f0;
          param_2[1] = 0;
          if (((int)uVar17 < 0) || ((uVar17 & 0xfe) == 0xe)) {
LAB_01327a40:
            *(undefined1 *)((int)param_1 + 6) = 0;
            uVar8 = 0x102;
            goto LAB_01328cc4;
          }
          param_5[uVar4] = bVar5;
          uVar4 = uVar4 + 1;
          uVar12 = 0;
LAB_013274a4:
          bVar2 = 0;
          break;
        case 1:
          if (uVar17 == 0x1b) goto LAB_013274f0;
          param_2[1] = 0;
          if (uVar26 == 0x7e) {
            param_5[uVar4 + 1] = 0x80;
            param_5[uVar4] = 0xe2;
            uVar4 = uVar4 + 3;
            param_5[uVar13] = 0xbe;
          }
          else {
            if (uVar26 == 0x5c) {
              bVar2 = 0;
              param_5[uVar4 + 1] = 0xa5;
              param_5[uVar4] = 0xc2;
              uVar12 = 1;
LAB_013275cc:
              uVar4 = uVar13;
              break;
            }
            if (((int)uVar17 < 0) || ((uVar17 & 0xfe) == 0xe)) goto LAB_01327a40;
            param_5[uVar4] = bVar5;
            uVar4 = uVar4 + 1;
          }
          bVar2 = 0;
          uVar12 = 1;
          break;
        case 2:
          if (uVar17 != 0x1b) {
            param_2[1] = 0;
            if (0x3e < (uVar17 - 0x21 & 0xff)) goto LAB_01327a40;
            param_5[uVar4] = 0xef;
            uVar12 = 2;
            param_5[uVar13] = bVar5 & 0x3f | 0x80;
            param_5[uVar4 + 1] = (byte)(uVar17 + 0x3f40 >> 6) & 0xbf;
            uVar4 = uVar4 + 3;
            goto LAB_013274a4;
          }
LAB_013274f0:
          uVar12 = 5;
          param_2[3] = 5;
          break;
        case 3:
          if (uVar17 == 0x1b) goto LAB_013274f0;
          param_2[1] = 0;
          if (0x5d < (uVar17 - 0x21 & 0xff)) goto LAB_01327a40;
          uVar12 = 4;
          param_2[5] = bVar5;
          param_2[3] = 4;
          bVar2 = 0;
          uVar7 = uVar17;
          break;
        case 4:
          if (uVar17 == 0x1b) {
            *(undefined1 *)((int)param_1 + 6) = 1;
            *(undefined2 *)(param_1 + 1) = 0x102;
            param_2[3] = 5;
            goto LAB_0132789c;
          }
          param_2[3] = 3;
          uVar24 = uVar17 - 0x21;
          uVar12 = uVar7 - 0x21 & 0xff;
          uVar14 = uVar24 & 0xff;
          if ((uVar14 < 0x53) && (uVar12 == 3)) {
            param_5[uVar4] = 0xe3;
            uVar7 = 0x24;
            param_5[uVar13] = (byte)(uVar17 + 0x20) & 0x3f | 0x80;
            param_5[uVar4 + 1] = (byte)((uVar17 + 0x20 & 0xff) >> 6) | 0x80;
          }
          else if ((uVar14 < 0x56) && (uVar12 == 4)) {
            uVar7 = 0x25;
            param_5[uVar4] = 0xe3;
            uVar24 = (uVar24 & 0xff) + 0x30a1;
            param_5[uVar4 + 1] = (byte)(uVar24 >> 6) & 0x87;
            param_5[uVar13] = (byte)uVar24 & 0x3f | 0x80;
          }
          else {
            if (0x5d < uVar14) {
LAB_01328cb4:
              *(undefined1 *)((int)param_1 + 6) = 0;
              uVar8 = 0x202;
              goto LAB_01328cc4;
            }
            iVar15 = (short)uVar12 * 0x5e + (uVar24 & 0xff);
            uVar24 = iVar15 - 0x582;
            if (uVar24 < 0xb95) {
              puVar16 = &DAT_00447c16;
            }
            else {
              uVar24 = iVar15 - 0x1142;
              if (uVar24 < 0xd3e) {
                puVar16 = &DAT_0044ea8e;
              }
              else {
                uVar24 = iVar15 - 0x2050;
                if (0x167 < uVar24) {
                  uVar29 = FUN_01325c44(iVar15);
                  uVar24 = (uint)(uVar29 >> 0x20);
                  if ((uVar29 & 1) == 0) {
                    puVar3 = &DAT_0044953c;
                    uVar24 = 0;
                    while ((uint)*puVar3 <= iVar15 - (uint)puVar3[-1]) {
                      puVar3 = puVar3 + 3;
                      bVar28 = 0x32 < uVar24;
                      uVar24 = uVar24 + 3;
                      if (bVar28) goto LAB_01328cb4;
                    }
                    iVar18 = uVar24 + 2;
                    if (0x33 < uVar24) goto LAB_0132b200;
                    uVar24 = (uint)(ushort)(&DAT_0044953a)[iVar18] + (iVar15 - (uint)puVar3[-1]);
                    if (0x7ff < (uVar24 & 0xffff)) {
                      param_5[uVar13] = (byte)uVar24 & 0x3f | 0x80;
                      bVar5 = (byte)((uVar24 & 0xffff) >> 0xc);
                      param_5[uVar4 + 1] = (byte)(uVar24 >> 6) & 0x3f | 0x80;
                      goto LAB_01327820;
                    }
                    param_5[uVar4 + 1] = (byte)uVar24 & 0x3f | 0x80;
                    param_5[uVar4] = (byte)(uVar24 >> 6) | 0xc0;
                  }
                  else {
                    bVar5 = (byte)(uVar29 >> 0x20) & 0x3f | 0x80;
                    if (0x7ff < (uVar24 & 0xffff)) {
                      param_5[uVar13] = bVar5;
                      param_5[uVar4 + 1] = (byte)(uVar24 >> 6) & 0x3f | 0x80;
                      bVar5 = (byte)((uVar24 & 0xffff) >> 0xc);
LAB_01327820:
                      param_5[uVar4] = bVar5 | 0xe0;
                      goto LAB_013276f8;
                    }
                    param_5[uVar4 + 1] = bVar5;
                    param_5[uVar4] = (byte)(uVar24 >> 6) | 0xc0;
                  }
                  uVar12 = 3;
                  goto LAB_013275cc;
                }
                puVar16 = &DAT_0045050a;
              }
            }
            uVar1 = *(ushort *)(puVar16 + uVar24 * 2);
            param_5[uVar4] = (byte)(uVar1 >> 0xc) | 0xe0;
            param_5[uVar13] = (byte)uVar1 & 0x3f | 0x80;
            param_5[uVar4 + 1] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
          }
LAB_013276f8:
          uVar12 = 3;
          uVar4 = uVar4 + 3;
          break;
        case 5:
          if (uVar26 != 0x24 && uVar26 != 0x28) {
            uVar11 = 0;
            param_2[1] = 0;
LAB_013296cc:
            *(undefined1 *)((int)param_1 + 6) = uVar11;
            uVar11 = param_2[4];
            *(undefined2 *)(param_1 + 1) = 0x102;
            param_2[3] = uVar11;
            uVar9 = uVar24;
            goto LAB_0132789c;
          }
          uVar12 = 6;
          param_2[3] = 6;
          param_2[5] = bVar5;
          uVar7 = uVar17;
          break;
        case 6:
          uVar7 = uVar7 & 0xff;
          if (uVar17 == 0x42) {
            uVar12 = 0;
          }
          if (uVar17 != 0x42 || uVar7 != 0x28) {
            if (uVar17 == 0x4a) {
              uVar12 = 1;
            }
            if (uVar17 != 0x4a || uVar7 != 0x28) {
              if (uVar17 == 0x49) {
                uVar12 = 2;
              }
              if (uVar17 != 0x49 || uVar7 != 0x28) {
                if (uVar7 == 0x24) {
                  uVar17 = uVar26 | 2;
                  uVar12 = 3;
                }
                if (uVar7 != 0x24 || uVar17 != 0x42) {
                  *(undefined2 *)(param_2 + 1) = 0x100;
                  uVar11 = 1;
                  goto LAB_013296cc;
                }
              }
            }
          }
          param_2[4] = (char)uVar12;
          param_2[3] = (char)uVar12;
          param_2[5] = 0;
          param_2[1] = 1;
          if ((bVar2 & 1) != 0) {
            *(undefined1 *)((int)param_1 + 6) = 3;
            uVar8 = 0x302;
LAB_01328cc4:
            *(undefined2 *)(param_1 + 1) = uVar8;
            goto LAB_0132789c;
          }
          bVar2 = 1;
          uVar7 = 0;
        }
        uVar24 = uVar9;
      } while (uVar9 != param_4);
      uVar24 = param_4;
    }
    if (param_7 != 0) {
      if ((byte)param_2[3] - 4 < 2) {
        uVar11 = 0;
      }
      else {
        if ((byte)param_2[3] != 6) goto LAB_01327890;
        uVar11 = 1;
        param_2[2] = 1;
      }
      *(undefined1 *)((int)param_1 + 6) = uVar11;
      uVar11 = param_2[4];
      *(undefined2 *)(param_1 + 1) = 0x102;
      param_2[3] = uVar11;
      uVar9 = uVar24;
      goto LAB_0132789c;
    }
LAB_01327890:
    uVar11 = 0;
  }
  else {
    if (2 < param_6) {
      bVar2 = param_2[3];
      *(undefined2 *)(param_2 + 1) = 0;
      if (bVar2 < 2) {
        uVar4 = 1;
        *param_5 = param_2[5];
        param_2[5] = 0;
      }
      else if (bVar2 == 2) {
        bVar2 = param_2[5];
        uVar4 = 3;
        param_2[5] = 0;
        uVar12 = bVar2 - 0xc0;
        param_5[2] = bVar2 & 0x3f | 0x80;
        param_5[1] = (byte)(uVar12 >> 6) & 0x3f | 0x80;
        *param_5 = (byte)((uVar12 & 0xffff) >> 0xc) | 0xe0;
      }
      else {
        if (bVar2 != 3) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01ce5f8c);
        }
        param_2[3] = 4;
      }
      goto LAB_01327358;
    }
    uVar11 = 1;
  }
LAB_01327898:
  *(undefined1 *)(param_1 + 1) = uVar11;
  uVar9 = uVar24;
LAB_0132789c:
  param_1[2] = uVar4;
  *param_1 = uVar9;
  return;
LAB_01327b98:
  uVar11 = 0;
  uVar24 = uVar13 + uVar24;
  uVar4 = iVar18 + uVar4;
  goto LAB_01327bcc;
code_r0x0132624c:
  cVar19 = '\x02';
  param_2[0xb] = (char)uVar7;
  param_2[9] = 2;
  uVar12 = uVar12 + 1;
  goto LAB_01326214;
}

