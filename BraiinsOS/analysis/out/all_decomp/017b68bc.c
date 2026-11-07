// FUN_017b68bc @ 017b68bc size=20012 calls_out=3 calls_in=1
// strings: 

void FUN_017b68bc(int param_1,uint *param_2,undefined4 *param_3,uint *param_4,int param_5)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  undefined2 uVar4;
  longlong lVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  uint *puVar10;
  char *pcVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  char *pcVar18;
  char *pcVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  undefined4 *puVar24;
  uint *puVar25;
  uint uVar26;
  uint *puVar27;
  uint *puVar28;
  int iVar29;
  char *pcVar30;
  int iVar31;
  uint *puVar32;
  uint *puVar33;
  uint uVar34;
  char *pcVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint *puVar40;
  uint *puVar41;
  uint *puVar42;
  uint *puVar43;
  bool bVar44;
  bool bVar45;
  uint *local_98;
  uint *local_94;
  uint *local_90;
  uint *local_8c;
  uint *local_88;
  uint *local_84;
  uint *local_80;
  uint *local_7c;
  uint *local_74;
  uint *local_70;
  int local_6c;
  uint *local_68;
  uint *local_60;
  uint *local_5c;
  uint *local_58;
  char *local_54;
  uint *local_50;
  char *local_4c;
  uint *local_44;
  
  uVar17 = DAT_018ddaf8;
  uVar34 = *(uint *)(param_1 + 0xcc);
  iVar31 = *(int *)(param_1 + 200);
  local_74 = param_4;
  if (1 < uVar34) {
    if (iVar31 == 6) {
      uVar21 = uVar34 + 1;
      puVar12 = *(uint **)(param_1 + 4);
      pcVar18 = *(char **)(param_1 + 0xc);
      pcVar35 = (char *)(1 << (*(uint *)(param_1 + 0xb8) & 0xff));
      if (pcVar35 < (char *)((int)param_4 + ((param_5 - (int)puVar12) - (int)pcVar18))) {
        local_58 = (uint *)((int)param_4 + ((param_5 - (int)puVar12) - (int)pcVar35));
      }
      else {
        local_58 = (uint *)pcVar18;
      }
      puVar10 = (uint *)((int)param_4 + param_5);
      pcVar11 = (char *)*param_3;
      local_98 = (uint *)param_3[1];
      puVar40 = puVar10 + -2;
      puVar43 = param_4;
      if (*(int *)(param_1 + 0x18) == 0) {
        puVar15 = (uint *)((int)puVar12 + (int)local_58);
        if (param_4 == puVar15) {
          puVar43 = (uint *)((int)param_4 + 1);
        }
        iVar31 = (int)puVar43 - (int)puVar12;
        pcVar19 = (char *)(iVar31 - (int)pcVar18);
        local_8c = puVar15;
        if (pcVar35 <= (char *)(iVar31 - (int)pcVar18)) {
          pcVar19 = pcVar35;
        }
      }
      else {
        if (param_4 == (uint *)((int)puVar12 + (int)pcVar18)) {
          puVar43 = (uint *)((int)param_4 + 1);
        }
        iVar31 = (int)puVar43 - (int)puVar12;
        puVar15 = puVar12;
        pcVar19 = (char *)(iVar31 - (int)pcVar18);
        local_8c = (uint *)((int)puVar12 + (int)pcVar18);
        local_58 = (uint *)pcVar18;
      }
      puVar41 = (uint *)pcVar11;
      local_7c = (uint *)pcVar11;
      if (local_98 <= pcVar19) {
        puVar16 = (uint *)((int)puVar43 + uVar34 + 2);
        local_88 = local_98;
        if (pcVar19 < pcVar11) {
          if (puVar16 < puVar40) {
            local_98 = (uint *)0x0;
            goto LAB_017b8920;
          }
          puVar41 = (uint *)0x0;
        }
        else {
          if (puVar16 < puVar40) {
            puVar41 = (uint *)0x0;
            local_98 = (uint *)0x0;
            pcVar35 = (char *)puVar41;
            goto LAB_017b6b68;
          }
          if (pcVar11 != (char *)0x0) {
            local_98 = (uint *)0x0;
            goto LAB_017b7270;
          }
        }
        goto LAB_017b7274;
      }
      puVar16 = (uint *)((int)puVar43 + uVar34 + 2);
      if (pcVar19 < pcVar11) {
        if (puVar16 < puVar40) {
          local_88 = (uint *)0x0;
LAB_017b8920:
          local_7c = (uint *)0x0;
          pcVar35 = (char *)(uint)(pcVar11 != (char *)0x0);
LAB_017b6b68:
          puVar23 = (uint *)((int)puVar43 + uVar21);
          iVar9 = *(int *)(param_1 + 0x5c);
          iVar29 = *(int *)(param_1 + 0xc0);
          uVar34 = 0x40 - iVar29;
          uVar38 = iVar29 - 0x20;
          uVar39 = 0x20 - iVar29;
          local_74 = param_4;
          do {
            local_60 = puVar43 + 0x20;
            local_68 = local_7c;
            if (local_7c != (uint *)0x0) {
              local_68 = (uint *)0x1;
            }
            iVar29 = -(int)local_7c;
            lVar5 = (ulonglong)*puVar43 * 0xbf9b0000;
            uVar36 = puVar43[1] * -0x40650000 + *puVar43 * -0x30e44324 +
                     (int)((ulonglong)lVar5 >> 0x20);
            uVar13 = (uint)lVar5 >> (uVar34 & 0xff) | uVar36 << (uVar38 & 0xff) |
                     uVar36 >> (uVar39 & 0xff);
            lVar5 = (ulonglong)*(uint *)((int)puVar43 + 1) * 0xbf9b0000;
            uVar36 = *(int *)((int)puVar43 + 5) * -0x40650000 +
                     *(uint *)((int)puVar43 + 1) * -0x30e44324 + (int)((ulonglong)lVar5 >> 0x20);
            puVar15 = (uint *)((uint)lVar5 >> (uVar34 & 0xff) | uVar36 << (uVar38 & 0xff) |
                              uVar36 >> (uVar39 & 0xff));
            pcVar18 = *(char **)(iVar9 + uVar13 * 4);
            uVar36 = uVar21;
            puVar42 = (uint *)((int)puVar43 + 1);
            while( true ) {
              puVar32 = puVar16;
              puVar25 = puVar23;
              uVar22 = *(uint *)((int)puVar25 + iVar29);
              *(int *)(iVar9 + uVar13 * 4) = iVar31;
              if (*puVar25 == uVar22) {
                uVar13 = (uint)local_68 & 1;
              }
              else {
                uVar13 = 0;
              }
              if (uVar13 != 0) {
                pcVar18 = (char *)0x1;
                cVar1 = *(char *)((int)puVar25 + iVar29 + -1);
                cVar2 = *(char *)((int)puVar25 + -1);
                *(int *)(iVar9 + (int)puVar15 * 4) = (int)puVar42 - (int)puVar12;
                uVar36 = (uint)(cVar2 == cVar1);
                iVar20 = uVar36 + 4;
                puVar43 = (uint *)((int)puVar25 + (iVar29 - uVar36));
                puVar42 = (uint *)((int)puVar25 - uVar36);
                local_6c = iVar31;
                goto LAB_017b6dbc;
              }
              if (pcVar18 < local_58) {
                uVar13 = *puVar43 ^ 1;
              }
              else {
                uVar13 = *(uint *)((int)puVar12 + (int)pcVar18);
              }
              local_6c = (int)puVar42 - (int)puVar12;
              if (uVar13 == *puVar43) {
                *(int *)(iVar9 + (int)puVar15 * 4) = local_6c;
                puVar42 = puVar43;
                local_6c = iVar31;
                goto LAB_017b9764;
              }
              uVar13 = *puVar25;
              uVar22 = puVar25[1];
              pcVar18 = *(char **)(iVar9 + (int)puVar15 * 4);
              *(int *)(iVar9 + (int)puVar15 * 4) = local_6c;
              lVar5 = (ulonglong)uVar13 * 0xbf9b0000;
              uVar13 = uVar22 * -0x40650000 + uVar13 * -0x30e44324 + (int)((ulonglong)lVar5 >> 0x20)
              ;
              uVar13 = (uint)lVar5 >> (uVar34 & 0xff) | uVar13 << (uVar38 & 0xff) |
                       uVar13 >> (uVar39 & 0xff);
              if (pcVar18 < local_58) {
                uVar22 = *puVar42 ^ 1;
              }
              else {
                uVar22 = *(uint *)((int)puVar12 + (int)pcVar18);
              }
              if (uVar22 == *puVar42) break;
              puVar23 = (uint *)((int)puVar25 + uVar36);
              puVar16 = (uint *)((int)puVar32 + uVar36);
              pcVar18 = *(char **)(iVar9 + uVar13 * 4);
              lVar5 = (ulonglong)*puVar32 * 0xbf9b0000;
              uVar22 = puVar32[1] * -0x40650000 + *puVar32 * -0x30e44324 +
                       (int)((ulonglong)lVar5 >> 0x20);
              puVar15 = (uint *)((uint)lVar5 >> (uVar34 & 0xff) | uVar22 << (uVar38 & 0xff) |
                                uVar22 >> (uVar39 & 0xff));
              if (local_60 <= puVar23) {
                uVar36 = uVar36 + 1;
                HintPreloadData(puVar32 + 0x10);
                HintPreloadData(puVar32 + 0x20);
                local_60 = local_60 + 0x20;
              }
              if (puVar40 <= puVar16) goto LAB_017b98b0;
              iVar31 = (int)puVar25 - (int)puVar12;
              puVar43 = puVar25;
              puVar42 = puVar32;
            }
            if (uVar36 < 5) {
              *(int *)(iVar9 + uVar13 * 4) = (int)puVar25 - (int)puVar12;
            }
LAB_017b9764:
            puVar43 = (uint *)((int)puVar12 + (int)pcVar18);
            pcVar11 = (char *)((int)puVar42 - (int)puVar43);
            bVar45 = local_8c <= puVar43;
            bVar44 = puVar43 == local_8c;
            if (bVar45 && !bVar44) {
              bVar45 = local_74 <= puVar42;
              bVar44 = puVar42 == local_74;
            }
            pcVar18 = pcVar11 + 3;
            if (!bVar45 || bVar44) {
              iVar20 = 4;
              local_88 = local_7c;
              local_7c = (uint *)pcVar11;
            }
            else {
              iVar20 = 4;
              puVar15 = puVar42;
              puVar16 = puVar43;
              do {
                puVar42 = (uint *)((int)puVar15 + -1);
                puVar43 = (uint *)((int)puVar16 + -1);
                if (*(char *)puVar42 != *(char *)puVar43) {
                  local_88 = local_7c;
                  puVar43 = puVar16;
                  puVar42 = puVar15;
                  local_7c = (uint *)pcVar11;
                  goto LAB_017b6dbc;
                }
                iVar20 = iVar20 + 1;
                puVar15 = puVar42;
                puVar16 = puVar43;
              } while (local_74 < puVar42 && local_8c < puVar43);
              local_88 = local_7c;
              local_7c = (uint *)pcVar11;
            }
LAB_017b6dbc:
            puVar25 = (uint *)((int)puVar42 + iVar20);
            puVar16 = (uint *)((int)puVar43 + iVar20);
            puVar23 = (uint *)((int)puVar10 + -3);
            puVar15 = puVar25;
            if (puVar25 < puVar23) {
              if (*(uint *)((int)puVar43 + iVar20) == *(uint *)((int)puVar42 + iVar20)) {
                do {
                  puVar15 = puVar15 + 1;
                  puVar16 = puVar16 + 1;
                  if (puVar23 <= puVar15) goto LAB_017b9294;
                } while (*puVar16 == *puVar15);
                uVar36 = *puVar16 ^ *puVar15;
                bVar6 = (byte)uVar36;
                bVar7 = (byte)(uVar36 >> 8);
                bVar8 = (byte)(uVar36 >> 0x10);
                bVar3 = (byte)(uVar36 >> 0x18);
                pcVar11 = (char *)((int)puVar15 +
                                  (((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                    bVar6 >> 1 & 1) << 1 |
                                                                   bVar6 >> 2 & 1) << 1 |
                                                                  bVar6 >> 3 & 1) << 1 |
                                                                 bVar6 >> 4 & 1) << 1 |
                                                                bVar6 >> 5 & 1) << 1 |
                                                               bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                                  0x18 | (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                           bVar7 >> 1 & 1) << 1 |
                                                                          bVar7 >> 2 & 1) << 1 |
                                                                         bVar7 >> 3 & 1) << 1 |
                                                                        bVar7 >> 4 & 1) << 1 |
                                                                       bVar7 >> 5 & 1) << 1 |
                                                                      bVar7 >> 6 & 1) << 1 |
                                                                     bVar7 >> 7) << 0x10 |
                                                  (uint)(byte)((((((((bVar8 & 1) << 1 |
                                                                    bVar8 >> 1 & 1) << 1 |
                                                                   bVar8 >> 2 & 1) << 1 |
                                                                  bVar8 >> 3 & 1) << 1 |
                                                                 bVar8 >> 4 & 1) << 1 |
                                                                bVar8 >> 5 & 1) << 1 |
                                                               bVar8 >> 6 & 1) << 1 | bVar8 >> 7) <<
                                                  8 | (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                        bVar3 >> 1 & 1) << 1 |
                                                                       bVar3 >> 2 & 1) << 1 |
                                                                      bVar3 >> 3 & 1) << 1 |
                                                                     bVar3 >> 4 & 1) << 1 |
                                                                    bVar3 >> 5 & 1) << 1 |
                                                                   bVar3 >> 6 & 1) << 1 | bVar3 >> 7
                                                                  )) >> 3) - (int)puVar25));
              }
              else {
                uVar36 = *(uint *)((int)puVar43 + iVar20) ^ *(uint *)((int)puVar42 + iVar20);
                bVar6 = (byte)uVar36;
                bVar7 = (byte)(uVar36 >> 8);
                bVar8 = (byte)(uVar36 >> 0x10);
                bVar3 = (byte)(uVar36 >> 0x18);
                pcVar11 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                   bVar6 >> 1 & 1) << 1 |
                                                                  bVar6 >> 2 & 1) << 1 |
                                                                 bVar6 >> 3 & 1) << 1 |
                                                                bVar6 >> 4 & 1) << 1 |
                                                               bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1
                                                              ) << 1 | bVar6 >> 7) << 0x18 |
                                                 (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                   bVar7 >> 1 & 1) << 1 |
                                                                  bVar7 >> 2 & 1) << 1 |
                                                                 bVar7 >> 3 & 1) << 1 |
                                                                bVar7 >> 4 & 1) << 1 |
                                                               bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1
                                                              ) << 1 | bVar7 >> 7) << 0x10 |
                                                 (uint)(byte)((((((((bVar8 & 1) << 1 |
                                                                   bVar8 >> 1 & 1) << 1 |
                                                                  bVar8 >> 2 & 1) << 1 |
                                                                 bVar8 >> 3 & 1) << 1 |
                                                                bVar8 >> 4 & 1) << 1 |
                                                               bVar8 >> 5 & 1) << 1 | bVar8 >> 6 & 1
                                                              ) << 1 | bVar8 >> 7) << 8 |
                                                 (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                   bVar3 >> 1 & 1) << 1 |
                                                                  bVar3 >> 2 & 1) << 1 |
                                                                 bVar3 >> 3 & 1) << 1 |
                                                                bVar3 >> 4 & 1) << 1 |
                                                               bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1
                                                              ) << 1 | bVar3 >> 7)) >> 3);
              }
            }
            else {
LAB_017b9294:
              if (puVar15 < (uint *)((int)puVar10 + -1)) {
                if ((short)*puVar16 == (short)*puVar15) {
                  puVar15 = (uint *)((int)puVar15 + 2);
                  puVar16 = (uint *)((int)puVar16 + 2);
                }
              }
              if ((puVar15 < puVar10) && ((char)*puVar16 == (char)*puVar15)) {
                puVar15 = (uint *)((int)puVar15 + 1);
              }
              pcVar11 = (char *)((int)puVar15 - (int)puVar25);
            }
            pcVar11 = pcVar11 + iVar20;
            puVar16 = puVar10 + -8;
            puVar43 = (uint *)param_2[3];
            uVar36 = (int)puVar42 - (int)local_74;
            if (puVar16 < puVar42) {
              FUN_017b3404(puVar43,local_74,puVar42,puVar16);
LAB_017b956c:
              param_2[3] = param_2[3] + uVar36;
              puVar24 = (undefined4 *)param_2[1];
              puVar15 = param_2;
              if (0xffff < uVar36) {
                param_2[10] = (int)((int)puVar24 - *param_2) >> 3;
                param_2[9] = 1;
              }
            }
            else {
              uVar13 = *local_74;
              puVar15 = (uint *)local_74[1];
              uVar22 = local_74[2];
              puVar43[3] = local_74[3];
              puVar43[2] = uVar22;
              *puVar43 = uVar13;
              puVar43[1] = (uint)puVar15;
              uVar13 = param_2[3];
              if (0x10 < uVar36) {
                uVar22 = local_74[5];
                uVar37 = local_74[6];
                uVar26 = local_74[7];
                *(uint *)(uVar13 + 0x10) = local_74[4];
                *(uint *)(uVar13 + 0x14) = uVar22;
                *(uint *)(uVar13 + 0x18) = uVar37;
                *(uint *)(uVar13 + 0x1c) = uVar26;
                if (0x10 < (int)(uVar36 - 0x10)) {
                  puVar43 = (uint *)(uVar13 + 0x20);
                  puVar15 = local_74 + 0x10;
                  do {
                    uVar22 = puVar15[-7];
                    uVar37 = puVar15[-6];
                    puVar25 = puVar43 + 8;
                    uVar26 = puVar15[-5];
                    *puVar43 = puVar15[-8];
                    puVar43[1] = uVar22;
                    puVar43[2] = uVar37;
                    puVar43[3] = uVar26;
                    uVar22 = puVar15[-3];
                    uVar37 = puVar15[-2];
                    uVar26 = puVar15[-1];
                    puVar43[4] = puVar15[-4];
                    puVar43[5] = uVar22;
                    puVar43[6] = uVar37;
                    puVar43[7] = uVar26;
                    puVar43 = puVar25;
                    puVar15 = puVar15 + 8;
                  } while (puVar25 < (uint *)(uVar13 + uVar36));
                }
                goto LAB_017b956c;
              }
              param_2[3] = uVar13 + uVar36;
              puVar24 = (undefined4 *)param_2[1];
            }
            *(short *)(puVar24 + 1) = (short)uVar36;
            *puVar24 = pcVar18;
            if ((char *)0xffff < pcVar11 + -3) {
              param_2[10] = (int)((int)puVar24 - *param_2) >> 3;
              puVar15 = (uint *)&SUB_00000002;
              param_2[9] = 2;
            }
            *(short *)((int)puVar24 + 6) = (short)(pcVar11 + -3);
            puVar43 = (uint *)((int)puVar42 + (int)pcVar11);
            param_2[1] = (uint)(puVar24 + 2);
            if (puVar43 <= puVar40) {
              uVar36 = *(uint *)((int)puVar12 + local_6c + 2);
              iVar31 = *(int *)((int)puVar43 + 2);
              uVar13 = *(uint *)((int)puVar43 + -2);
              lVar5 = (ulonglong)uVar36 * 0xbf9b0000;
              uVar36 = *(int *)((int)puVar12 + local_6c + 6) * -0x40650000 + uVar36 * -0x30e44324 +
                       (int)((ulonglong)lVar5 >> 0x20);
              *(int *)(iVar9 + ((uint)lVar5 >> (uVar34 & 0xff) | uVar36 << (uVar38 & 0xff) |
                               uVar36 >> (uVar39 & 0xff)) * 4) = local_6c + 2;
              lVar5 = (ulonglong)uVar13 * 0xbf9b0000;
              puVar15 = (uint *)(iVar31 * -0x40650000 + uVar13 * -0x30e44324 +
                                (int)((ulonglong)lVar5 >> 0x20));
              *(char **)(iVar9 + ((uint)lVar5 >> (uVar34 & 0xff) | (int)puVar15 << (uVar38 & 0xff) |
                                 (uint)puVar15 >> (uVar39 & 0xff)) * 4) =
                   (char *)((int)puVar43 + (-2 - (int)puVar12));
              puVar42 = puVar43;
              if (local_88 != (uint *)0x0) {
                while( true ) {
                  puVar32 = local_7c;
                  puVar25 = local_88;
                  puVar43 = puVar42;
                  if (*puVar42 != *(uint *)((int)puVar42 - (int)local_88)) break;
                  puVar15 = puVar42 + 1;
                  puVar43 = (uint *)((int)puVar42 + (4 - (int)local_88));
                  if (puVar15 < puVar23) {
                    uVar36 = *(uint *)((int)puVar42 + (4 - (int)local_88));
                    if (uVar36 == puVar42[1]) {
                      puVar27 = puVar42 + 2;
                      while( true ) {
                        puVar43 = puVar43 + 1;
                        if (puVar23 <= puVar27) break;
                        if (*puVar43 != *puVar27) {
                          uVar36 = *puVar43 ^ *puVar27;
                          bVar6 = (byte)uVar36;
                          bVar7 = (byte)(uVar36 >> 8);
                          bVar8 = (byte)(uVar36 >> 0x10);
                          bVar3 = (byte)(uVar36 >> 0x18);
                          pcVar18 = (char *)((int)puVar27 +
                                            (((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                              bVar6 >> 1 & 1) << 1 |
                                                                             bVar6 >> 2 & 1) << 1 |
                                                                            bVar6 >> 3 & 1) << 1 |
                                                                           bVar6 >> 4 & 1) << 1 |
                                                                          bVar6 >> 5 & 1) << 1 |
                                                                         bVar6 >> 6 & 1) << 1 |
                                                                        bVar6 >> 7) << 0x18 |
                                                            (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                              bVar7 >> 1 & 1) << 1 |
                                                                             bVar7 >> 2 & 1) << 1 |
                                                                            bVar7 >> 3 & 1) << 1 |
                                                                           bVar7 >> 4 & 1) << 1 |
                                                                          bVar7 >> 5 & 1) << 1 |
                                                                         bVar7 >> 6 & 1) << 1 |
                                                                        bVar7 >> 7) << 0x10 |
                                                            (uint)(byte)((((((((bVar8 & 1) << 1 |
                                                                              bVar8 >> 1 & 1) << 1 |
                                                                             bVar8 >> 2 & 1) << 1 |
                                                                            bVar8 >> 3 & 1) << 1 |
                                                                           bVar8 >> 4 & 1) << 1 |
                                                                          bVar8 >> 5 & 1) << 1 |
                                                                         bVar8 >> 6 & 1) << 1 |
                                                                        bVar8 >> 7) << 8 |
                                                            (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                              bVar3 >> 1 & 1) << 1 |
                                                                             bVar3 >> 2 & 1) << 1 |
                                                                            bVar3 >> 3 & 1) << 1 |
                                                                           bVar3 >> 4 & 1) << 1 |
                                                                          bVar3 >> 5 & 1) << 1 |
                                                                         bVar3 >> 6 & 1) << 1 |
                                                                        bVar3 >> 7)) >> 3) -
                                            (int)puVar15));
                          goto LAB_017b8ab4;
                        }
                        puVar27 = puVar27 + 1;
                      }
                      goto LAB_017ba5b0;
                    }
                    uVar36 = uVar36 ^ puVar42[1];
                    bVar6 = (byte)uVar36;
                    bVar7 = (byte)(uVar36 >> 8);
                    bVar8 = (byte)(uVar36 >> 0x10);
                    bVar3 = (byte)(uVar36 >> 0x18);
                    pcVar18 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                       bVar6 >> 1 & 1) << 1 |
                                                                      bVar6 >> 2 & 1) << 1 |
                                                                     bVar6 >> 3 & 1) << 1 |
                                                                    bVar6 >> 4 & 1) << 1 |
                                                                   bVar6 >> 5 & 1) << 1 |
                                                                  bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                     << 0x18 | (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                                 bVar7 >> 1 & 1) <<
                                                                                 1 | bVar7 >> 2 & 1)
                                                                                << 1 | bVar7 >> 3 &
                                                                                       1) << 1 |
                                                                              bVar7 >> 4 & 1) << 1 |
                                                                             bVar7 >> 5 & 1) << 1 |
                                                                            bVar7 >> 6 & 1) << 1 |
                                                                           bVar7 >> 7) << 0x10 |
                                                     (uint)(byte)((((((((bVar8 & 1) << 1 |
                                                                       bVar8 >> 1 & 1) << 1 |
                                                                      bVar8 >> 2 & 1) << 1 |
                                                                     bVar8 >> 3 & 1) << 1 |
                                                                    bVar8 >> 4 & 1) << 1 |
                                                                   bVar8 >> 5 & 1) << 1 |
                                                                  bVar8 >> 6 & 1) << 1 | bVar8 >> 7)
                                                     << 8 | (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                              bVar3 >> 1 & 1) << 1 |
                                                                             bVar3 >> 2 & 1) << 1 |
                                                                            bVar3 >> 3 & 1) << 1 |
                                                                           bVar3 >> 4 & 1) << 1 |
                                                                          bVar3 >> 5 & 1) << 1 |
                                                                         bVar3 >> 6 & 1) << 1 |
                                                                        bVar3 >> 7)) >> 3);
                  }
                  else {
                    puVar27 = puVar15;
LAB_017ba5b0:
                    if (puVar27 < (uint *)((int)puVar10 + -1)) {
                      if ((short)*puVar43 == (short)*puVar27) {
                        puVar43 = (uint *)((int)puVar43 + 2);
                        puVar27 = (uint *)((int)puVar27 + 2);
                      }
                    }
                    if ((puVar27 < puVar10) && ((char)*puVar43 == (char)*puVar27)) {
                      puVar27 = (uint *)((int)puVar27 + 1);
                    }
                    pcVar18 = (char *)((int)puVar27 - (int)puVar15);
                  }
