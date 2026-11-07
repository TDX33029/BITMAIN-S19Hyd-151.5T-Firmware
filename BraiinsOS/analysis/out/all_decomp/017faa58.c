// FUN_017faa58 @ 017faa58 size=2704 calls_out=5 calls_in=0
// strings: 

void FUN_017faa58(int param_1,int *param_2,undefined4 *param_3,uint *param_4,int param_5)

{
  char *pcVar1;
  byte bVar2;
  undefined2 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char *pcVar7;
  uint uVar8;
  uint extraout_r1;
  uint *puVar9;
  uint extraout_r1_00;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  char *pcVar17;
  int iVar18;
  uint *puVar19;
  uint uVar20;
  undefined4 *puVar21;
  uint *puVar22;
  char *pcVar23;
  uint uVar24;
  char *pcVar25;
  uint *puVar26;
  uint *puVar27;
  uint *puVar28;
  int iVar29;
  uint *puVar30;
  int iVar31;
  bool bVar32;
  bool bVar33;
  undefined8 uVar34;
  char *local_68;
  uint *local_64;
  char *local_5c;
  uint local_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c;
  
  puVar27 = (uint *)((int)param_4 + param_5);
  pcVar7 = *(char **)(param_1 + 0xc);
  local_5c = (char *)*param_3;
  iVar10 = *(int *)(param_1 + 4);
  local_2c = DAT_018ddaf8;
  puVar11 = (uint *)(pcVar7 + iVar10);
  puVar15 = puVar27 + -2;
  puVar30 = param_4;
  if (param_4 == puVar11) {
    puVar30 = (uint *)((int)param_4 + 1);
  }
  iVar29 = *(int *)(param_1 + 8);
  local_68 = (char *)param_3[1];
  uVar12 = *(uint *)(param_1 + 200);
  *(undefined4 *)(param_1 + 0xdc) = 0;
  uVar8 = *(uint *)(param_1 + 0x10);
  if (puVar15 <= puVar30) {
LAB_017fadc8:
    *param_3 = local_5c;
    param_3[1] = local_68;
    if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2b78((int)puVar27 - (int)param_4,uVar8,local_2c ^ DAT_018ddaf8,0);
    }
    return;
  }
  pcVar1 = (char *)(1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  puVar16 = (uint *)(iVar29 + uVar8);
  do {
    pcVar17 = (char *)((int)puVar30 + ((1 - uVar8) - iVar10));
    pcVar23 = pcVar1;
    if (pcVar17 <= pcVar1) {
      pcVar23 = pcVar17;
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      pcVar23 = pcVar17;
    }
    pcVar17 = (char *)((int)puVar30 + ((1 - (int)local_5c) - iVar10));
    iVar31 = iVar29;
    if (pcVar7 <= pcVar17) {
      iVar31 = iVar10;
    }
    if ((pcVar23 < local_5c || (uint)((int)(pcVar7 + -1) - (int)pcVar17) < 3) ||
       (*(int *)((int)puVar30 + 1) != *(int *)(pcVar17 + iVar31))) {
      local_40 = 999999999;
      if (uVar12 == 5) {
        uVar34 = FUN_017d265c();
      }
      else if (uVar12 < 6) {
        uVar34 = FUN_017d1aa4();
      }
      else {
        uVar34 = FUN_017d202c(param_1,puVar30,puVar27,&local_40);
      }
      uVar8 = (uint)((ulonglong)uVar34 >> 0x20);
      pcVar23 = (char *)uVar34;
      if ((pcVar23 != (char *)0x0) && (local_64 = (uint *)local_40, (char *)0x3 < pcVar23)) {
        puVar26 = puVar30;
        if (3 < local_40) {
          pcVar17 = (char *)((int)puVar30 + ((3 - local_40) - iVar10));
          puVar26 = puVar16;
          iVar31 = iVar29;
          if (pcVar7 <= pcVar17) {
            puVar26 = puVar11;
            iVar31 = iVar10;
          }
          puVar14 = (uint *)(pcVar17 + iVar31);
          bVar33 = param_4 <= puVar30;
          bVar32 = puVar30 == param_4;
          if (bVar33 && !bVar32) {
            bVar33 = puVar26 <= puVar14;
            bVar32 = puVar14 == puVar26;
          }
          puVar9 = puVar30;
          if (bVar33 && !bVar32) {
            do {
              puVar14 = (uint *)((int)puVar14 + -1);
              puVar30 = (uint *)((int)puVar9 + -1);
              if (*(char *)puVar30 != *(char *)puVar14) {
                puVar30 = puVar9;
                break;
              }
              pcVar23 = pcVar23 + 1;
              puVar9 = puVar30;
            } while (param_4 < puVar30 && puVar26 < puVar14);
          }
          local_68 = local_5c;
          local_5c = (char *)(local_40 - 3);
          puVar26 = puVar30;
        }
        goto LAB_017fac70;
      }
      uVar24 = (uint)((int)puVar30 - (int)param_4) >> 8;
      *(uint *)(param_1 + 0xdc) = (uint)(8 < uVar24);
      puVar30 = (uint *)((int)puVar30 + uVar24 + 1);
    }
    else {
      puVar26 = (uint *)((int)puVar30 + 1);
      if (pcVar17 < pcVar7) {
        puVar14 = (uint *)(pcVar7 + iVar29);
      }
      else {
        puVar14 = puVar27;
      }
      puVar9 = (uint *)((int)puVar30 + 5);
      puVar28 = (uint *)(pcVar17 + iVar31 + 4);
      puVar22 = (uint *)((int)puVar9 + ((int)puVar14 - (int)puVar28));
      if (puVar27 < puVar22) {
        puVar22 = puVar27;
      }
      if (puVar9 < (uint *)((int)puVar22 + -3)) {
        if (*(uint *)(pcVar17 + iVar31 + 4) == *(uint *)((int)puVar30 + 5)) {
          puVar19 = (uint *)(pcVar17 + iVar31 + 8);
          puVar30 = (uint *)((int)puVar30 + 9);
          while( true ) {
            if ((uint *)((int)puVar22 + -3) <= puVar30) break;
            if (*puVar19 != *puVar30) {
              uVar8 = *puVar30 ^ *puVar19;
              bVar4 = (byte)uVar8;
              bVar5 = (byte)(uVar8 >> 8);
              bVar6 = (byte)(uVar8 >> 0x10);
              bVar2 = (byte)(uVar8 >> 0x18);
              pcVar23 = (char *)((int)puVar30 +
                                (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1
                                                                  ) << 1 | bVar4 >> 2 & 1) << 1 |
                                                                bVar4 >> 3 & 1) << 1 |
                                                               bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1
                                                              ) << 1 | bVar4 >> 6 & 1) << 1 |
                                                            bVar4 >> 7) << 0x18 |
                                                (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1
                                                                  ) << 1 | bVar5 >> 2 & 1) << 1 |
                                                                bVar5 >> 3 & 1) << 1 |
                                                               bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1
                                                              ) << 1 | bVar5 >> 6 & 1) << 1 |
                                                            bVar5 >> 7) << 0x10 |
                                                (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1
                                                                  ) << 1 | bVar6 >> 2 & 1) << 1 |
                                                                bVar6 >> 3 & 1) << 1 |
                                                               bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1
                                                              ) << 1 | bVar6 >> 6 & 1) << 1 |
                                                            bVar6 >> 7) << 8 |
                                                (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1
                                                                  ) << 1 | bVar2 >> 2 & 1) << 1 |
                                                                bVar2 >> 3 & 1) << 1 |
                                                               bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1
                                                              ) << 1 | bVar2 >> 6 & 1) << 1 |
                                                            bVar2 >> 7)) >> 3) - (int)puVar9));
              goto joined_r0x017faea8;
            }
            puVar19 = puVar19 + 1;
            puVar30 = puVar30 + 1;
          }
          goto LAB_017fb030;
        }
        uVar8 = *(uint *)((int)puVar30 + 5) ^ *(uint *)(pcVar17 + iVar31 + 4);
        bVar4 = (byte)uVar8;
        bVar5 = (byte)(uVar8 >> 8);
        bVar6 = (byte)(uVar8 >> 0x10);
        bVar2 = (byte)(uVar8 >> 0x18);
        pcVar23 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1
                                                          | bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1)
                                                         << 1 | bVar4 >> 4 & 1) << 1 |
                                                       bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 |
                                                     bVar4 >> 7) << 0x18 |
                                         (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                          | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                         << 1 | bVar5 >> 4 & 1) << 1 |
                                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 |
                                                     bVar5 >> 7) << 0x10 |
                                         (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                          | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                         << 1 | bVar6 >> 4 & 1) << 1 |
                                                       bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1 |
                                                     bVar6 >> 7) << 8 |
                                         (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1
                                                          | bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1)
                                                         << 1 | bVar2 >> 4 & 1) << 1 |
                                                       bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 |
                                                     bVar2 >> 7)) >> 3);
      }
      else {
        puVar19 = puVar28;
        puVar30 = puVar9;
LAB_017fb030:
        if (puVar30 < (uint *)((int)puVar22 + -1)) {
          if ((short)*puVar19 == (short)*puVar30) {
            puVar19 = (uint *)((int)puVar19 + 2);
            puVar30 = (uint *)((int)puVar30 + 2);
          }
        }
        if ((puVar30 < puVar22) && ((char)*puVar19 == (char)*puVar30)) {
          puVar30 = (uint *)((int)puVar30 + 1);
        }
        pcVar23 = (char *)((int)puVar30 - (int)puVar9);
      }
