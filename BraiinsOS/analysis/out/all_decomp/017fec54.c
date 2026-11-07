// FUN_017fec54 @ 017fec54 size=4808 calls_out=5 calls_in=0
// strings: 

void FUN_017fec54(int param_1,int *param_2,uint *param_3,uint *param_4,int param_5)

{
  uint uVar1;
  byte bVar2;
  undefined2 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char *pcVar7;
  int *piVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  char *pcVar14;
  uint uVar15;
  char *pcVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  undefined4 *puVar24;
  char *pcVar25;
  int iVar26;
  uint uVar27;
  uint *puVar28;
  int iVar29;
  uint *puVar30;
  int iVar31;
  uint *puVar32;
  uint *puVar33;
  uint *puVar34;
  int iVar35;
  uint *puVar36;
  uint *puVar37;
  undefined8 uVar38;
  uint *local_9c;
  uint local_84;
  uint *local_7c;
  uint *local_5c;
  uint local_58;
  uint *local_48;
  uint local_40;
  uint local_3c;
  int *piStack_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c;
  
  puVar33 = (uint *)((int)param_4 + param_5);
  pcVar7 = *(char **)(param_1 + 0xc);
  local_58 = *param_3;
  iVar11 = *(int *)(param_1 + 4);
  local_2c = DAT_018ddaf8;
  puVar12 = (uint *)(pcVar7 + iVar11);
  local_84 = param_3[1];
  puVar17 = puVar33 + -2;
  puVar36 = param_4;
  if (param_4 == puVar12) {
    puVar36 = (uint *)((int)param_4 + 1);
  }
  uVar13 = *(uint *)(param_1 + 200);
  *(undefined4 *)(param_1 + 0xdc) = 0;
  iVar35 = *(int *)(param_1 + 8);
  piVar8 = *(int **)(param_1 + 0x10);
  local_7c = param_4;
  if (puVar17 <= puVar36) {
LAB_017ff204:
    *param_3 = local_58;
    param_3[1] = local_84;
    if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2b78((int)puVar33 - (int)local_7c,piVar8,local_2c ^ DAT_018ddaf8,0);
    }
    return;
  }
  uVar1 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  puVar18 = (uint *)(pcVar7 + iVar35);
  puVar19 = (uint *)(iVar35 + (int)piVar8);
  puVar20 = puVar33 + -8;
  do {
    iVar31 = (int)puVar36 - iVar11;
    uVar21 = (1 - (int)piVar8) + iVar31;
    uVar27 = uVar1;
    if (uVar21 <= uVar1) {
      uVar27 = uVar21;
    }
    pcVar14 = (char *)((1 - local_58) + iVar31);
    if (*(int *)(param_1 + 0x18) != 0) {
      uVar27 = uVar21;
    }
    iVar29 = iVar35;
    if (pcVar7 <= pcVar14) {
      iVar29 = iVar11;
    }
    pcVar25 = (char *)0x0;
    if (local_58 <= uVar27 && (char *)0x2 < pcVar7 + (-1 - (int)pcVar14)) {
      if (*(int *)((int)puVar36 + 1) == *(int *)(pcVar14 + iVar29)) {
        if (pcVar14 < pcVar7) {
          puVar32 = puVar18;
        }
        else {
          puVar32 = puVar33;
        }
        puVar30 = (uint *)((int)puVar36 + 5);
        puVar28 = (uint *)(pcVar14 + iVar29 + 4);
        puVar9 = (uint *)((int)puVar30 + ((int)puVar32 - (int)puVar28));
        if (puVar33 < puVar9) {
          puVar9 = puVar33;
        }
        if (puVar30 < (uint *)((int)puVar9 + -3)) {
          if (*(uint *)(pcVar14 + iVar29 + 4) == *(uint *)((int)puVar36 + 5)) {
            puVar37 = (uint *)(pcVar14 + iVar29 + 8);
            puVar34 = (uint *)((int)puVar36 + 9);
            while( true ) {
              if ((uint *)((int)puVar9 + -3) <= puVar34) break;
              if (*puVar37 != *puVar34) {
                uVar27 = *puVar37 ^ *puVar34;
                bVar4 = (byte)uVar27;
                bVar5 = (byte)(uVar27 >> 8);
                bVar6 = (byte)(uVar27 >> 0x10);
                bVar2 = (byte)(uVar27 >> 0x18);
                pcVar25 = (char *)((int)puVar34 +
                                  (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                    bVar4 >> 1 & 1) << 1 |
                                                                   bVar4 >> 2 & 1) << 1 |
                                                                  bVar4 >> 3 & 1) << 1 |
                                                                 bVar4 >> 4 & 1) << 1 |
                                                                bVar4 >> 5 & 1) << 1 |
                                                               bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                                  0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                           bVar5 >> 1 & 1) << 1 |
                                                                          bVar5 >> 2 & 1) << 1 |
                                                                         bVar5 >> 3 & 1) << 1 |
                                                                        bVar5 >> 4 & 1) << 1 |
                                                                       bVar5 >> 5 & 1) << 1 |
                                                                      bVar5 >> 6 & 1) << 1 |
                                                                     bVar5 >> 7) << 0x10 |
                                                  (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                    bVar6 >> 1 & 1) << 1 |
                                                                   bVar6 >> 2 & 1) << 1 |
                                                                  bVar6 >> 3 & 1) << 1 |
                                                                 bVar6 >> 4 & 1) << 1 |
                                                                bVar6 >> 5 & 1) << 1 |
                                                               bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                                  8 | (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                        bVar2 >> 1 & 1) << 1 |
                                                                       bVar2 >> 2 & 1) << 1 |
                                                                      bVar2 >> 3 & 1) << 1 |
                                                                     bVar2 >> 4 & 1) << 1 |
                                                                    bVar2 >> 5 & 1) << 1 |
                                                                   bVar2 >> 6 & 1) << 1 | bVar2 >> 7
                                                                  )) >> 3) - (int)puVar30));
                goto joined_r0x017ff37c;
              }
              puVar37 = puVar37 + 1;
              puVar34 = puVar34 + 1;
            }
            goto LAB_017ff6f0;
          }
          uVar27 = *(uint *)(pcVar14 + iVar29 + 4) ^ *(uint *)((int)puVar36 + 5);
          bVar4 = (byte)uVar27;
          bVar5 = (byte)(uVar27 >> 8);
          bVar6 = (byte)(uVar27 >> 0x10);
          bVar2 = (byte)(uVar27 >> 0x18);
          pcVar25 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
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
          puVar37 = puVar28;
          puVar34 = puVar30;