LAB_017b8ab4:
                  puVar43 = (uint *)((int)puVar42 + (int)(pcVar18 + 4));
                  lVar5 = (ulonglong)*puVar42 * 0xbf9b0000;
                  uVar36 = puVar42[1] * -0x40650000 + *puVar42 * -0x30e44324 +
                           (int)((ulonglong)lVar5 >> 0x20);
                  *(int *)(iVar9 + ((uint)lVar5 >> (uVar34 & 0xff) | uVar36 << (uVar38 & 0xff) |
                                   uVar36 >> (uVar39 & 0xff)) * 4) = (int)puVar42 - (int)puVar12;
                  puVar15 = (uint *)param_2[3];
                  if (puVar16 < puVar42) {
                    FUN_017b3404(puVar15,puVar42,puVar42,puVar16);
                  }
                  else {
                    uVar36 = puVar42[1];
                    uVar13 = puVar42[2];
                    uVar22 = puVar42[3];
                    *puVar15 = *puVar42;
                    puVar15[1] = uVar36;
                    puVar15[2] = uVar13;
                    puVar15[3] = uVar22;
                  }
                  puVar24 = (undefined4 *)param_2[1];
                  *(undefined2 *)(puVar24 + 1) = 0;
                  *puVar24 = 1;
                  uVar4 = SUB42(pcVar18 + 1,0);
                  if (pcVar18 + 1 < (char *)0x10000) {
                    *(undefined2 *)((int)puVar24 + 6) = uVar4;
                    param_2[1] = (uint)(puVar24 + 2);
                  }
                  else {
                    param_2[10] = (int)((int)puVar24 - *param_2) >> 3;
                    param_2[9] = 2;
                    *(undefined2 *)((int)puVar24 + 6) = uVar4;
                    param_2[1] = (uint)(puVar24 + 2);
                  }
                  if (puVar40 < puVar43) {
                    local_7c = local_88;
                    local_88 = puVar32;
                    puVar15 = param_2;
                    break;
                  }
                  local_88 = local_7c;
                  local_7c = puVar25;
                  puVar15 = param_2;
                  puVar42 = puVar43;
                }
              }
            }
            puVar23 = (uint *)((int)puVar43 + uVar21);
            puVar16 = (uint *)((int)puVar23 + 1);
            local_74 = puVar43;
            if (puVar40 <= puVar16) goto LAB_017ba40c;
            iVar31 = (int)puVar43 - (int)puVar12;
          } while( true );
        }
      }
      else {
        if (puVar16 < puVar40) {
          local_88 = (uint *)0x0;
          puVar41 = (uint *)(char *)0x0;
          pcVar35 = (char *)0x0;
          goto LAB_017b6b68;
        }
        *param_3 = pcVar11;
      }
      goto LAB_017b7288;
    }
    if (iVar31 == 7) {
      uVar21 = uVar34 + 1;
      puVar12 = *(uint **)(param_1 + 4);
      pcVar18 = *(char **)(param_1 + 0xc);
      pcVar35 = (char *)(1 << (*(uint *)(param_1 + 0xb8) & 0xff));
      if (pcVar35 < (char *)((int)param_4 + ((param_5 - (int)puVar12) - (int)pcVar18))) {
        local_58 = (uint *)((int)param_4 + ((param_5 - (int)puVar12) - (int)pcVar35));
      }
      else {
        local_58 = (uint *)pcVar18;
      }
      puVar43 = (uint *)((int)param_4 + param_5);
      pcVar11 = (char *)*param_3;
      local_98 = (uint *)param_3[1];
      puVar10 = puVar43 + -2;
      if (*(int *)(param_1 + 0x18) == 0) {
        puVar15 = (uint *)((int)puVar12 + (int)local_58);
        if (param_4 == puVar15) {
          param_4 = (uint *)((int)param_4 + 1);
        }
        iVar31 = (int)param_4 - (int)puVar12;
        pcVar19 = (char *)(iVar31 - (int)pcVar18);
        local_8c = puVar15;
        if (pcVar35 <= (char *)(iVar31 - (int)pcVar18)) {
          pcVar19 = pcVar35;
        }
      }
      else {
        if (param_4 == (uint *)((int)puVar12 + (int)pcVar18)) {
          param_4 = (uint *)((int)param_4 + 1);
        }
        iVar31 = (int)param_4 - (int)puVar12;
        puVar15 = puVar12;
        pcVar19 = (char *)(iVar31 - (int)pcVar18);
        local_8c = (uint *)((int)puVar12 + (int)pcVar18);
        local_58 = (uint *)pcVar18;
      }
      puVar40 = (uint *)pcVar11;
      local_7c = (uint *)pcVar11;
      if (pcVar19 < local_98) {
        puVar41 = (uint *)((int)param_4 + uVar34 + 2);
        if (pcVar19 < pcVar11) {
          if (puVar41 < puVar10) {
            local_88 = (uint *)0x0;
            goto LAB_017b88c8;
          }
        }
        else {
          if (puVar41 < puVar10) {
            pcVar35 = (char *)0x0;
            local_88 = (uint *)0x0;
            puVar40 = (uint *)(char *)0x0;
            goto LAB_017b7330;
          }
          *param_3 = pcVar11;
        }
      }
      else {
        puVar41 = (uint *)((int)param_4 + uVar34 + 2);
        local_88 = local_98;
        if (pcVar19 < pcVar11) {
          if (puVar41 < puVar10) {
            local_98 = (uint *)0x0;
LAB_017b88c8:
            local_7c = (uint *)0x0;
            pcVar35 = (char *)(uint)(pcVar11 != (char *)0x0);
LAB_017b7330:
            puVar16 = (uint *)((int)param_4 + uVar21);
            iVar9 = *(int *)(param_1 + 0x5c);
            iVar29 = *(int *)(param_1 + 0xc0);
            uVar34 = 0x40 - iVar29;
            uVar38 = iVar29 - 0x20;
            uVar39 = 0x20 - iVar29;
            do {
              local_60 = param_4 + 0x20;
              local_68 = local_7c;
              if (local_7c != (uint *)0x0) {
                local_68 = (uint *)0x1;
              }
              iVar29 = -(int)local_7c;
              lVar5 = (ulonglong)*param_4 * 0xbfa56300;
              uVar36 = param_4[1] * -0x405a9d00 + *param_4 * -0x30e44324 +
                       (int)((ulonglong)lVar5 >> 0x20);
              uVar13 = (uint)lVar5 >> (uVar34 & 0xff) | uVar36 << (uVar38 & 0xff) |
                       uVar36 >> (uVar39 & 0xff);
              lVar5 = (ulonglong)*(uint *)((int)param_4 + 1) * 0xbfa56300;
              uVar36 = *(int *)((int)param_4 + 5) * -0x405a9d00 +
                       *(uint *)((int)param_4 + 1) * -0x30e44324 + (int)((ulonglong)lVar5 >> 0x20);
              puVar15 = (uint *)((uint)lVar5 >> (uVar34 & 0xff) | uVar36 << (uVar38 & 0xff) |
                                uVar36 >> (uVar39 & 0xff));
              pcVar18 = *(char **)(iVar9 + uVar13 * 4);
              uVar36 = uVar21;
              puVar23 = (uint *)((int)param_4 + 1);
              while( true ) {
                puVar25 = puVar41;
                puVar42 = puVar16;
                uVar22 = *(uint *)((int)puVar42 + iVar29);
                *(int *)(iVar9 + uVar13 * 4) = iVar31;
                if (*puVar42 == uVar22) {
                  uVar13 = (uint)local_68 & 1;
                }
                else {
                  uVar13 = 0;
                }
                if (uVar13 != 0) {
                  pcVar18 = (char *)0x1;
                  cVar1 = *(char *)((int)puVar42 + iVar29 + -1);
                  cVar2 = *(char *)((int)puVar42 + -1);
                  *(int *)(iVar9 + (int)puVar15 * 4) = (int)puVar23 - (int)puVar12;
                  uVar36 = (uint)(cVar2 == cVar1);
                  iVar20 = uVar36 + 4;
                  puVar15 = (uint *)((int)puVar42 + (iVar29 - uVar36));
                  puVar23 = (uint *)((int)puVar42 - uVar36);
                  local_6c = iVar31;
                  goto LAB_017b7584;
                }
                if (pcVar18 < local_58) {
                  uVar13 = *param_4 ^ 1;
                }
                else {
                  uVar13 = *(uint *)((int)puVar12 + (int)pcVar18);
                }
                local_6c = (int)puVar23 - (int)puVar12;
                if (uVar13 == *param_4) {
                  *(int *)(iVar9 + (int)puVar15 * 4) = local_6c;
                  puVar23 = param_4;
                  local_6c = iVar31;
                  goto LAB_017b96c4;
                }
                uVar13 = *puVar42;
                uVar22 = puVar42[1];
                pcVar18 = *(char **)(iVar9 + (int)puVar15 * 4);
                *(int *)(iVar9 + (int)puVar15 * 4) = local_6c;
                lVar5 = (ulonglong)uVar13 * 0xbfa56300;
                uVar13 = uVar22 * -0x405a9d00 + uVar13 * -0x30e44324 +
                         (int)((ulonglong)lVar5 >> 0x20);
                uVar13 = (uint)lVar5 >> (uVar34 & 0xff) | uVar13 << (uVar38 & 0xff) |
                         uVar13 >> (uVar39 & 0xff);
                if (pcVar18 < local_58) {
                  uVar22 = *puVar23 ^ 1;
                }
                else {
                  uVar22 = *(uint *)((int)puVar12 + (int)pcVar18);
                }
                if (uVar22 == *puVar23) break;
                puVar16 = (uint *)((int)puVar42 + uVar36);
                puVar41 = (uint *)((int)puVar25 + uVar36);
                pcVar18 = *(char **)(iVar9 + uVar13 * 4);
                lVar5 = (ulonglong)*puVar25 * 0xbfa56300;
                uVar22 = puVar25[1] * -0x405a9d00 + *puVar25 * -0x30e44324 +
                         (int)((ulonglong)lVar5 >> 0x20);
                puVar15 = (uint *)((uint)lVar5 >> (uVar34 & 0xff) | uVar22 << (uVar38 & 0xff) |
                                  uVar22 >> (uVar39 & 0xff));
                if (local_60 <= puVar16) {
                  uVar36 = uVar36 + 1;
                  HintPreloadData(puVar25 + 0x10);
                  HintPreloadData(puVar25 + 0x20);
                  local_60 = local_60 + 0x20;
                }
                if (puVar10 <= puVar41) goto LAB_017b9870;
                iVar31 = (int)puVar42 - (int)puVar12;
                param_4 = puVar42;
                puVar23 = puVar25;
              }
              if (uVar36 < 5) {
                *(int *)(iVar9 + uVar13 * 4) = (int)puVar42 - (int)puVar12;
              }
LAB_017b96c4:
              puVar15 = (uint *)((int)puVar12 + (int)pcVar18);
              pcVar11 = (char *)((int)puVar23 - (int)puVar15);
              bVar45 = local_8c <= puVar15;
              bVar44 = puVar15 == local_8c;
              if (bVar45 && !bVar44) {
                bVar45 = local_74 <= puVar23;
                bVar44 = puVar23 == local_74;
              }
              pcVar18 = pcVar11 + 3;
              if (!bVar45 || bVar44) {
                iVar20 = 4;
                local_88 = local_7c;
                local_7c = (uint *)pcVar11;
              }
              else {
                iVar20 = 4;
                puVar41 = puVar23;
                puVar16 = puVar15;
                do {
                  puVar23 = (uint *)((int)puVar41 + -1);
                  puVar15 = (uint *)((int)puVar16 + -1);
                  if (*(char *)puVar23 != *(char *)puVar15) {
                    local_88 = local_7c;
                    puVar15 = puVar16;
                    puVar23 = puVar41;
                    local_7c = (uint *)pcVar11;
                    goto LAB_017b7584;
                  }
                  iVar20 = iVar20 + 1;
                  puVar41 = puVar23;
                  puVar16 = puVar15;
                } while (local_74 < puVar23 && local_8c < puVar15);
                local_88 = local_7c;
                local_7c = (uint *)pcVar11;
              }
LAB_017b7584:
              puVar25 = (uint *)((int)puVar23 + iVar20);
              puVar16 = (uint *)((int)puVar15 + iVar20);
              puVar42 = (uint *)((int)puVar43 + -3);
              puVar41 = puVar25;
              if (puVar25 < puVar42) {
                if (*(uint *)((int)puVar15 + iVar20) == *(uint *)((int)puVar23 + iVar20)) {
                  do {
                    puVar41 = puVar41 + 1;
                    puVar16 = puVar16 + 1;
                    if (puVar42 <= puVar41) goto LAB_017b923c;
                  } while (*puVar16 == *puVar41);
                  uVar36 = *puVar16 ^ *puVar41;
                  bVar6 = (byte)uVar36;
                  bVar7 = (byte)(uVar36 >> 8);
                  bVar8 = (byte)(uVar36 >> 0x10);
                  bVar3 = (byte)(uVar36 >> 0x18);
                  pcVar11 = (char *)((int)puVar41 +
                                    (((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                      bVar6 >> 1 & 1) << 1 |
                                                                     bVar6 >> 2 & 1) << 1 |
                                                                    bVar6 >> 3 & 1) << 1 |
                                                                   bVar6 >> 4 & 1) << 1 |
                                                                  bVar6 >> 5 & 1) << 1 |
                                                                 bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                    << 0x18 | (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                                bVar7 >> 1 & 1) << 1
                                                                               | bVar7 >> 2 & 1) <<
                                                                               1 | bVar7 >> 3 & 1)
                                                                              << 1 | bVar7 >> 4 & 1)
                                                                             << 1 | bVar7 >> 5 & 1)
                                                                            << 1 | bVar7 >> 6 & 1)
                                                                           << 1 | bVar7 >> 7) <<
                                                              0x10 |
                                                    (uint)(byte)((((((((bVar8 & 1) << 1 |
                                                                      bVar8 >> 1 & 1) << 1 |
                                                                     bVar8 >> 2 & 1) << 1 |
                                                                    bVar8 >> 3 & 1) << 1 |
                                                                   bVar8 >> 4 & 1) << 1 |
                                                                  bVar8 >> 5 & 1) << 1 |
                                                                 bVar8 >> 6 & 1) << 1 | bVar8 >> 7)
                                                    << 8 | (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                             bVar3 >> 1 & 1) << 1 |
                                                                            bVar3 >> 2 & 1) << 1 |
                                                                           bVar3 >> 3 & 1) << 1 |
                                                                          bVar3 >> 4 & 1) << 1 |
                                                                         bVar3 >> 5 & 1) << 1 |
                                                                        bVar3 >> 6 & 1) << 1 |
                                                                       bVar3 >> 7)) >> 3) -
                                    (int)puVar25));
                }
                else {
                  uVar36 = *(uint *)((int)puVar15 + iVar20) ^ *(uint *)((int)puVar23 + iVar20);
                  bVar6 = (byte)uVar36;
                  bVar7 = (byte)(uVar36 >> 8);
                  bVar8 = (byte)(uVar36 >> 0x10);
                  bVar3 = (byte)(uVar36 >> 0x18);
                  pcVar11 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                     bVar6 >> 1 & 1) << 1 |
                                                                    bVar6 >> 2 & 1) << 1 |
                                                                   bVar6 >> 3 & 1) << 1 |
                                                                  bVar6 >> 4 & 1) << 1 |
                                                                 bVar6 >> 5 & 1) << 1 |
                                                                bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                   << 0x18 | (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                               bVar7 >> 1 & 1) << 1
                                                                              | bVar7 >> 2 & 1) << 1
                                                                             | bVar7 >> 3 & 1) << 1
                                                                            | bVar7 >> 4 & 1) << 1 |
                                                                           bVar7 >> 5 & 1) << 1 |
                                                                          bVar7 >> 6 & 1) << 1 |
                                                                         bVar7 >> 7) << 0x10 |
                                                   (uint)(byte)((((((((bVar8 & 1) << 1 |
                                                                     bVar8 >> 1 & 1) << 1 |
                                                                    bVar8 >> 2 & 1) << 1 |
                                                                   bVar8 >> 3 & 1) << 1 |
                                                                  bVar8 >> 4 & 1) << 1 |
                                                                 bVar8 >> 5 & 1) << 1 |
                                                                bVar8 >> 6 & 1) << 1 | bVar8 >> 7)
                                                   << 8 | (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                            bVar3 >> 1 & 1) << 1 |
                                                                           bVar3 >> 2 & 1) << 1 |
                                                                          bVar3 >> 3 & 1) << 1 |
                                                                         bVar3 >> 4 & 1) << 1 |
                                                                        bVar3 >> 5 & 1) << 1 |
                                                                       bVar3 >> 6 & 1) << 1 |
                                                                      bVar3 >> 7)) >> 3);
                }
              }
              else {
LAB_017b923c:
                if (puVar41 < (uint *)((int)puVar43 + -1)) {
                  if ((short)*puVar16 == (short)*puVar41) {
                    puVar41 = (uint *)((int)puVar41 + 2);
                    puVar16 = (uint *)((int)puVar16 + 2);
                  }
                }
                if ((puVar41 < puVar43) && ((char)*puVar16 == (char)*puVar41)) {
                  puVar41 = (uint *)((int)puVar41 + 1);
                }
                pcVar11 = (char *)((int)puVar41 - (int)puVar25);
              }
              pcVar11 = pcVar11 + iVar20;
              puVar41 = puVar43 + -8;
              puVar16 = (uint *)param_2[3];
              uVar36 = (int)puVar23 - (int)local_74;
              if (puVar41 < puVar23) {
                FUN_017b3404(puVar16,local_74,puVar23,puVar41);
LAB_017b9684:
                param_2[3] = param_2[3] + uVar36;
                puVar24 = (undefined4 *)param_2[1];
                puVar15 = param_2;
                if (0xffff < uVar36) {
                  param_2[10] = (int)((int)puVar24 - *param_2) >> 3;
                  param_2[9] = 1;
                }
              }
              else {
                uVar13 = *local_74;
                puVar15 = (uint *)local_74[1];
                uVar22 = local_74[2];
                puVar16[3] = local_74[3];
                puVar16[2] = uVar22;
                *puVar16 = uVar13;
                puVar16[1] = (uint)puVar15;
                uVar13 = param_2[3];
                if (0x10 < uVar36) {
                  uVar22 = local_74[5];
                  uVar37 = local_74[6];
                  uVar26 = local_74[7];
                  *(uint *)(uVar13 + 0x10) = local_74[4];
                  *(uint *)(uVar13 + 0x14) = uVar22;
                  *(uint *)(uVar13 + 0x18) = uVar37;
                  *(uint *)(uVar13 + 0x1c) = uVar26;
                  if (0x10 < (int)(uVar36 - 0x10)) {
                    puVar15 = (uint *)(uVar13 + 0x20);
                    puVar16 = local_74 + 0x10;
                    do {
                      uVar22 = puVar16[-7];
                      uVar37 = puVar16[-6];
                      puVar25 = puVar15 + 8;
                      uVar26 = puVar16[-5];
                      *puVar15 = puVar16[-8];
                      puVar15[1] = uVar22;
                      puVar15[2] = uVar37;
                      puVar15[3] = uVar26;
                      uVar22 = puVar16[-3];
                      uVar37 = puVar16[-2];
                      uVar26 = puVar16[-1];
                      puVar15[4] = puVar16[-4];
                      puVar15[5] = uVar22;
                      puVar15[6] = uVar37;
                      puVar15[7] = uVar26;
                      puVar15 = puVar25;
                      puVar16 = puVar16 + 8;
                    } while (puVar25 < (uint *)(uVar13 + uVar36));
                  }
                  goto LAB_017b9684;
                }
                param_2[3] = uVar13 + uVar36;
                puVar24 = (undefined4 *)param_2[1];
              }
              *(short *)(puVar24 + 1) = (short)uVar36;
              *puVar24 = pcVar18;
              if ((char *)0xffff < pcVar11 + -3) {
                param_2[10] = (int)((int)puVar24 - *param_2) >> 3;
                puVar15 = (uint *)&SUB_00000002;
                param_2[9] = 2;
              }
              *(short *)((int)puVar24 + 6) = (short)(pcVar11 + -3);
              local_74 = (uint *)((int)puVar23 + (int)pcVar11);
              param_2[1] = (uint)(puVar24 + 2);
              if (local_74 <= puVar10) {
                uVar36 = *(uint *)((int)puVar12 + local_6c + 2);
                iVar31 = *(int *)((int)local_74 + 2);
                uVar13 = *(uint *)((int)local_74 + -2);
                lVar5 = (ulonglong)uVar36 * 0xbfa56300;
                uVar36 = *(int *)((int)puVar12 + local_6c + 6) * -0x405a9d00 + uVar36 * -0x30e44324
                         + (int)((ulonglong)lVar5 >> 0x20);
                *(int *)(iVar9 + ((uint)lVar5 >> (uVar34 & 0xff) | uVar36 << (uVar38 & 0xff) |
                                 uVar36 >> (uVar39 & 0xff)) * 4) = local_6c + 2;
                lVar5 = (ulonglong)uVar13 * 0xbfa56300;
                puVar15 = (uint *)(iVar31 * -0x405a9d00 + uVar13 * -0x30e44324 +
                                  (int)((ulonglong)lVar5 >> 0x20));
                *(char **)(iVar9 + ((uint)lVar5 >> (uVar34 & 0xff) | (int)puVar15 << (uVar38 & 0xff)
                                   | (uint)puVar15 >> (uVar39 & 0xff)) * 4) =
                     (char *)((int)local_74 + (-2 - (int)puVar12));
                puVar16 = local_74;
                if (local_88 != (uint *)0x0) {
                  while( true ) {
                    puVar25 = local_7c;
                    puVar23 = local_88;
                    local_74 = puVar16;
                    if (*puVar16 != *(uint *)((int)puVar16 - (int)local_88)) break;
                    puVar32 = puVar16 + 1;
                    puVar15 = (uint *)((int)puVar16 + (4 - (int)local_88));
                    if (puVar32 < puVar42) {
                      uVar36 = *(uint *)((int)puVar16 + (4 - (int)local_88));
                      if (uVar36 == puVar16[1]) {
                        puVar27 = puVar16 + 2;
                        while( true ) {
                          puVar15 = puVar15 + 1;
                          if (puVar42 <= puVar27) break;
                          if (*puVar15 != *puVar27) {
                            uVar36 = *puVar15 ^ *puVar27;
                            bVar6 = (byte)uVar36;
                            bVar7 = (byte)(uVar36 >> 8);
                            bVar8 = (byte)(uVar36 >> 0x10);
                            bVar3 = (byte)(uVar36 >> 0x18);
                            pcVar18 = (char *)((int)puVar27 +
                                              (((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                                bVar6 >> 1 & 1) << 1
                                                                               | bVar6 >> 2 & 1) <<
                                                                               1 | bVar6 >> 3 & 1)
                                                                              << 1 | bVar6 >> 4 & 1)
                                                                             << 1 | bVar6 >> 5 & 1)
                                                                            << 1 | bVar6 >> 6 & 1)
                                                                           << 1 | bVar6 >> 7) <<
                                                              0x18 | (uint)(byte)((((((((bVar7 & 1)
                                                                                        << 1 | bVar7
                                                                                               >> 1 
                                                  & 1) << 1 | bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1)
                                                  << 1 | bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1) << 1
                                                  | bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 0x10 |
                                                  (uint)(byte)((((((((bVar8 & 1) << 1 |
                                                                    bVar8 >> 1 & 1) << 1 |
                                                                   bVar8 >> 2 & 1) << 1 |
                                                                  bVar8 >> 3 & 1) << 1 |
                                                                 bVar8 >> 4 & 1) << 1 |
                                                                bVar8 >> 5 & 1) << 1 |
                                                               bVar8 >> 6 & 1) << 1 | bVar8 >> 7) <<
                                                  8 | (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                        bVar3 >> 1 & 1) << 1 |
                                                                       bVar3 >> 2 & 1) << 1 |
                                                                      bVar3 >> 3 & 1) << 1 |
                                                                     bVar3 >> 4 & 1) << 1 |
                                                                    bVar3 >> 5 & 1) << 1 |
                                                                   bVar3 >> 6 & 1) << 1 | bVar3 >> 7
                                                                  )) >> 3) - (int)puVar32));
                            goto LAB_017b8c0c;
                          }
                          puVar27 = puVar27 + 1;
                        }
                        goto LAB_017ba558;
                      }
                      uVar36 = uVar36 ^ puVar16[1];
                      bVar6 = (byte)uVar36;
                      bVar7 = (byte)(uVar36 >> 8);
                      bVar8 = (byte)(uVar36 >> 0x10);
                      bVar3 = (byte)(uVar36 >> 0x18);
                      pcVar18 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                         bVar6 >> 1 & 1) << 1 |
                                                                        bVar6 >> 2 & 1) << 1 |
                                                                       bVar6 >> 3 & 1) << 1 |
                                                                      bVar6 >> 4 & 1) << 1 |
                                                                     bVar6 >> 5 & 1) << 1 |
                                                                    bVar6 >> 6 & 1) << 1 |
                                                                   bVar6 >> 7) << 0x18 |
                                                       (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                         bVar7 >> 1 & 1) << 1 |
                                                                        bVar7 >> 2 & 1) << 1 |
                                                                       bVar7 >> 3 & 1) << 1 |
                                                                      bVar7 >> 4 & 1) << 1 |
                                                                     bVar7 >> 5 & 1) << 1 |
                                                                    bVar7 >> 6 & 1) << 1 |
                                                                   bVar7 >> 7) << 0x10 |
                                                       (uint)(byte)((((((((bVar8 & 1) << 1 |
                                                                         bVar8 >> 1 & 1) << 1 |
                                                                        bVar8 >> 2 & 1) << 1 |
                                                                       bVar8 >> 3 & 1) << 1 |
                                                                      bVar8 >> 4 & 1) << 1 |
                                                                     bVar8 >> 5 & 1) << 1 |
                                                                    bVar8 >> 6 & 1) << 1 |
                                                                   bVar8 >> 7) << 8 |
                                                       (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                         bVar3 >> 1 & 1) << 1 |
                                                                        bVar3 >> 2 & 1) << 1 |
                                                                       bVar3 >> 3 & 1) << 1 |
                                                                      bVar3 >> 4 & 1) << 1 |
                                                                     bVar3 >> 5 & 1) << 1 |
                                                                    bVar3 >> 6 & 1) << 1 |
                                                                   bVar3 >> 7)) >> 3);
                    }
                    else {
                      puVar27 = puVar32;
LAB_017ba558:
                      if (puVar27 < (uint *)((int)puVar43 + -1)) {
                        if ((short)*puVar15 == (short)*puVar27) {
                          puVar15 = (uint *)((int)puVar15 + 2);
                          puVar27 = (uint *)((int)puVar27 + 2);
                        }
                      }
                      if ((puVar27 < puVar43) && ((char)*puVar15 == (char)*puVar27)) {
                        puVar27 = (uint *)((int)puVar27 + 1);
                      }
                      pcVar18 = (char *)((int)puVar27 - (int)puVar32);
                    }
