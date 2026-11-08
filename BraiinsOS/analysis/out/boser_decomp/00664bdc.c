// FUN_00664bdc @ 00664bdc size=3432 calls_out=8 calls_in=16
// strings: 

void FUN_00664bdc(undefined4 *param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  bool bVar15;
  byte *pbVar16;
  byte bVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  uint uVar21;
  byte *pbVar22;
  uint uVar23;
  byte *pbVar24;
  uint uVar25;
  byte bVar26;
  byte *pbVar27;
  byte bVar28;
  undefined1 *puVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  undefined *local_54;
  byte *local_4c;
  byte *local_40;
  byte *local_3c;
  byte *local_38;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  if ((byte *)0x7fffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00664730();
  }
  local_40 = param_3;
  if (param_3 == (byte *)0x0) {
    local_38 = (byte *)0x0;
    pbVar3 = &DAT_00000001;
  }
  else {
    pbVar3 = (byte *)FUN_01298504(param_3,1);
    if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,param_3);
    }
    pbVar16 = pbVar3;
    pbVar22 = param_3;
    pbVar24 = param_2;
    pbVar20 = (byte *)0x0;
    if (&DAT_0000000f < param_3) {
      pbVar20 = (byte *)0x0;
      local_38 = (byte *)((uint)param_3 & 0x7ffffff0);
      do {
        pbVar16 = param_2 + (int)pbVar20;
        bVar33 = *pbVar16;
        bVar14 = pbVar16[1];
        bVar13 = pbVar16[2];
        bVar12 = pbVar16[3];
        uVar21 = (~(int)(char)bVar33 & 0xffU) >> 7;
        bVar11 = pbVar16[4];
        if ((uint)(int)(char)bVar14 < 0x80000000) {
          uVar21 = ((int)(char)bVar33 >> 7) + 2;
        }
        if ((uint)(int)(char)bVar13 < 0x80000000) {
          uVar21 = uVar21 + 1;
        }
        if ((uint)(int)(char)bVar12 < 0x80000000) {
          uVar21 = uVar21 + 1;
        }
        if ((uint)(int)(char)bVar11 < 0x80000000) {
          uVar21 = uVar21 + 1;
        }
        bVar10 = pbVar16[5];
        bVar9 = pbVar16[6];
        if ((uint)(int)(char)bVar10 < 0x80000000) {
          uVar21 = uVar21 + 1;
        }
        bVar8 = pbVar16[7];
        bVar32 = pbVar16[8];
        if ((uint)(int)(char)bVar9 < 0x80000000) {
          uVar21 = uVar21 + 1;
        }
        bVar26 = pbVar16[9];
        if ((uint)(int)(char)bVar8 < 0x80000000) {
          uVar21 = uVar21 + 1;
        }
        bVar28 = pbVar16[10];
        if ((uint)(int)(char)bVar32 < 0x80000000) {
          uVar21 = uVar21 + 1;
        }
        bVar30 = pbVar16[0xb];
        if ((uint)(int)(char)bVar26 < 0x80000000) {
          uVar21 = uVar21 + 1;
        }
        bVar2 = pbVar16[0xc];
        if ((uint)(int)(char)bVar28 < 0x80000000) {
          uVar21 = uVar21 + 1;
        }
        bVar17 = pbVar16[0xd];
        if ((uint)(int)(char)bVar30 < 0x80000000) {
          uVar21 = uVar21 + 1;
        }
        bVar31 = pbVar16[0xe];
        if ((uint)(int)(char)bVar2 < 0x80000000) {
          uVar21 = uVar21 + 1;
        }
        bVar7 = pbVar16[0xf];
        if ((uint)(int)(char)bVar17 < 0x80000000) {
          uVar21 = uVar21 + 1;
        }
        if ((uint)(int)(char)bVar31 < 0x80000000) {
          uVar21 = uVar21 + 1;
        }
        if ((uint)(int)(char)bVar7 < 0x80000000) {
          uVar21 = uVar21 + 1;
        }
        if ((uVar21 & 0xff) != 0x10) {
          pbVar24 = param_2 + (int)pbVar20;
          pbVar16 = pbVar3 + (int)pbVar20;
          goto LAB_00664f50;
        }
        if (bVar33 - 0x41 < 0x1a) {
          bVar33 = bVar33 | 0x20;
        }
        pbVar16 = pbVar3 + (int)pbVar20;
        *pbVar16 = bVar33;
        if (bVar7 - 0x41 < 0x1a) {
          bVar7 = bVar7 | 0x20;
        }
        pbVar16[0xf] = bVar7;
        if (bVar31 - 0x41 < 0x1a) {
          bVar31 = bVar31 | 0x20;
        }
        if (bVar17 - 0x41 < 0x1a) {
          bVar17 = bVar17 | 0x20;
        }
        if (bVar2 - 0x41 < 0x1a) {
          bVar2 = bVar2 | 0x20;
        }
        pbVar16[0xc] = bVar2;
        pbVar20 = pbVar20 + 0x10;
        if (bVar30 - 0x41 < 0x1a) {
          bVar30 = bVar30 | 0x20;
        }
        if (bVar28 - 0x41 < 0x1a) {
          bVar28 = bVar28 | 0x20;
        }
        if (bVar26 - 0x41 < 0x1a) {
          bVar26 = bVar26 | 0x20;
        }
        if (bVar32 - 0x41 < 0x1a) {
          bVar32 = bVar32 | 0x20;
        }
        pbVar22 = pbVar22 + -0x10;
        if (bVar8 - 0x41 < 0x1a) {
          bVar8 = bVar8 | 0x20;
        }
        pbVar16[7] = bVar8;
        pbVar16[0xe] = bVar31;
        pbVar16[0xd] = bVar17;
        pbVar16[0xb] = bVar30;
        if (bVar9 - 0x41 < 0x1a) {
          bVar9 = bVar9 | 0x20;
        }
        pbVar16[6] = bVar9;
        pbVar16[10] = bVar28;
        pbVar16[9] = bVar26;
        pbVar16[8] = bVar32;
        if (bVar10 - 0x41 < 0x1a) {
          bVar10 = bVar10 | 0x20;
        }
        pbVar16[5] = bVar10;
        if (bVar11 - 0x41 < 0x1a) {
          bVar11 = bVar11 | 0x20;
        }
        pbVar16[4] = bVar11;
        if (bVar12 - 0x41 < 0x1a) {
          bVar12 = bVar12 | 0x20;
        }
        pbVar16[3] = bVar12;
        if (bVar13 - 0x41 < 0x1a) {
          bVar13 = bVar13 | 0x20;
        }
        pbVar16[2] = bVar13;
        if (bVar14 - 0x41 < 0x1a) {
          bVar14 = bVar14 | 0x20;
        }
        pbVar16[1] = bVar14;
      } while (&DAT_0000000f < pbVar22);
      if (pbVar22 == (byte *)0x0) goto LAB_00664f84;
      pbVar24 = param_2 + (int)pbVar20;
      pbVar16 = pbVar3 + (int)pbVar20;
      pbVar20 = local_38;
    }