LAB_017ff6f0:
          if (puVar34 < (uint *)((int)puVar9 + -1)) {
            if ((short)*puVar37 == (short)*puVar34) {
              puVar37 = (uint *)((int)puVar37 + 2);
              puVar34 = (uint *)((int)puVar34 + 2);
            }
          }
          if ((puVar34 < puVar9) && ((char)*puVar37 == (char)*puVar34)) {
            puVar34 = (uint *)((int)puVar34 + 1);
          }
          pcVar25 = (char *)((int)puVar34 - (int)puVar30);
        }
joined_r0x017ff37c:
        if (puVar32 == (uint *)((int)puVar28 + (int)pcVar25)) {
          puVar28 = (uint *)((int)puVar30 + (int)pcVar25);
          puVar9 = puVar12;
          puVar32 = puVar28;
          if (puVar28 < (uint *)((int)puVar33 + -3)) {
            if (*puVar12 == *(uint *)((int)puVar30 + (int)pcVar25)) {
              do {
                puVar32 = puVar32 + 1;
                puVar9 = puVar9 + 1;
                if ((uint *)((int)puVar33 + -3) <= puVar32) goto LAB_017ff39c;
              } while (*puVar9 == *puVar32);
              uVar27 = *puVar9 ^ *puVar32;
              bVar4 = (byte)uVar27;
              bVar5 = (byte)(uVar27 >> 8);
              bVar6 = (byte)(uVar27 >> 0x10);
              bVar2 = (byte)(uVar27 >> 0x18);
              pcVar14 = (char *)((int)puVar32 +
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
                                                            bVar2 >> 7)) >> 3) - (int)puVar28));
            }
            else {
              uVar27 = *puVar12 ^ *(uint *)((int)puVar30 + (int)pcVar25);
              bVar4 = (byte)uVar27;
              bVar5 = (byte)(uVar27 >> 8);
              bVar6 = (byte)(uVar27 >> 0x10);
              bVar2 = (byte)(uVar27 >> 0x18);
              pcVar14 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
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
LAB_017ff39c:
            if (puVar32 < (uint *)((int)puVar33 + -1)) {
              if ((short)*puVar9 == (short)*puVar32) {
                puVar9 = (uint *)((int)puVar9 + 2);
                puVar32 = (uint *)((int)puVar32 + 2);
              }
            }
            if ((puVar32 < puVar33) && ((char)*puVar9 == (char)*puVar32)) {
              puVar32 = (uint *)((int)puVar32 + 1);
            }
            pcVar14 = (char *)((int)puVar32 - (int)puVar28);
          }
          pcVar25 = pcVar25 + (int)pcVar14;
        }
        pcVar25 = pcVar25 + 4;
      }
      else {
        pcVar25 = (char *)0x0;
      }
    }
    local_40 = 999999999;
    if (uVar13 == 5) {
      uVar38 = FUN_017d265c(param_1,puVar36,puVar33,&local_40);
    }
    else if (uVar13 < 6) {
      uVar38 = FUN_017d1aa4();
    }
    else {
      uVar38 = FUN_017d202c();
    }
    piVar8 = (int *)((ulonglong)uVar38 >> 0x20);
    pcVar14 = (char *)uVar38;
    if (pcVar25 < pcVar14) {
      local_48 = (uint *)local_40;
      if (pcVar14 < &DAT_00000004) goto LAB_017fed64;
      puVar32 = puVar36;
      pcVar25 = pcVar14;
      if (puVar36 < puVar17) goto LAB_017fee84;
LAB_017ff088:
      if (3 < local_48) {
        pcVar14 = (char *)((int)puVar32 + ((3 - (int)local_48) - iVar11));
        puVar36 = puVar19;
        iVar31 = iVar35;
        if (pcVar7 <= pcVar14) {
          puVar36 = puVar12;
          iVar31 = iVar11;
        }
        puVar9 = (uint *)(pcVar14 + iVar31);
        puVar30 = puVar32;
        if (local_7c < puVar32 && puVar36 < puVar9) {
          do {
            puVar9 = (uint *)((int)puVar9 + -1);
            puVar32 = (uint *)((int)puVar30 + -1);
            if (*(char *)puVar32 != *(char *)puVar9) {
              puVar32 = puVar30;
              break;
            }
            pcVar25 = pcVar25 + 1;
            puVar30 = puVar32;
          } while (local_7c < puVar32 && puVar36 < puVar9);
        }
        local_84 = local_58;
        local_58 = (int)local_48 - 3;
      }
LAB_017ff094:
      puVar36 = (uint *)param_2[3];
      uVar27 = (int)puVar32 - (int)local_7c;
      piVar8 = param_2;
      if (puVar20 < puVar32) {
        FUN_017bfa44(puVar36,local_7c,puVar32,puVar20);
LAB_017ff4a8:
        param_2[3] = param_2[3] + uVar27;
        puVar36 = (uint *)param_2[1];
        if (0xffff < uVar27) {
          param_2[10] = (int)puVar36 - *param_2 >> 3;
          param_2[9] = 1;
        }
      }
      else {
        local_3c = *local_7c;
        piStack_38 = (int *)local_7c[1];
        uStack_34 = local_7c[2];
        uStack_30 = local_7c[3];
        puVar36[3] = uStack_30;
        *puVar36 = local_3c;
        puVar36[1] = (uint)piStack_38;
        puVar36[2] = uStack_34;
        iVar31 = param_2[3];
        if (0x10 < uVar27) {
          local_3c = local_7c[4];
          piStack_38 = (int *)local_7c[5];
          uStack_34 = local_7c[6];
          uStack_30 = local_7c[7];
          *(uint *)(iVar31 + 0x10) = local_3c;
          *(int **)(iVar31 + 0x14) = piStack_38;
          *(uint *)(iVar31 + 0x18) = uStack_34;
          *(uint *)(iVar31 + 0x1c) = uStack_30;
          if (0x10 < (int)(uVar27 - 0x10)) {
            puVar36 = (uint *)(iVar31 + 0x20);
            puVar30 = local_7c + 0x10;
            do {
              uVar21 = puVar30[-7];
              uVar15 = puVar30[-6];
              puVar9 = puVar36 + 8;
              uVar23 = puVar30[-5];
              *puVar36 = puVar30[-8];
              puVar36[1] = uVar21;
              puVar36[2] = uVar15;
              puVar36[3] = uVar23;
              local_3c = puVar30[-4];
              piStack_38 = (int *)puVar30[-3];
              uStack_34 = puVar30[-2];
              uStack_30 = puVar30[-1];
              puVar36[4] = local_3c;
              puVar36[5] = (uint)piStack_38;
              puVar36[6] = uStack_34;
              puVar36[7] = uStack_30;
              puVar36 = puVar9;
              puVar30 = puVar30 + 8;
            } while (puVar9 < (uint *)(iVar31 + uVar27));
          }
          goto LAB_017ff4a8;
        }
        param_2[3] = (int)(iVar31 + uVar27);
        puVar36 = (uint *)param_2[1];
        piVar8 = piStack_38;
      }
      *puVar36 = (uint)local_48;
      *(short *)(puVar36 + 1) = (short)uVar27;
      if ((char *)0xffff < pcVar25 + -3) {
        param_2[10] = (int)puVar36 - *param_2 >> 3;
        piVar8 = (int *)&SUB_00000002;
        param_2[9] = 2;
      }
      *(short *)((int)puVar36 + 6) = (short)(pcVar25 + -3);
      local_7c = (uint *)((int)puVar32 + (int)pcVar25);
      param_2[1] = (int)(puVar36 + 2);
      if (*(int *)(param_1 + 0xdc) != 0) {
        *(undefined4 *)(param_1 + 0xdc) = 0;
      }
      if (puVar17 < local_7c) goto LAB_017ff204;
      while( true ) {
        uVar21 = local_84;
        iVar31 = (int)local_7c - iVar11;
        uVar27 = iVar31 - *(int *)(param_1 + 0x10);
        if (uVar1 < uVar27) {
          uVar15 = uVar1;
        }
        else {
          uVar15 = uVar27;
        }
        if (*(int *)(param_1 + 0x18) != 0) {
          uVar15 = uVar27;
        }
        pcVar14 = (char *)(iVar31 - uVar21);
        iVar29 = iVar35;
        if (pcVar7 <= pcVar14) {
          iVar29 = iVar11;
        }
        piVar8 = (int *)0x0;
        local_84 = uVar21;
        puVar36 = local_7c;
        if ((uVar15 < uVar21 || pcVar7 + ((uVar21 - 1) - iVar31) < (char *)0x3) ||
           (piVar8 = *(int **)(pcVar14 + iVar29), (int *)*local_7c != piVar8)) break;
        if (pcVar14 < pcVar7) {
          puVar36 = puVar18;
        }
        else {
          puVar36 = puVar33;
        }
        puVar32 = local_7c + 1;
        puVar9 = (uint *)(pcVar14 + iVar29 + 4);
        puVar30 = (uint *)((int)puVar32 + ((int)puVar36 - (int)puVar9));
        if (puVar33 < puVar30) {
          puVar30 = puVar33;
        }
        puVar28 = (uint *)((int)puVar30 + -3);
        if (puVar32 < puVar28) {
          if (*(uint *)(pcVar14 + iVar29 + 4) == local_7c[1]) {
            puVar34 = local_7c + 2;
            local_48 = (uint *)(pcVar14 + iVar29 + 8);
            if (puVar34 < puVar28) {
              do {
                if (*local_48 != *puVar34) {
                  uVar27 = *puVar34 ^ *local_48;
                  bVar4 = (byte)uVar27;
                  bVar5 = (byte)(uVar27 >> 8);
                  bVar6 = (byte)(uVar27 >> 0x10);
                  bVar2 = (byte)(uVar27 >> 0x18);
                  pcVar14 = (char *)((int)puVar34 +
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
                                    (int)puVar32));
                  goto joined_r0x017ff864;
                }
                puVar34 = puVar34 + 1;
                local_48 = local_48 + 1;
              } while (puVar34 < puVar28);
            }
            goto LAB_017ff5d4;
          }
          uVar27 = *(uint *)(pcVar14 + iVar29 + 4) ^ local_7c[1];
          bVar4 = (byte)uVar27;
          bVar5 = (byte)(uVar27 >> 8);
          bVar6 = (byte)(uVar27 >> 0x10);
          bVar2 = (byte)(uVar27 >> 0x18);
          pcVar14 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
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
          puVar34 = puVar32;
          local_48 = puVar9;
LAB_017ff5d4:
          if (puVar34 < (uint *)((int)puVar30 + -1)) {
            if ((short)*local_48 == (short)*puVar34) {
              local_48 = (uint *)((int)local_48 + 2);
              puVar34 = (uint *)((int)puVar34 + 2);
            }
          }
          if ((puVar34 < puVar30) && ((char)*local_48 == (char)*puVar34)) {
            puVar34 = (uint *)((int)puVar34 + 1);
          }
          pcVar14 = (char *)((int)puVar34 - (int)puVar32);
        }
joined_r0x017ff864:
        if (puVar36 == (uint *)((int)puVar9 + (int)pcVar14)) {
          puVar9 = (uint *)((int)puVar32 + (int)pcVar14);
          puVar30 = puVar12;
          puVar36 = puVar9;
          if (puVar9 < (uint *)((int)puVar33 + -3)) {
            if (*puVar12 == *(uint *)((int)puVar32 + (int)pcVar14)) {
              do {
                puVar36 = puVar36 + 1;
                puVar30 = puVar30 + 1;
                if ((uint *)((int)puVar33 + -3) <= puVar36) goto LAB_017ff884;
              } while (*puVar30 == *puVar36);
              uVar27 = *puVar30 ^ *puVar36;
              bVar4 = (byte)uVar27;
              bVar5 = (byte)(uVar27 >> 8);
              bVar6 = (byte)(uVar27 >> 0x10);
              bVar2 = (byte)(uVar27 >> 0x18);
              pcVar25 = (char *)((int)puVar36 +
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
              uVar27 = *puVar12 ^ *(uint *)((int)puVar32 + (int)pcVar14);
              bVar4 = (byte)uVar27;
              bVar5 = (byte)(uVar27 >> 8);
              bVar6 = (byte)(uVar27 >> 0x10);
              bVar2 = (byte)(uVar27 >> 0x18);
              pcVar25 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
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
LAB_017ff884:
            if (puVar36 < (uint *)((int)puVar33 + -1)) {
              if ((short)*puVar30 == (short)*puVar36) {
                puVar30 = (uint *)((int)puVar30 + 2);
                puVar36 = (uint *)((int)puVar36 + 2);
              }
            }
            if ((puVar36 < puVar33) && ((char)*puVar30 == (char)*puVar36)) {
              puVar36 = (uint *)((int)puVar36 + 1);
            }
            pcVar25 = (char *)((int)puVar36 - (int)puVar9);
          }
          pcVar14 = pcVar14 + (int)pcVar25;
        }
        pcVar25 = pcVar14 + 4;
        puVar36 = (uint *)param_2[3];
        if (puVar20 < local_7c) {
          FUN_017bfa44(puVar36,local_7c,local_7c,puVar20);
        }
        else {
          local_3c = *local_7c;
          piStack_38 = (int *)local_7c[1];
          uStack_34 = local_7c[2];
          uStack_30 = local_7c[3];
          *puVar36 = local_3c;
          puVar36[1] = (uint)piStack_38;
          puVar36[2] = uStack_34;
          puVar36[3] = uStack_30;
        }
        puVar24 = (undefined4 *)param_2[1];
        *(undefined2 *)(puVar24 + 1) = 0;
        *puVar24 = 1;
        uVar3 = SUB42(pcVar14 + 1,0);
        if (pcVar14 + 1 < (char *)0x10000) {
          *(undefined2 *)((int)puVar24 + 6) = uVar3;
          param_2[1] = (int)(puVar24 + 2);
        }
        else {
          param_2[10] = (int)puVar24 - *param_2 >> 3;
          param_2[9] = 2;
          *(undefined2 *)((int)puVar24 + 6) = uVar3;
          param_2[1] = (int)(puVar24 + 2);
        }
        if (puVar17 < (uint *)((int)local_7c + (int)pcVar25)) {
          local_7c = (uint *)((int)local_7c + (int)pcVar25);
          local_84 = local_58;
          piVar8 = param_2;
          local_58 = uVar21;
          goto LAB_017ff204;
        }
        local_7c = (uint *)((int)local_7c + (int)pcVar25);
        local_84 = local_58;
        local_58 = uVar21;
      }
    }
    else {
      if (&DAT_00000004 <= pcVar25) {
        puVar32 = (uint *)((int)puVar36 + 1);
        local_48 = (uint *)0x1;
        if (puVar36 < puVar17) {
LAB_017fee84:
          do {
            local_5c = (uint *)((int)puVar36 + 1);
            iVar29 = iVar31 + 1;
            if (local_48 == (uint *)0x0) {
              iVar26 = 0x20;
            }
            else {
              uVar21 = iVar29 - *(int *)(param_1 + 0x10);
              uVar27 = uVar1;
              if (uVar21 <= uVar1) {
                uVar27 = uVar21;
              }
              if (*(int *)(param_1 + 0x18) != 0) {
                uVar27 = uVar21;
              }
              pcVar14 = (char *)(iVar29 - local_58);
              iVar26 = iVar11;
              if (pcVar14 < pcVar7) {
                iVar26 = iVar35;
              }
              if ((uVar27 < local_58 || pcVar7 + ((local_58 - 1) - iVar29) < (char *)0x3) ||
                 (*(int *)((int)puVar36 + 1) != *(int *)(pcVar14 + iVar26))) {
                iVar26 = LZCOUNT(local_48);
              }
              else {
                puVar30 = (uint *)(pcVar14 + iVar26 + 4);
                if (pcVar14 < pcVar7) {
                  puVar9 = puVar18;
                }
                else {
                  puVar9 = puVar33;
                }
                puVar28 = (uint *)((int)puVar36 + 5);
                puVar34 = (uint *)((int)puVar28 + ((int)puVar9 - (int)puVar30));
                if (puVar33 < puVar34) {
                  puVar34 = puVar33;
                }
                if (puVar28 < (uint *)((int)puVar34 + -3)) {
                  if (*(uint *)(pcVar14 + iVar26 + 4) == *(uint *)((int)puVar36 + 5)) {
                    local_9c = (uint *)(pcVar14 + iVar26 + 8);
                    puVar37 = (uint *)((int)puVar36 + 9);
                    if (puVar37 < (uint *)((int)puVar34 + -3)) {
                      do {
                        if (*local_9c != *puVar37) {
                          uVar27 = *puVar37 ^ *local_9c;
                          bVar4 = (byte)uVar27;
                          bVar5 = (byte)(uVar27 >> 8);
                          bVar6 = (byte)(uVar27 >> 0x10);
                          bVar2 = (byte)(uVar27 >> 0x18);
                          pcVar14 = (char *)((int)puVar37 +
                                            (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                              bVar4 >> 1 & 1) << 1 |
                                                                             bVar4 >> 2 & 1) << 1 |
                                                                            bVar4 >> 3 & 1) << 1 |
                                                                           bVar4 >> 4 & 1) << 1 |
                                                                          bVar4 >> 5 & 1) << 1 |
                                                                         bVar4 >> 6 & 1) << 1 |
                                                                        bVar4 >> 7) << 0x18 |
                                                            (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                              bVar5 >> 1 & 1) << 1 |
                                                                             bVar5 >> 2 & 1) << 1 |
                                                                            bVar5 >> 3 & 1) << 1 |
                                                                           bVar5 >> 4 & 1) << 1 |
                                                                          bVar5 >> 5 & 1) << 1 |
                                                                         bVar5 >> 6 & 1) << 1 |
                                                                        bVar5 >> 7) << 0x10 |
                                                            (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                              bVar6 >> 1 & 1) << 1 |
                                                                             bVar6 >> 2 & 1) << 1 |
                                                                            bVar6 >> 3 & 1) << 1 |
                                                                           bVar6 >> 4 & 1) << 1 |
                                                                          bVar6 >> 5 & 1) << 1 |
                                                                         bVar6 >> 6 & 1) << 1 |
                                                                        bVar6 >> 7) << 8 |
                                                            (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                              bVar2 >> 1 & 1) << 1 |
                                                                             bVar2 >> 2 & 1) << 1 |
                                                                            bVar2 >> 3 & 1) << 1 |
                                                                           bVar2 >> 4 & 1) << 1 |
                                                                          bVar2 >> 5 & 1) << 1 |
                                                                         bVar2 >> 6 & 1) << 1 |
                                                                        bVar2 >> 7)) >> 3) -
                                            (int)puVar28));
                          goto joined_r0x017ff9b4;
                        }
                        puVar37 = puVar37 + 1;
                        local_9c = local_9c + 1;
                      } while (puVar37 < (uint *)((int)puVar34 + -3));
                    }
                    goto LAB_017ff784;
                  }
                  uVar27 = *(uint *)((int)puVar36 + 5) ^ *(uint *)(pcVar14 + iVar26 + 4);
                  bVar4 = (byte)uVar27;
                  bVar5 = (byte)(uVar27 >> 8);
                  bVar6 = (byte)(uVar27 >> 0x10);
                  bVar2 = (byte)(uVar27 >> 0x18);
                  pcVar14 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                     bVar4 >> 1 & 1) << 1 |
                                                                    bVar4 >> 2 & 1) << 1 |
                                                                   bVar4 >> 3 & 1) << 1 |
                                                                  bVar4 >> 4 & 1) << 1 |
                                                                 bVar4 >> 5 & 1) << 1 |
                                                                bVar4 >> 6 & 1) << 1 | bVar4 >> 7)
                                                   << 0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                               bVar5 >> 1 & 1) << 1
                                                                              | bVar5 >> 2 & 1) << 1
                                                                             | bVar5 >> 3 & 1) << 1
                                                                            | bVar5 >> 4 & 1) << 1 |
                                                                           bVar5 >> 5 & 1) << 1 |
                                                                          bVar5 >> 6 & 1) << 1 |
                                                                         bVar5 >> 7) << 0x10 |
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
                                                                      bVar2 >> 7)) >> 3);
                }
                else {
                  puVar37 = puVar28;
                  local_9c = puVar30;
LAB_017ff784:
                  if (puVar37 < (uint *)((int)puVar34 + -1)) {
                    if ((short)*local_9c == (short)*puVar37) {
                      local_9c = (uint *)((int)local_9c + 2);
                      puVar37 = (uint *)((int)puVar37 + 2);
                    }
                  }
                  if ((puVar37 < puVar34) && ((char)*local_9c == (char)*puVar37)) {
                    puVar37 = (uint *)((int)puVar37 + 1);
                  }
                  pcVar14 = (char *)((int)puVar37 - (int)puVar28);
                }