LAB_017b8c0c:
                    local_74 = (uint *)((int)puVar16 + (int)(pcVar18 + 4));
                    lVar5 = (ulonglong)*puVar16 * 0xbfa56300;
                    uVar36 = puVar16[1] * -0x405a9d00 + *puVar16 * -0x30e44324 +
                             (int)((ulonglong)lVar5 >> 0x20);
                    *(int *)(iVar9 + ((uint)lVar5 >> (uVar34 & 0xff) | uVar36 << (uVar38 & 0xff) |
                                     uVar36 >> (uVar39 & 0xff)) * 4) = (int)puVar16 - (int)puVar12;
                    puVar15 = (uint *)param_2[3];
                    if (puVar41 < puVar16) {
                      FUN_017b3404(puVar15,puVar16,puVar16,puVar41);
                    }
                    else {
                      uVar36 = puVar16[1];
                      uVar13 = puVar16[2];
                      uVar22 = puVar16[3];
                      *puVar15 = *puVar16;
                      puVar15[1] = uVar36;
                      puVar15[2] = uVar13;
                      puVar15[3] = uVar22;
                    }
                    puVar24 = (undefined4 *)param_2[1];
                    *(undefined2 *)(puVar24 + 1) = 0;
                    *puVar24 = 1;
                    uVar4 = SUB42(pcVar18 + 1,0);
                    if (pcVar18 + 1 < (char *)0x10000) {
                      *(undefined2 *)((int)puVar24 + 6) = uVar4;
                      param_2[1] = (uint)(puVar24 + 2);
                    }
                    else {
                      param_2[10] = (int)((int)puVar24 - *param_2) >> 3;
                      param_2[9] = 2;
                      *(undefined2 *)((int)puVar24 + 6) = uVar4;
                      param_2[1] = (uint)(puVar24 + 2);
                    }
                    if (puVar10 < local_74) {
                      local_7c = local_88;
                      local_88 = puVar25;
                      puVar15 = param_2;
                      break;
                    }
                    local_88 = local_7c;
                    local_7c = puVar23;
                    puVar15 = param_2;
                    puVar16 = local_74;
                  }
                }
              }
              puVar16 = (uint *)((int)local_74 + uVar21);
              puVar41 = (uint *)((int)puVar16 + 1);
              if (puVar10 <= puVar41) goto LAB_017ba3ec;
              iVar31 = (int)local_74 - (int)puVar12;
              param_4 = local_74;
            } while( true );
          }
          puVar40 = (uint *)(char *)0x0;
        }
        else {
          if (puVar41 < puVar10) {
            pcVar35 = (char *)0x0;
            local_98 = (uint *)0x0;
            puVar40 = (uint *)pcVar35;
            goto LAB_017b7330;
          }
          if (pcVar11 != (char *)0x0) {
            local_98 = (uint *)0x0;
            goto LAB_017ba210;
          }
        }
LAB_017b987c:
        local_98 = puVar40;
        if (local_88 != (uint *)0x0) {
          local_98 = local_88;
        }
        *param_3 = local_7c;
      }
      pcVar35 = (char *)((int)puVar43 - (int)local_74);
      param_3[1] = local_98;
      goto LAB_017b7298;
    }
    if (iVar31 != 5) {
      FUN_017b3604();
      return;
    }
    iVar31 = *(int *)(param_1 + 4);
    pcVar35 = (char *)(1 << (*(uint *)(param_1 + 0xb8) & 0xff));
    pcVar18 = *(char **)(param_1 + 0xc);
    uVar34 = *(int *)(param_1 + 0xcc) + 1;
    if (*(int *)(param_1 + 0xcc) == 0) {
      uVar34 = 2;
    }
    if (pcVar35 < (char *)((int)param_4 + ((param_5 - iVar31) - (int)pcVar18))) {
      local_58 = (uint *)((int)param_4 + ((param_5 - iVar31) - (int)pcVar35));
    }
    else {
      local_58 = (uint *)pcVar18;
    }
    puVar40 = (uint *)((int)param_4 + param_5);
    pcVar11 = (char *)*param_3;
    puVar12 = (uint *)param_3[1];
    puVar10 = puVar40 + -2;
    local_74 = (uint *)pcVar11;
    puVar43 = param_4;
    local_70 = param_4;
    if (*(int *)(param_1 + 0x18) == 0) {
      local_88 = (uint *)((int)local_58 + iVar31);
      if (param_4 == local_88) {
        puVar43 = (uint *)((int)param_4 + 1);
      }
      iVar29 = (int)puVar43 - iVar31;
      pcVar19 = (char *)(iVar29 - (int)pcVar18);
      if (pcVar35 <= (char *)(iVar29 - (int)pcVar18)) {
        pcVar19 = pcVar35;
      }
      if (pcVar19 < puVar12) goto LAB_017b41d0;
LAB_017b4248:
      puVar15 = (uint *)((int)puVar43 + uVar34);
      puVar41 = (uint *)((int)puVar15 + 1);
      local_84 = puVar12;
      if (pcVar11 <= pcVar19) {
        if (puVar41 < puVar10) {
          pcVar35 = (char *)0x0;
          pcVar18 = pcVar35;
          pcVar11 = pcVar35;
          goto LAB_017b4274;
        }
        pcVar35 = (char *)0x0;
        local_60 = (uint *)pcVar11;
        if (pcVar11 != (char *)0x0) {
          local_60 = (uint *)0x1;
        }
        pcVar18 = (char *)0x0;
        goto LAB_017b4b80;
      }
      if (puVar10 <= puVar41) {
        pcVar19 = (char *)0x0;
        goto LAB_017b4ab4;
      }
      pcVar18 = (char *)0x0;
    }
    else {
      local_88 = (uint *)(pcVar18 + iVar31);
      if (param_4 == local_88) {
        puVar43 = (uint *)((int)param_4 + 1);
      }
      iVar29 = (int)puVar43 - iVar31;
      pcVar19 = (char *)(iVar29 - (int)pcVar18);
      local_58 = (uint *)pcVar18;
      if (puVar12 <= pcVar19) goto LAB_017b4248;
LAB_017b41d0:
      puVar15 = (uint *)((int)puVar43 + uVar34);
      puVar41 = (uint *)((int)puVar15 + 1);
      pcVar18 = (char *)puVar12;
      if (pcVar11 <= pcVar19) {
        if (puVar41 < puVar10) {
          local_84 = (uint *)0x0;
          pcVar35 = (char *)0x0;
          pcVar11 = (char *)0x0;
          goto LAB_017b4274;
        }
        *param_3 = pcVar11;
        goto LAB_017b4ac8;
      }
      if (puVar10 <= puVar41) goto LAB_017b4ac8;
      local_84 = (uint *)0x0;
    }
    local_74 = (uint *)0x0;
    pcVar35 = pcVar11;
    pcVar11 = (char *)(uint)(pcVar11 != (char *)0x0);
LAB_017b4274:
    iVar20 = *(int *)(param_1 + 0xc0);
    iVar9 = *(int *)(param_1 + 0x5c);
    uVar38 = 0x40 - iVar20;
    uVar39 = iVar20 - 0x20;
    uVar21 = 0x20 - iVar20;
    local_70 = param_4;
    do {
      local_5c = puVar43 + 0x20;
      local_60 = local_74;
      if (local_74 != (uint *)0x0) {
        local_60 = (uint *)0x1;
      }
      iVar20 = -(int)local_74;
      lVar5 = (ulonglong)*puVar43 * 0xbb000000;
      uVar36 = puVar43[1] * -0x45000000 + *puVar43 * -0x30e44324 + (int)((ulonglong)lVar5 >> 0x20);
      uVar22 = (uint)lVar5 >> (uVar38 & 0xff) | uVar36 << (uVar39 & 0xff) |
               uVar36 >> (uVar21 & 0xff);
      lVar5 = (ulonglong)*(uint *)((int)puVar43 + 1) * 0xbb000000;
      uVar36 = *(int *)((int)puVar43 + 5) * -0x45000000 + *(uint *)((int)puVar43 + 1) * -0x30e44324
               + (int)((ulonglong)lVar5 >> 0x20);
      uVar13 = (uint)lVar5 >> (uVar38 & 0xff) | uVar36 << (uVar39 & 0xff) |
               uVar36 >> (uVar21 & 0xff);
      pcVar19 = *(char **)(iVar9 + uVar22 * 4);
      uVar36 = uVar34;
      puVar12 = (uint *)((int)puVar43 + 1);
      while( true ) {
        puVar23 = puVar41;
        puVar16 = puVar15;
        uVar37 = *(uint *)((int)puVar16 + iVar20);
        *(int *)(iVar9 + uVar22 * 4) = iVar29;
        if (*puVar16 == uVar37) {
          uVar22 = (uint)local_60 & 1;
        }
        else {
          uVar22 = 0;
        }
        if (uVar22 != 0) {
          pcVar19 = (char *)0x1;
          cVar1 = *(char *)((int)puVar16 + iVar20 + -1);
          cVar2 = *(char *)((int)puVar16 + -1);
          *(int *)(iVar9 + uVar13 * 4) = (int)puVar12 - iVar31;
          uVar36 = (uint)(cVar2 == cVar1);
          iVar14 = uVar36 + 4;
          puVar43 = (uint *)((int)puVar16 + (iVar20 - uVar36));
          puVar12 = (uint *)((int)puVar16 - uVar36);
          local_68 = (uint *)iVar29;
          goto LAB_017b44cc;
        }
        if (pcVar19 < local_58) {
          uVar22 = *puVar43 ^ 1;
        }
        else {
          uVar22 = *(uint *)(pcVar19 + iVar31);
        }
        local_68 = (uint *)((int)puVar12 - iVar31);
        if (uVar22 == *puVar43) {
          *(uint **)(iVar9 + uVar13 * 4) = local_68;
          puVar12 = puVar43;
          local_68 = (uint *)iVar29;
          goto LAB_017b49d0;
        }
        uVar22 = *puVar16;
        uVar37 = puVar16[1];
        pcVar19 = *(char **)(iVar9 + uVar13 * 4);
        *(uint **)(iVar9 + uVar13 * 4) = local_68;
        lVar5 = (ulonglong)uVar22 * 0xbb000000;
        uVar13 = uVar37 * -0x45000000 + uVar22 * -0x30e44324 + (int)((ulonglong)lVar5 >> 0x20);
        uVar22 = (uint)lVar5 >> (uVar38 & 0xff) | uVar13 << (uVar39 & 0xff) |
                 uVar13 >> (uVar21 & 0xff);
        if (pcVar19 < local_58) {
          uVar13 = *puVar12 ^ 1;
        }
        else {
          uVar13 = *(uint *)(pcVar19 + iVar31);
        }
        if (uVar13 == *puVar12) break;
        puVar15 = (uint *)((int)puVar16 + uVar36);
        puVar41 = (uint *)((int)puVar23 + uVar36);
        pcVar19 = *(char **)(iVar9 + uVar22 * 4);
        lVar5 = (ulonglong)*puVar23 * 0xbb000000;
        uVar13 = puVar23[1] * -0x45000000 + *puVar23 * -0x30e44324 + (int)((ulonglong)lVar5 >> 0x20)
        ;
        uVar13 = (uint)lVar5 >> (uVar38 & 0xff) | uVar13 << (uVar39 & 0xff) |
                 uVar13 >> (uVar21 & 0xff);
        if (local_5c <= puVar15) {
          uVar36 = uVar36 + 1;
          HintPreloadData(puVar23 + 0x10);
          HintPreloadData(puVar23 + 0x20);
          local_5c = local_5c + 0x20;
        }
        if (puVar10 <= puVar41) goto LAB_017b4aa8;
        iVar29 = (int)puVar16 - iVar31;
        puVar43 = puVar16;
        puVar12 = puVar23;
      }
      if (uVar36 < 5) {
        *(int *)(iVar9 + uVar22 * 4) = (int)puVar16 - iVar31;
      }
LAB_017b49d0:
      puVar43 = (uint *)(pcVar19 + iVar31);
      pcVar30 = (char *)((int)puVar12 - (int)puVar43);
      bVar45 = local_88 <= puVar43;
      bVar44 = puVar43 == local_88;
      if (bVar45 && !bVar44) {
        bVar45 = local_70 <= puVar12;
        bVar44 = puVar12 == local_70;
      }
      pcVar19 = pcVar30 + 3;
      if (!bVar45 || bVar44) {
        iVar14 = 4;
        local_84 = local_74;
        local_74 = (uint *)pcVar30;
      }
      else {
        iVar14 = 4;
        puVar15 = puVar12;
        puVar41 = puVar43;
        do {
          puVar12 = (uint *)((int)puVar15 + -1);
          puVar43 = (uint *)((int)puVar41 + -1);
          if (*(char *)puVar12 != *(char *)puVar43) {
            local_84 = local_74;
            puVar43 = puVar41;
            puVar12 = puVar15;
            local_74 = (uint *)pcVar30;
            goto LAB_017b44cc;
          }
          iVar14 = iVar14 + 1;
          puVar15 = puVar12;
          puVar41 = puVar43;
        } while (local_70 < puVar12 && local_88 < puVar43);
        local_84 = local_74;
        local_74 = (uint *)pcVar30;
      }
LAB_017b44cc:
      puVar23 = (uint *)((int)puVar12 + iVar14);
      puVar41 = (uint *)((int)puVar43 + iVar14);
      puVar16 = (uint *)((int)puVar40 + -3);
      puVar15 = puVar23;
      if (puVar23 < puVar16) {
        if (*(uint *)((int)puVar43 + iVar14) == *(uint *)((int)puVar12 + iVar14)) {
          do {
            puVar15 = puVar15 + 1;
            puVar41 = puVar41 + 1;
            if (puVar16 <= puVar15) goto LAB_017b485c;
          } while (*puVar41 == *puVar15);
          uVar36 = *puVar41 ^ *puVar15;
          bVar6 = (byte)uVar36;
          bVar7 = (byte)(uVar36 >> 8);
          bVar8 = (byte)(uVar36 >> 0x10);
          bVar3 = (byte)(uVar36 >> 0x18);
          pcVar30 = (char *)((int)puVar15 +
                            (((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) <<
                                                              1 | bVar6 >> 2 & 1) << 1 |
                                                            bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1)
                                                           << 1 | bVar6 >> 5 & 1) << 1 |
                                                         bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x18
                                            | (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1)
                                                                << 1 | bVar7 >> 2 & 1) << 1 |
                                                              bVar7 >> 3 & 1) << 1 | bVar7 >> 4 & 1)
                                                             << 1 | bVar7 >> 5 & 1) << 1 |
                                                           bVar7 >> 6 & 1) << 1 | bVar7 >> 7) <<
                                              0x10 | (uint)(byte)((((((((bVar8 & 1) << 1 |
                                                                       bVar8 >> 1 & 1) << 1 |
                                                                      bVar8 >> 2 & 1) << 1 |
                                                                     bVar8 >> 3 & 1) << 1 |
                                                                    bVar8 >> 4 & 1) << 1 |
                                                                   bVar8 >> 5 & 1) << 1 |
                                                                  bVar8 >> 6 & 1) << 1 | bVar8 >> 7)
                                                     << 8 |
                                            (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) <<
                                                              1 | bVar3 >> 2 & 1) << 1 |
                                                            bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1)
                                                           << 1 | bVar3 >> 5 & 1) << 1 |
                                                         bVar3 >> 6 & 1) << 1 | bVar3 >> 7)) >> 3) -
                            (int)puVar23));
        }
        else {
          uVar36 = *(uint *)((int)puVar43 + iVar14) ^ *(uint *)((int)puVar12 + iVar14);
          bVar6 = (byte)uVar36;
          bVar7 = (byte)(uVar36 >> 8);
          bVar8 = (byte)(uVar36 >> 0x10);
          bVar3 = (byte)(uVar36 >> 0x18);
          pcVar30 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) <<
                                                             1 | bVar6 >> 2 & 1) << 1 |
                                                           bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) <<
                                                          1 | bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1)
                                                        << 1 | bVar6 >> 7) << 0x18 |
                                           (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) <<
                                                             1 | bVar7 >> 2 & 1) << 1 |
                                                           bVar7 >> 3 & 1) << 1 | bVar7 >> 4 & 1) <<
                                                          1 | bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1)
                                                        << 1 | bVar7 >> 7) << 0x10 |
                                           (uint)(byte)((((((((bVar8 & 1) << 1 | bVar8 >> 1 & 1) <<
                                                             1 | bVar8 >> 2 & 1) << 1 |
                                                           bVar8 >> 3 & 1) << 1 | bVar8 >> 4 & 1) <<
                                                          1 | bVar8 >> 5 & 1) << 1 | bVar8 >> 6 & 1)
                                                        << 1 | bVar8 >> 7) << 8 |
                                           (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) <<
                                                             1 | bVar3 >> 2 & 1) << 1 |
                                                           bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) <<
                                                          1 | bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1)
                                                        << 1 | bVar3 >> 7)) >> 3);
        }
      }
      else {
LAB_017b485c:
        if (puVar15 < (uint *)((int)puVar40 + -1)) {
          if ((short)*puVar41 == (short)*puVar15) {
            puVar15 = (uint *)((int)puVar15 + 2);
            puVar41 = (uint *)((int)puVar41 + 2);
          }
        }
        if ((puVar15 < puVar40) && ((char)*puVar41 == (char)*puVar15)) {
          puVar15 = (uint *)((int)puVar15 + 1);
        }
        pcVar30 = (char *)((int)puVar15 - (int)puVar23);
      }
      pcVar30 = pcVar30 + iVar14;
      puVar15 = puVar40 + -8;
      puVar43 = (uint *)param_2[3];
      uVar36 = (int)puVar12 - (int)local_70;
      if (puVar15 < puVar12) {
        FUN_017b3404(puVar43,local_70,puVar12,puVar15);
LAB_017b4990:
        param_2[3] = param_2[3] + uVar36;
        puVar24 = (undefined4 *)param_2[1];
        if (0xffff < uVar36) {
          param_2[10] = (int)((int)puVar24 - *param_2) >> 3;
          param_2[9] = 1;
        }
      }
      else {
        uVar13 = *local_70;
        uVar22 = local_70[1];
        uVar37 = local_70[2];
        puVar43[3] = local_70[3];
        puVar43[2] = uVar37;
        *puVar43 = uVar13;
        puVar43[1] = uVar22;
        uVar13 = param_2[3];
        if (0x10 < uVar36) {
          uVar22 = local_70[5];
          uVar37 = local_70[6];
          uVar26 = local_70[7];
          *(uint *)(uVar13 + 0x10) = local_70[4];
          *(uint *)(uVar13 + 0x14) = uVar22;
          *(uint *)(uVar13 + 0x18) = uVar37;
          *(uint *)(uVar13 + 0x1c) = uVar26;
          if (0x10 < (int)(uVar36 - 0x10)) {
            puVar43 = (uint *)(uVar13 + 0x20);
            puVar41 = local_70 + 0x10;
            do {
              uVar22 = puVar41[-7];
              uVar37 = puVar41[-6];
              puVar23 = puVar43 + 8;
              uVar26 = puVar41[-5];
              *puVar43 = puVar41[-8];
              puVar43[1] = uVar22;
              puVar43[2] = uVar37;
              puVar43[3] = uVar26;
              uVar22 = puVar41[-3];
              uVar37 = puVar41[-2];
              uVar26 = puVar41[-1];
              puVar43[4] = puVar41[-4];
              puVar43[5] = uVar22;
              puVar43[6] = uVar37;
              puVar43[7] = uVar26;
              puVar43 = puVar23;
              puVar41 = puVar41 + 8;
            } while (puVar23 < (uint *)(uVar13 + uVar36));
          }
          goto LAB_017b4990;
        }
        param_2[3] = uVar13 + uVar36;
        puVar24 = (undefined4 *)param_2[1];
      }
      *(short *)(puVar24 + 1) = (short)uVar36;
      *puVar24 = pcVar19;
      if ((char *)0xffff < pcVar30 + -3) {
        param_2[10] = (int)((int)puVar24 - *param_2) >> 3;
        param_2[9] = 2;
      }
      *(short *)((int)puVar24 + 6) = (short)(pcVar30 + -3);
      puVar43 = (uint *)((int)puVar12 + (int)pcVar30);
      param_2[1] = (uint)(puVar24 + 2);
      if (puVar43 <= puVar10) {
        iVar20 = (int)local_68 + 2;
        iVar29 = *(int *)((int)puVar43 + 2);
        uVar36 = *(uint *)((int)puVar43 + -2);
        lVar5 = (ulonglong)*(uint *)(iVar31 + iVar20) * 0xbb000000;
        uVar13 = *(int *)(iVar31 + iVar20 + 4) * -0x45000000 +
                 *(uint *)(iVar31 + iVar20) * -0x30e44324 + (int)((ulonglong)lVar5 >> 0x20);
        *(int *)(iVar9 + ((uint)lVar5 >> (uVar38 & 0xff) | uVar13 << (uVar39 & 0xff) |
                         uVar13 >> (uVar21 & 0xff)) * 4) = iVar20;
        lVar5 = (ulonglong)uVar36 * 0xbb000000;
        uVar36 = iVar29 * -0x45000000 + uVar36 * -0x30e44324 + (int)((ulonglong)lVar5 >> 0x20);
        *(char **)(iVar9 + ((uint)lVar5 >> (uVar38 & 0xff) | uVar36 << (uVar39 & 0xff) |
                           uVar36 >> (uVar21 & 0xff)) * 4) = (char *)((int)puVar43 + (-2 - iVar31));
        puVar12 = puVar43;
        if (local_84 != (uint *)0x0) {
          while( true ) {
            puVar23 = local_74;
            puVar41 = local_84;
            puVar43 = puVar12;
            if (*puVar12 != *(uint *)((int)puVar12 - (int)local_84)) break;
            puVar42 = puVar12 + 1;
            puVar43 = (uint *)((int)puVar12 + (4 - (int)local_84));
            if (puVar42 < puVar16) {
              uVar36 = *(uint *)((int)puVar12 + (4 - (int)local_84));
              if (uVar36 == puVar12[1]) {
                for (puVar25 = puVar12 + 2; puVar43 = puVar43 + 1, puVar25 < puVar16;
                    puVar25 = puVar25 + 1) {
                  if (*puVar43 != *puVar25) {
                    uVar36 = *puVar43 ^ *puVar25;
                    bVar6 = (byte)uVar36;
                    bVar7 = (byte)(uVar36 >> 8);
                    bVar8 = (byte)(uVar36 >> 0x10);
                    bVar3 = (byte)(uVar36 >> 0x18);
                    pcVar19 = (char *)((int)puVar25 +
                                      (((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                        bVar6 >> 1 & 1) << 1 |
                                                                       bVar6 >> 2 & 1) << 1 |
                                                                      bVar6 >> 3 & 1) << 1 |
                                                                     bVar6 >> 4 & 1) << 1 |
                                                                    bVar6 >> 5 & 1) << 1 |
                                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7
                                                                  ) << 0x18 |
                                                      (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                        bVar7 >> 1 & 1) << 1 |
                                                                       bVar7 >> 2 & 1) << 1 |
                                                                      bVar7 >> 3 & 1) << 1 |
                                                                     bVar7 >> 4 & 1) << 1 |
                                                                    bVar7 >> 5 & 1) << 1 |
                                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7
                                                                  ) << 0x10 |
                                                      (uint)(byte)((((((((bVar8 & 1) << 1 |
                                                                        bVar8 >> 1 & 1) << 1 |
                                                                       bVar8 >> 2 & 1) << 1 |
                                                                      bVar8 >> 3 & 1) << 1 |
                                                                     bVar8 >> 4 & 1) << 1 |
                                                                    bVar8 >> 5 & 1) << 1 |
                                                                   bVar8 >> 6 & 1) << 1 | bVar8 >> 7
                                                                  ) << 8 |
                                                      (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                        bVar3 >> 1 & 1) << 1 |
                                                                       bVar3 >> 2 & 1) << 1 |
                                                                      bVar3 >> 3 & 1) << 1 |
                                                                     bVar3 >> 4 & 1) << 1 |
                                                                    bVar3 >> 5 & 1) << 1 |
                                                                   bVar3 >> 6 & 1) << 1 | bVar3 >> 7
                                                                  )) >> 3) - (int)puVar42));
                    goto LAB_017b4740;
                  }
                }
                goto LAB_017b46f0;
              }
              uVar36 = uVar36 ^ puVar12[1];
              bVar6 = (byte)uVar36;
              bVar7 = (byte)(uVar36 >> 8);
              bVar8 = (byte)(uVar36 >> 0x10);
              bVar3 = (byte)(uVar36 >> 0x18);
              pcVar19 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                 << 1 | bVar6 >> 2 & 1) << 1 |
                                                               bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1
                                                              ) << 1 | bVar6 >> 5 & 1) << 1 |
                                                            bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                               0x18 | (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                        bVar7 >> 1 & 1) << 1 |
                                                                       bVar7 >> 2 & 1) << 1 |
                                                                      bVar7 >> 3 & 1) << 1 |
                                                                     bVar7 >> 4 & 1) << 1 |
                                                                    bVar7 >> 5 & 1) << 1 |
                                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7
                                                                  ) << 0x10 |
                                               (uint)(byte)((((((((bVar8 & 1) << 1 | bVar8 >> 1 & 1)
                                                                 << 1 | bVar8 >> 2 & 1) << 1 |
                                                               bVar8 >> 3 & 1) << 1 | bVar8 >> 4 & 1
                                                              ) << 1 | bVar8 >> 5 & 1) << 1 |
                                                            bVar8 >> 6 & 1) << 1 | bVar8 >> 7) << 8
                                               | (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                   bVar3 >> 1 & 1) << 1 |
                                                                  bVar3 >> 2 & 1) << 1 |
                                                                 bVar3 >> 3 & 1) << 1 |
                                                                bVar3 >> 4 & 1) << 1 |
                                                               bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1
                                                              ) << 1 | bVar3 >> 7)) >> 3);
            }
            else {
              puVar25 = puVar42;
LAB_017b46f0:
              if (puVar25 < (uint *)((int)puVar40 + -1)) {
                if ((short)*puVar43 == (short)*puVar25) {
                  puVar43 = (uint *)((int)puVar43 + 2);
                  puVar25 = (uint *)((int)puVar25 + 2);
                }
              }
              if ((puVar25 < puVar40) && ((char)*puVar43 == (char)*puVar25)) {
                puVar25 = (uint *)((int)puVar25 + 1);
              }
              pcVar19 = (char *)((int)puVar25 - (int)puVar42);
            }