joined_r0x017faea8:
      if (puVar14 == (uint *)((int)puVar28 + (int)pcVar23)) {
        puVar22 = (uint *)((int)puVar9 + (int)pcVar23);
        puVar14 = puVar11;
        puVar30 = puVar22;
        if (puVar22 < (uint *)((int)puVar27 + -3)) {
          if (*puVar11 == *(uint *)((int)puVar9 + (int)pcVar23)) {
            do {
              puVar30 = puVar30 + 1;
              puVar14 = puVar14 + 1;
              if ((uint *)((int)puVar27 + -3) <= puVar30) goto LAB_017faec8;
            } while (*puVar14 == *puVar30);
            uVar8 = *puVar14 ^ *puVar30;
            bVar4 = (byte)uVar8;
            bVar5 = (byte)(uVar8 >> 8);
            bVar6 = (byte)(uVar8 >> 0x10);
            bVar2 = (byte)(uVar8 >> 0x18);
            pcVar17 = (char *)((int)puVar30 +
                              (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                                << 1 | bVar4 >> 2 & 1) << 1 |
                                                              bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1)
                                                             << 1 | bVar4 >> 5 & 1) << 1 |
                                                           bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                              0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                       bVar5 >> 1 & 1) << 1 |
                                                                      bVar5 >> 2 & 1) << 1 |
                                                                     bVar5 >> 3 & 1) << 1 |
                                                                    bVar5 >> 4 & 1) << 1 |
                                                                   bVar5 >> 5 & 1) << 1 |
                                                                  bVar5 >> 6 & 1) << 1 | bVar5 >> 7)
                                                     << 0x10 |
                                              (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                << 1 | bVar6 >> 2 & 1) << 1 |
                                                              bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1)
                                                             << 1 | bVar6 >> 5 & 1) << 1 |
                                                           bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8 |
                                              (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
                                                                << 1 | bVar2 >> 2 & 1) << 1 |
                                                              bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1)
                                                             << 1 | bVar2 >> 5 & 1) << 1 |
                                                           bVar2 >> 6 & 1) << 1 | bVar2 >> 7)) >> 3)
                              - (int)puVar22));
          }
          else {
            uVar8 = *puVar11 ^ *(uint *)((int)puVar9 + (int)pcVar23);
            bVar4 = (byte)uVar8;
            bVar5 = (byte)(uVar8 >> 8);
            bVar6 = (byte)(uVar8 >> 0x10);
            bVar2 = (byte)(uVar8 >> 0x18);
            pcVar17 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                               << 1 | bVar4 >> 2 & 1) << 1 |
                                                             bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1)
                                                            << 1 | bVar4 >> 5 & 1) << 1 |
                                                          bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18
                                             | (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                                 << 1 | bVar5 >> 2 & 1) << 1 |
                                                               bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1
                                                              ) << 1 | bVar5 >> 5 & 1) << 1 |
                                                            bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                               0x10 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                        bVar6 >> 1 & 1) << 1 |
                                                                       bVar6 >> 2 & 1) << 1 |
                                                                      bVar6 >> 3 & 1) << 1 |
                                                                     bVar6 >> 4 & 1) << 1 |
                                                                    bVar6 >> 5 & 1) << 1 |
                                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7
                                                                  ) << 8 |
                                             (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
                                                               << 1 | bVar2 >> 2 & 1) << 1 |
                                                             bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1)
                                                            << 1 | bVar2 >> 5 & 1) << 1 |
                                                          bVar2 >> 6 & 1) << 1 | bVar2 >> 7)) >> 3);
          }
        }
        else {
LAB_017faec8:
          if (puVar30 < (uint *)((int)puVar27 + -1)) {
            if ((short)*puVar14 == (short)*puVar30) {
              puVar14 = (uint *)((int)puVar14 + 2);
              puVar30 = (uint *)((int)puVar30 + 2);
            }
          }
          if ((puVar30 < puVar27) && ((char)*puVar14 == (char)*puVar30)) {
            puVar30 = (uint *)((int)puVar30 + 1);
          }
          pcVar17 = (char *)((int)puVar30 - (int)puVar22);
        }
        pcVar23 = pcVar23 + (int)pcVar17;
      }
      pcVar23 = pcVar23 + 4;
      local_64 = (uint *)0x1;