joined_r0x017ff9b4:
                if (puVar9 == (uint *)((int)puVar30 + (int)pcVar14)) {
                  puVar34 = (uint *)((int)puVar28 + (int)pcVar14);
                  puVar30 = puVar34;
                  puVar9 = puVar12;
                  if (puVar34 < (uint *)((int)puVar33 + -3)) {
                    if (*puVar12 == *(uint *)((int)puVar28 + (int)pcVar14)) {
                      do {
                        puVar30 = puVar30 + 1;
                        puVar9 = puVar9 + 1;
                        if ((uint *)((int)puVar33 + -3) <= puVar30) goto LAB_017ff9d4;
                      } while (*puVar9 == *puVar30);
                      uVar27 = *puVar9 ^ *puVar30;
                      bVar4 = (byte)uVar27;
                      bVar5 = (byte)(uVar27 >> 8);
                      bVar6 = (byte)(uVar27 >> 0x10);
                      bVar2 = (byte)(uVar27 >> 0x18);
                      pcVar16 = (char *)((int)puVar30 +
                                        (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                          bVar4 >> 1 & 1) << 1 |
                                                                         bVar4 >> 2 & 1) << 1 |
                                                                        bVar4 >> 3 & 1) << 1 |
                                                                       bVar4 >> 4 & 1) << 1 |
                                                                      bVar4 >> 5 & 1) << 1 |
                                                                     bVar4 >> 6 & 1) << 1 |
                                                                    bVar4 >> 7) << 0x18 |
                                                        (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                          bVar5 >> 1 & 1) << 1 |
                                                                         bVar5 >> 2 & 1) << 1 |
                                                                        bVar5 >> 3 & 1) << 1 |
                                                                       bVar5 >> 4 & 1) << 1 |
                                                                      bVar5 >> 5 & 1) << 1 |
                                                                     bVar5 >> 6 & 1) << 1 |
                                                                    bVar5 >> 7) << 0x10 |
                                                        (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                          bVar6 >> 1 & 1) << 1 |
                                                                         bVar6 >> 2 & 1) << 1 |
                                                                        bVar6 >> 3 & 1) << 1 |
                                                                       bVar6 >> 4 & 1) << 1 |
                                                                      bVar6 >> 5 & 1) << 1 |
                                                                     bVar6 >> 6 & 1) << 1 |
                                                                    bVar6 >> 7) << 8 |
                                                        (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                          bVar2 >> 1 & 1) << 1 |
                                                                         bVar2 >> 2 & 1) << 1 |
                                                                        bVar2 >> 3 & 1) << 1 |
                                                                       bVar2 >> 4 & 1) << 1 |
                                                                      bVar2 >> 5 & 1) << 1 |
                                                                     bVar2 >> 6 & 1) << 1 |
                                                                    bVar2 >> 7)) >> 3) -
                                        (int)puVar34));
                    }
                    else {
                      uVar27 = *puVar12 ^ *(uint *)((int)puVar28 + (int)pcVar14);
                      bVar4 = (byte)uVar27;
                      bVar5 = (byte)(uVar27 >> 8);
                      bVar6 = (byte)(uVar27 >> 0x10);
                      bVar2 = (byte)(uVar27 >> 0x18);
                      pcVar16 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                         bVar4 >> 1 & 1) << 1 |
                                                                        bVar4 >> 2 & 1) << 1 |
                                                                       bVar4 >> 3 & 1) << 1 |
                                                                      bVar4 >> 4 & 1) << 1 |
                                                                     bVar4 >> 5 & 1) << 1 |
                                                                    bVar4 >> 6 & 1) << 1 |
                                                                   bVar4 >> 7) << 0x18 |
                                                       (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                         bVar5 >> 1 & 1) << 1 |
                                                                        bVar5 >> 2 & 1) << 1 |
                                                                       bVar5 >> 3 & 1) << 1 |
                                                                      bVar5 >> 4 & 1) << 1 |
                                                                     bVar5 >> 5 & 1) << 1 |
                                                                    bVar5 >> 6 & 1) << 1 |
                                                                   bVar5 >> 7) << 0x10 |
                                                       (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                         bVar6 >> 1 & 1) << 1 |
                                                                        bVar6 >> 2 & 1) << 1 |
                                                                       bVar6 >> 3 & 1) << 1 |
                                                                      bVar6 >> 4 & 1) << 1 |
                                                                     bVar6 >> 5 & 1) << 1 |
                                                                    bVar6 >> 6 & 1) << 1 |
                                                                   bVar6 >> 7) << 8 |
                                                       (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                         bVar2 >> 1 & 1) << 1 |
                                                                        bVar2 >> 2 & 1) << 1 |
                                                                       bVar2 >> 3 & 1) << 1 |
                                                                      bVar2 >> 4 & 1) << 1 |
                                                                     bVar2 >> 5 & 1) << 1 |
                                                                    bVar2 >> 6 & 1) << 1 |
                                                                   bVar2 >> 7)) >> 3);
                    }
                  }
                  else {
LAB_017ff9d4:
                    if (puVar30 < (uint *)((int)puVar33 + -1)) {
                      if ((short)*puVar9 == (short)*puVar30) {
                        puVar30 = (uint *)((int)puVar30 + 2);
                        puVar9 = (uint *)((int)puVar9 + 2);
                      }
                    }
                    if ((puVar30 < puVar33) && ((char)*puVar9 == (char)*puVar30)) {
                      puVar30 = (uint *)((int)puVar30 + 1);
                    }
                    pcVar16 = (char *)((int)puVar30 - (int)puVar34);
                  }
                  pcVar14 = pcVar14 + (int)pcVar16;
                }
                iVar26 = LZCOUNT(local_48);
                if (pcVar14 < (char *)0xfffffffc &&
                    (int)(pcVar25 + -10) * 3 + iVar26 < (int)(pcVar14 + 4) * 3) {
                  local_48 = (uint *)0x1;
                  iVar26 = 0x1f;
                  pcVar25 = pcVar14 + 4;
                  puVar32 = local_5c;
                }
              }
            }
            local_40 = 999999999;
            if (uVar13 == 5) {
              pcVar14 = (char *)FUN_017d265c(param_1,local_5c,puVar33,&local_40);
            }
            else if (uVar13 < 6) {
              pcVar14 = (char *)FUN_017d1aa4();
            }
            else {
              pcVar14 = (char *)FUN_017d202c();
            }
            iVar22 = iVar26 + (int)pcVar25 * 4;
            if (pcVar14 < (char *)0x4 ||
                LZCOUNT(local_40) + (int)pcVar14 * 4 + -0x1f <= iVar22 + -0x1b) {
              if (puVar17 <= local_5c) goto LAB_017ff088;
              iVar29 = iVar31 + 2;
              puVar30 = (uint *)((int)puVar36 + 2);
              if (local_48 != (uint *)0x0) {
                uVar21 = iVar29 - *(int *)(param_1 + 0x10);
                uVar27 = uVar1;
                if (uVar21 <= uVar1) {
                  uVar27 = uVar21;
                }
                if (*(int *)(param_1 + 0x18) != 0) {
                  uVar27 = uVar21;
                }
                pcVar14 = (char *)(iVar29 - local_58);
                iVar31 = iVar11;
                if (pcVar14 < pcVar7) {
                  iVar31 = iVar35;
                }
                if ((local_58 <= uVar27 && (char *)0x2 < pcVar7 + ((local_58 - 1) - iVar29)) &&
                   (*(int *)((int)puVar36 + 2) == *(int *)(pcVar14 + iVar31))) {
                  if (pcVar14 < pcVar7) {
                    puVar9 = puVar18;
                  }
                  else {
                    puVar9 = puVar33;
                  }
                  puVar34 = (uint *)((int)puVar36 + 6);
                  puVar37 = (uint *)(pcVar14 + iVar31 + 4);
                  puVar28 = (uint *)((int)puVar34 + ((int)puVar9 - (int)puVar37));
                  if (puVar33 < puVar28) {
                    puVar28 = puVar33;
                  }
                  puVar10 = (uint *)((int)puVar28 + -3);
                  if (puVar34 < puVar10) {
                    if (*(uint *)(pcVar14 + iVar31 + 4) == *(uint *)((int)puVar36 + 6)) {
                      puVar36 = (uint *)((int)puVar36 + 10);
                      local_5c = (uint *)(pcVar14 + iVar31 + 8);
                      if (puVar36 < puVar10) {
                        do {
                          if (*local_5c != *puVar36) {
                            uVar27 = *local_5c ^ *puVar36;
                            bVar4 = (byte)uVar27;
                            bVar5 = (byte)(uVar27 >> 8);
                            bVar6 = (byte)(uVar27 >> 0x10);
                            bVar2 = (byte)(uVar27 >> 0x18);
                            pcVar14 = (char *)((int)puVar36 +
                                              (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                                bVar4 >> 1 & 1) << 1
                                                                               | bVar4 >> 2 & 1) <<
                                                                               1 | bVar4 >> 3 & 1)
                                                                              << 1 | bVar4 >> 4 & 1)
                                                                             << 1 | bVar4 >> 5 & 1)
                                                                            << 1 | bVar4 >> 6 & 1)
                                                                           << 1 | bVar4 >> 7) <<
                                                              0x18 | (uint)(byte)((((((((bVar5 & 1)
                                                                                        << 1 | bVar5
                                                                                               >> 1 
                                                  & 1) << 1 | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                  << 1 | bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1
                                                  | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x10 |
                                                  (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                    bVar6 >> 1 & 1) << 1 |
                                                                   bVar6 >> 2 & 1) << 1 |
                                                                  bVar6 >> 3 & 1) << 1 |
                                                                 bVar6 >> 4 & 1) << 1 |
                                                                bVar6 >> 5 & 1) << 1 |
                                                               bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                                  8 | (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                        bVar2 >> 1 & 1) << 1 |
                                                                       bVar2 >> 2 & 1) << 1 |
                                                                      bVar2 >> 3 & 1) << 1 |
                                                                     bVar2 >> 4 & 1) << 1 |
                                                                    bVar2 >> 5 & 1) << 1 |
                                                                   bVar2 >> 6 & 1) << 1 | bVar2 >> 7
                                                                  )) >> 3) - (int)puVar34));
                            goto LAB_017ffb1c;
                          }
                          puVar36 = puVar36 + 1;
                          local_5c = local_5c + 1;
                        } while (puVar36 < puVar10);
                      }
                      goto LAB_017ffab4;
                    }
                    uVar27 = *(uint *)((int)puVar36 + 6) ^ *(uint *)(pcVar14 + iVar31 + 4);
                    bVar4 = (byte)uVar27;
                    bVar5 = (byte)(uVar27 >> 8);
                    bVar6 = (byte)(uVar27 >> 0x10);
                    bVar2 = (byte)(uVar27 >> 0x18);
                    pcVar14 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                       bVar4 >> 1 & 1) << 1 |
                                                                      bVar4 >> 2 & 1) << 1 |
                                                                     bVar4 >> 3 & 1) << 1 |
                                                                    bVar4 >> 4 & 1) << 1 |
                                                                   bVar4 >> 5 & 1) << 1 |
                                                                  bVar4 >> 6 & 1) << 1 | bVar4 >> 7)
                                                     << 0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                                 bVar5 >> 1 & 1) <<
                                                                                 1 | bVar5 >> 2 & 1)
                                                                                << 1 | bVar5 >> 3 &
                                                                                       1) << 1 |
                                                                              bVar5 >> 4 & 1) << 1 |
                                                                             bVar5 >> 5 & 1) << 1 |
                                                                            bVar5 >> 6 & 1) << 1 |
                                                                           bVar5 >> 7) << 0x10 |
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
                                                                        bVar2 >> 7)) >> 3);
                  }
                  else {
                    puVar36 = puVar34;
                    local_5c = puVar37;
LAB_017ffab4:
                    if (puVar36 < (uint *)((int)puVar28 + -1)) {
                      if ((short)*local_5c == (short)*puVar36) {
                        local_5c = (uint *)((int)local_5c + 2);
                        puVar36 = (uint *)((int)puVar36 + 2);
                      }
                    }
                    if ((puVar36 < puVar28) && ((char)*local_5c == (char)*puVar36)) {
                      puVar36 = (uint *)((int)puVar36 + 1);
                    }
                    pcVar14 = (char *)((int)puVar36 - (int)puVar34);
                  }