LAB_017b4740:
            puVar43 = (uint *)((int)puVar12 + (int)(pcVar19 + 4));
            lVar5 = (ulonglong)*puVar12 * 0xbb000000;
            uVar36 = puVar12[1] * -0x45000000 + *puVar12 * -0x30e44324 +
                     (int)((ulonglong)lVar5 >> 0x20);
            *(int *)(iVar9 + ((uint)lVar5 >> (uVar38 & 0xff) | uVar36 << (uVar39 & 0xff) |
                             uVar36 >> (uVar21 & 0xff)) * 4) = (int)puVar12 - iVar31;
            puVar42 = (uint *)param_2[3];
            if (puVar15 < puVar12) {
              FUN_017b3404(puVar42,puVar12,puVar12,puVar15);
            }
            else {
              uVar36 = puVar12[1];
              uVar13 = puVar12[2];
              uVar22 = puVar12[3];
              *puVar42 = *puVar12;
              puVar42[1] = uVar36;
              puVar42[2] = uVar13;
              puVar42[3] = uVar22;
            }
            puVar24 = (undefined4 *)param_2[1];
            *(undefined2 *)(puVar24 + 1) = 0;
            *puVar24 = 1;
            uVar4 = SUB42(pcVar19 + 1,0);
            if (pcVar19 + 1 < (char *)0x10000) {
              *(undefined2 *)((int)puVar24 + 6) = uVar4;
              param_2[1] = (uint)(puVar24 + 2);
            }
            else {
              param_2[10] = (int)((int)puVar24 - *param_2) >> 3;
              param_2[9] = 2;
              *(undefined2 *)((int)puVar24 + 6) = uVar4;
              param_2[1] = (uint)(puVar24 + 2);
            }
            if (puVar10 < puVar43) {
              local_74 = local_84;
              local_84 = puVar23;
              break;
            }
            local_84 = local_74;
            local_74 = puVar41;
            puVar12 = puVar43;
          }
        }
      }
      puVar15 = (uint *)((int)puVar43 + uVar34);
      puVar41 = (uint *)((int)puVar15 + 1);
      local_70 = puVar43;
      if (puVar10 <= puVar41) goto LAB_017b4bac;
      iVar29 = (int)puVar43 - iVar31;
    } while( true );
  }
  iVar9 = *(int *)(param_1 + 4);
  pcVar35 = *(char **)(param_1 + 0xc);
  iVar29 = param_5 - iVar9;
  puVar12 = (uint *)(1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  iVar20 = *(int *)(param_1 + 0x5c);
  puVar15 = *(uint **)(param_1 + 0xc0);
  puVar43 = (uint *)((int)param_4 + (iVar29 - (int)pcVar35));
  local_58 = (uint *)pcVar35;
  local_44 = param_4;
  local_7c = param_4;
  if (iVar31 != 6) {
    if (iVar31 == 7) {
      if (puVar12 < puVar43) {
        local_58 = (uint *)((int)param_4 + (iVar29 - (int)puVar12));
      }
      puVar10 = (uint *)((int)param_4 + param_5);
      puVar40 = puVar10 + -2;
      local_90 = (uint *)*param_3;
      local_88 = (uint *)param_3[1];
      puVar43 = param_4;
      if (*(int *)(param_1 + 0x18) == 0) {
        local_8c = (uint *)((int)local_58 + iVar9);
        if (param_4 == local_8c) {
          puVar43 = (uint *)((int)param_4 + 1);
        }
        local_70 = (uint *)((int)puVar43 - iVar9);
        puVar41 = (uint *)((int)local_70 - (int)pcVar35);
        if (puVar12 <= (uint *)((int)local_70 - (int)pcVar35)) {
          puVar41 = puVar12;
        }
      }
      else {
        local_8c = (uint *)(pcVar35 + iVar9);
        if (param_4 == local_8c) {
          puVar43 = (uint *)((int)param_4 + 1);
        }
        local_70 = (uint *)((int)puVar43 - iVar9);
        puVar41 = (uint *)((int)local_70 - (int)pcVar35);
        local_58 = (uint *)pcVar35;
      }
      local_80 = local_90;
      if (puVar41 < local_88) {
        local_98 = local_88;
        if (local_90 <= puVar41) {
          if ((uint *)((int)puVar43 + 3) < puVar40) {
            local_90 = (uint *)0x0;
            local_88 = (uint *)0x0;
            local_94 = (uint *)0x0;
            goto LAB_017b7798;
          }
          goto LAB_017ba874;
        }
        if (puVar40 <= (uint *)((int)puVar43 + 3)) goto LAB_017b931c;
        local_88 = (uint *)0x0;
      }
      else {
        if (local_90 <= puVar41) {
          if ((uint *)((int)puVar43 + 3) < puVar40) {
            local_90 = (uint *)0x0;
            local_94 = local_90;
            local_98 = local_90;
            goto LAB_017b7798;
          }
          goto LAB_017b9970;
        }
        if (puVar40 <= (uint *)((int)puVar43 + 3)) goto LAB_017ba86c;
        local_98 = (uint *)0x0;
      }
      local_80 = (uint *)0x0;
      local_94 = (uint *)(uint)(local_90 != (uint *)0x0);
LAB_017b7798:
      puVar12 = (uint *)((int)puVar43 + 3);
      uVar34 = 0x40 - (int)puVar15;
      puVar41 = puVar15 + -8;
      uVar21 = 0x20 - (int)puVar15;
      do {
        local_60 = puVar43 + 0x20;
        local_68 = (uint *)(uint)(local_80 != (uint *)0x0);
        iVar31 = -(int)local_80;
        local_44 = (uint *)0x2;
        lVar5 = (ulonglong)*puVar43 * 0xbfa56300;
        uVar38 = puVar43[1] * -0x405a9d00 + *puVar43 * -0x30e44324 + (int)((ulonglong)lVar5 >> 0x20)
        ;
        uVar39 = (uint)lVar5 >> (uVar34 & 0xff) | uVar38 << ((uint)puVar41 & 0xff) |
                 uVar38 >> (uVar21 & 0xff);
        lVar5 = (ulonglong)*(uint *)((int)puVar43 + 1) * 0xbfa56300;
        uVar38 = *(int *)((int)puVar43 + 5) * -0x405a9d00 +
                 *(uint *)((int)puVar43 + 1) * -0x30e44324 + (int)((ulonglong)lVar5 >> 0x20);
        uVar38 = (uint)lVar5 >> (uVar34 & 0xff) | uVar38 << ((uint)puVar41 & 0xff) |
                 uVar38 >> (uVar21 & 0xff);
        pcVar35 = *(char **)(iVar20 + uVar39 * 4);
        puVar15 = (uint *)((int)puVar43 + 2);
        puVar16 = (uint *)((int)puVar43 + 1);
        while( true ) {
          puVar42 = puVar12;
          puVar23 = puVar15;
          uVar36 = *(uint *)((int)puVar23 + iVar31);
          *(uint **)(iVar20 + uVar39 * 4) = local_70;
          if (*puVar23 == uVar36) {
            uVar39 = (uint)local_68;
          }
          else {
            uVar39 = 0;
          }
          if (uVar39 != 0) {
            cVar1 = *(char *)((int)puVar23 + iVar31 + -1);
            cVar2 = *(char *)((int)puVar23 + -1);
            *(int *)(iVar20 + uVar38 * 4) = (int)puVar16 - iVar9;
            uVar38 = (uint)(cVar2 == cVar1);
            iVar29 = uVar38 + 4;
            local_60 = (uint *)&DAT_00000001;
            puVar12 = (uint *)((int)puVar23 + (iVar31 - uVar38));
            local_44 = (uint *)((int)puVar23 - uVar38);
            goto LAB_017b7a1c;
          }
          if (pcVar35 < local_58) {
            uVar39 = *puVar43 ^ 1;
          }
          else {
            uVar39 = *(uint *)(pcVar35 + iVar9);
          }
          iVar29 = (int)puVar16 - iVar9;
          if (uVar39 == *puVar43) {
            *(int *)(iVar20 + uVar38 * 4) = iVar29;
            local_44 = puVar43;
            goto LAB_017b9dd4;
          }
          uVar39 = *puVar23;
          uVar36 = puVar23[1];
          pcVar35 = *(char **)(iVar20 + uVar38 * 4);
          *(int *)(iVar20 + uVar38 * 4) = iVar29;
          lVar5 = (ulonglong)uVar39 * 0xbfa56300;
          uVar38 = uVar36 * -0x405a9d00 + uVar39 * -0x30e44324 + (int)((ulonglong)lVar5 >> 0x20);
          uVar39 = (uint)lVar5 >> (uVar34 & 0xff) | uVar38 << ((uint)puVar41 & 0xff) |
                   uVar38 >> (uVar21 & 0xff);
          if (pcVar35 < local_58) {
            uVar38 = *puVar16 ^ 1;
          }
          else {
            uVar38 = *(uint *)(pcVar35 + iVar9);
          }
          if (uVar38 == *puVar16) break;
          puVar15 = (uint *)((int)puVar23 + (int)local_44);
          puVar12 = (uint *)((int)puVar42 + (int)local_44);
          lVar5 = (ulonglong)*puVar42 * 0xbfa56300;
          pcVar35 = *(char **)(iVar20 + uVar39 * 4);
          uVar38 = puVar42[1] * -0x405a9d00 + *puVar42 * -0x30e44324 +
                   (int)((ulonglong)lVar5 >> 0x20);
          uVar38 = (uint)lVar5 >> (uVar34 & 0xff) | uVar38 << ((uint)puVar41 & 0xff) |
                   uVar38 >> (uVar21 & 0xff);
          if (local_60 <= puVar15) {
            HintPreloadData(puVar42 + 0x10);
            HintPreloadData(puVar42 + 0x20);
            local_44 = (uint *)((int)local_44 + 1);
            local_60 = local_60 + 0x20;
          }
          if (puVar40 <= puVar12) goto LAB_017b92e8;
          local_70 = (uint *)((int)puVar23 - iVar9);
          puVar43 = puVar23;
          puVar16 = puVar42;
        }
        if (local_44 < 5) {
          *(int *)(iVar20 + uVar39 * 4) = (int)puVar23 - iVar9;
        }
        local_70 = (uint *)iVar29;
        local_44 = puVar16;
LAB_017b9dd4:
        puVar12 = (uint *)(pcVar35 + iVar9);
        puVar43 = (uint *)((int)local_44 - (int)puVar12);
        local_60 = (uint *)((int)puVar43 + 3);
        bVar45 = local_8c <= puVar12;
        bVar44 = puVar12 == local_8c;
        if (bVar45 && !bVar44) {
          bVar45 = local_7c <= local_44;
          bVar44 = local_44 == local_7c;
        }
        if (!bVar45 || bVar44) {
          iVar29 = 4;
          local_88 = local_80;
          local_80 = puVar43;
        }
        else {
          iVar29 = 4;
          puVar15 = local_44;
          puVar16 = puVar12;
          do {
            puVar12 = (uint *)((int)puVar16 + -1);
            local_44 = (uint *)((int)puVar15 + -1);
            if (*(char *)local_44 != *(char *)puVar12) {
              local_88 = local_80;
              puVar12 = puVar16;
              local_80 = puVar43;
              local_44 = puVar15;
              goto LAB_017b7a1c;
            }
            iVar29 = iVar29 + 1;
            puVar15 = local_44;
            puVar16 = puVar12;
          } while (local_7c < local_44 && local_8c < puVar12);
          local_88 = local_80;
          local_80 = puVar43;
        }
LAB_017b7a1c:
        puVar23 = (uint *)((int)local_44 + iVar29);
        puVar15 = (uint *)((int)puVar12 + iVar29);
        puVar16 = (uint *)((int)puVar10 + -3);
        puVar43 = puVar23;
        if (puVar23 < puVar16) {
          if (*(uint *)((int)puVar12 + iVar29) == *(uint *)((int)local_44 + iVar29)) {
            do {
              puVar43 = puVar43 + 1;
              puVar15 = puVar15 + 1;
              if (puVar16 <= puVar43) goto LAB_017b943c;
            } while (*puVar15 == *puVar43);
            uVar38 = *puVar15 ^ *puVar43;
            bVar6 = (byte)uVar38;
            bVar7 = (byte)(uVar38 >> 8);
            bVar8 = (byte)(uVar38 >> 0x10);
            bVar3 = (byte)(uVar38 >> 0x18);
            pcVar35 = (char *)((int)puVar43 +
                              (((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                << 1 | bVar6 >> 2 & 1) << 1 |
                                                              bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1)
                                                             << 1 | bVar6 >> 5 & 1) << 1 |
                                                           bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                              0x18 | (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                       bVar7 >> 1 & 1) << 1 |
                                                                      bVar7 >> 2 & 1) << 1 |
                                                                     bVar7 >> 3 & 1) << 1 |
                                                                    bVar7 >> 4 & 1) << 1 |
                                                                   bVar7 >> 5 & 1) << 1 |
                                                                  bVar7 >> 6 & 1) << 1 | bVar7 >> 7)
                                                     << 0x10 |
                                              (uint)(byte)((((((((bVar8 & 1) << 1 | bVar8 >> 1 & 1)
                                                                << 1 | bVar8 >> 2 & 1) << 1 |
                                                              bVar8 >> 3 & 1) << 1 | bVar8 >> 4 & 1)
                                                             << 1 | bVar8 >> 5 & 1) << 1 |
                                                           bVar8 >> 6 & 1) << 1 | bVar8 >> 7) << 8 |
                                              (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
                                                                << 1 | bVar3 >> 2 & 1) << 1 |
                                                              bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1)
                                                             << 1 | bVar3 >> 5 & 1) << 1 |
                                                           bVar3 >> 6 & 1) << 1 | bVar3 >> 7)) >> 3)
                              - (int)puVar23));
          }
          else {
            uVar38 = *(uint *)((int)puVar12 + iVar29) ^ *(uint *)((int)local_44 + iVar29);
            bVar6 = (byte)uVar38;
            bVar7 = (byte)(uVar38 >> 8);
            bVar8 = (byte)(uVar38 >> 0x10);
            bVar3 = (byte)(uVar38 >> 0x18);
            pcVar35 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                               << 1 | bVar6 >> 2 & 1) << 1 |
                                                             bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1)
                                                            << 1 | bVar6 >> 5 & 1) << 1 |
                                                          bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x18
                                             | (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1)
                                                                 << 1 | bVar7 >> 2 & 1) << 1 |
                                                               bVar7 >> 3 & 1) << 1 | bVar7 >> 4 & 1
                                                              ) << 1 | bVar7 >> 5 & 1) << 1 |
                                                            bVar7 >> 6 & 1) << 1 | bVar7 >> 7) <<
                                               0x10 | (uint)(byte)((((((((bVar8 & 1) << 1 |
                                                                        bVar8 >> 1 & 1) << 1 |
                                                                       bVar8 >> 2 & 1) << 1 |
                                                                      bVar8 >> 3 & 1) << 1 |
                                                                     bVar8 >> 4 & 1) << 1 |
                                                                    bVar8 >> 5 & 1) << 1 |
                                                                   bVar8 >> 6 & 1) << 1 | bVar8 >> 7
                                                                  ) << 8 |
                                             (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
                                                               << 1 | bVar3 >> 2 & 1) << 1 |
                                                             bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1)
                                                            << 1 | bVar3 >> 5 & 1) << 1 |
                                                          bVar3 >> 6 & 1) << 1 | bVar3 >> 7)) >> 3);
          }
        }
        else {
LAB_017b943c:
          if (puVar43 < (uint *)((int)puVar10 + -1)) {
            if ((short)*puVar15 == (short)*puVar43) {
              puVar43 = (uint *)((int)puVar43 + 2);
              puVar15 = (uint *)((int)puVar15 + 2);
            }
          }
          if ((puVar43 < puVar10) && ((char)*puVar15 == (char)*puVar43)) {
            puVar43 = (uint *)((int)puVar43 + 1);
          }
          pcVar35 = (char *)((int)puVar43 - (int)puVar23);
        }
        pcVar35 = pcVar35 + iVar29;
        puVar12 = puVar10 + -8;
        puVar43 = (uint *)param_2[3];
        uVar38 = (int)local_44 - (int)local_7c;
        if (puVar12 < local_44) {
          FUN_017b3404(puVar43,local_7c,local_44,puVar12);
LAB_017b9a6c:
          param_2[3] = param_2[3] + uVar38;
          puVar24 = (undefined4 *)param_2[1];
          if (0xffff < uVar38) {
            param_2[10] = (int)((int)puVar24 - *param_2) >> 3;
            param_2[9] = 1;
          }
        }
        else {
          uVar39 = *local_7c;
          uVar36 = local_7c[1];
          uVar13 = local_7c[2];
          puVar43[3] = local_7c[3];
          *puVar43 = uVar39;
          puVar43[1] = uVar36;
          puVar43[2] = uVar13;
          uVar39 = param_2[3];
          if (0x10 < uVar38) {
            uVar36 = local_7c[5];
            uVar13 = local_7c[6];
            uVar22 = local_7c[7];
            *(uint *)(uVar39 + 0x10) = local_7c[4];
            *(uint *)(uVar39 + 0x14) = uVar36;
            *(uint *)(uVar39 + 0x18) = uVar13;
            *(uint *)(uVar39 + 0x1c) = uVar22;
            if (0x10 < (int)(uVar38 - 0x10)) {
              puVar43 = (uint *)(uVar39 + 0x20);
              puVar15 = local_7c + 0x10;
              do {
                uVar36 = puVar15[-7];
                uVar13 = puVar15[-6];
                puVar23 = puVar43 + 8;
                uVar22 = puVar15[-5];
                *puVar43 = puVar15[-8];
                puVar43[1] = uVar36;
                puVar43[2] = uVar13;
                puVar43[3] = uVar22;
                uVar36 = puVar15[-3];
                uVar13 = puVar15[-2];
                uVar22 = puVar15[-1];
                puVar43[4] = puVar15[-4];
                puVar43[5] = uVar36;
                puVar43[6] = uVar13;
                puVar43[7] = uVar22;
                puVar43 = puVar23;
                puVar15 = puVar15 + 8;
              } while (puVar23 < (uint *)(uVar39 + uVar38));
            }
            goto LAB_017b9a6c;
          }
          param_2[3] = uVar39 + uVar38;
          puVar24 = (undefined4 *)param_2[1];
        }
        *puVar24 = local_60;
        *(short *)(puVar24 + 1) = (short)uVar38;
        if ((char *)0xffff < pcVar35 + -3) {
          param_2[10] = (int)((int)puVar24 - *param_2) >> 3;
          param_2[9] = 2;
        }
        *(short *)((int)puVar24 + 6) = (short)(pcVar35 + -3);
        param_2[1] = (uint)(puVar24 + 2);
        local_44 = (uint *)((int)local_44 + (int)pcVar35);
        if (local_44 <= puVar40) {
          local_70 = (uint *)((int)local_70 + 2);
          iVar31 = *(int *)((int)local_44 + 2);
          uVar38 = *(uint *)((int)local_44 + -2);
          lVar5 = (ulonglong)*(uint *)(iVar9 + (int)local_70) * 0xbfa56300;
          uVar39 = *(int *)((int)local_70 + iVar9 + 4) * -0x405a9d00 +
                   *(uint *)(iVar9 + (int)local_70) * -0x30e44324 + (int)((ulonglong)lVar5 >> 0x20);
          *(uint **)(iVar20 + ((uint)lVar5 >> (uVar34 & 0xff) | uVar39 << ((uint)puVar41 & 0xff) |
                              uVar39 >> (uVar21 & 0xff)) * 4) = local_70;
          lVar5 = (ulonglong)uVar38 * 0xbfa56300;
          if (local_88 != (uint *)0x0) {
            local_70 = local_44;
          }
          uVar38 = iVar31 * -0x405a9d00 + uVar38 * -0x30e44324 + (int)((ulonglong)lVar5 >> 0x20);
          *(int *)(iVar20 + ((uint)lVar5 >> (uVar34 & 0xff) | uVar38 << ((uint)puVar41 & 0xff) |
                            uVar38 >> (uVar21 & 0xff)) * 4) = ((int)local_44 + -2) - iVar9;
          if (local_88 != (uint *)0x0) {
            while( true ) {
              puVar15 = local_80;
              puVar43 = local_88;
              if (*local_70 != *(uint *)((int)local_70 - (int)local_88)) break;
              puVar42 = local_70 + 1;
              puVar23 = (uint *)((int)local_70 + (4 - (int)local_88));
              if (puVar42 < puVar16) {
                uVar38 = *(uint *)((int)local_70 + (4 - (int)local_88));
                if (uVar38 == local_70[1]) {
                  puVar25 = local_70 + 2;
                  while( true ) {
                    puVar23 = puVar23 + 1;
                    if (puVar16 <= puVar25) break;
                    if (*puVar23 != *puVar25) {
                      uVar38 = *puVar23 ^ *puVar25;
                      bVar6 = (byte)uVar38;
                      bVar7 = (byte)(uVar38 >> 8);
                      bVar8 = (byte)(uVar38 >> 0x10);
                      bVar3 = (byte)(uVar38 >> 0x18);
                      pcVar35 = (char *)((int)puVar25 +
                                        (((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                          bVar6 >> 1 & 1) << 1 |
                                                                         bVar6 >> 2 & 1) << 1 |
                                                                        bVar6 >> 3 & 1) << 1 |
                                                                       bVar6 >> 4 & 1) << 1 |
                                                                      bVar6 >> 5 & 1) << 1 |
                                                                     bVar6 >> 6 & 1) << 1 |
                                                                    bVar6 >> 7) << 0x18 |
                                                        (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                          bVar7 >> 1 & 1) << 1 |
                                                                         bVar7 >> 2 & 1) << 1 |
                                                                        bVar7 >> 3 & 1) << 1 |
                                                                       bVar7 >> 4 & 1) << 1 |
                                                                      bVar7 >> 5 & 1) << 1 |
                                                                     bVar7 >> 6 & 1) << 1 |
                                                                    bVar7 >> 7) << 0x10 |
                                                        (uint)(byte)((((((((bVar8 & 1) << 1 |
                                                                          bVar8 >> 1 & 1) << 1 |
                                                                         bVar8 >> 2 & 1) << 1 |
                                                                        bVar8 >> 3 & 1) << 1 |
                                                                       bVar8 >> 4 & 1) << 1 |
                                                                      bVar8 >> 5 & 1) << 1 |
                                                                     bVar8 >> 6 & 1) << 1 |
                                                                    bVar8 >> 7) << 8 |
                                                        (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                          bVar3 >> 1 & 1) << 1 |
                                                                         bVar3 >> 2 & 1) << 1 |
                                                                        bVar3 >> 3 & 1) << 1 |
                                                                       bVar3 >> 4 & 1) << 1 |
                                                                      bVar3 >> 5 & 1) << 1 |
                                                                     bVar3 >> 6 & 1) << 1 |
                                                                    bVar3 >> 7)) >> 3) -
                                        (int)puVar42));
                      goto LAB_017b8d4c;
                    }
                    puVar25 = puVar25 + 1;
                  }
                  goto LAB_017ba6c0;
                }
                uVar38 = uVar38 ^ local_70[1];
                bVar6 = (byte)uVar38;
                bVar7 = (byte)(uVar38 >> 8);
                bVar8 = (byte)(uVar38 >> 0x10);
                bVar3 = (byte)(uVar38 >> 0x18);
                pcVar35 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                   bVar6 >> 1 & 1) << 1 |
                                                                  bVar6 >> 2 & 1) << 1 |
                                                                 bVar6 >> 3 & 1) << 1 |
                                                                bVar6 >> 4 & 1) << 1 |
                                                               bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1
                                                              ) << 1 | bVar6 >> 7) << 0x18 |
                                                 (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                   bVar7 >> 1 & 1) << 1 |
                                                                  bVar7 >> 2 & 1) << 1 |
                                                                 bVar7 >> 3 & 1) << 1 |
                                                                bVar7 >> 4 & 1) << 1 |
                                                               bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1
                                                              ) << 1 | bVar7 >> 7) << 0x10 |
                                                 (uint)(byte)((((((((bVar8 & 1) << 1 |
                                                                   bVar8 >> 1 & 1) << 1 |
                                                                  bVar8 >> 2 & 1) << 1 |
                                                                 bVar8 >> 3 & 1) << 1 |
                                                                bVar8 >> 4 & 1) << 1 |
                                                               bVar8 >> 5 & 1) << 1 | bVar8 >> 6 & 1
                                                              ) << 1 | bVar8 >> 7) << 8 |
                                                 (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                   bVar3 >> 1 & 1) << 1 |
                                                                  bVar3 >> 2 & 1) << 1 |
                                                                 bVar3 >> 3 & 1) << 1 |
                                                                bVar3 >> 4 & 1) << 1 |
                                                               bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1
                                                              ) << 1 | bVar3 >> 7)) >> 3);
              }
              else {
                puVar25 = puVar42;
LAB_017ba6c0:
                if (puVar25 < (uint *)((int)puVar10 + -1)) {
                  if ((short)*puVar23 == (short)*puVar25) {
                    puVar23 = (uint *)((int)puVar23 + 2);
                    puVar25 = (uint *)((int)puVar25 + 2);
                  }
                }
                if ((puVar25 < puVar10) && ((char)*puVar23 == (char)*puVar25)) {
                  puVar25 = (uint *)((int)puVar25 + 1);
                }
                pcVar35 = (char *)((int)puVar25 - (int)puVar42);
              }