LAB_017fac70:
      uVar24 = (int)puVar26 - (int)param_4;
      puVar30 = (uint *)param_2[3];
      if (puVar27 + -8 < puVar26) {
        FUN_017bfa44(puVar30,param_4,puVar26);
        uVar8 = extraout_r1;
LAB_017fafe0:
        param_2[3] = param_2[3] + uVar24;
        puVar30 = (uint *)param_2[1];
        if (0xffff < uVar24) {
          param_2[10] = (int)puVar30 - *param_2 >> 3;
          param_2[9] = 1;
        }
      }
      else {
        local_3c = *param_4;
        uVar8 = param_4[1];
        uStack_34 = param_4[2];
        uStack_30 = param_4[3];
        puVar30[3] = uStack_30;
        *puVar30 = local_3c;
        puVar30[1] = uVar8;
        puVar30[2] = uStack_34;
        iVar31 = param_2[3];
        if (0x10 < uVar24) {
          local_3c = param_4[4];
          uVar8 = param_4[5];
          uStack_34 = param_4[6];
          uStack_30 = param_4[7];
          *(uint *)(iVar31 + 0x10) = local_3c;
          *(uint *)(iVar31 + 0x14) = uVar8;
          *(uint *)(iVar31 + 0x18) = uStack_34;
          *(uint *)(iVar31 + 0x1c) = uStack_30;
          uStack_38 = uVar8;
          if (0x10 < (int)(uVar24 - 0x10)) {
            puVar30 = param_4 + 0x10;
            puVar14 = (uint *)(iVar31 + 0x20);
            do {
              uVar8 = puVar30[-7];
              uVar13 = puVar30[-6];
              puVar9 = puVar14 + 8;
              uVar20 = puVar30[-5];
              *puVar14 = puVar30[-8];
              puVar14[1] = uVar8;
              puVar14[2] = uVar13;
              puVar14[3] = uVar20;
              local_3c = puVar30[-4];
              uVar8 = puVar30[-3];
              uStack_34 = puVar30[-2];
              uStack_30 = puVar30[-1];
              puVar14[4] = local_3c;
              puVar14[5] = uVar8;
              puVar14[6] = uStack_34;
              puVar14[7] = uStack_30;
              puVar30 = puVar30 + 8;
              puVar14 = puVar9;
            } while (puVar9 < (uint *)(iVar31 + uVar24));
            uStack_38 = uVar8;
          }
          goto LAB_017fafe0;
        }
        param_2[3] = (int)(iVar31 + uVar24);
        puVar30 = (uint *)param_2[1];
        uStack_38 = uVar8;
      }
      *puVar30 = (uint)local_64;
      *(short *)(puVar30 + 1) = (short)uVar24;
      if ((char *)0xffff < pcVar23 + -3) {
        param_2[10] = (int)puVar30 - *param_2 >> 3;
        uVar8 = 2;
        param_2[9] = 2;
      }
      *(short *)((int)puVar30 + 6) = (short)(pcVar23 + -3);
      param_2[1] = (int)(puVar30 + 2);
      param_4 = (uint *)((int)puVar26 + (int)pcVar23);
      if (*(int *)(param_1 + 0xdc) != 0) {
        *(undefined4 *)(param_1 + 0xdc) = 0;
      }
      if (puVar15 < param_4) goto LAB_017fadc8;
      while( true ) {
        pcVar25 = local_68;
        iVar31 = (int)param_4 - iVar10;
        pcVar17 = (char *)(iVar31 - *(int *)(param_1 + 0x10));
        pcVar23 = pcVar1;
        if (pcVar17 <= pcVar1) {
          pcVar23 = pcVar17;
        }
        if (*(int *)(param_1 + 0x18) != 0) {
          pcVar23 = pcVar17;
        }
        pcVar17 = (char *)(iVar31 - (int)pcVar25);
        iVar18 = iVar29;
        if (pcVar7 <= pcVar17) {
          iVar18 = iVar10;
        }
        uVar8 = 0;
        puVar30 = param_4;
        local_68 = pcVar25;
        if ((pcVar23 < pcVar25 || (uint)((int)(pcVar25 + (int)(pcVar7 + -1)) - iVar31) < 3) ||
           (uVar8 = *(uint *)(pcVar17 + iVar18), *param_4 != uVar8)) break;
        if (pcVar17 < pcVar7) {
          puVar30 = (uint *)(pcVar7 + iVar29);
        }
        else {
          puVar30 = puVar27;
        }
        puVar26 = param_4 + 1;
        puVar9 = (uint *)(pcVar17 + iVar18 + 4);
        puVar14 = (uint *)((int)puVar26 + ((int)puVar30 - (int)puVar9));
        if (puVar27 < puVar14) {
          puVar14 = puVar27;
        }
        puVar22 = (uint *)((int)puVar14 + -3);
        if (puVar26 < puVar22) {
          if (*(uint *)(pcVar17 + iVar18 + 4) == param_4[1]) {
            puVar28 = param_4 + 2;
            local_64 = (uint *)(pcVar17 + iVar18 + 8);
            if (puVar28 < puVar22) {
              do {
                if (*local_64 != *puVar28) {
                  uVar8 = *puVar28 ^ *local_64;
                  bVar4 = (byte)uVar8;
                  bVar5 = (byte)(uVar8 >> 8);
                  bVar6 = (byte)(uVar8 >> 0x10);
                  bVar2 = (byte)(uVar8 >> 0x18);
                  pcVar23 = (char *)((int)puVar28 +
                                    (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                      bVar4 >> 1 & 1) << 1 |
                                                                     bVar4 >> 2 & 1) << 1 |
                                                                    bVar4 >> 3 & 1) << 1 |
                                                                   bVar4 >> 4 & 1) << 1 |
                                                                  bVar4 >> 5 & 1) << 1 |
                                                                 bVar4 >> 6 & 1) << 1 | bVar4 >> 7)
                                                    << 0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                                bVar5 >> 1 & 1) << 1
                                                                               | bVar5 >> 2 & 1) <<
                                                                               1 | bVar5 >> 3 & 1)
                                                                              << 1 | bVar5 >> 4 & 1)
                                                                             << 1 | bVar5 >> 5 & 1)
                                                                            << 1 | bVar5 >> 6 & 1)
                                                                           << 1 | bVar5 >> 7) <<
                                                              0x10 |
                                                    (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                      bVar6 >> 1 & 1) << 1 |
                                                                     bVar6 >> 2 & 1) << 1 |
                                                                    bVar6 >> 3 & 1) << 1 |
                                                                   bVar6 >> 4 & 1) << 1 |
                                                                  bVar6 >> 5 & 1) << 1 |
                                                                 bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                    << 8 | (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                             bVar2 >> 1 & 1) << 1 |
                                                                            bVar2 >> 2 & 1) << 1 |
                                                                           bVar2 >> 3 & 1) << 1 |
                                                                          bVar2 >> 4 & 1) << 1 |
                                                                         bVar2 >> 5 & 1) << 1 |
                                                                        bVar2 >> 6 & 1) << 1 |
                                                                       bVar2 >> 7)) >> 3) -
                                    (int)puVar26));
                  goto joined_r0x017fb248;
                }
                puVar28 = puVar28 + 1;
                local_64 = local_64 + 1;
              } while (puVar28 < puVar22);
            }
            goto LAB_017fb0d4;
          }
          uVar8 = *(uint *)(pcVar17 + iVar18 + 4) ^ param_4[1];
          bVar4 = (byte)uVar8;
          bVar5 = (byte)(uVar8 >> 8);
          bVar6 = (byte)(uVar8 >> 0x10);
          bVar2 = (byte)(uVar8 >> 0x18);
          pcVar23 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
                                                             1 | bVar4 >> 2 & 1) << 1 |
                                                           bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) <<
                                                          1 | bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1)
                                                        << 1 | bVar4 >> 7) << 0x18 |
                                           (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) <<
                                                             1 | bVar5 >> 2 & 1) << 1 |
                                                           bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) <<
                                                          1 | bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1)
                                                        << 1 | bVar5 >> 7) << 0x10 |
                                           (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) <<
                                                             1 | bVar6 >> 2 & 1) << 1 |
                                                           bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) <<
                                                          1 | bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1)
                                                        << 1 | bVar6 >> 7) << 8 |
                                           (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) <<
                                                             1 | bVar2 >> 2 & 1) << 1 |
                                                           bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) <<
                                                          1 | bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1)
                                                        << 1 | bVar2 >> 7)) >> 3);
        }
        else {
          puVar28 = puVar26;
          local_64 = puVar9;
LAB_017fb0d4:
          if (puVar28 < (uint *)((int)puVar14 + -1)) {
            if ((short)*local_64 == (short)*puVar28) {
              local_64 = (uint *)((int)local_64 + 2);
              puVar28 = (uint *)((int)puVar28 + 2);
            }
          }
          if ((puVar28 < puVar14) && ((char)*local_64 == (char)*puVar28)) {
            puVar28 = (uint *)((int)puVar28 + 1);
          }
          pcVar23 = (char *)((int)puVar28 - (int)puVar26);
        }
