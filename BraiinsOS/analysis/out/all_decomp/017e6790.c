// FUN_017e6790 @ 017e6790 size=2224 calls_out=5 calls_in=0
// strings: 

void FUN_017e6790(int param_1,int *param_2,undefined4 *param_3,uint *param_4,int param_5)

{
  byte bVar1;
  undefined2 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint *extraout_r1;
  uint *extraout_r1_00;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint *puVar16;
  uint *puVar17;
  char *pcVar18;
  uint *puVar19;
  char *pcVar20;
  uint uVar21;
  uint uVar22;
  char *pcVar23;
  uint *puVar24;
  int iVar25;
  uint *puVar26;
  undefined8 uVar27;
  char *local_90;
  char *local_60;
  char *local_58;
  uint local_4c;
  char *local_44;
  uint local_40;
  uint local_3c;
  uint *puStack_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c;
  
  puVar12 = (uint *)((int)param_4 + param_5);
  local_2c = DAT_018ddaf8;
  puVar17 = puVar12 + -2;
  pcVar23 = (char *)*param_3;
  pcVar18 = (char *)(1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  puVar6 = (uint *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc));
  puVar24 = param_4;
  if (param_4 == puVar6) {
    puVar24 = (uint *)((int)param_4 + 1);
  }
  pcVar9 = (char *)((int)puVar24 + (-*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)));
  puVar7 = *(uint **)(param_1 + 0x18);
  if (pcVar9 <= pcVar18) {
    pcVar18 = pcVar9;
  }
  if (puVar7 != (uint *)0x0) {
    pcVar18 = pcVar9;
  }
  pcVar9 = (char *)param_3[1];
  uVar10 = *(uint *)(param_1 + 200);
  if (pcVar18 < pcVar9) {
    local_90 = pcVar9;
    if (pcVar18 < pcVar23) {
      *(undefined4 *)(param_1 + 0xdc) = 0;
      if (puVar24 < puVar17) {
        local_44 = (char *)0x0;
        goto LAB_017e6ae8;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xdc) = 0;
      if (puVar24 < puVar17) {
        uVar21 = 0;
        local_44 = (char *)0x0;
        pcVar18 = (char *)0x0;
        goto LAB_017e68a0;
      }
    }
    *param_3 = pcVar23;
  }
  else {
    local_44 = pcVar9;
    if (pcVar18 < pcVar23) {
      *(undefined4 *)(param_1 + 0xdc) = 0;
      if (puVar24 < puVar17) {
        local_90 = (char *)0x0;
LAB_017e6ae8:
        uVar21 = (uint)(pcVar23 != (char *)0x0);
        pcVar18 = pcVar23;
        pcVar23 = (char *)0x0;
        goto LAB_017e68a0;
      }
      pcVar9 = (char *)0x0;
    }
    else {
      *(undefined4 *)(param_1 + 0xdc) = 0;
      if (puVar24 < puVar17) {
        pcVar18 = (char *)0x0;
        uVar21 = 0;
        local_90 = (char *)0x0;
LAB_017e68a0:
        puVar13 = (uint *)((int)puVar12 + -3);
        do {
          while( true ) {
            local_58 = pcVar23;
            if (pcVar23 != (char *)0x0) {
              local_58 = (char *)0x1;
            }
            if (*(int *)((int)puVar24 + (1 - (int)pcVar23)) == *(int *)((int)puVar24 + 1)) {
              local_60 = (char *)((uint)local_58 & 1);
            }
            else {
              local_60 = (char *)0x0;
            }
            pcVar9 = pcVar23;
            if (local_60 == (char *)0x0) break;
            puVar19 = (uint *)((int)puVar24 + 5);
            puVar16 = (uint *)((int)puVar24 + 1);
            puVar7 = (uint *)((int)puVar24 + (5 - (int)pcVar23));
            if (puVar19 < puVar13) {
              uVar22 = *(uint *)((int)puVar24 + (5 - (int)pcVar23));
              if (uVar22 == *(uint *)((int)puVar24 + 5)) {
                puVar24 = (uint *)((int)puVar24 + 9);
                while( true ) {
                  puVar7 = puVar7 + 1;
                  if (puVar13 <= puVar24) break;
                  if (*puVar7 != *puVar24) {
                    uVar22 = *puVar7 ^ *puVar24;
                    bVar3 = (byte)uVar22;
                    bVar4 = (byte)(uVar22 >> 8);
                    bVar5 = (byte)(uVar22 >> 0x10);
                    bVar1 = (byte)(uVar22 >> 0x18);
                    pcVar20 = (char *)((int)puVar24 +
                                      (((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                        bVar3 >> 1 & 1) << 1 |
                                                                       bVar3 >> 2 & 1) << 1 |
                                                                      bVar3 >> 3 & 1) << 1 |
                                                                     bVar3 >> 4 & 1) << 1 |
                                                                    bVar3 >> 5 & 1) << 1 |
                                                                   bVar3 >> 6 & 1) << 1 | bVar3 >> 7
                                                                  ) << 0x18 |
                                                      (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                        bVar4 >> 1 & 1) << 1 |
                                                                       bVar4 >> 2 & 1) << 1 |
                                                                      bVar4 >> 3 & 1) << 1 |
                                                                     bVar4 >> 4 & 1) << 1 |
                                                                    bVar4 >> 5 & 1) << 1 |
                                                                   bVar4 >> 6 & 1) << 1 | bVar4 >> 7
                                                                  ) << 0x10 |
                                                      (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                        bVar5 >> 1 & 1) << 1 |
                                                                       bVar5 >> 2 & 1) << 1 |
                                                                      bVar5 >> 3 & 1) << 1 |
                                                                     bVar5 >> 4 & 1) << 1 |
                                                                    bVar5 >> 5 & 1) << 1 |
                                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7
                                                                  ) << 8 |
                                                      (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3) - (int)puVar19));
                    goto LAB_017e6914;
                  }
                  puVar24 = puVar24 + 1;
                }
                goto LAB_017e6bcc;
              }
              uVar22 = uVar22 ^ *(uint *)((int)puVar24 + 5);
              bVar3 = (byte)uVar22;
              bVar4 = (byte)(uVar22 >> 8);
              bVar5 = (byte)(uVar22 >> 0x10);
              bVar1 = (byte)(uVar22 >> 0x18);
              pcVar20 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
                                                                 << 1 | bVar3 >> 2 & 1) << 1 |
                                                               bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1
                                                              ) << 1 | bVar3 >> 5 & 1) << 1 |
                                                            bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                                               0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                        bVar4 >> 1 & 1) << 1 |
                                                                       bVar4 >> 2 & 1) << 1 |
                                                                      bVar4 >> 3 & 1) << 1 |
                                                                     bVar4 >> 4 & 1) << 1 |
                                                                    bVar4 >> 5 & 1) << 1 |
                                                                   bVar4 >> 6 & 1) << 1 | bVar4 >> 7
                                                                  ) << 0x10 |
                                               (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                                 << 1 | bVar5 >> 2 & 1) << 1 |
                                                               bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1
                                                              ) << 1 | bVar5 >> 5 & 1) << 1 |
                                                            bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 8
                                               | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                   bVar1 >> 1 & 1) << 1 |
                                                                  bVar1 >> 2 & 1) << 1 |
                                                                 bVar1 >> 3 & 1) << 1 |
                                                                bVar1 >> 4 & 1) << 1 |
                                                               bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1
                                                              ) << 1 | bVar1 >> 7)) >> 3);
            }
            else {
              puVar24 = puVar19;
LAB_017e6bcc:
              if (puVar24 < (uint *)((int)puVar12 + -1)) {
                if ((short)*puVar7 == (short)*puVar24) {
                  puVar7 = (uint *)((int)puVar7 + 2);
                  puVar24 = (uint *)((int)puVar24 + 2);
                }
              }
              if ((puVar24 < puVar12) && ((char)*puVar7 == (char)*puVar24)) {
                puVar24 = (uint *)((int)puVar24 + 1);
              }
              pcVar20 = (char *)((int)puVar24 - (int)puVar19);
            }