LAB_017b8d4c:
              local_44 = (uint *)((int)local_70 + (int)(pcVar35 + 4));
              lVar5 = (ulonglong)*local_70 * 0xbfa56300;
              uVar38 = local_70[1] * -0x405a9d00 + *local_70 * -0x30e44324 +
                       (int)((ulonglong)lVar5 >> 0x20);
              *(int *)(iVar20 + ((uint)lVar5 >> (uVar34 & 0xff) | uVar38 << ((uint)puVar41 & 0xff) |
                                uVar38 >> (uVar21 & 0xff)) * 4) = (int)local_70 - iVar9;
              puVar23 = (uint *)param_2[3];
              if (puVar12 < local_70) {
                FUN_017b3404(puVar23,local_70,local_70,puVar12);
              }
              else {
                uVar38 = local_70[1];
                uVar39 = local_70[2];
                uVar36 = local_70[3];
                *puVar23 = *local_70;
                puVar23[1] = uVar38;
                puVar23[2] = uVar39;
                puVar23[3] = uVar36;
              }
              puVar24 = (undefined4 *)param_2[1];
              *(undefined2 *)(puVar24 + 1) = 0;
              *puVar24 = 1;
              uVar4 = SUB42(pcVar35 + 1,0);
              if (pcVar35 + 1 < (char *)0x10000) {
                *(undefined2 *)((int)puVar24 + 6) = uVar4;
                param_2[1] = (uint)(puVar24 + 2);
              }
              else {
                param_2[10] = (int)((int)puVar24 - *param_2) >> 3;
                param_2[9] = 2;
                *(undefined2 *)((int)puVar24 + 6) = uVar4;
                param_2[1] = (uint)(puVar24 + 2);
              }
              if (puVar40 < local_44) {
                local_80 = local_88;
                local_88 = puVar15;
                goto LAB_017b7bb8;
              }
              local_88 = local_80;
              local_80 = puVar43;
              local_70 = local_44;
            }
            local_44 = local_70;
          }
        }