LAB_017ffb1c:
                  if (puVar9 == (uint *)((int)puVar37 + (int)pcVar14)) {
                    puVar9 = (uint *)((int)puVar34 + (int)pcVar14);
                    puVar36 = (uint *)((int)puVar33 + -3);
                    if (puVar9 < puVar36) {
                      if (*puVar12 == *(uint *)((int)puVar34 + (int)pcVar14)) {
                        puVar28 = puVar9 + 1;
                        local_5c = puVar12 + 1;
                        if (puVar28 < puVar36) {
                          do {
                            if (*local_5c != *puVar28) {
                              uVar27 = *puVar28 ^ *local_5c;
                              bVar4 = (byte)uVar27;
                              bVar5 = (byte)(uVar27 >> 8);
                              bVar6 = (byte)(uVar27 >> 0x10);
                              bVar2 = (byte)(uVar27 >> 0x18);
                              pcVar16 = (char *)((int)puVar28 +
                                                (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1
                                                                                  | bVar4 >> 1 & 1)
                                                                                  << 1 | bVar4 >> 2
                                                                                         & 1) << 1 |
                                                                                bVar4 >> 3 & 1) << 1
                                                                               | bVar4 >> 4 & 1) <<
                                                                               1 | bVar4 >> 5 & 1)
                                                                              << 1 | bVar4 >> 6 & 1)
                                                                             << 1 | bVar4 >> 7) <<
                                                                0x18 | (uint)(byte)((((((((bVar5 & 1
                                                                                          ) << 1 | 
                                                  bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1) << 1 |
                                                  bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) << 1 |
                                                  bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 |
                                                  bVar5 >> 7) << 0x10 |
                                                  (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                    bVar6 >> 1 & 1) << 1 |
                                                                   bVar6 >> 2 & 1) << 1 |
                                                                  bVar6 >> 3 & 1) << 1 |
                                                                 bVar6 >> 4 & 1) << 1 |
                                                                bVar6 >> 5 & 1) << 1 |
                                                               bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                                  8 | (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                        bVar2 >> 1 & 1) << 1 |
                                                                       bVar2 >> 2 & 1) << 1 |
                                                                      bVar2 >> 3 & 1) << 1 |
                                                                     bVar2 >> 4 & 1) << 1 |
                                                                    bVar2 >> 5 & 1) << 1 |
                                                                   bVar2 >> 6 & 1) << 1 | bVar2 >> 7
                                                                  )) >> 3) - (int)puVar9));
                              goto LAB_017ffe1c;
                            }
                            puVar28 = puVar28 + 1;
                            local_5c = local_5c + 1;
                          } while (puVar28 < puVar36);
                        }
                        goto LAB_017ffdd0;
                      }
                      uVar27 = *puVar12 ^ *(uint *)((int)puVar34 + (int)pcVar14);
                      bVar4 = (byte)uVar27;
                      bVar5 = (byte)(uVar27 >> 8);
                      bVar6 = (byte)(uVar27 >> 0x10);
                      bVar2 = (byte)(uVar27 >> 0x18);
                      pcVar16 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                         bVar4 >> 1 & 1) << 1 |
                                                                        bVar4 >> 2 & 1) << 1 |
                                                                       bVar4 >> 3 & 1) << 1 |
                                                                      bVar4 >> 4 & 1) << 1 |
                                                                     bVar4 >> 5 & 1) << 1 |
                                                                    bVar4 >> 6 & 1) << 1 |
                                                                   bVar4 >> 7) << 0x18 |
                                                       (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                         bVar5 >> 1 & 1) << 1 |
                                                                        bVar5 >> 2 & 1) << 1 |
                                                                       bVar5 >> 3 & 1) << 1 |
                                                                      bVar5 >> 4 & 1) << 1 |
                                                                     bVar5 >> 5 & 1) << 1 |
                                                                    bVar5 >> 6 & 1) << 1 |
                                                                   bVar5 >> 7) << 0x10 |
                                                       (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                         bVar6 >> 1 & 1) << 1 |
                                                                        bVar6 >> 2 & 1) << 1 |
                                                                       bVar6 >> 3 & 1) << 1 |
                                                                      bVar6 >> 4 & 1) << 1 |
                                                                     bVar6 >> 5 & 1) << 1 |
                                                                    bVar6 >> 6 & 1) << 1 |
                                                                   bVar6 >> 7) << 8 |
                                                       (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                         bVar2 >> 1 & 1) << 1 |
                                                                        bVar2 >> 2 & 1) << 1 |
                                                                       bVar2 >> 3 & 1) << 1 |
                                                                      bVar2 >> 4 & 1) << 1 |
                                                                     bVar2 >> 5 & 1) << 1 |
                                                                    bVar2 >> 6 & 1) << 1 |
                                                                   bVar2 >> 7)) >> 3);
                    }
                    else {
                      puVar28 = puVar9;
                      local_5c = puVar12;
LAB_017ffdd0:
                      if (puVar28 < (uint *)((int)puVar33 + -1)) {
                        if ((short)*local_5c == (short)*puVar28) {
                          local_5c = (uint *)((int)local_5c + 2);
                          puVar28 = (uint *)((int)puVar28 + 2);
                        }
                      }
                      if ((puVar28 < puVar33) && ((char)*local_5c == (char)*puVar28)) {
                        puVar28 = (uint *)((int)puVar28 + 1);
                      }
                      pcVar16 = (char *)((int)puVar28 - (int)puVar9);
                    }