joined_r0x017fb248:
        if (puVar30 == (uint *)((int)puVar9 + (int)pcVar23)) {
          puVar9 = (uint *)((int)puVar26 + (int)pcVar23);
          puVar14 = puVar11;
          puVar30 = puVar9;
          if (puVar9 < (uint *)((int)puVar27 + -3)) {
            if (*puVar11 == *(uint *)((int)puVar26 + (int)pcVar23)) {
              do {
                puVar30 = puVar30 + 1;
                puVar14 = puVar14 + 1;
                if ((uint *)((int)puVar27 + -3) <= puVar30) goto LAB_017fb268;
              } while (*puVar14 == *puVar30);
              uVar8 = *puVar14 ^ *puVar30;
              bVar4 = (byte)uVar8;
              bVar5 = (byte)(uVar8 >> 8);
              bVar6 = (byte)(uVar8 >> 0x10);
              bVar2 = (byte)(uVar8 >> 0x18);
              pcVar17 = (char *)((int)puVar30 +
                                (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1
                                                                  ) << 1 | bVar4 >> 2 & 1) << 1 |
                                                                bVar4 >> 3 & 1) << 1 |
                                                               bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1
                                                              ) << 1 | bVar4 >> 6 & 1) << 1 |
                                                            bVar4 >> 7) << 0x18 |
                                                (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1
                                                                  ) << 1 | bVar5 >> 2 & 1) << 1 |
                                                                bVar5 >> 3 & 1) << 1 |
                                                               bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1
                                                              ) << 1 | bVar5 >> 6 & 1) << 1 |
                                                            bVar5 >> 7) << 0x10 |
                                                (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1
                                                                  ) << 1 | bVar6 >> 2 & 1) << 1 |
                                                                bVar6 >> 3 & 1) << 1 |
                                                               bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1
                                                              ) << 1 | bVar6 >> 6 & 1) << 1 |
                                                            bVar6 >> 7) << 8 |
                                                (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1
                                                                  ) << 1 | bVar2 >> 2 & 1) << 1 |
                                                                bVar2 >> 3 & 1) << 1 |
                                                               bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1
                                                              ) << 1 | bVar2 >> 6 & 1) << 1 |
                                                            bVar2 >> 7)) >> 3) - (int)puVar9));
            }
            else {
              uVar8 = *puVar11 ^ *(uint *)((int)puVar26 + (int)pcVar23);
              bVar4 = (byte)uVar8;
              bVar5 = (byte)(uVar8 >> 8);
              bVar6 = (byte)(uVar8 >> 0x10);
              bVar2 = (byte)(uVar8 >> 0x18);
              pcVar17 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                                 << 1 | bVar4 >> 2 & 1) << 1 |
                                                               bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1
                                                              ) << 1 | bVar4 >> 5 & 1) << 1 |
                                                            bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                               0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                        bVar5 >> 1 & 1) << 1 |
                                                                       bVar5 >> 2 & 1) << 1 |
                                                                      bVar5 >> 3 & 1) << 1 |
                                                                     bVar5 >> 4 & 1) << 1 |
                                                                    bVar5 >> 5 & 1) << 1 |
                                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7
                                                                  ) << 0x10 |
                                               (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                 << 1 | bVar6 >> 2 & 1) << 1 |
                                                               bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1
                                                              ) << 1 | bVar6 >> 5 & 1) << 1 |
                                                            bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8
                                               | (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                   bVar2 >> 1 & 1) << 1 |
                                                                  bVar2 >> 2 & 1) << 1 |
                                                                 bVar2 >> 3 & 1) << 1 |
                                                                bVar2 >> 4 & 1) << 1 |
                                                               bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1
                                                              ) << 1 | bVar2 >> 7)) >> 3);
            }
          }
          else {
LAB_017fb268:
            if (puVar30 < (uint *)((int)puVar27 + -1)) {
              if ((short)*puVar14 == (short)*puVar30) {
                puVar14 = (uint *)((int)puVar14 + 2);
                puVar30 = (uint *)((int)puVar30 + 2);
              }
            }
            if ((puVar30 < puVar27) && ((char)*puVar14 == (char)*puVar30)) {
              puVar30 = (uint *)((int)puVar30 + 1);
            }
            pcVar17 = (char *)((int)puVar30 - (int)puVar9);
          }
          pcVar23 = pcVar23 + (int)pcVar17;
        }
        puVar30 = (uint *)param_2[3];
        if (puVar27 + -8 < param_4) {
          FUN_017bfa44(puVar30,param_4,param_4);
          uVar8 = extraout_r1_00;
        }
        else {
          local_3c = *param_4;
          uVar8 = param_4[1];
          uStack_34 = param_4[2];
          uStack_30 = param_4[3];
          *puVar30 = local_3c;
          puVar30[1] = uVar8;
          puVar30[2] = uStack_34;
          puVar30[3] = uStack_30;
          uStack_38 = uVar8;
        }
        puVar21 = (undefined4 *)param_2[1];
        param_4 = (uint *)((int)param_4 + (int)(pcVar23 + 4));
        *(undefined2 *)(puVar21 + 1) = 0;
        *puVar21 = 1;
        uVar3 = SUB42(pcVar23 + 1,0);
        if (pcVar23 + 1 < (char *)0x10000) {
          *(undefined2 *)((int)puVar21 + 6) = uVar3;
          param_2[1] = (int)(puVar21 + 2);
        }
        else {
          param_2[10] = (int)puVar21 - *param_2 >> 3;
          param_2[9] = 2;
          *(undefined2 *)((int)puVar21 + 6) = uVar3;
          param_2[1] = (int)(puVar21 + 2);
        }
        if (puVar15 < param_4) {
          local_68 = local_5c;
          local_5c = pcVar25;
          goto LAB_017fadc8;
        }
        local_68 = local_5c;
        local_5c = pcVar25;
      }
    }
    if (puVar15 <= puVar30) goto LAB_017fadc8;
    uVar8 = *(uint *)(param_1 + 0x10);
  } while( true );
}