LAB_017b7bb8:
        puVar12 = (uint *)((int)local_44 + 3);
        if (puVar40 <= puVar12) goto LAB_017ba3c8;
        local_7c = local_44;
        local_70 = (uint *)((int)local_44 - iVar9);
        puVar43 = local_44;
      } while( true );
    }
    if (iVar31 != 5) {
      if (puVar12 < puVar43) {
        local_4c = (char *)((int)param_4 + (iVar29 - (int)puVar12));
      }
      else {
        local_4c = pcVar35;
      }
      puVar40 = (uint *)((int)param_4 + param_5);
      puVar41 = puVar40 + -2;
      local_68 = (uint *)*param_3;
      puVar43 = (uint *)param_3[1];
      puVar10 = param_4;
      if (*(int *)(param_1 + 0x18) == 0) {
        local_80 = (uint *)(local_4c + iVar9);
        if (param_4 == local_80) {
          puVar10 = (uint *)((int)param_4 + 1);
        }
        local_60 = (uint *)((int)puVar10 - iVar9);
        puVar16 = (uint *)((int)local_60 - (int)pcVar35);
        if (puVar12 <= (uint *)((int)local_60 - (int)pcVar35)) {
          puVar16 = puVar12;
        }
      }
      else {
        local_80 = (uint *)(pcVar35 + iVar9);
        if (param_4 == local_80) {
          puVar10 = (uint *)((int)param_4 + 1);
        }
        local_60 = (uint *)((int)puVar10 - iVar9);
        puVar16 = (uint *)((int)local_60 - (int)pcVar35);
        local_4c = pcVar35;
      }
      puVar12 = local_68;
      if (puVar16 < puVar43) {
        if (puVar16 < local_68) {
          if ((uint *)((int)puVar10 + 3) < puVar41) {
            local_70 = (uint *)0x0;
            goto LAB_017b6a40;
          }
        }
        else {
          if ((uint *)((int)puVar10 + 3) < puVar41) {
            puVar12 = (uint *)0x0;
            local_84 = (uint *)0x0;
            local_70 = (uint *)0x0;
            goto LAB_017b7c44;
          }
          *param_3 = local_68;
        }
      }
      else {
        local_70 = puVar43;
        if (puVar16 < local_68) {
          if ((uint *)((int)puVar10 + 3) < puVar41) {
            puVar43 = (uint *)0x0;
LAB_017b6a40:
            local_84 = (uint *)(uint)(local_68 != (uint *)0x0);
            local_68 = (uint *)0x0;
LAB_017b7c44:
            puVar16 = (uint *)((int)puVar10 + 3);
            uVar34 = 0x20 - (int)puVar15;
            puVar15 = (uint *)((int)puVar40 + -3);
            do {
              local_50 = puVar10 + 0x20;
              uVar39 = 2;
              uVar21 = *puVar10 * -0x61c8864f >> (uVar34 & 0xff);
              uVar38 = (uint)(*(int *)((int)puVar10 + 1) * -0x61c8864f) >> (uVar34 & 0xff);
              pcVar35 = *(char **)(iVar20 + uVar21 * 4);
              local_58 = local_68;
              if (local_68 != (uint *)0x0) {
                local_58 = (uint *)&DAT_00000001;
              }
              iVar31 = -(int)local_68;
              puVar23 = (uint *)((int)puVar10 + 1);
              puVar42 = (uint *)((int)puVar10 + 2);
              while( true ) {
                uVar36 = *(uint *)((int)puVar42 + iVar31);
                *(uint **)(iVar20 + uVar21 * 4) = local_60;
                if (uVar36 == *puVar42) {
                  uVar21 = (uint)local_58 & 1;
                }
                else {
                  uVar21 = 0;
                }
                if (uVar21 != 0) {
                  cVar1 = *(char *)((int)puVar42 + -1);
                  cVar2 = *(char *)((int)puVar42 + iVar31 + -1);
                  *(int *)(iVar20 + uVar38 * 4) = (int)puVar23 - iVar9;
                  local_50 = (uint *)&DAT_00000001;
                  uVar21 = (uint)(cVar1 == cVar2);
                  iVar29 = uVar21 + 4;
                  puVar16 = (uint *)((int)puVar42 + (iVar31 - uVar21));
                  puVar10 = (uint *)((int)puVar42 - uVar21);
                  goto LAB_017b7df4;
                }
                if (pcVar35 < local_4c) {
                  uVar21 = *puVar10 ^ 1;
                }
                else {
                  uVar21 = *(uint *)(pcVar35 + iVar9);
                }
                iVar29 = (int)puVar23 - iVar9;
                if (uVar21 == *puVar10) {
                  *(int *)(iVar20 + uVar38 * 4) = iVar29;
                  goto LAB_017b9f08;
                }
                uVar21 = *puVar42 * -0x61c8864f >> (uVar34 & 0xff);
                pcVar35 = *(char **)(iVar20 + uVar38 * 4);
                *(int *)(iVar20 + uVar38 * 4) = iVar29;
                if (pcVar35 < local_4c) {
                  uVar38 = *puVar23 ^ 1;
                }
                else {
                  uVar38 = *(uint *)(pcVar35 + iVar9);
                }
                if (uVar38 == *puVar23) break;
                puVar32 = (uint *)((int)puVar42 + uVar39);
                puVar25 = (uint *)((int)puVar16 + uVar39);
                uVar38 = *puVar16 * -0x61c8864f >> (uVar34 & 0xff);
                pcVar35 = *(char **)(iVar20 + uVar21 * 4);
                if (local_50 <= puVar32) {
                  uVar39 = uVar39 + 1;
                  HintPreloadData(puVar16 + 0x10);
                  HintPreloadData(puVar16 + 0x20);
                  local_50 = local_50 + 0x20;
                }
                if (puVar41 <= puVar25) goto LAB_017ba164;
                local_60 = (uint *)((int)puVar42 - iVar9);
                puVar23 = puVar16;
                puVar10 = puVar42;
                puVar42 = puVar32;
                puVar16 = puVar25;
              }
              if (uVar39 < 5) {
                *(int *)(iVar20 + uVar21 * 4) = (int)puVar42 - iVar9;
              }
              puVar10 = puVar23;
              local_60 = (uint *)iVar29;
LAB_017b9f08:
              puVar16 = (uint *)(pcVar35 + iVar9);
              puVar23 = (uint *)((int)puVar10 - (int)puVar16);
              local_50 = (uint *)((int)puVar23 + 3);
              bVar45 = local_80 <= puVar16;
              bVar44 = puVar16 == local_80;
              if (bVar45 && !bVar44) {
                bVar45 = param_4 <= puVar10;
                bVar44 = puVar10 == param_4;
              }
              if (!bVar45 || bVar44) {
                iVar29 = 4;
                local_70 = local_68;
                local_68 = puVar23;
              }
              else {
                iVar29 = 4;
                puVar42 = puVar10;
                puVar25 = puVar16;
                do {
                  puVar10 = (uint *)((int)puVar42 + -1);
                  puVar16 = (uint *)((int)puVar25 + -1);
                  if (*(char *)puVar10 != *(char *)puVar16) {
                    local_70 = local_68;
                    puVar16 = puVar25;
                    puVar10 = puVar42;
                    local_68 = puVar23;
                    goto LAB_017b7df4;
                  }
                  iVar29 = iVar29 + 1;
                  puVar42 = puVar10;
                  puVar25 = puVar16;
                } while (param_4 < puVar10 && local_80 < puVar16);
                local_70 = local_68;
                local_68 = puVar23;
              }
LAB_017b7df4:
              puVar25 = (uint *)((int)puVar10 + iVar29);
              puVar42 = (uint *)((int)puVar16 + iVar29);
              puVar23 = puVar25;
              if (puVar25 < puVar15) {
                if (*(uint *)((int)puVar16 + iVar29) == *(uint *)((int)puVar10 + iVar29)) {
                  do {
                    puVar23 = puVar23 + 1;
                    puVar42 = puVar42 + 1;
                    if (puVar15 <= puVar23) goto LAB_017b938c;
                  } while (*puVar42 == *puVar23);
                  uVar21 = *puVar42 ^ *puVar23;
                  bVar6 = (byte)uVar21;
                  bVar7 = (byte)(uVar21 >> 8);
                  bVar8 = (byte)(uVar21 >> 0x10);
                  bVar3 = (byte)(uVar21 >> 0x18);
                  pcVar35 = (char *)((int)puVar23 +
                                    (((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                      bVar6 >> 1 & 1) << 1 |
                                                                     bVar6 >> 2 & 1) << 1 |
                                                                    bVar6 >> 3 & 1) << 1 |
                                                                   bVar6 >> 4 & 1) << 1 |
                                                                  bVar6 >> 5 & 1) << 1 |
                                                                 bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                    << 0x18 | (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                                bVar7 >> 1 & 1) << 1
                                                                               | bVar7 >> 2 & 1) <<
                                                                               1 | bVar7 >> 3 & 1)
                                                                              << 1 | bVar7 >> 4 & 1)
                                                                             << 1 | bVar7 >> 5 & 1)
                                                                            << 1 | bVar7 >> 6 & 1)
                                                                           << 1 | bVar7 >> 7) <<
                                                              0x10 |
                                                    (uint)(byte)((((((((bVar8 & 1) << 1 |
                                                                      bVar8 >> 1 & 1) << 1 |
                                                                     bVar8 >> 2 & 1) << 1 |
                                                                    bVar8 >> 3 & 1) << 1 |
                                                                   bVar8 >> 4 & 1) << 1 |
                                                                  bVar8 >> 5 & 1) << 1 |
                                                                 bVar8 >> 6 & 1) << 1 | bVar8 >> 7)
                                                    << 8 | (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                             bVar3 >> 1 & 1) << 1 |
                                                                            bVar3 >> 2 & 1) << 1 |
                                                                           bVar3 >> 3 & 1) << 1 |
                                                                          bVar3 >> 4 & 1) << 1 |
                                                                         bVar3 >> 5 & 1) << 1 |
                                                                        bVar3 >> 6 & 1) << 1 |
                                                                       bVar3 >> 7)) >> 3) -
                                    (int)puVar25));
                }
                else {
                  uVar21 = *(uint *)((int)puVar16 + iVar29) ^ *(uint *)((int)puVar10 + iVar29);
                  bVar6 = (byte)uVar21;
                  bVar7 = (byte)(uVar21 >> 8);
                  bVar8 = (byte)(uVar21 >> 0x10);
                  bVar3 = (byte)(uVar21 >> 0x18);
                  pcVar35 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                     bVar6 >> 1 & 1) << 1 |
                                                                    bVar6 >> 2 & 1) << 1 |
                                                                   bVar6 >> 3 & 1) << 1 |
                                                                  bVar6 >> 4 & 1) << 1 |
                                                                 bVar6 >> 5 & 1) << 1 |
                                                                bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                   << 0x18 | (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                               bVar7 >> 1 & 1) << 1
                                                                              | bVar7 >> 2 & 1) << 1
                                                                             | bVar7 >> 3 & 1) << 1
                                                                            | bVar7 >> 4 & 1) << 1 |
                                                                           bVar7 >> 5 & 1) << 1 |
                                                                          bVar7 >> 6 & 1) << 1 |
                                                                         bVar7 >> 7) << 0x10 |
                                                   (uint)(byte)((((((((bVar8 & 1) << 1 |
                                                                     bVar8 >> 1 & 1) << 1 |
                                                                    bVar8 >> 2 & 1) << 1 |
                                                                   bVar8 >> 3 & 1) << 1 |
                                                                  bVar8 >> 4 & 1) << 1 |
                                                                 bVar8 >> 5 & 1) << 1 |
                                                                bVar8 >> 6 & 1) << 1 | bVar8 >> 7)
                                                   << 8 | (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                            bVar3 >> 1 & 1) << 1 |
                                                                           bVar3 >> 2 & 1) << 1 |
                                                                          bVar3 >> 3 & 1) << 1 |
                                                                         bVar3 >> 4 & 1) << 1 |
                                                                        bVar3 >> 5 & 1) << 1 |
                                                                       bVar3 >> 6 & 1) << 1 |
                                                                      bVar3 >> 7)) >> 3);
                }
              }
              else {
LAB_017b938c:
                if (puVar23 < (uint *)((int)puVar40 + -1)) {
                  if ((short)*puVar42 == (short)*puVar23) {
                    puVar42 = (uint *)((int)puVar42 + 2);
                    puVar23 = (uint *)((int)puVar23 + 2);
                  }
                }
                if ((puVar23 < puVar40) && ((char)*puVar42 == (char)*puVar23)) {
                  puVar23 = (uint *)((int)puVar23 + 1);
                }
                pcVar35 = (char *)((int)puVar23 - (int)puVar25);
              }
              pcVar35 = pcVar35 + iVar29;
              uVar21 = (int)puVar10 - (int)param_4;
              puVar16 = puVar40 + -8;
              puVar23 = (uint *)param_2[3];
              if (puVar16 < puVar10) {
                FUN_017b3404(puVar23,param_4,puVar10,puVar16);
LAB_017b9d8c:
                param_2[3] = param_2[3] + uVar21;
                puVar24 = (undefined4 *)param_2[1];
                if (0xffff < uVar21) {
                  param_2[10] = (int)((int)puVar24 - *param_2) >> 3;
                  param_2[9] = 1;
                }
              }
              else {
                uVar38 = *param_4;
                uVar39 = param_4[1];
                uVar36 = param_4[2];
                puVar23[3] = param_4[3];
                puVar23[2] = uVar36;
                *puVar23 = uVar38;
                puVar23[1] = uVar39;
                uVar38 = param_2[3];
                if (0x10 < uVar21) {
                  uVar39 = param_4[5];
                  uVar36 = param_4[6];
                  uVar13 = param_4[7];
                  *(uint *)(uVar38 + 0x10) = param_4[4];
                  *(uint *)(uVar38 + 0x14) = uVar39;
                  *(uint *)(uVar38 + 0x18) = uVar36;
                  *(uint *)(uVar38 + 0x1c) = uVar13;
                  if (0x10 < (int)(uVar21 - 0x10)) {
                    puVar23 = param_4 + 0x10;
                    puVar42 = (uint *)(uVar38 + 0x20);
                    do {
                      uVar39 = puVar23[-7];
                      uVar36 = puVar23[-6];
                      puVar25 = puVar42 + 8;
                      uVar13 = puVar23[-5];
                      *puVar42 = puVar23[-8];
                      puVar42[1] = uVar39;
                      puVar42[2] = uVar36;
                      puVar42[3] = uVar13;
                      uVar39 = puVar23[-3];
                      uVar36 = puVar23[-2];
                      uVar13 = puVar23[-1];
                      puVar42[4] = puVar23[-4];
                      puVar42[5] = uVar39;
                      puVar42[6] = uVar36;
                      puVar42[7] = uVar13;
                      puVar23 = puVar23 + 8;
                      puVar42 = puVar25;
                    } while (puVar25 < (uint *)(uVar38 + uVar21));
                  }
                  goto LAB_017b9d8c;
                }
                param_2[3] = uVar38 + uVar21;
                puVar24 = (undefined4 *)param_2[1];
              }
              *puVar24 = local_50;
              *(short *)(puVar24 + 1) = (short)uVar21;
              if ((char *)0xffff < pcVar35 + -3) {
                param_2[10] = (int)((int)puVar24 - *param_2) >> 3;
                param_2[9] = 2;
              }
              *(short *)((int)puVar24 + 6) = (short)(pcVar35 + -3);
              param_4 = (uint *)((int)puVar10 + (int)pcVar35);
              param_2[1] = (uint)(puVar24 + 2);
              if (param_4 <= puVar41) {
                *(int *)(iVar20 + ((uint)(*(int *)(iVar9 + (int)local_60 + 2) * -0x61c8864f) >>
                                  (uVar34 & 0xff)) * 4) = (int)local_60 + 2;
                *(int *)(iVar20 + ((uint)(*(int *)((int)param_4 + -2) * -0x61c8864f) >>
                                  (uVar34 & 0xff)) * 4) = ((int)param_4 + -2) - iVar9;
                puVar10 = param_4;
                if (local_70 != (uint *)0x0) {
                  while( true ) {
                    puVar42 = local_68;
                    puVar23 = local_70;
                    param_4 = puVar10;
                    if (*puVar10 != *(uint *)((int)puVar10 - (int)local_70)) break;
                    puVar32 = puVar10 + 1;
                    puVar25 = (uint *)((int)puVar10 + (4 - (int)local_70));
                    if (puVar32 < puVar15) {
                      uVar21 = *(uint *)((int)puVar10 + (4 - (int)local_70));
                      if (uVar21 == puVar10[1]) {
                        puVar27 = puVar10 + 2;
                        while( true ) {
                          puVar25 = puVar25 + 1;
                          if (puVar15 <= puVar27) break;
                          if (*puVar25 != *puVar27) {
                            uVar21 = *puVar25 ^ *puVar27;
                            bVar6 = (byte)uVar21;
                            bVar7 = (byte)(uVar21 >> 8);
                            bVar8 = (byte)(uVar21 >> 0x10);
                            bVar3 = (byte)(uVar21 >> 0x18);
                            pcVar35 = (char *)((int)puVar27 +
                                              (((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                                bVar6 >> 1 & 1) << 1
                                                                               | bVar6 >> 2 & 1) <<
                                                                               1 | bVar6 >> 3 & 1)
                                                                              << 1 | bVar6 >> 4 & 1)
                                                                             << 1 | bVar6 >> 5 & 1)
                                                                            << 1 | bVar6 >> 6 & 1)
                                                                           << 1 | bVar6 >> 7) <<
                                                              0x18 | (uint)(byte)((((((((bVar7 & 1)
                                                                                        << 1 | bVar7
                                                                                               >> 1 
                                                  & 1) << 1 | bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1)
                                                  << 1 | bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1) << 1
                                                  | bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 0x10 |
                                                  (uint)(byte)((((((((bVar8 & 1) << 1 |
                                                                    bVar8 >> 1 & 1) << 1 |
                                                                   bVar8 >> 2 & 1) << 1 |
                                                                  bVar8 >> 3 & 1) << 1 |
                                                                 bVar8 >> 4 & 1) << 1 |
                                                                bVar8 >> 5 & 1) << 1 |
                                                               bVar8 >> 6 & 1) << 1 | bVar8 >> 7) <<
                                                  8 | (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                        bVar3 >> 1 & 1) << 1 |
                                                                       bVar3 >> 2 & 1) << 1 |
                                                                      bVar3 >> 3 & 1) << 1 |
                                                                     bVar3 >> 4 & 1) << 1 |
                                                                    bVar3 >> 5 & 1) << 1 |
                                                                   bVar3 >> 6 & 1) << 1 | bVar3 >> 7
                                                                  )) >> 3) - (int)puVar32));
                            goto LAB_017b900c;
                          }
                          puVar27 = puVar27 + 1;
                        }
                        goto LAB_017ba638;
                      }
                      uVar21 = uVar21 ^ puVar10[1];
                      bVar6 = (byte)uVar21;
                      bVar7 = (byte)(uVar21 >> 8);
                      bVar8 = (byte)(uVar21 >> 0x10);
                      bVar3 = (byte)(uVar21 >> 0x18);
                      pcVar35 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                         bVar6 >> 1 & 1) << 1 |
                                                                        bVar6 >> 2 & 1) << 1 |
                                                                       bVar6 >> 3 & 1) << 1 |
                                                                      bVar6 >> 4 & 1) << 1 |
                                                                     bVar6 >> 5 & 1) << 1 |
                                                                    bVar6 >> 6 & 1) << 1 |
                                                                   bVar6 >> 7) << 0x18 |
                                                       (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                         bVar7 >> 1 & 1) << 1 |
                                                                        bVar7 >> 2 & 1) << 1 |
                                                                       bVar7 >> 3 & 1) << 1 |
                                                                      bVar7 >> 4 & 1) << 1 |
                                                                     bVar7 >> 5 & 1) << 1 |
                                                                    bVar7 >> 6 & 1) << 1 |
                                                                   bVar7 >> 7) << 0x10 |
                                                       (uint)(byte)((((((((bVar8 & 1) << 1 |
                                                                         bVar8 >> 1 & 1) << 1 |
                                                                        bVar8 >> 2 & 1) << 1 |
                                                                       bVar8 >> 3 & 1) << 1 |
                                                                      bVar8 >> 4 & 1) << 1 |
                                                                     bVar8 >> 5 & 1) << 1 |
                                                                    bVar8 >> 6 & 1) << 1 |
                                                                   bVar8 >> 7) << 8 |
                                                       (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                         bVar3 >> 1 & 1) << 1 |
                                                                        bVar3 >> 2 & 1) << 1 |
                                                                       bVar3 >> 3 & 1) << 1 |
                                                                      bVar3 >> 4 & 1) << 1 |
                                                                     bVar3 >> 5 & 1) << 1 |
                                                                    bVar3 >> 6 & 1) << 1 |
                                                                   bVar3 >> 7)) >> 3);
                    }
                    else {
                      puVar27 = puVar32;
LAB_017ba638:
                      if (puVar27 < (uint *)((int)puVar40 + -1)) {
                        if ((short)*puVar25 == (short)*puVar27) {
                          puVar25 = (uint *)((int)puVar25 + 2);
                          puVar27 = (uint *)((int)puVar27 + 2);
                        }
                      }
                      if ((puVar27 < puVar40) && ((char)*puVar25 == (char)*puVar27)) {
                        puVar27 = (uint *)((int)puVar27 + 1);
                      }
                      pcVar35 = (char *)((int)puVar27 - (int)puVar32);
                    }
LAB_017b900c:
                    param_4 = (uint *)((int)puVar10 + (int)(pcVar35 + 4));
                    *(int *)(iVar20 + (*puVar10 * -0x61c8864f >> (uVar34 & 0xff)) * 4) =
                         (int)puVar10 - iVar9;
                    puVar25 = (uint *)param_2[3];
                    if (puVar16 < puVar10) {
                      FUN_017b3404(puVar25,puVar10,puVar10,puVar16);
                    }
                    else {
                      uVar21 = puVar10[1];
                      uVar38 = puVar10[2];
                      uVar39 = puVar10[3];
                      *puVar25 = *puVar10;
                      puVar25[1] = uVar21;
                      puVar25[2] = uVar38;
                      puVar25[3] = uVar39;
                    }
                    puVar24 = (undefined4 *)param_2[1];
                    *(undefined2 *)(puVar24 + 1) = 0;
                    *puVar24 = 1;
                    uVar4 = SUB42(pcVar35 + 1,0);
                    if (pcVar35 + 1 < (char *)0x10000) {
                      *(undefined2 *)((int)puVar24 + 6) = uVar4;
                      param_2[1] = (uint)(puVar24 + 2);
                    }
                    else {
                      param_2[10] = (int)((int)puVar24 - *param_2) >> 3;
                      param_2[9] = 2;
                      *(undefined2 *)((int)puVar24 + 6) = uVar4;
                      param_2[1] = (uint)(puVar24 + 2);
                    }
                    if (puVar41 < param_4) {
                      local_68 = local_70;
                      local_70 = puVar42;
                      break;
                    }
                    local_70 = local_68;
                    local_68 = puVar23;
                    puVar10 = param_4;
                  }
                }
              }
              puVar16 = (uint *)((int)param_4 + 3);
              if (puVar41 <= puVar16) goto LAB_017ba450;
              local_60 = (uint *)((int)param_4 - iVar9);
              puVar10 = param_4;
            } while( true );
          }
          puVar12 = (uint *)0x0;
        }
        else {
          if ((uint *)((int)puVar10 + 3) < puVar41) {
            puVar12 = (uint *)0x0;
            local_84 = (uint *)0x0;
            puVar43 = puVar12;
            goto LAB_017b7c44;
          }
          if (local_68 != (uint *)0x0) {
            puVar43 = (uint *)0x0;
            goto LAB_017ba334;
          }
        }