LAB_017e6914:
            pcVar20 = pcVar20 + 4;
            local_58 = local_44;
            if (local_44 != (char *)0x0) {
              local_58 = (char *)0x1;
            }
            local_4c = 1;
LAB_017e6930:
            uVar22 = (int)puVar16 - (int)param_4;
            puVar24 = (uint *)param_2[3];
            if (puVar12 + -8 < puVar16) {
              FUN_017bfa44(puVar24,param_4,puVar16);
              puVar7 = extraout_r1;
LAB_017e6cf0:
              param_2[3] = param_2[3] + uVar22;
              puVar24 = (uint *)param_2[1];
              if (0xffff < uVar22) {
                param_2[10] = (int)puVar24 - *param_2 >> 3;
                param_2[9] = 1;
              }
            }
            else {
              local_3c = *param_4;
              puVar7 = (uint *)param_4[1];
              uStack_34 = param_4[2];
              uStack_30 = param_4[3];
              puVar24[3] = uStack_30;
              *puVar24 = local_3c;
              puVar24[1] = (uint)puVar7;
              puVar24[2] = uStack_34;
              iVar25 = param_2[3];
              if (0x10 < uVar22) {
                local_3c = param_4[4];
                puVar7 = (uint *)param_4[5];
                uStack_34 = param_4[6];
                uStack_30 = param_4[7];
                *(uint *)(iVar25 + 0x10) = local_3c;
                *(uint **)(iVar25 + 0x14) = puVar7;
                *(uint *)(iVar25 + 0x18) = uStack_34;
                *(uint *)(iVar25 + 0x1c) = uStack_30;
                puStack_38 = puVar7;
                if (0x10 < (int)(uVar22 - 0x10)) {
                  puVar24 = param_4 + 0x10;
                  puVar19 = (uint *)(iVar25 + 0x20);
                  do {
                    uVar8 = puVar24[-7];
                    uVar11 = puVar24[-6];
                    puVar26 = puVar19 + 8;
                    uVar14 = puVar24[-5];
                    *puVar19 = puVar24[-8];
                    puVar19[1] = uVar8;
                    puVar19[2] = uVar11;
                    puVar19[3] = uVar14;
                    local_3c = puVar24[-4];
                    puVar7 = (uint *)puVar24[-3];
                    uStack_34 = puVar24[-2];
                    uStack_30 = puVar24[-1];
                    puVar19[4] = local_3c;
                    puVar19[5] = (uint)puVar7;
                    puVar19[6] = uStack_34;
                    puVar19[7] = uStack_30;
                    puVar24 = puVar24 + 8;
                    puVar19 = puVar26;
                  } while (puVar26 < (uint *)(iVar25 + uVar22));
                  puStack_38 = puVar7;
                }
                goto LAB_017e6cf0;
              }
              param_2[3] = (int)(iVar25 + uVar22);
              puVar24 = (uint *)param_2[1];
              puStack_38 = puVar7;
            }
            *puVar24 = local_4c;
            *(short *)(puVar24 + 1) = (short)uVar22;
            if ((char *)0xffff < pcVar20 + -3) {
              param_2[10] = (int)puVar24 - *param_2 >> 3;
              puVar7 = (uint *)&SUB_00000002;
              param_2[9] = 2;
            }
            *(short *)((int)puVar24 + 6) = (short)(pcVar20 + -3);
            param_4 = (uint *)((int)puVar16 + (int)pcVar20);
            param_2[1] = (int)(puVar24 + 2);
            if (*(int *)(param_1 + 0xdc) != 0) {
              *(undefined4 *)(param_1 + 0xdc) = 0;
            }
            if (puVar17 < param_4) {
              local_58 = (char *)0x0;
            }
            else {
              local_58 = (char *)((uint)local_58 & 1);
            }
            if (local_58 == (char *)0x0) {
              local_58 = local_60;
              pcVar23 = pcVar9;
            }
            else {
              while (pcVar20 = pcVar9, *param_4 == *(uint *)((int)param_4 - (int)local_44)) {
                puVar7 = param_4 + 1;
                puVar24 = (uint *)((int)param_4 + (4 - (int)local_44));
                if (puVar7 < puVar13) {
                  uVar22 = *(uint *)((int)param_4 + (4 - (int)local_44));
                  if (uVar22 == param_4[1]) {
                    puVar16 = param_4 + 2;
                    while( true ) {
                      puVar24 = puVar24 + 1;
                      if (puVar13 <= puVar16) break;
                      if (*puVar24 != *puVar16) {
                        uVar22 = *puVar24 ^ *puVar16;
                        bVar3 = (byte)uVar22;
                        bVar4 = (byte)(uVar22 >> 8);
                        bVar5 = (byte)(uVar22 >> 0x10);
                        bVar1 = (byte)(uVar22 >> 0x18);
                        pcVar23 = (char *)((int)puVar16 +
                                          (((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                            bVar3 >> 1 & 1) << 1 |
                                                                           bVar3 >> 2 & 1) << 1 |
                                                                          bVar3 >> 3 & 1) << 1 |
                                                                         bVar3 >> 4 & 1) << 1 |
                                                                        bVar3 >> 5 & 1) << 1 |
                                                                       bVar3 >> 6 & 1) << 1 |
                                                                      bVar3 >> 7) << 0x18 |
                                                          (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                            bVar4 >> 1 & 1) << 1 |
                                                                           bVar4 >> 2 & 1) << 1 |
                                                                          bVar4 >> 3 & 1) << 1 |
                                                                         bVar4 >> 4 & 1) << 1 |
                                                                        bVar4 >> 5 & 1) << 1 |
                                                                       bVar4 >> 6 & 1) << 1 |
                                                                      bVar4 >> 7) << 0x10 |
                                                          (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                            bVar5 >> 1 & 1) << 1 |
                                                                           bVar5 >> 2 & 1) << 1 |
                                                                          bVar5 >> 3 & 1) << 1 |
                                                                         bVar5 >> 4 & 1) << 1 |
                                                                        bVar5 >> 5 & 1) << 1 |
                                                                       bVar5 >> 6 & 1) << 1 |
                                                                      bVar5 >> 7) << 8 |
                                                          (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                            bVar1 >> 1 & 1) << 1 |
                                                                           bVar1 >> 2 & 1) << 1 |
                                                                          bVar1 >> 3 & 1) << 1 |
                                                                         bVar1 >> 4 & 1) << 1 |
                                                                        bVar1 >> 5 & 1) << 1 |
                                                                       bVar1 >> 6 & 1) << 1 |
                                                                      bVar1 >> 7)) >> 3) -
                                          (int)puVar7));
                        goto LAB_017e6d8c;
                      }
                      puVar16 = puVar16 + 1;
                    }
                    goto LAB_017e6f3c;
                  }
                  uVar22 = uVar22 ^ param_4[1];
                  bVar3 = (byte)uVar22;
                  bVar4 = (byte)(uVar22 >> 8);
                  bVar5 = (byte)(uVar22 >> 0x10);
                  bVar1 = (byte)(uVar22 >> 0x18);
                  pcVar23 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                     bVar3 >> 1 & 1) << 1 |
                                                                    bVar3 >> 2 & 1) << 1 |
                                                                   bVar3 >> 3 & 1) << 1 |
                                                                  bVar3 >> 4 & 1) << 1 |
                                                                 bVar3 >> 5 & 1) << 1 |
                                                                bVar3 >> 6 & 1) << 1 | bVar3 >> 7)
                                                   << 0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                               bVar4 >> 1 & 1) << 1
                                                                              | bVar4 >> 2 & 1) << 1
                                                                             | bVar4 >> 3 & 1) << 1
                                                                            | bVar4 >> 4 & 1) << 1 |
                                                                           bVar4 >> 5 & 1) << 1 |
                                                                          bVar4 >> 6 & 1) << 1 |
                                                                         bVar4 >> 7) << 0x10 |
                                                   (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                     bVar5 >> 1 & 1) << 1 |
                                                                    bVar5 >> 2 & 1) << 1 |
                                                                   bVar5 >> 3 & 1) << 1 |
                                                                  bVar5 >> 4 & 1) << 1 |
                                                                 bVar5 >> 5 & 1) << 1 |
                                                                bVar5 >> 6 & 1) << 1 | bVar5 >> 7)
                                                   << 8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                            bVar1 >> 1 & 1) << 1 |
                                                                           bVar1 >> 2 & 1) << 1 |
                                                                          bVar1 >> 3 & 1) << 1 |
                                                                         bVar1 >> 4 & 1) << 1 |
                                                                        bVar1 >> 5 & 1) << 1 |
                                                                       bVar1 >> 6 & 1) << 1 |
                                                                      bVar1 >> 7)) >> 3);
                }
                else {
                  puVar16 = puVar7;
LAB_017e6f3c:
                  if (puVar16 < (uint *)((int)puVar12 + -1)) {
                    if ((short)*puVar24 == (short)*puVar16) {
                      puVar24 = (uint *)((int)puVar24 + 2);
                      puVar16 = (uint *)((int)puVar16 + 2);
                    }
                  }
                  if ((puVar16 < puVar12) && ((char)*puVar24 == (char)*puVar16)) {
                    puVar16 = (uint *)((int)puVar16 + 1);
                  }
                  pcVar23 = (char *)((int)puVar16 - (int)puVar7);
                }