LAB_017ffe1c:
                    pcVar14 = pcVar14 + (int)pcVar16;
                  }
                  pcVar16 = pcVar14;
                  if ((char *)0xfffffffb < pcVar14) {
                    pcVar16 = (char *)0x0;
                  }
                  if (pcVar14 < (char *)0xfffffffc) {
                    pcVar16 = (char *)0x1;
                  }
                  if ((int)(pcVar14 + 4) * 4 <= iVar22 + -0x1e) {
                    pcVar16 = (char *)0x0;
                  }
                  if (pcVar16 != (char *)0x0) {
                    local_48 = (uint *)0x1;
                    iVar26 = 0x1f;
                    puVar32 = puVar30;
                    pcVar25 = pcVar14 + 4;
                  }
                }
              }
              local_40 = 999999999;
              if (uVar13 == 5) {
                pcVar14 = (char *)FUN_017d265c(param_1,puVar30,puVar33,&local_40);
              }
              else if (uVar13 < 6) {
                pcVar14 = (char *)FUN_017d1aa4();
              }
              else {
                pcVar14 = (char *)FUN_017d202c();
              }
              if (pcVar14 < (char *)0x4 ||
                  LZCOUNT(local_40) + (int)pcVar14 * 4 + -0x1f <= iVar26 + (int)(pcVar25 + -6) * 4)
              goto LAB_017ff088;
              puVar36 = puVar30;
            }
            else {
              puVar36 = local_5c;
            }
            puVar32 = puVar36;
            pcVar25 = pcVar14;
            local_48 = (uint *)local_40;
            if (puVar17 <= puVar36) goto LAB_017ff088;
            iVar31 = iVar29;
          } while( true );
        }
        goto LAB_017ff094;
      }
LAB_017fed64:
      uVar27 = (uint)((int)puVar36 - (int)local_7c) >> 8;
      *(uint *)(param_1 + 0xdc) = (uint)(8 < uVar27);
      puVar36 = (uint *)((int)puVar36 + uVar27 + 1);
    }
    if (puVar17 <= puVar36) goto LAB_017ff204;
    piVar8 = *(int **)(param_1 + 0x10);
  } while( true );
}