LAB_017ba174:
        puVar43 = puVar12;
        if (local_70 != (uint *)0x0) {
          puVar43 = local_70;
        }
        *param_3 = local_68;
        puVar15 = local_68;
      }
      pcVar35 = (char *)((int)puVar40 - (int)param_4);
      param_3[1] = puVar43;
      goto LAB_017b7298;
    }
    if (puVar12 < puVar43) {
      local_54 = (char *)((int)param_4 + (iVar29 - (int)puVar12));
    }
    else {
      local_54 = pcVar35;
    }
    puVar10 = (uint *)((int)param_4 + param_5);
    puVar40 = puVar10 + -2;
    puVar41 = (uint *)*param_3;
    puVar43 = (uint *)param_3[1];
    local_60 = param_4;
    if (*(int *)(param_1 + 0x18) == 0) {
      local_88 = (uint *)(local_54 + iVar9);
      if (param_4 == local_88) {
        local_60 = (uint *)((int)param_4 + 1);
      }
      local_4c = (char *)((int)local_60 - iVar9);
      puVar16 = (uint *)((int)local_4c - (int)pcVar35);
      if (puVar12 <= (uint *)((int)local_4c - (int)pcVar35)) {
        puVar16 = puVar12;
      }
    }
    else {
      local_88 = (uint *)(pcVar35 + iVar9);
      if (param_4 == local_88) {
        local_60 = (uint *)((int)param_4 + 1);
      }
      local_4c = (char *)((int)local_60 - iVar9);
      puVar16 = (uint *)((int)local_4c - (int)pcVar35);
      local_54 = pcVar35;
    }
    local_7c = puVar41;
    if (puVar43 <= puVar16) {
      local_84 = puVar43;
      if (puVar41 <= puVar16) {
        if ((uint *)((int)local_60 + 3) < puVar40) {
          puVar16 = (uint *)0x0;
          puVar12 = puVar16;
          puVar43 = puVar16;
          goto LAB_017b7fb8;
        }
        puVar12 = (uint *)0x0;
        puVar43 = (uint *)0x0;
        local_60 = puVar41;
        if (puVar41 != (uint *)0x0) {
          local_60 = (uint *)&DAT_00000001;
        }
        goto LAB_017ba318;
      }
      if (puVar40 <= (uint *)((int)local_60 + 3)) {
        puVar43 = (uint *)0x0;
        goto LAB_017ba130;
      }
      puVar12 = (uint *)0x0;
LAB_017b89b0:
      puVar16 = (uint *)(uint)(puVar41 != (uint *)0x0);
      local_7c = (uint *)0x0;
      puVar43 = puVar41;
LAB_017b7fb8:
      puVar41 = (uint *)((int)local_60 + 3);
      uVar21 = 0x20 - (int)puVar15;
      uVar34 = 0x40 - (int)puVar15;
      puVar23 = puVar15 + -8;
      do {
        local_58 = local_60 + 0x20;
        iVar31 = -(int)local_7c;
        puVar42 = local_7c;
        if (local_7c != (uint *)0x0) {
          puVar42 = (uint *)&DAT_00000001;
        }
        uVar39 = 2;
        lVar5 = (ulonglong)*local_60 * 0xbb000000;
        uVar38 = local_60[1] * -0x45000000 + *local_60 * -0x30e44324 +
                 (int)((ulonglong)lVar5 >> 0x20);
        uVar38 = (uint)lVar5 >> (uVar34 & 0xff) | uVar38 << ((uint)puVar23 & 0xff) |
                 uVar38 >> (uVar21 & 0xff);
        lVar5 = (ulonglong)*(uint *)((int)local_60 + 1) * 0xbb000000;
        uVar36 = *(int *)((int)local_60 + 5) * -0x45000000 +
                 *(uint *)((int)local_60 + 1) * -0x30e44324 + (int)((ulonglong)lVar5 >> 0x20);
        pcVar35 = *(char **)(iVar20 + uVar38 * 4);
        puVar15 = (uint *)((uint)lVar5 >> (uVar34 & 0xff) | uVar36 << ((uint)puVar23 & 0xff) |
                          uVar36 >> (uVar21 & 0xff));
        puVar25 = (uint *)((int)local_60 + 2);
        local_6c = (int)local_4c;
        puVar32 = (uint *)((int)local_60 + 1);
        while( true ) {
          puVar33 = puVar41;
          puVar27 = puVar25;
          uVar36 = *(uint *)((int)puVar27 + iVar31);
          *(int *)(iVar20 + uVar38 * 4) = local_6c;
          if (*puVar27 == uVar36) {
            uVar38 = (uint)puVar42 & 1;
          }
          else {
            uVar38 = 0;
          }
          if (uVar38 != 0) {
            cVar1 = *(char *)((int)puVar27 + iVar31 + -1);
            cVar2 = *(char *)((int)puVar27 + -1);
            *(int *)(iVar20 + (int)puVar15 * 4) = (int)puVar32 - iVar9;
            uVar38 = (uint)(cVar2 == cVar1);
            iVar29 = uVar38 + 4;
            local_4c = &DAT_00000001;
            puVar15 = (uint *)((int)puVar27 + (iVar31 - uVar38));
            local_60 = (uint *)((int)puVar27 - uVar38);
            goto LAB_017b821c;
          }
          if (pcVar35 < local_54) {
            uVar38 = *local_60 ^ 1;
          }
          else {
            uVar38 = *(uint *)(pcVar35 + iVar9);
          }
          iVar29 = (int)puVar32 - iVar9;
          if (uVar38 == *local_60) {
            *(int *)(iVar20 + (int)puVar15 * 4) = iVar29;
            goto LAB_017b9fa4;
          }
          uVar38 = *puVar27;
          uVar36 = puVar27[1];
          pcVar35 = *(char **)(iVar20 + (int)puVar15 * 4);
          *(int *)(iVar20 + (int)puVar15 * 4) = iVar29;
          lVar5 = (ulonglong)uVar38 * 0xbb000000;
          uVar38 = uVar36 * -0x45000000 + uVar38 * -0x30e44324 + (int)((ulonglong)lVar5 >> 0x20);
          uVar38 = (uint)lVar5 >> (uVar34 & 0xff) | uVar38 << ((uint)puVar23 & 0xff) |
                   uVar38 >> (uVar21 & 0xff);
          if (pcVar35 < local_54) {
            uVar36 = *puVar32 ^ 1;
          }
          else {
            uVar36 = *(uint *)(pcVar35 + iVar9);
          }
          if (uVar36 == *puVar32) break;
          puVar25 = (uint *)((int)puVar27 + uVar39);
          puVar41 = (uint *)((int)puVar33 + uVar39);
          pcVar35 = *(char **)(iVar20 + uVar38 * 4);
          lVar5 = (ulonglong)*puVar33 * 0xbb000000;
          uVar36 = puVar33[1] * -0x45000000 + *puVar33 * -0x30e44324 +
                   (int)((ulonglong)lVar5 >> 0x20);
          puVar15 = (uint *)((uint)lVar5 >> (uVar34 & 0xff) | uVar36 << ((uint)puVar23 & 0xff) |
                            uVar36 >> (uVar21 & 0xff));
          if (local_58 <= puVar25) {
            uVar39 = uVar39 + 1;
            HintPreloadData(puVar33 + 0x10);
            HintPreloadData(puVar33 + 0x20);
            local_58 = local_58 + 0x20;
          }
          if (puVar40 <= puVar41) {
            param_4 = local_74;
            local_60 = puVar42;
            goto LAB_017ba124;
          }
          local_6c = (int)puVar27 - iVar9;
          local_60 = puVar27;
          puVar32 = puVar33;
        }
        if (uVar39 < 5) {
          *(int *)(iVar20 + uVar38 * 4) = (int)puVar27 - iVar9;
        }
        local_6c = iVar29;
        local_60 = puVar32;
LAB_017b9fa4:
        puVar15 = (uint *)(pcVar35 + iVar9);
        puVar41 = (uint *)((int)local_60 - (int)puVar15);
        local_4c = (char *)((int)puVar41 + 3);
        bVar45 = local_88 <= puVar15;
        bVar44 = puVar15 == local_88;
        if (bVar45 && !bVar44) {
          bVar45 = local_74 <= local_60;
          bVar44 = local_60 == local_74;
        }
        if (!bVar45 || bVar44) {
          iVar29 = 4;
          local_84 = local_7c;
          local_7c = puVar41;
        }
        else {
          iVar29 = 4;
          puVar42 = local_60;
          puVar25 = puVar15;
          do {
            puVar15 = (uint *)((int)puVar25 + -1);
            local_60 = (uint *)((int)puVar42 + -1);
            if (*(char *)local_60 != *(char *)puVar15) {
              local_84 = local_7c;
              puVar15 = puVar25;
              local_7c = puVar41;
              local_60 = puVar42;
              goto LAB_017b821c;
            }
            iVar29 = iVar29 + 1;
            puVar42 = local_60;
            puVar25 = puVar15;
          } while (local_74 < local_60 && local_88 < puVar15);
          local_84 = local_7c;
          local_7c = puVar41;
        }
LAB_017b821c:
        puVar25 = (uint *)((int)local_60 + iVar29);
        puVar42 = (uint *)((int)puVar15 + iVar29);
        puVar32 = (uint *)((int)puVar10 + -3);
        puVar41 = puVar25;
        if (puVar25 < puVar32) {
          if (*(uint *)((int)puVar15 + iVar29) == *(uint *)((int)local_60 + iVar29)) {
            do {
              puVar41 = puVar41 + 1;
              puVar42 = puVar42 + 1;
              if (puVar32 <= puVar41) goto LAB_017b93e4;
            } while (*puVar42 == *puVar41);
            uVar38 = *puVar42 ^ *puVar41;
            bVar6 = (byte)uVar38;
            bVar7 = (byte)(uVar38 >> 8);
            bVar8 = (byte)(uVar38 >> 0x10);
            bVar3 = (byte)(uVar38 >> 0x18);
            pcVar35 = (char *)((int)puVar41 +
                              (((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                << 1 | bVar6 >> 2 & 1) << 1 |
                                                              bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1)
                                                             << 1 | bVar6 >> 5 & 1) << 1 |
                                                           bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                              0x18 | (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                       bVar7 >> 1 & 1) << 1 |
                                                                      bVar7 >> 2 & 1) << 1 |
                                                                     bVar7 >> 3 & 1) << 1 |
                                                                    bVar7 >> 4 & 1) << 1 |
                                                                   bVar7 >> 5 & 1) << 1 |
                                                                  bVar7 >> 6 & 1) << 1 | bVar7 >> 7)
                                                     << 0x10 |
                                              (uint)(byte)((((((((bVar8 & 1) << 1 | bVar8 >> 1 & 1)
                                                                << 1 | bVar8 >> 2 & 1) << 1 |
                                                              bVar8 >> 3 & 1) << 1 | bVar8 >> 4 & 1)
                                                             << 1 | bVar8 >> 5 & 1) << 1 |
                                                           bVar8 >> 6 & 1) << 1 | bVar8 >> 7) << 8 |
                                              (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
                                                                << 1 | bVar3 >> 2 & 1) << 1 |
                                                              bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1)
                                                             << 1 | bVar3 >> 5 & 1) << 1 |
                                                           bVar3 >> 6 & 1) << 1 | bVar3 >> 7)) >> 3)
                              - (int)puVar25));
          }
          else {
            uVar38 = *(uint *)((int)puVar15 + iVar29) ^ *(uint *)((int)local_60 + iVar29);
            bVar6 = (byte)uVar38;
            bVar7 = (byte)(uVar38 >> 8);
            bVar8 = (byte)(uVar38 >> 0x10);
            bVar3 = (byte)(uVar38 >> 0x18);
            pcVar35 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                               << 1 | bVar6 >> 2 & 1) << 1 |
                                                             bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1)
                                                            << 1 | bVar6 >> 5 & 1) << 1 |
                                                          bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x18
                                             | (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1)
                                                                 << 1 | bVar7 >> 2 & 1) << 1 |
                                                               bVar7 >> 3 & 1) << 1 | bVar7 >> 4 & 1
                                                              ) << 1 | bVar7 >> 5 & 1) << 1 |
                                                            bVar7 >> 6 & 1) << 1 | bVar7 >> 7) <<
                                               0x10 | (uint)(byte)((((((((bVar8 & 1) << 1 |
                                                                        bVar8 >> 1 & 1) << 1 |
                                                                       bVar8 >> 2 & 1) << 1 |
                                                                      bVar8 >> 3 & 1) << 1 |
                                                                     bVar8 >> 4 & 1) << 1 |
                                                                    bVar8 >> 5 & 1) << 1 |
                                                                   bVar8 >> 6 & 1) << 1 | bVar8 >> 7
                                                                  ) << 8 |
                                             (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
                                                               << 1 | bVar3 >> 2 & 1) << 1 |
                                                             bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1)
                                                            << 1 | bVar3 >> 5 & 1) << 1 |
                                                          bVar3 >> 6 & 1) << 1 | bVar3 >> 7)) >> 3);
          }
        }
        else {
LAB_017b93e4:
          if (puVar41 < (uint *)((int)puVar10 + -1)) {
            if ((short)*puVar42 == (short)*puVar41) {
              puVar41 = (uint *)((int)puVar41 + 2);
              puVar42 = (uint *)((int)puVar42 + 2);
            }
          }
          if ((puVar41 < puVar10) && ((char)*puVar42 == (char)*puVar41)) {
            puVar41 = (uint *)((int)puVar41 + 1);
          }
          pcVar35 = (char *)((int)puVar41 - (int)puVar25);
        }
        pcVar35 = pcVar35 + iVar29;
        puVar41 = puVar10 + -8;
        puVar15 = (uint *)param_2[3];
        uVar38 = (int)local_60 - (int)local_74;
        if (puVar41 < local_60) {
          FUN_017b3404(puVar15,local_74,local_60,puVar41);
LAB_017b9b78:
          param_2[3] = param_2[3] + uVar38;
          puVar24 = (undefined4 *)param_2[1];
          if (0xffff < uVar38) {
            param_2[10] = (int)((int)puVar24 - *param_2) >> 3;
            param_2[9] = 1;
          }
        }
        else {
          uVar39 = *local_74;
          uVar36 = local_74[1];
          uVar13 = local_74[2];
          puVar15[3] = local_74[3];
          *puVar15 = uVar39;
          puVar15[1] = uVar36;
          puVar15[2] = uVar13;
          uVar39 = param_2[3];
          if (0x10 < uVar38) {
            uVar36 = local_74[5];
            uVar13 = local_74[6];
            uVar22 = local_74[7];
            *(uint *)(uVar39 + 0x10) = local_74[4];
            *(uint *)(uVar39 + 0x14) = uVar36;
            *(uint *)(uVar39 + 0x18) = uVar13;
            *(uint *)(uVar39 + 0x1c) = uVar22;
            if (0x10 < (int)(uVar38 - 0x10)) {
              puVar15 = (uint *)(uVar39 + 0x20);
              puVar42 = local_74 + 0x10;
              do {
                uVar36 = puVar42[-7];
                uVar13 = puVar42[-6];
                puVar25 = puVar15 + 8;
                uVar22 = puVar42[-5];
                *puVar15 = puVar42[-8];
                puVar15[1] = uVar36;
                puVar15[2] = uVar13;
                puVar15[3] = uVar22;
                uVar36 = puVar42[-3];
                uVar13 = puVar42[-2];
                uVar22 = puVar42[-1];
                puVar15[4] = puVar42[-4];
                puVar15[5] = uVar36;
                puVar15[6] = uVar13;
                puVar15[7] = uVar22;
                puVar15 = puVar25;
                puVar42 = puVar42 + 8;
              } while (puVar25 < (uint *)(uVar39 + uVar38));
            }
            goto LAB_017b9b78;
          }
          param_2[3] = uVar39 + uVar38;
          puVar24 = (undefined4 *)param_2[1];
        }
        *puVar24 = local_4c;
        *(short *)(puVar24 + 1) = (short)uVar38;
        if ((char *)0xffff < pcVar35 + -3) {
          param_2[10] = (int)((int)puVar24 - *param_2) >> 3;
          param_2[9] = 2;
        }
        *(short *)((int)puVar24 + 6) = (short)(pcVar35 + -3);
        param_2[1] = (uint)(puVar24 + 2);
        puVar42 = (uint *)((int)local_60 + (int)pcVar35);
        puVar15 = local_60;
        local_60 = puVar42;
        if (puVar42 <= puVar40) {
          puVar25 = (uint *)(local_6c + 2);
          iVar31 = *(int *)((int)puVar42 + 2);
          uVar38 = *(uint *)((int)puVar42 + -2);
          lVar5 = (ulonglong)*(uint *)(iVar9 + (int)puVar25) * 0xbb000000;
          uVar39 = *(int *)((int)puVar25 + iVar9 + 4) * -0x45000000 +
                   *(uint *)(iVar9 + (int)puVar25) * -0x30e44324 + (int)((ulonglong)lVar5 >> 0x20);
          *(uint **)(iVar20 + ((uint)lVar5 >> (uVar34 & 0xff) | uVar39 << ((uint)puVar23 & 0xff) |
                              uVar39 >> (uVar21 & 0xff)) * 4) = puVar25;
          lVar5 = (ulonglong)uVar38 * 0xbb000000;
          if (local_84 != (uint *)0x0) {
            puVar25 = puVar42;
          }
          puVar15 = (uint *)(iVar31 * -0x45000000 + uVar38 * -0x30e44324 +
                            (int)((ulonglong)lVar5 >> 0x20));
          *(int *)(iVar20 + ((uint)lVar5 >> (uVar34 & 0xff) | (int)puVar15 << ((uint)puVar23 & 0xff)
                            | (uint)puVar15 >> (uVar21 & 0xff)) * 4) = ((int)puVar42 + -2) - iVar9;
          if (local_84 != (uint *)0x0) {
            while( true ) {
              puVar27 = local_7c;
              puVar42 = local_84;
              if (*puVar25 != *(uint *)((int)puVar25 - (int)local_84)) break;
              puVar33 = puVar25 + 1;
              puVar15 = (uint *)((int)puVar25 + (4 - (int)local_84));
              if (puVar33 < puVar32) {
                uVar38 = *(uint *)((int)puVar25 + (4 - (int)local_84));
                if (uVar38 == puVar25[1]) {
                  puVar28 = puVar25 + 2;
                  while( true ) {
                    puVar15 = puVar15 + 1;
                    if (puVar32 <= puVar28) break;
                    if (*puVar15 != *puVar28) {
                      uVar38 = *puVar15 ^ *puVar28;
                      bVar6 = (byte)uVar38;
                      bVar7 = (byte)(uVar38 >> 8);
                      bVar8 = (byte)(uVar38 >> 0x10);
                      bVar3 = (byte)(uVar38 >> 0x18);
                      pcVar35 = (char *)((int)puVar28 +
                                        (((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                          bVar6 >> 1 & 1) << 1 |
                                                                         bVar6 >> 2 & 1) << 1 |
                                                                        bVar6 >> 3 & 1) << 1 |
                                                                       bVar6 >> 4 & 1) << 1 |
                                                                      bVar6 >> 5 & 1) << 1 |
                                                                     bVar6 >> 6 & 1) << 1 |
                                                                    bVar6 >> 7) << 0x18 |
                                                        (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                          bVar7 >> 1 & 1) << 1 |
                                                                         bVar7 >> 2 & 1) << 1 |
                                                                        bVar7 >> 3 & 1) << 1 |
                                                                       bVar7 >> 4 & 1) << 1 |
                                                                      bVar7 >> 5 & 1) << 1 |
                                                                     bVar7 >> 6 & 1) << 1 |
                                                                    bVar7 >> 7) << 0x10 |
                                                        (uint)(byte)((((((((bVar8 & 1) << 1 |
                                                                          bVar8 >> 1 & 1) << 1 |
                                                                         bVar8 >> 2 & 1) << 1 |
                                                                        bVar8 >> 3 & 1) << 1 |
                                                                       bVar8 >> 4 & 1) << 1 |
                                                                      bVar8 >> 5 & 1) << 1 |
                                                                     bVar8 >> 6 & 1) << 1 |
                                                                    bVar8 >> 7) << 8 |
                                                        (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                          bVar3 >> 1 & 1) << 1 |
                                                                         bVar3 >> 2 & 1) << 1 |
                                                                        bVar3 >> 3 & 1) << 1 |
                                                                       bVar3 >> 4 & 1) << 1 |
                                                                      bVar3 >> 5 & 1) << 1 |
                                                                     bVar3 >> 6 & 1) << 1 |
                                                                    bVar3 >> 7)) >> 3) -
                                        (int)puVar33));
                      goto LAB_017b8ea0;
                    }
                    puVar28 = puVar28 + 1;
                  }
                  goto LAB_017ba748;
                }
                uVar38 = uVar38 ^ puVar25[1];
                bVar6 = (byte)uVar38;
                bVar7 = (byte)(uVar38 >> 8);
                bVar8 = (byte)(uVar38 >> 0x10);
                bVar3 = (byte)(uVar38 >> 0x18);
                pcVar35 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                   bVar6 >> 1 & 1) << 1 |
                                                                  bVar6 >> 2 & 1) << 1 |
                                                                 bVar6 >> 3 & 1) << 1 |
                                                                bVar6 >> 4 & 1) << 1 |
                                                               bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1
                                                              ) << 1 | bVar6 >> 7) << 0x18 |
                                                 (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                   bVar7 >> 1 & 1) << 1 |
                                                                  bVar7 >> 2 & 1) << 1 |
                                                                 bVar7 >> 3 & 1) << 1 |
                                                                bVar7 >> 4 & 1) << 1 |
                                                               bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1
                                                              ) << 1 | bVar7 >> 7) << 0x10 |
                                                 (uint)(byte)((((((((bVar8 & 1) << 1 |
                                                                   bVar8 >> 1 & 1) << 1 |
                                                                  bVar8 >> 2 & 1) << 1 |
                                                                 bVar8 >> 3 & 1) << 1 |
                                                                bVar8 >> 4 & 1) << 1 |
                                                               bVar8 >> 5 & 1) << 1 | bVar8 >> 6 & 1
                                                              ) << 1 | bVar8 >> 7) << 8 |
                                                 (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                   bVar3 >> 1 & 1) << 1 |
                                                                  bVar3 >> 2 & 1) << 1 |
                                                                 bVar3 >> 3 & 1) << 1 |
                                                                bVar3 >> 4 & 1) << 1 |
                                                               bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1
                                                              ) << 1 | bVar3 >> 7)) >> 3);
              }
              else {
                puVar28 = puVar33;
LAB_017ba748:
                if (puVar28 < (uint *)((int)puVar10 + -1)) {
                  if ((short)*puVar15 == (short)*puVar28) {
                    puVar15 = (uint *)((int)puVar15 + 2);
                    puVar28 = (uint *)((int)puVar28 + 2);
                  }
                }
                if ((puVar28 < puVar10) && ((char)*puVar15 == (char)*puVar28)) {
                  puVar28 = (uint *)((int)puVar28 + 1);
                }
                pcVar35 = (char *)((int)puVar28 - (int)puVar33);
              }
LAB_017b8ea0:
              local_60 = (uint *)((int)puVar25 + (int)(pcVar35 + 4));
              lVar5 = (ulonglong)*puVar25 * 0xbb000000;
              uVar38 = puVar25[1] * -0x45000000 + *puVar25 * -0x30e44324 +
                       (int)((ulonglong)lVar5 >> 0x20);
              *(int *)(iVar20 + ((uint)lVar5 >> (uVar34 & 0xff) | uVar38 << ((uint)puVar23 & 0xff) |
                                uVar38 >> (uVar21 & 0xff)) * 4) = (int)puVar25 - iVar9;
              puVar15 = (uint *)param_2[3];
              if (puVar41 < puVar25) {
                FUN_017b3404(puVar15,puVar25,puVar25,puVar41);
              }
              else {
                uVar38 = puVar25[1];
                uVar39 = puVar25[2];
                uVar36 = puVar25[3];
                *puVar15 = *puVar25;
                puVar15[1] = uVar38;
                puVar15[2] = uVar39;
                puVar15[3] = uVar36;
              }
              puVar24 = (undefined4 *)param_2[1];
              *(undefined2 *)(puVar24 + 1) = 0;
              *puVar24 = 1;
              uVar4 = SUB42(pcVar35 + 1,0);
              if (pcVar35 + 1 < (char *)0x10000) {
                *(undefined2 *)((int)puVar24 + 6) = uVar4;
                param_2[1] = (uint)(puVar24 + 2);
              }
              else {
                param_2[10] = (int)((int)puVar24 - *param_2) >> 3;
                param_2[9] = 2;
                *(undefined2 *)((int)puVar24 + 6) = uVar4;
                param_2[1] = (uint)(puVar24 + 2);
              }
              if (puVar40 < local_60) {
                local_7c = local_84;
                local_84 = puVar27;
                puVar15 = param_2;
                goto LAB_017b83b4;
              }
              local_84 = local_7c;
              local_7c = puVar42;
              puVar15 = param_2;
              puVar25 = local_60;
            }
            local_60 = puVar25;
          }
        }
LAB_017b83b4:
        puVar41 = (uint *)((int)local_60 + 3);
        if (puVar40 <= puVar41) goto LAB_017ba42c;
        local_74 = local_60;
        local_4c = (char *)((int)local_60 - iVar9);
      } while( true );
    }
    puVar12 = puVar43;
    if (puVar16 < puVar41) {
      if ((uint *)((int)local_60 + 3) < puVar40) {
        local_84 = (uint *)0x0;
        goto LAB_017b89b0;
      }
    }
    else {
      if ((uint *)((int)local_60 + 3) < puVar40) {
        puVar16 = (uint *)0x0;
        local_84 = (uint *)0x0;
        puVar43 = (uint *)0x0;
        goto LAB_017b7fb8;
      }
      *param_3 = puVar41;
    }