LAB_00664f50:
    local_38 = pbVar22 + (int)pbVar20;
    do {
      bVar33 = *pbVar24;
      if ((char)bVar33 < '\0') {
        local_4c = (byte *)0x0;
        local_54 = &DAT_01c03ea0;
        pbVar16 = pbVar24;
        local_3c = pbVar3;
        local_38 = pbVar20;
        goto LAB_00664ff8;
      }
      pbVar24 = pbVar24 + 1;
      if (bVar33 - 0x41 < 0x1a) {
        bVar33 = bVar33 | 0x20;
      }
      *pbVar16 = bVar33;
      pbVar20 = pbVar20 + 1;
      pbVar22 = pbVar22 + -1;
      pbVar16 = pbVar16 + 1;
    } while (pbVar22 != (byte *)0x0);
  }
LAB_00664f84:
  local_3c = pbVar3;
LAB_00664f90:
  *param_1 = local_40;
  param_1[1] = local_3c;
  param_1[2] = local_38;
  return;
LAB_00664ff8:
  do {
    pbVar27 = local_38;
    pbVar18 = pbVar16 + 1;
    uVar21 = (uint)*pbVar16;
    if ((char)*pbVar16 < '\0') {
      if (uVar21 < 0xe0) {
        uVar25 = pbVar16[1] & 0x3f | (uVar21 & 0x1f) << 6;
        pbVar18 = pbVar16 + 2;
      }
      else {
        uVar25 = pbVar16[2] & 0x3f | (pbVar16[1] & 0x3f) << 6;
        if (uVar21 < 0xf0) {
          uVar25 = uVar25 | (uVar21 & 0x1f) << 0xc;
          pbVar18 = pbVar16 + 3;
        }
        else {
          pbVar18 = pbVar16 + 4;
          uVar25 = pbVar16[3] & 0x3f | uVar25 << 6 | (uVar21 & 7) << 0x12;
        }
      }
      if (uVar25 != 0x3a3) {
        local_4c = pbVar18 + ((int)local_4c - (int)pbVar16);
        goto LAB_006650b8;
      }
      pbVar3 = local_4c + (int)pbVar20;
      if (pbVar3 != (byte *)0x0) {
        if (pbVar3 < param_3) {
          if ((char)param_2[(int)pbVar3] < -0x40) goto LAB_00665908;
        }
        else if (pbVar3 != param_3) {
LAB_00665908:
          pbVar19 = (byte *)0x0;
          goto LAB_0066590c;
        }
      }
      bVar15 = false;
      pbVar19 = param_2 + (int)pbVar3;
      do {
        bVar33 = 0x83;
        if (param_2 == pbVar19) goto LAB_00665810;
        pbVar4 = pbVar19 + -1;
        puVar29 = (undefined1 *)(int)(char)*pbVar4;
        if ((undefined1 *)0x7fffffff < puVar29) {
          pbVar4 = pbVar19 + -2;
          bVar14 = *pbVar4;
          if ((char)bVar14 < -0x40) {
            pbVar4 = pbVar19 + -3;
            bVar13 = *pbVar4;
            if ((char)bVar13 < -0x40) {
              pbVar4 = pbVar19 + -4;
              uVar21 = (int)(char)bVar13 & 0x3fU | (*pbVar4 & 7) << 6;
            }
            else {
              uVar21 = bVar13 & 0xf;
            }
            uVar21 = (int)(char)bVar14 & 0x3fU | uVar21 << 6;
          }
          else {
            uVar21 = bVar14 & 0x1f;
          }
          puVar29 = (undefined1 *)((uint)puVar29 & 0x3f | uVar21 << 6);
          if (puVar29 == &DAT_00110000) goto LAB_00665810;
        }
        if (bVar15) {
LAB_00665290:
          bVar15 = true;
          puVar5 = puVar29;
        }
        else if (puVar29 < (undefined1 *)0x80) {
          bVar15 = false;
          puVar5 = &DAT_00110000;
          if ((((undefined1 *)0x13 < puVar29 + -0x27) ||
              ((1 << ((uint)(puVar29 + -0x27) & 0xff) & 0x80081U) == 0)) &&
             (puVar29 != (undefined1 *)0x5e && puVar29 != (undefined1 *)0x60)) goto LAB_00665290;
        }
        else {
          if ((puVar29 < (undefined1 *)0xa8) || (iVar6 = FUN_01307690(puVar29), iVar6 == 0))
          goto LAB_00665290;
          puVar5 = &DAT_00110000;
          bVar15 = false;
        }
        pbVar19 = pbVar4;
      } while (puVar5 == &DAT_00110000);
      if (puVar5 < (undefined1 *)0x80) {
        if (((uint)puVar5 & 0x5f) - 0x41 < 0x1a) goto LAB_00665564;
      }
      else if (((undefined1 *)0xa9 < puVar5) && (iVar6 = FUN_013078c8(), iVar6 != 0)) {
LAB_00665564:
        pbVar19 = pbVar3 + 2;
        if (pbVar19 != (byte *)0x0) {
          if (pbVar19 < param_3) {
            if ((char)param_2[(int)pbVar19] < -0x40) goto LAB_00665934;
          }
          else if (pbVar19 != param_3) {
LAB_00665934:
            local_54 = &DAT_01c03eb0;
            pbVar3 = param_3;
LAB_0066590c:
                    /* WARNING: Subroutine does not return */
            FUN_012fb514(param_2,param_3,pbVar19,pbVar3,local_54);
          }
        }
        bVar15 = false;
        pbVar19 = param_2 + (int)pbVar19;
        do {
          bVar33 = 0x82;
          if (pbVar19 == param_2 + (int)param_3) goto LAB_00665810;
          puVar29 = (undefined1 *)(uint)*pbVar19;
          pbVar3 = pbVar19 + 1;
          if ((char)*pbVar19 < '\0') {
            if (puVar29 < (undefined1 *)0xe0) {
              puVar29 = (undefined1 *)(pbVar19[1] & 0x3f | ((uint)puVar29 & 0x1f) << 6);
              pbVar3 = pbVar19 + 2;
              goto joined_r0x00665788;
            }
            uVar21 = pbVar19[2] & 0x3f | (pbVar19[1] & 0x3f) << 6;
            if ((undefined1 *)0xef < puVar29) {
              puVar29 = (undefined1 *)
                        (pbVar19[3] & 0x3f | uVar21 << 6 | ((uint)puVar29 & 7) << 0x12);
              if (puVar29 != &DAT_00110000) {
                pbVar3 = pbVar19 + 4;
                goto joined_r0x00665788;
              }
              goto LAB_00665810;
            }
            puVar29 = (undefined1 *)(uVar21 | ((uint)puVar29 & 0x1f) << 0xc);
            pbVar19 = pbVar19 + 3;
            if (!bVar15) goto LAB_006656fc;
LAB_006656c0:
            puVar5 = puVar29;
            bVar15 = true;
          }
          else {
joined_r0x00665788:
            pbVar19 = pbVar3;
            if (bVar15) goto LAB_006656c0;
LAB_006656fc:
            if ((undefined1 *)0x7f < puVar29) {
              if ((undefined1 *)0xa7 < puVar29) {
                iVar6 = FUN_01307690(puVar29);
                if (iVar6 != 0) {
                  puVar5 = &DAT_00110000;
                  bVar15 = false;
                  goto LAB_006656c8;
                }
              }
              goto LAB_006656c0;
            }
            puVar5 = &DAT_00110000;
            bVar15 = false;
            if ((((undefined1 *)0x13 < puVar29 + -0x27) ||
                ((1 << ((uint)(puVar29 + -0x27) & 0xff) & 0x80081U) == 0)) &&
               (puVar29 != (undefined1 *)0x5e && puVar29 != (undefined1 *)0x60)) goto LAB_006656c0;
          }
LAB_006656c8:
        } while (puVar5 == &DAT_00110000);
        if (puVar5 < (undefined1 *)0x80) {
          bVar33 = 0x82;
          if (((uint)puVar5 & 0x5f) - 0x41 < 0x1a) {
            bVar33 = 0x83;
          }
        }
        else if (((undefined1 *)0xa9 < puVar5) && (iVar6 = FUN_013078c8(), iVar6 != 0)) {
          bVar33 = 0x83;
        }
      }
LAB_00665810:
      pbVar3 = pbVar27;
      if ((uint)((int)local_40 - (int)pbVar27) < 2) {
        FUN_00664634(&local_40,pbVar27,2);
        pbVar3 = local_38;
      }
      local_38 = pbVar27 + 2;
      local_3c[(int)pbVar3] = 0xcf;
      (local_3c + (int)pbVar3)[1] = bVar33;
      local_4c = pbVar18 + ((int)local_4c - (int)pbVar16);
LAB_00664fe4:
      pbVar3 = local_3c;
    }
    else {
      local_4c = pbVar18 + ((int)local_4c - (int)pbVar16);
LAB_006650b8:
      FUN_01307558(&local_30);
      uVar1 = local_28;
      uVar25 = local_2c;
      uVar21 = local_30;
      bVar33 = (byte)local_30;
      if (local_2c != 0) {
        uVar23 = 1;
        bVar14 = (byte)local_2c;
        if (local_28 == 0) {
          if (0x7f < local_30) {
            uVar23 = 2;
          }
          if ((0x7ff < local_30) && (uVar23 = 4, local_30 < 0x10000)) {
            uVar23 = 3;
          }
          pbVar16 = pbVar27;
          if ((uint)((int)local_40 - (int)pbVar27) < uVar23) {
            FUN_00664634(&local_40,pbVar27,uVar23);
            pbVar16 = local_38;
            pbVar3 = local_3c;
          }
          pbVar3 = pbVar3 + (int)pbVar16;
          if (uVar21 < 0x80) {
            *pbVar3 = bVar33;
          }
          else {
            bVar33 = bVar33 & 0x3f | 0x80;
            bVar13 = (byte)(uVar21 >> 6);
            if (uVar21 < 0x800) {
              pbVar3[1] = bVar33;
              *pbVar3 = bVar13 | 0xc0;
            }
            else {
              bVar13 = bVar13 & 0x3f | 0x80;
              bVar12 = (byte)(uVar21 >> 0xc);
              if (uVar21 >> 0x10 == 0) {
                pbVar3[1] = bVar13;
                pbVar3[2] = bVar33;
                *pbVar3 = bVar12 | 0xe0;
              }
              else {
                pbVar3[3] = bVar33;
                pbVar3[2] = bVar13;
                pbVar3[1] = bVar12 & 0x3f | 0x80;
                *pbVar3 = (byte)(uVar21 >> 0x12) | 0xf0;
              }
            }
          }
          pbVar27 = pbVar27 + uVar23;
          uVar21 = 1;
          if (0x7f < uVar25) {
            uVar21 = 2;
          }
          if ((0x7ff < uVar25) && (uVar21 = 4, uVar25 < 0x10000)) {
            uVar21 = 3;
          }
          local_38 = pbVar27;
          if ((uint)((int)local_40 - (int)pbVar27) < uVar21) {
            FUN_00664634(&local_40,pbVar27,uVar21);
          }
          pbVar3 = local_3c + (int)local_38;
          if (0x7f < uVar25) {
            bVar14 = bVar14 & 0x3f | 0x80;
            bVar33 = (byte)(uVar25 >> 6);
            if (uVar25 < 0x800) goto LAB_00665648;
            bVar13 = bVar33 & 0x3f | 0x80;
            bVar33 = (byte)(uVar25 >> 0xc);
            if (uVar25 >> 0x10 == 0) {
              pbVar3[1] = bVar13;
              bVar33 = bVar33 | 0xe0;
              pbVar3[2] = bVar14;
              goto LAB_00665650;
            }
            pbVar3[3] = bVar14;
            pbVar3[2] = bVar13;
            local_38 = pbVar27 + uVar21;
            pbVar3[1] = bVar33 & 0x3f | 0x80;
            *pbVar3 = (byte)(uVar25 >> 0x12) | 0xf0;
            goto LAB_00664fe4;
          }
LAB_00665628:
          *pbVar3 = (byte)uVar25;
        }
        else {
          if (0x7f < local_30) {
            uVar23 = 2;
          }
          if ((0x7ff < local_30) && (uVar23 = 4, local_30 < 0x10000)) {
            uVar23 = 3;
          }
          pbVar16 = pbVar27;
          if ((uint)((int)local_40 - (int)pbVar27) < uVar23) {
            FUN_00664634(&local_40,pbVar27,uVar23);
            pbVar16 = local_38;
            pbVar3 = local_3c;
          }
          pbVar3 = pbVar3 + (int)pbVar16;
          if (uVar21 < 0x80) {
            *pbVar3 = bVar33;
          }
          else {
            bVar33 = bVar33 & 0x3f | 0x80;
            bVar13 = (byte)(uVar21 >> 6);
            if (uVar21 < 0x800) {
              pbVar3[1] = bVar33;
              *pbVar3 = bVar13 | 0xc0;
            }
            else {
              bVar13 = bVar13 & 0x3f | 0x80;
              bVar12 = (byte)(uVar21 >> 0xc);
              if (uVar21 >> 0x10 == 0) {
                pbVar3[1] = bVar13;
                pbVar3[2] = bVar33;
                *pbVar3 = bVar12 | 0xe0;
              }
              else {
                pbVar3[3] = bVar33;
                pbVar3[2] = bVar13;
                pbVar3[1] = bVar12 & 0x3f | 0x80;
                *pbVar3 = (byte)(uVar21 >> 0x12) | 0xf0;
              }
            }
          }
          pbVar27 = pbVar27 + uVar23;
          uVar21 = 1;
          if (0x7f < uVar25) {
            uVar21 = 2;
          }
          if ((0x7ff < uVar25) && (uVar21 = 4, uVar25 < 0x10000)) {
            uVar21 = 3;
          }
          local_38 = pbVar27;
          if ((uint)((int)local_40 - (int)pbVar27) < uVar21) {
            FUN_00664634(&local_40,pbVar27,uVar21);
          }
          local_38 = local_3c + (int)local_38;
          if (uVar25 < 0x80) {
            *local_38 = bVar14;
          }
          else {
            bVar33 = bVar14 & 0x3f | 0x80;
            bVar14 = (byte)(uVar25 >> 6);
            if (uVar25 < 0x800) {
              local_38[1] = bVar33;
              *local_38 = bVar14 | 0xc0;
            }
            else {
              bVar14 = bVar14 & 0x3f | 0x80;
              bVar13 = (byte)(uVar25 >> 0xc);
              if (uVar25 >> 0x10 == 0) {
                local_38[1] = bVar14;
                local_38[2] = bVar33;
                *local_38 = bVar13 | 0xe0;
              }
              else {
                local_38[3] = bVar33;
                local_38[2] = bVar14;
                local_38[1] = bVar13 & 0x3f | 0x80;
                *local_38 = (byte)(uVar25 >> 0x12) | 0xf0;
              }
            }
          }
          pbVar27 = pbVar27 + uVar21;
          uVar21 = 1;
          if (0x7f < uVar1) {
            uVar21 = 2;
          }
          if ((0x7ff < uVar1) && (uVar21 = 4, uVar1 < 0x10000)) {
            uVar21 = 3;
          }
          local_38 = pbVar27;
          if ((uint)((int)local_40 - (int)pbVar27) < uVar21) {
            FUN_00664634(&local_40,pbVar27,uVar21);
          }
          pbVar3 = local_3c + (int)local_38;
          if (uVar1 < 0x80) {
            *pbVar3 = (byte)uVar1;
          }
          else {
            bVar14 = (byte)uVar1 & 0x3f | 0x80;
            bVar33 = (byte)(uVar1 >> 6);
            if (uVar1 < 0x800) {
LAB_00665648:
              bVar33 = bVar33 | 0xc0;
              pbVar3[1] = bVar14;
            }
            else {
              bVar13 = bVar33 & 0x3f | 0x80;
              bVar33 = (byte)(uVar1 >> 0xc);
              if (uVar1 >> 0x10 != 0) {
                uVar25 = uVar1 >> 0x12 | 0xfffffff0;
                pbVar3[3] = bVar14;
                pbVar3[2] = bVar13;
                pbVar3[1] = bVar33 & 0x3f | 0x80;
                goto LAB_00665628;
              }
              pbVar3[1] = bVar13;
              bVar33 = bVar33 | 0xe0;
              pbVar3[2] = bVar14;
            }
LAB_00665650:
            *pbVar3 = bVar33;
          }
        }
        local_38 = pbVar27 + uVar21;
        goto LAB_00664fe4;
      }
      uVar25 = 1;
      if (0x7f < local_30) {
        uVar25 = 2;
      }
      if ((0x7ff < local_30) && (uVar25 = 4, local_30 < 0x10000)) {
        uVar25 = 3;
      }
      pbVar16 = pbVar27;
      if ((uint)((int)local_40 - (int)pbVar27) < uVar25) {
        FUN_00664634(&local_40,pbVar27,uVar25);
        pbVar16 = local_38;
        pbVar3 = local_3c;
      }
      pbVar16 = pbVar3 + (int)pbVar16;
      if (uVar21 < 0x80) {
        *pbVar16 = bVar33;
      }
      else {
        bVar33 = bVar33 & 0x3f | 0x80;
        bVar14 = (byte)(uVar21 >> 6);
        if (uVar21 < 0x800) {
          pbVar16[1] = bVar33;
          *pbVar16 = bVar14 | 0xc0;
        }
        else {
          bVar14 = bVar14 & 0x3f | 0x80;
          bVar13 = (byte)(uVar21 >> 0xc);
          if (uVar21 >> 0x10 == 0) {
            pbVar16[1] = bVar14;
            pbVar16[2] = bVar33;
            *pbVar16 = bVar13 | 0xe0;
          }
          else {
            pbVar16[3] = bVar33;
            pbVar16[2] = bVar14;
            pbVar16[1] = bVar13 & 0x3f | 0x80;
            *pbVar16 = (byte)(uVar21 >> 0x12) | 0xf0;
          }
        }
      }
      local_38 = pbVar27 + uVar25;
    }
    pbVar16 = pbVar18;
  } while (pbVar18 != pbVar24 + (int)pbVar22);
  goto LAB_00664f90;
}