LAB_017e6d8c:
                puVar24 = (uint *)param_2[3];
                if (puVar12 + -8 < param_4) {
                  FUN_017bfa44(puVar24,param_4,param_4);
                  puVar7 = extraout_r1_00;
                }
                else {
                  local_3c = *param_4;
                  puVar7 = (uint *)param_4[1];
                  uStack_34 = param_4[2];
                  uStack_30 = param_4[3];
                  *puVar24 = local_3c;
                  puVar24[1] = (uint)puVar7;
                  puVar24[2] = uStack_34;
                  puVar24[3] = uStack_30;
                  puStack_38 = puVar7;
                }
                puVar15 = (undefined4 *)param_2[1];
                param_4 = (uint *)((int)param_4 + (int)(pcVar23 + 4));
                *(undefined2 *)(puVar15 + 1) = 0;
                *puVar15 = 1;
                uVar2 = SUB42(pcVar23 + 1,0);
                if (pcVar23 + 1 < (char *)0x10000) {
                  *(undefined2 *)((int)puVar15 + 6) = uVar2;
                  param_2[1] = (int)(puVar15 + 2);
                  if (pcVar20 == (char *)0x0 || puVar17 < param_4) goto LAB_017e6f24;
                }
                else {
                  param_2[10] = (int)puVar15 - *param_2 >> 3;
                  param_2[9] = 2;
                  *(undefined2 *)((int)puVar15 + 6) = uVar2;
                  param_2[1] = (int)(puVar15 + 2);
                  puVar7 = puVar17;
                  if (puVar17 < param_4 || pcVar20 == (char *)0x0) {
LAB_017e6f24:
                    pcVar23 = local_44;
                    local_44 = pcVar20;
                    goto LAB_017e6a30;
                  }
                }
                pcVar9 = local_44;
                local_44 = pcVar20;
              }
              local_58 = pcVar20;
              pcVar23 = pcVar20;
              if (pcVar20 != (char *)0x0) {
                local_58 = (char *)0x1;
              }
            }