LAB_017ba144:
    pcVar35 = (char *)((int)puVar10 - (int)param_4);
    param_3[1] = puVar43;
    goto LAB_017b7298;
  }
  if (puVar12 < puVar43) {
    local_58 = (uint *)((int)param_4 + (iVar29 - (int)puVar12));
  }
  puVar10 = (uint *)((int)param_4 + param_5);
  puVar40 = puVar10 + -2;
  local_90 = (uint *)*param_3;
  local_88 = (uint *)param_3[1];
  puVar43 = param_4;
  if (*(int *)(param_1 + 0x18) == 0) {
    local_8c = (uint *)((int)local_58 + iVar9);
    if (param_4 == local_8c) {
      puVar43 = (uint *)((int)param_4 + 1);
    }
    local_70 = (uint *)((int)puVar43 - iVar9);
    puVar41 = (uint *)((int)local_70 - (int)pcVar35);
    if (puVar12 <= (uint *)((int)local_70 - (int)pcVar35)) {
      puVar41 = puVar12;
    }
  }
  else {
    local_8c = (uint *)(pcVar35 + iVar9);
    if (param_4 == local_8c) {
      puVar43 = (uint *)((int)param_4 + 1);
    }
    local_70 = (uint *)((int)puVar43 - iVar9);
    puVar41 = (uint *)((int)local_70 - (int)pcVar35);
    local_58 = (uint *)pcVar35;
  }
  local_80 = local_90;
  if (local_88 <= puVar41) {
    if (local_90 <= puVar41) {
      if ((uint *)((int)puVar43 + 3) < puVar40) {
        local_90 = (uint *)0x0;
        local_94 = local_90;
        local_98 = local_90;
        goto LAB_017b8440;
      }
LAB_017b9970:
      local_68 = (uint *)(uint)(local_80 != (uint *)0x0);
      puVar12 = (uint *)0x0;
      puVar43 = (uint *)0x0;
      goto LAB_017b9984;
    }
    if ((uint *)((int)puVar43 + 3) < puVar40) {
      local_98 = (uint *)0x0;
      goto LAB_017b8964;
    }
LAB_017ba86c:
    local_90 = (uint *)0x0;
    goto LAB_017b9304;
  }
  local_98 = local_88;
  if (puVar41 < local_90) {
    if ((uint *)((int)puVar43 + 3) < puVar40) {
      local_88 = (uint *)0x0;
LAB_017b8964:
      local_80 = (uint *)0x0;
      local_94 = (uint *)(uint)(local_90 != (uint *)0x0);
LAB_017b8440:
      puVar12 = (uint *)((int)puVar43 + 3);
      uVar34 = 0x40 - (int)puVar15;
      puVar41 = puVar15 + -8;
      uVar21 = 0x20 - (int)puVar15;
      do {
        local_60 = puVar43 + 0x20;
        local_68 = (uint *)(uint)(local_80 != (uint *)0x0);
        iVar31 = -(int)local_80;
        local_44 = (uint *)0x2;
        lVar5 = (ulonglong)*puVar43 * 0xbf9b0000;
        uVar38 = puVar43[1] * -0x40650000 + *puVar43 * -0x30e44324 + (int)((ulonglong)lVar5 >> 0x20)
        ;
        uVar39 = (uint)lVar5 >> (uVar34 & 0xff) | uVar38 << ((uint)puVar41 & 0xff) |
                 uVar38 >> (uVar21 & 0xff);
        lVar5 = (ulonglong)*(uint *)((int)puVar43 + 1) * 0xbf9b0000;
        uVar38 = *(int *)((int)puVar43 + 5) * -0x40650000 +
                 *(uint *)((int)puVar43 + 1) * -0x30e44324 + (int)((ulonglong)lVar5 >> 0x20);
        uVar38 = (uint)lVar5 >> (uVar34 & 0xff) | uVar38 << ((uint)puVar41 & 0xff) |
                 uVar38 >> (uVar21 & 0xff);
        pcVar35 = *(char **)(iVar20 + uVar39 * 4);
        puVar15 = (uint *)((int)puVar43 + 2);
        puVar16 = (uint *)((int)puVar43 + 1);
        while( true ) {
          puVar42 = puVar12;
          puVar23 = puVar15;
          uVar36 = *(uint *)((int)puVar23 + iVar31);
          *(uint **)(iVar20 + uVar39 * 4) = local_70;
          if (*puVar23 == uVar36) {
            uVar39 = (uint)local_68;
          }
          else {
            uVar39 = 0;
          }
          if (uVar39 != 0) {
            cVar1 = *(char *)((int)puVar23 + iVar31 + -1);
            cVar2 = *(char *)((int)puVar23 + -1);
            *(int *)(iVar20 + uVar38 * 4) = (int)puVar16 - iVar9;
            uVar38 = (uint)(cVar2 == cVar1);
            iVar29 = uVar38 + 4;
            local_60 = (uint *)&DAT_00000001;
            puVar12 = (uint *)((int)puVar23 + (iVar31 - uVar38));
            local_44 = (uint *)((int)puVar23 - uVar38);
            goto LAB_017b86b0;
          }
          if (pcVar35 < local_58) {
            uVar39 = *puVar43 ^ 1;
          }
          else {
            uVar39 = *(uint *)(pcVar35 + iVar9);
          }
          iVar29 = (int)puVar16 - iVar9;
          if (uVar39 == *puVar43) {
            *(int *)(iVar20 + uVar38 * 4) = iVar29;
            local_44 = puVar43;
            goto LAB_017b9e70;
          }
          uVar39 = *puVar23;
          uVar36 = puVar23[1];
          pcVar35 = *(char **)(iVar20 + uVar38 * 4);
          *(int *)(iVar20 + uVar38 * 4) = iVar29;
          lVar5 = (ulonglong)uVar39 * 0xbf9b0000;
          uVar38 = uVar36 * -0x40650000 + uVar39 * -0x30e44324 + (int)((ulonglong)lVar5 >> 0x20);
          uVar39 = (uint)lVar5 >> (uVar34 & 0xff) | uVar38 << ((uint)puVar41 & 0xff) |
                   uVar38 >> (uVar21 & 0xff);
          if (pcVar35 < local_58) {
            uVar38 = *puVar16 ^ 1;
          }
          else {
            uVar38 = *(uint *)(pcVar35 + iVar9);
          }
          if (uVar38 == *puVar16) break;
          puVar15 = (uint *)((int)puVar23 + (int)local_44);
          puVar12 = (uint *)((int)puVar42 + (int)local_44);
          lVar5 = (ulonglong)*puVar42 * 0xbf9b0000;
          pcVar35 = *(char **)(iVar20 + uVar39 * 4);
          uVar38 = puVar42[1] * -0x40650000 + *puVar42 * -0x30e44324 +
                   (int)((ulonglong)lVar5 >> 0x20);
          uVar38 = (uint)lVar5 >> (uVar34 & 0xff) | uVar38 << ((uint)puVar41 & 0xff) |
                   uVar38 >> (uVar21 & 0xff);
          if (local_60 <= puVar15) {
            HintPreloadData(puVar42 + 0x10);
            HintPreloadData(puVar42 + 0x20);
            local_44 = (uint *)((int)local_44 + 1);
            local_60 = local_60 + 0x20;
          }
          if (puVar40 <= puVar12) goto LAB_017b92e8;
          local_70 = (uint *)((int)puVar23 - iVar9);
          puVar43 = puVar23;
          puVar16 = puVar42;
        }
        if (local_44 < 5) {
          *(int *)(iVar20 + uVar39 * 4) = (int)puVar23 - iVar9;
        }
        local_70 = (uint *)iVar29;
        local_44 = puVar16;
LAB_017b9e70:
        puVar12 = (uint *)(pcVar35 + iVar9);
        puVar43 = (uint *)((int)local_44 - (int)puVar12);
        local_60 = (uint *)((int)puVar43 + 3);
        bVar45 = local_8c <= puVar12;
        bVar44 = puVar12 == local_8c;
        if (bVar45 && !bVar44) {
          bVar45 = local_7c <= local_44;
          bVar44 = local_44 == local_7c;
        }
        if (!bVar45 || bVar44) {
          iVar29 = 4;
          local_88 = local_80;
          local_80 = puVar43;
        }
        else {
          iVar29 = 4;
          puVar15 = local_44;
          puVar16 = puVar12;
          do {
            puVar12 = (uint *)((int)puVar16 + -1);
            local_44 = (uint *)((int)puVar15 + -1);
            if (*(char *)local_44 != *(char *)puVar12) {
              local_88 = local_80;
              puVar12 = puVar16;
              local_80 = puVar43;
              local_44 = puVar15;
              goto LAB_017b86b0;
            }
            iVar29 = iVar29 + 1;
            puVar15 = local_44;
            puVar16 = puVar12;
          } while (local_7c < local_44 && local_8c < puVar12);
          local_88 = local_80;
          local_80 = puVar43;
        }
LAB_017b86b0:
        puVar23 = (uint *)((int)local_44 + iVar29);
        puVar15 = (uint *)((int)puVar12 + iVar29);
        puVar16 = (uint *)((int)puVar10 + -3);
        puVar43 = puVar23;
        if (puVar23 < puVar16) {
          if (*(uint *)((int)puVar12 + iVar29) == *(uint *)((int)local_44 + iVar29)) {
            do {
              puVar43 = puVar43 + 1;
              puVar15 = puVar15 + 1;
              if (puVar16 <= puVar43) goto LAB_017b9334;
            } while (*puVar15 == *puVar43);
            uVar38 = *puVar15 ^ *puVar43;
            bVar6 = (byte)uVar38;
            bVar7 = (byte)(uVar38 >> 8);
            bVar8 = (byte)(uVar38 >> 0x10);
            bVar3 = (byte)(uVar38 >> 0x18);
            pcVar35 = (char *)((int)puVar43 +
                              (((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                << 1 | bVar6 >> 2 & 1) << 1 |
                                                              bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1)
                                                             << 1 | bVar6 >> 5 & 1) << 1 |
                                                           bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                              0x18 | (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                       bVar7 >> 1 & 1) << 1 |
                                                                      bVar7 >> 2 & 1) << 1 |
                                                                     bVar7 >> 3 & 1) << 1 |
                                                                    bVar7 >> 4 & 1) << 1 |
                                                                   bVar7 >> 5 & 1) << 1 |
                                                                  bVar7 >> 6 & 1) << 1 | bVar7 >> 7)
                                                     << 0x10 |
                                              (uint)(byte)((((((((bVar8 & 1) << 1 | bVar8 >> 1 & 1)
                                                                << 1 | bVar8 >> 2 & 1) << 1 |
                                                              bVar8 >> 3 & 1) << 1 | bVar8 >> 4 & 1)
                                                             << 1 | bVar8 >> 5 & 1) << 1 |
                                                           bVar8 >> 6 & 1) << 1 | bVar8 >> 7) << 8 |
                                              (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
                                                                << 1 | bVar3 >> 2 & 1) << 1 |
                                                              bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1)
                                                             << 1 | bVar3 >> 5 & 1) << 1 |
                                                           bVar3 >> 6 & 1) << 1 | bVar3 >> 7)) >> 3)
                              - (int)puVar23));
          }
          else {
            uVar38 = *(uint *)((int)puVar12 + iVar29) ^ *(uint *)((int)local_44 + iVar29);
            bVar6 = (byte)uVar38;
            bVar7 = (byte)(uVar38 >> 8);
            bVar8 = (byte)(uVar38 >> 0x10);
            bVar3 = (byte)(uVar38 >> 0x18);
            pcVar35 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                               << 1 | bVar6 >> 2 & 1) << 1 |
                                                             bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1)
                                                            << 1 | bVar6 >> 5 & 1) << 1 |
                                                          bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x18
                                             | (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1)
                                                                 << 1 | bVar7 >> 2 & 1) << 1 |
                                                               bVar7 >> 3 & 1) << 1 | bVar7 >> 4 & 1
                                                              ) << 1 | bVar7 >> 5 & 1) << 1 |
                                                            bVar7 >> 6 & 1) << 1 | bVar7 >> 7) <<
                                               0x10 | (uint)(byte)((((((((bVar8 & 1) << 1 |
                                                                        bVar8 >> 1 & 1) << 1 |
                                                                       bVar8 >> 2 & 1) << 1 |
                                                                      bVar8 >> 3 & 1) << 1 |
                                                                     bVar8 >> 4 & 1) << 1 |
                                                                    bVar8 >> 5 & 1) << 1 |
                                                                   bVar8 >> 6 & 1) << 1 | bVar8 >> 7
                                                                  ) << 8 |
                                             (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
                                                               << 1 | bVar3 >> 2 & 1) << 1 |
                                                             bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1)
                                                            << 1 | bVar3 >> 5 & 1) << 1 |
                                                          bVar3 >> 6 & 1) << 1 | bVar3 >> 7)) >> 3);
          }
        }
        else {
LAB_017b9334:
          if (puVar43 < (uint *)((int)puVar10 + -1)) {
            if ((short)*puVar15 == (short)*puVar43) {
              puVar43 = (uint *)((int)puVar43 + 2);
              puVar15 = (uint *)((int)puVar15 + 2);
            }
          }
          if ((puVar43 < puVar10) && ((char)*puVar15 == (char)*puVar43)) {
            puVar43 = (uint *)((int)puVar43 + 1);
          }
          pcVar35 = (char *)((int)puVar43 - (int)puVar23);
        }
        pcVar35 = pcVar35 + iVar29;
        puVar12 = puVar10 + -8;
        puVar43 = (uint *)param_2[3];
        uVar38 = (int)local_44 - (int)local_7c;
        if (puVar12 < local_44) {
          FUN_017b3404(puVar43,local_7c,local_44,puVar12);
LAB_017b9c84:
          param_2[3] = param_2[3] + uVar38;
          puVar24 = (undefined4 *)param_2[1];
          if (0xffff < uVar38) {
            param_2[10] = (int)((int)puVar24 - *param_2) >> 3;
            param_2[9] = 1;
          }
        }
        else {
          uVar39 = *local_7c;
          uVar36 = local_7c[1];
          uVar13 = local_7c[2];
          puVar43[3] = local_7c[3];
          *puVar43 = uVar39;
          puVar43[1] = uVar36;
          puVar43[2] = uVar13;
          uVar39 = param_2[3];
          if (0x10 < uVar38) {
            uVar36 = local_7c[5];
            uVar13 = local_7c[6];
            uVar22 = local_7c[7];
            *(uint *)(uVar39 + 0x10) = local_7c[4];
            *(uint *)(uVar39 + 0x14) = uVar36;
            *(uint *)(uVar39 + 0x18) = uVar13;
            *(uint *)(uVar39 + 0x1c) = uVar22;
            if (0x10 < (int)(uVar38 - 0x10)) {
              puVar43 = (uint *)(uVar39 + 0x20);
              puVar15 = local_7c + 0x10;
              do {
                uVar36 = puVar15[-7];
                uVar13 = puVar15[-6];
                puVar23 = puVar43 + 8;
                uVar22 = puVar15[-5];
                *puVar43 = puVar15[-8];
                puVar43[1] = uVar36;
                puVar43[2] = uVar13;
                puVar43[3] = uVar22;
                uVar36 = puVar15[-3];
                uVar13 = puVar15[-2];
                uVar22 = puVar15[-1];
                puVar43[4] = puVar15[-4];
                puVar43[5] = uVar36;
                puVar43[6] = uVar13;
                puVar43[7] = uVar22;
                puVar43 = puVar23;
                puVar15 = puVar15 + 8;
              } while (puVar23 < (uint *)(uVar39 + uVar38));
            }
            goto LAB_017b9c84;
          }
          param_2[3] = uVar39 + uVar38;
          puVar24 = (undefined4 *)param_2[1];
        }
        *puVar24 = local_60;
        *(short *)(puVar24 + 1) = (short)uVar38;
        if ((char *)0xffff < pcVar35 + -3) {
          param_2[10] = (int)((int)puVar24 - *param_2) >> 3;
          param_2[9] = 2;
        }
        *(short *)((int)puVar24 + 6) = (short)(pcVar35 + -3);
        param_2[1] = (uint)(puVar24 + 2);
        local_44 = (uint *)((int)local_44 + (int)pcVar35);
        if (local_44 <= puVar40) {
          local_70 = (uint *)((int)local_70 + 2);
          iVar31 = *(int *)((int)local_44 + 2);
          uVar38 = *(uint *)((int)local_44 + -2);
          lVar5 = (ulonglong)*(uint *)(iVar9 + (int)local_70) * 0xbf9b0000;
          uVar39 = *(int *)((int)local_70 + iVar9 + 4) * -0x40650000 +
                   *(uint *)(iVar9 + (int)local_70) * -0x30e44324 + (int)((ulonglong)lVar5 >> 0x20);
          *(uint **)(iVar20 + ((uint)lVar5 >> (uVar34 & 0xff) | uVar39 << ((uint)puVar41 & 0xff) |
                              uVar39 >> (uVar21 & 0xff)) * 4) = local_70;
          lVar5 = (ulonglong)uVar38 * 0xbf9b0000;
          if (local_88 != (uint *)0x0) {
            local_70 = local_44;
          }
          uVar38 = iVar31 * -0x40650000 + uVar38 * -0x30e44324 + (int)((ulonglong)lVar5 >> 0x20);
          *(int *)(iVar20 + ((uint)lVar5 >> (uVar34 & 0xff) | uVar38 << ((uint)puVar41 & 0xff) |
                            uVar38 >> (uVar21 & 0xff)) * 4) = ((int)local_44 + -2) - iVar9;
          if (local_88 != (uint *)0x0) {
            while( true ) {
              puVar15 = local_80;
              puVar43 = local_88;
              if (*local_70 != *(uint *)((int)local_70 - (int)local_88)) break;
              puVar42 = local_70 + 1;
              puVar23 = (uint *)((int)local_70 + (4 - (int)local_88));
              if (puVar42 < puVar16) {
                uVar38 = *(uint *)((int)local_70 + (4 - (int)local_88));
                if (uVar38 == local_70[1]) {
                  puVar25 = local_70 + 2;
                  while( true ) {
                    puVar23 = puVar23 + 1;
                    if (puVar16 <= puVar25) break;
                    if (*puVar23 != *puVar25) {
                      uVar38 = *puVar23 ^ *puVar25;
                      bVar6 = (byte)uVar38;
                      bVar7 = (byte)(uVar38 >> 8);
                      bVar8 = (byte)(uVar38 >> 0x10);
                      bVar3 = (byte)(uVar38 >> 0x18);
                      pcVar35 = (char *)((int)puVar25 +
                                        (((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                          bVar6 >> 1 & 1) << 1 |
                                                                         bVar6 >> 2 & 1) << 1 |
                                                                        bVar6 >> 3 & 1) << 1 |
                                                                       bVar6 >> 4 & 1) << 1 |
                                                                      bVar6 >> 5 & 1) << 1 |
                                                                     bVar6 >> 6 & 1) << 1 |
                                                                    bVar6 >> 7) << 0x18 |
                                                        (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                          bVar7 >> 1 & 1) << 1 |
                                                                         bVar7 >> 2 & 1) << 1 |
                                                                        bVar7 >> 3 & 1) << 1 |
                                                                       bVar7 >> 4 & 1) << 1 |
                                                                      bVar7 >> 5 & 1) << 1 |
                                                                     bVar7 >> 6 & 1) << 1 |
                                                                    bVar7 >> 7) << 0x10 |
                                                        (uint)(byte)((((((((bVar8 & 1) << 1 |
                                                                          bVar8 >> 1 & 1) << 1 |
                                                                         bVar8 >> 2 & 1) << 1 |
                                                                        bVar8 >> 3 & 1) << 1 |
                                                                       bVar8 >> 4 & 1) << 1 |
                                                                      bVar8 >> 5 & 1) << 1 |
                                                                     bVar8 >> 6 & 1) << 1 |
                                                                    bVar8 >> 7) << 8 |
                                                        (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                          bVar3 >> 1 & 1) << 1 |
                                                                         bVar3 >> 2 & 1) << 1 |
                                                                        bVar3 >> 3 & 1) << 1 |
                                                                       bVar3 >> 4 & 1) << 1 |
                                                                      bVar3 >> 5 & 1) << 1 |
                                                                     bVar3 >> 6 & 1) << 1 |
                                                                    bVar3 >> 7)) >> 3) -
                                        (int)puVar42));
                      goto LAB_017b911c;
                    }
                    puVar25 = puVar25 + 1;
                  }
                  goto LAB_017ba7d0;
                }
                uVar38 = uVar38 ^ local_70[1];
                bVar6 = (byte)uVar38;
                bVar7 = (byte)(uVar38 >> 8);
                bVar8 = (byte)(uVar38 >> 0x10);
                bVar3 = (byte)(uVar38 >> 0x18);
                pcVar35 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                   bVar6 >> 1 & 1) << 1 |
                                                                  bVar6 >> 2 & 1) << 1 |
                                                                 bVar6 >> 3 & 1) << 1 |
                                                                bVar6 >> 4 & 1) << 1 |
                                                               bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1
                                                              ) << 1 | bVar6 >> 7) << 0x18 |
                                                 (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                   bVar7 >> 1 & 1) << 1 |
                                                                  bVar7 >> 2 & 1) << 1 |
                                                                 bVar7 >> 3 & 1) << 1 |
                                                                bVar7 >> 4 & 1) << 1 |
                                                               bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1
                                                              ) << 1 | bVar7 >> 7) << 0x10 |
                                                 (uint)(byte)((((((((bVar8 & 1) << 1 |
                                                                   bVar8 >> 1 & 1) << 1 |
                                                                  bVar8 >> 2 & 1) << 1 |
                                                                 bVar8 >> 3 & 1) << 1 |
                                                                bVar8 >> 4 & 1) << 1 |
                                                               bVar8 >> 5 & 1) << 1 | bVar8 >> 6 & 1
                                                              ) << 1 | bVar8 >> 7) << 8 |
                                                 (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                   bVar3 >> 1 & 1) << 1 |
                                                                  bVar3 >> 2 & 1) << 1 |
                                                                 bVar3 >> 3 & 1) << 1 |
                                                                bVar3 >> 4 & 1) << 1 |
                                                               bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1
                                                              ) << 1 | bVar3 >> 7)) >> 3);
              }
              else {
                puVar25 = puVar42;
LAB_017ba7d0:
                if (puVar25 < (uint *)((int)puVar10 + -1)) {
                  if ((short)*puVar23 == (short)*puVar25) {
                    puVar23 = (uint *)((int)puVar23 + 2);
                    puVar25 = (uint *)((int)puVar25 + 2);
                  }
                }
                if ((puVar25 < puVar10) && ((char)*puVar23 == (char)*puVar25)) {
                  puVar25 = (uint *)((int)puVar25 + 1);
                }
                pcVar35 = (char *)((int)puVar25 - (int)puVar42);
              }
LAB_017b911c:
              local_44 = (uint *)((int)local_70 + (int)(pcVar35 + 4));
              lVar5 = (ulonglong)*local_70 * 0xbf9b0000;
              uVar38 = local_70[1] * -0x40650000 + *local_70 * -0x30e44324 +
                       (int)((ulonglong)lVar5 >> 0x20);
              *(int *)(iVar20 + ((uint)lVar5 >> (uVar34 & 0xff) | uVar38 << ((uint)puVar41 & 0xff) |
                                uVar38 >> (uVar21 & 0xff)) * 4) = (int)local_70 - iVar9;
              puVar23 = (uint *)param_2[3];
              if (puVar12 < local_70) {
                FUN_017b3404(puVar23,local_70,local_70,puVar12);
              }
              else {
                uVar38 = local_70[1];
                uVar39 = local_70[2];
                uVar36 = local_70[3];
                *puVar23 = *local_70;
                puVar23[1] = uVar38;
                puVar23[2] = uVar39;
                puVar23[3] = uVar36;
              }
              puVar24 = (undefined4 *)param_2[1];
              *(undefined2 *)(puVar24 + 1) = 0;
              *puVar24 = 1;
              uVar4 = SUB42(pcVar35 + 1,0);
              if (pcVar35 + 1 < (char *)0x10000) {
                *(undefined2 *)((int)puVar24 + 6) = uVar4;
                param_2[1] = (uint)(puVar24 + 2);
              }
              else {
                param_2[10] = (int)((int)puVar24 - *param_2) >> 3;
                param_2[9] = 2;
                *(undefined2 *)((int)puVar24 + 6) = uVar4;
                param_2[1] = (uint)(puVar24 + 2);
              }
              if (puVar40 < local_44) {
                local_80 = local_88;
                local_88 = puVar15;
                goto LAB_017b884c;
              }
              local_88 = local_80;
              local_80 = puVar43;
              local_70 = local_44;
            }
            local_44 = local_70;
          }
        }
LAB_017b884c:
        puVar12 = (uint *)((int)local_44 + 3);
        if (puVar40 <= puVar12) goto LAB_017ba3c8;
        local_7c = local_44;
        local_70 = (uint *)((int)local_44 - iVar9);
        puVar43 = local_44;
      } while( true );
    }
  }
  else {
    if ((uint *)((int)puVar43 + 3) < puVar40) {
      local_90 = (uint *)0x0;
      local_88 = (uint *)0x0;
      local_94 = (uint *)0x0;
      goto LAB_017b8440;
    }
LAB_017ba874:
    *param_3 = local_90;
  }
  goto LAB_017b931c;
LAB_017ba40c:
  local_68 = local_7c;
  if (local_7c != (uint *)0x0) {
    local_68 = (uint *)0x1;
  }
LAB_017b98b0:
  if (((uint)pcVar35 & (uint)local_68) == 0) {
    if (local_68 == (uint *)0x0) {
      local_7c = puVar41;
    }
LAB_017b7270:
    puVar41 = local_98;
  }
LAB_017b7274:
  local_98 = puVar41;
  if (local_88 != (uint *)0x0) {
    local_98 = local_88;
  }
  *param_3 = local_7c;
LAB_017b7288:
  pcVar35 = (char *)((int)puVar10 - (int)local_74);
  param_3[1] = local_98;
  goto LAB_017b7298;
LAB_017ba3ec:
  local_68 = local_7c;
  if (local_7c != (uint *)0x0) {
    local_68 = (uint *)0x1;
  }
LAB_017b9870:
  if (((uint)pcVar35 & (uint)local_68) == 0) {
    if (local_68 == (uint *)0x0) {
      local_7c = puVar40;
    }
LAB_017ba210:
    puVar40 = local_98;
  }
  goto LAB_017b987c;
LAB_017ba450:
  local_58 = local_68;
  if (local_68 != (uint *)0x0) {
    local_58 = (uint *)&DAT_00000001;
  }
LAB_017ba164:
  if (((uint)local_84 & (uint)local_58) == 0) {
    if (local_58 == (uint *)0x0) {
      local_68 = puVar12;
    }
LAB_017ba334:
    puVar12 = puVar43;
  }
  goto LAB_017ba174;
LAB_017ba42c:
  puVar40 = local_7c;
  if (local_7c != (uint *)0x0) {
    puVar40 = (uint *)&DAT_00000001;
  }
  param_4 = local_60;
  local_60 = puVar40;
LAB_017ba124:
  if (((uint)puVar16 & (uint)local_60) == 0) {
LAB_017ba318:
    if (local_60 == (uint *)0x0) {
      local_7c = puVar43;
    }
    puVar43 = puVar12;
  }
LAB_017ba130:
  if (local_84 != (uint *)0x0) {
    puVar43 = local_84;
  }
  *param_3 = local_7c;
  goto LAB_017ba144;
LAB_017ba3c8:
  local_68 = (uint *)(uint)(local_80 != (uint *)0x0);
  goto LAB_017b92f8;
LAB_017b4bac:
  local_60 = local_74;
  if (local_74 != (uint *)0x0) {
    local_60 = (uint *)0x1;
  }
LAB_017b4aa8:
  pcVar19 = pcVar35;
  if (((uint)pcVar11 & (uint)local_60) == 0) {
LAB_017b4b80:
    pcVar19 = pcVar18;
    if (local_60 == (uint *)0x0) {
      local_74 = (uint *)pcVar35;
    }
  }
LAB_017b4ab4:
  puVar12 = (uint *)pcVar19;
  if (local_84 != (uint *)0x0) {
    puVar12 = local_84;
  }
  *param_3 = local_74;
LAB_017b4ac8:
  param_3[1] = puVar12;
  uVar17 = uVar17 ^ DAT_018ddaf8;
  if (uVar17 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)puVar40 - (int)local_70,puVar12,uVar17,0);
  }
  return;
LAB_017b92e8:
  local_44 = local_7c;
LAB_017b92f8:
  puVar12 = local_90;
  puVar43 = local_98;
  if (((uint)local_94 & (uint)local_68) == 0) {
LAB_017b9984:
    local_90 = puVar43;
    if (local_68 == (uint *)0x0) {
      local_80 = puVar12;
    }
  }
LAB_017b9304:
  if (local_88 != (uint *)0x0) {
    local_90 = local_88;
  }
  *param_3 = local_80;
  puVar15 = local_80;
  local_88 = local_90;
LAB_017b931c:
  pcVar35 = (char *)((int)param_4 + (param_5 - (int)local_44));
  param_3[1] = local_88;
LAB_017b7298:
  uVar17 = uVar17 ^ DAT_018ddaf8;
  if (uVar17 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(pcVar35,puVar15,uVar17,0);
  }
  return;
}