LAB_017e6a30:
            puVar24 = param_4;
            if (puVar17 <= param_4) goto LAB_017e6b58;
          }
          local_40 = 999999999;
          if (uVar10 == 5) {
            uVar27 = FUN_017c03ac(param_1,puVar24,puVar12,&local_40);
          }
          else if (uVar10 < 6) {
            uVar27 = FUN_017bfc44();
          }
          else {
            uVar27 = FUN_017bff9c();
          }
          puVar7 = (uint *)((ulonglong)uVar27 >> 0x20);
          pcVar20 = (char *)uVar27;
          if ((pcVar20 != (char *)0x0) && (local_4c = local_40, (char *)0x3 < pcVar20)) {
            puVar16 = puVar24;
            if (local_40 < 4) {
              pcVar23 = local_44;
              if (local_44 != (char *)0x0) {
                pcVar23 = (char *)0x1;
              }
              local_60 = local_58;
              local_58 = pcVar23;
            }
            else {
              puVar7 = (uint *)((int)puVar24 + (3 - local_40));
              if (param_4 < puVar24 && puVar6 < puVar7) {
                do {
                  puVar7 = (uint *)((int)puVar7 + -1);
                  puVar16 = (uint *)((int)puVar24 + -1);
                  if (*(char *)((int)puVar24 + -1) != *(char *)puVar7) {
                    puVar16 = puVar24;
                    break;
                  }
                  pcVar20 = pcVar20 + 1;
                  puVar24 = puVar16;
                } while (param_4 < puVar16 && puVar6 < puVar7);
              }
              local_60 = (char *)0x1;
              pcVar9 = (char *)(local_40 - 3);
              local_44 = pcVar23;
            }
            goto LAB_017e6930;
          }
          uVar22 = ((uint)((int)puVar24 - (int)param_4) >> 8) + 1;
          puVar24 = (uint *)((int)puVar24 + uVar22);
          *(uint *)(param_1 + 0xdc) = (uint)(8 < uVar22);
        } while (puVar24 < puVar17);
LAB_017e6b58:
        pcVar9 = pcVar18;
        if ((uVar21 & (uint)local_58) != 0) goto LAB_017e6b6c;
      }
      else {
        pcVar18 = (char *)0x0;
        local_90 = (char *)0x0;
      }
      pcVar9 = local_90;
      if (pcVar23 == (char *)0x0) {
        pcVar23 = pcVar18;
      }
    }
LAB_017e6b6c:
    *param_3 = pcVar23;
    if (local_44 != (char *)0x0) goto LAB_017e6b7c;
  }
  local_44 = pcVar9;
LAB_017e6b7c:
  param_3[1] = local_44;
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)puVar12 - (int)param_4,puVar7,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

