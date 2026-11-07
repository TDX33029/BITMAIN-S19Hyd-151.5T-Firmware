// FUN_017f18dc @ 017f18dc size=3376 calls_out=5 calls_in=0
// strings: 

void FUN_017f18dc(int param_1,int *param_2,undefined4 *param_3,uint *param_4,int param_5)

{
  byte bVar1;
  undefined2 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  int *piVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  uint *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  int iVar20;
  uint *puVar21;
  uint uVar22;
  uint *puVar23;
  char *unaff_r4;
  char *pcVar24;
  uint uVar25;
  uint uVar26;
  uint *puVar27;
  uint uVar28;
  int iVar29;
  uint *puVar30;
  uint *puVar31;
  undefined8 uVar32;
  char *local_74;
  char *local_68;
  char *local_4c;
  char *local_48;
  uint local_40;
  uint local_3c;
  int *piStack_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c;
  
  puVar18 = (uint *)((int)param_4 + param_5);
  puVar30 = puVar18 + -2;
  local_2c = DAT_018ddaf8;
  pcVar8 = (char *)(1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  puVar6 = (uint *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc));
  puVar31 = param_4;
  if (param_4 == puVar6) {
    puVar31 = (uint *)((int)param_4 + 1);
  }
  pcVar10 = (char *)((int)puVar31 + (-*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)));
  piVar7 = *(int **)(param_1 + 0x18);
  if (pcVar10 <= pcVar8) {
    pcVar8 = pcVar10;
  }
  if (piVar7 != (int *)0x0) {
    pcVar8 = pcVar10;
  }
  pcVar10 = (char *)param_3[1];
  uVar11 = *(uint *)(param_1 + 200);
  pcVar12 = (char *)*param_3;
  local_4c = pcVar12;
  if (pcVar8 < pcVar10) {
    pcVar24 = pcVar10;
    if (pcVar8 < pcVar12) {
      *(undefined4 *)(param_1 + 0xdc) = 0;
      if (puVar31 < puVar30) {
        local_68 = (char *)0x0;
        goto LAB_017f19bc;
      }
      *param_3 = pcVar12;
    }
    else {
      *(undefined4 *)(param_1 + 0xdc) = 0;
      if (puVar31 < puVar30) {
        unaff_r4 = (char *)0x0;
        uVar28 = 0;
        local_68 = (char *)0x0;
        goto LAB_017f19fc;
      }
      *param_3 = pcVar12;
    }
  }
  else {
    local_68 = pcVar10;
    if (pcVar8 < pcVar12) {
      *(undefined4 *)(param_1 + 0xdc) = 0;
      if (puVar31 < puVar30) {
        pcVar24 = (char *)0x0;
LAB_017f19bc:
        local_4c = (char *)0x0;
        uVar28 = (uint)(pcVar12 != (char *)0x0);
        unaff_r4 = pcVar12;
        goto LAB_017f19fc;
      }
      pcVar10 = (char *)0x0;
    }
    else {
      pcVar24 = (char *)0x0;
      if (puVar30 <= puVar31) {
        unaff_r4 = (char *)0x0;
      }
      *(undefined4 *)(param_1 + 0xdc) = 0;
      if (puVar31 < puVar30) {
        uVar28 = 0;
        unaff_r4 = (char *)0x0;
LAB_017f19fc:
        puVar19 = (uint *)((int)puVar18 + -3);
        do {
          pcVar8 = local_4c;
          if (local_4c != (char *)0x0) {
            pcVar8 = (char *)0x1;
          }
          if (*(int *)((int)puVar31 + (1 - (int)local_4c)) == *(int *)((int)puVar31 + 1)) {
            uVar26 = (uint)pcVar8 & 1;
          }
          else {
            uVar26 = 0;
          }
          pcVar10 = (char *)0x0;
          if (uVar26 != 0) {
            puVar27 = (uint *)((int)puVar31 + 5);
            puVar14 = (uint *)((int)puVar31 + (5 - (int)local_4c));
            if (puVar27 < puVar19) {
              uVar26 = *(uint *)((int)puVar31 + (5 - (int)local_4c));
              if (uVar26 == *(uint *)((int)puVar31 + 5)) {
                puVar21 = (uint *)((int)puVar31 + 9);
                while( true ) {
                  puVar14 = puVar14 + 1;
                  if (puVar19 <= puVar21) break;
                  if (*puVar14 != *puVar21) {
                    uVar26 = *puVar14 ^ *puVar21;
                    bVar3 = (byte)uVar26;
                    bVar4 = (byte)(uVar26 >> 8);
                    bVar5 = (byte)(uVar26 >> 0x10);
                    bVar1 = (byte)(uVar26 >> 0x18);
                    pcVar10 = (char *)((int)puVar21 +
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
                                                                  )) >> 3) - (int)puVar27));
                    goto LAB_017f1e40;
                  }
                  puVar21 = puVar21 + 1;
                }
                goto LAB_017f206c;
              }
              uVar26 = uVar26 ^ *(uint *)((int)puVar31 + 5);
              bVar3 = (byte)uVar26;
              bVar4 = (byte)(uVar26 >> 8);
              bVar5 = (byte)(uVar26 >> 0x10);
              bVar1 = (byte)(uVar26 >> 0x18);
              pcVar10 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
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
              puVar21 = puVar27;
LAB_017f206c:
              if (puVar21 < (uint *)((int)puVar18 + -1)) {
                if ((short)*puVar14 == (short)*puVar21) {
                  puVar14 = (uint *)((int)puVar14 + 2);
                  puVar21 = (uint *)((int)puVar21 + 2);
                }
              }
              if ((puVar21 < puVar18) && ((char)*puVar14 == (char)*puVar21)) {
                puVar21 = (uint *)((int)puVar21 + 1);
              }
              pcVar10 = (char *)((int)puVar21 - (int)puVar27);
            }
LAB_017f1e40:
            pcVar10 = pcVar10 + 4;
          }
          local_40 = 999999999;
          if (uVar11 == 5) {
            uVar32 = FUN_017c03ac(param_1,puVar31,puVar18,&local_40);
          }
          else if (uVar11 < 6) {
            uVar32 = FUN_017bfc44();
          }
          else {
            uVar32 = FUN_017bff9c();
          }
          piVar7 = (int *)((ulonglong)uVar32 >> 0x20);
          pcVar12 = (char *)uVar32;
          local_48 = local_68;
          local_74 = pcVar8;
          if (pcVar10 < pcVar12) {
            if (&DAT_00000004 <= pcVar12) {
              puVar14 = puVar31;
              uVar26 = local_40;
              if (puVar31 < puVar30) {
                puVar27 = (uint *)((int)puVar31 + 1);
                pcVar10 = pcVar12;
                goto LAB_017f1a5c;
              }
LAB_017f1c8c:
              if (uVar26 < 4) {
                if (local_68 != (char *)0x0) {
                  local_48 = (char *)0x1;
                }
                pcVar10 = pcVar12;
              }
              else {
                if (param_4 < puVar14 && puVar6 < (uint *)((int)puVar14 + (3 - uVar26))) {
                  puVar27 = (uint *)((int)puVar14 + (3 - uVar26));
                  puVar31 = puVar14;
                  do {
                    puVar27 = (uint *)((int)puVar27 + -1);
                    puVar14 = (uint *)((int)puVar31 + -1);
                    if (*(char *)puVar14 != *(char *)puVar27) {
                      puVar14 = puVar31;
                      break;
                    }
                    pcVar12 = pcVar12 + 1;
                    puVar31 = puVar14;
                  } while (param_4 < puVar14 && puVar6 < puVar27);
                }
                local_68 = local_4c;
                local_74 = (char *)0x1;
                local_4c = (char *)(uVar26 - 3);
                pcVar10 = pcVar12;
                local_48 = pcVar8;
              }
              goto LAB_017f1cac;
            }
LAB_017f1fa8:
            uVar26 = ((uint)((int)puVar31 - (int)param_4) >> 8) + 1;
            puVar31 = (uint *)((int)puVar31 + uVar26);
            *(uint *)(param_1 + 0xdc) = (uint)(8 < uVar26);
            pcVar10 = local_68;
          }
          else {
            if (pcVar10 < &DAT_00000004) goto LAB_017f1fa8;
            puVar14 = (uint *)((int)puVar31 + 1);
            if (puVar31 < puVar30) {
              uVar26 = 1;
              puVar27 = puVar14;
LAB_017f1a5c:
              do {
                puVar21 = puVar27;
                pcVar12 = pcVar10;
                if (uVar26 == 0) {
                  iVar29 = 0x20;
                }
                else {
                  if (*(int *)((int)puVar21 - (int)local_4c) == *(int *)((int)puVar31 + 1)) {
                    uVar25 = (uint)pcVar8 & 1;
                  }
                  else {
                    uVar25 = 0;
                  }
                  if (uVar25 == 0) {
                    iVar29 = LZCOUNT(uVar26);
                  }
                  else {
                    puVar17 = (uint *)((int)puVar31 + 5);
                    puVar27 = (uint *)((int)puVar21 + (4 - (int)local_4c));
                    if (puVar17 < puVar19) {
                      uVar25 = *(uint *)((int)puVar21 + (4 - (int)local_4c));
                      if (uVar25 == *(uint *)((int)puVar31 + 5)) {
                        puVar23 = (uint *)((int)puVar31 + 9);
                        while( true ) {
                          puVar27 = puVar27 + 1;
                          if (puVar19 <= puVar23) break;
                          if (*puVar27 != *puVar23) {
                            uVar25 = *puVar27 ^ *puVar23;
                            bVar3 = (byte)uVar25;
                            bVar4 = (byte)(uVar25 >> 8);
                            bVar5 = (byte)(uVar25 >> 0x10);
                            bVar1 = (byte)(uVar25 >> 0x18);
                            pcVar13 = (char *)((int)puVar23 +
                                              (((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                                bVar3 >> 1 & 1) << 1
                                                                               | bVar3 >> 2 & 1) <<
                                                                               1 | bVar3 >> 3 & 1)
                                                                              << 1 | bVar3 >> 4 & 1)
                                                                             << 1 | bVar3 >> 5 & 1)
                                                                            << 1 | bVar3 >> 6 & 1)
                                                                           << 1 | bVar3 >> 7) <<
                                                              0x18 | (uint)(byte)((((((((bVar4 & 1)
                                                                                        << 1 | bVar4
                                                                                               >> 1 
                                                  & 1) << 1 | bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1)
                                                  << 1 | bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1
                                                  | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10 |
                                                  (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                    bVar5 >> 1 & 1) << 1 |
                                                                   bVar5 >> 2 & 1) << 1 |
                                                                  bVar5 >> 3 & 1) << 1 |
                                                                 bVar5 >> 4 & 1) << 1 |
                                                                bVar5 >> 5 & 1) << 1 |
                                                               bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                                  8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3) - (int)puVar17));
                            goto LAB_017f1ad0;
                          }
                          puVar23 = puVar23 + 1;
                        }
                        goto LAB_017f21d4;
                      }
                      uVar25 = uVar25 ^ *(uint *)((int)puVar31 + 5);
                      bVar3 = (byte)uVar25;
                      bVar4 = (byte)(uVar25 >> 8);
                      bVar5 = (byte)(uVar25 >> 0x10);
                      bVar1 = (byte)(uVar25 >> 0x18);
                      pcVar13 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
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
                                                                   bVar1 >> 7)) >> 3);
                    }
                    else {
                      puVar23 = puVar17;
LAB_017f21d4:
                      if (puVar23 < (uint *)((int)puVar18 + -1)) {
                        if ((short)*puVar27 == (short)*puVar23) {
                          puVar27 = (uint *)((int)puVar27 + 2);
                          puVar23 = (uint *)((int)puVar23 + 2);
                        }
                      }
                      if ((puVar23 < puVar18) && ((char)*puVar27 == (char)*puVar23)) {
                        puVar23 = (uint *)((int)puVar23 + 1);
                      }
                      pcVar13 = (char *)((int)puVar23 - (int)puVar17);
                    }
LAB_017f1ad0:
                    iVar29 = LZCOUNT(uVar26);
                    if (pcVar13 < (char *)0xfffffffc &&
                        (int)(pcVar10 + -10) * 3 + iVar29 < (int)(pcVar13 + 4) * 3) {
                      uVar26 = 1;
                      iVar29 = 0x1f;
                      puVar14 = puVar21;
                      pcVar12 = pcVar13 + 4;
                    }
                  }
                }
                local_40 = 999999999;
                if (uVar11 == 5) {
                  pcVar10 = (char *)FUN_017c03ac(param_1,puVar21,puVar18,&local_40);
                }
                else if (uVar11 < 6) {
                  pcVar10 = (char *)FUN_017bfc44();
                }
                else {
                  pcVar10 = (char *)FUN_017bff9c();
                }
                iVar20 = iVar29 + (int)pcVar12 * 4;
                if (pcVar10 < &DAT_00000004 ||
                    LZCOUNT(local_40) + (int)pcVar10 * 4 + -0x1f <= iVar20 + -0x1b) {
                  if (puVar30 <= puVar21) goto LAB_017f1c8c;
                  puVar21 = (uint *)((int)puVar31 + 2);
                  if (uVar26 != 0) {
                    if (*(int *)((int)puVar21 - (int)local_4c) == *(int *)((int)puVar31 + 2)) {
                      uVar25 = (uint)pcVar8 & 1;
                    }
                    else {
                      uVar25 = 0;
                    }
                    if (uVar25 != 0) {
                      puVar17 = (uint *)((int)puVar31 + 6);
                      puVar27 = (uint *)((int)puVar21 + (4 - (int)local_4c));
                      if (puVar17 < puVar19) {
                        uVar25 = *(uint *)((int)puVar21 + (4 - (int)local_4c));
                        if (uVar25 == *(uint *)((int)puVar31 + 6)) {
                          puVar31 = (uint *)((int)puVar31 + 10);
                          while( true ) {
                            puVar27 = puVar27 + 1;
                            if (puVar19 <= puVar31) break;
                            if (*puVar27 != *puVar31) {
                              uVar25 = *puVar27 ^ *puVar31;
                              bVar3 = (byte)uVar25;
                              bVar4 = (byte)(uVar25 >> 8);
                              bVar5 = (byte)(uVar25 >> 0x10);
                              bVar1 = (byte)(uVar25 >> 0x18);
                              pcVar10 = (char *)((int)puVar31 +
                                                (((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1
                                                                                  | bVar3 >> 1 & 1)
                                                                                  << 1 | bVar3 >> 2
                                                                                         & 1) << 1 |
                                                                                bVar3 >> 3 & 1) << 1
                                                                               | bVar3 >> 4 & 1) <<
                                                                               1 | bVar3 >> 5 & 1)
                                                                              << 1 | bVar3 >> 6 & 1)
                                                                             << 1 | bVar3 >> 7) <<
                                                                0x18 | (uint)(byte)((((((((bVar4 & 1
                                                                                          ) << 1 | 
                                                  bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1) << 1 |
                                                  bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                                  bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 |
                                                  bVar4 >> 7) << 0x10 |
                                                  (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                    bVar5 >> 1 & 1) << 1 |
                                                                   bVar5 >> 2 & 1) << 1 |
                                                                  bVar5 >> 3 & 1) << 1 |
                                                                 bVar5 >> 4 & 1) << 1 |
                                                                bVar5 >> 5 & 1) << 1 |
                                                               bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                                  8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3) - (int)puVar17));
                              goto LAB_017f1bf4;
                            }
                            puVar31 = puVar31 + 1;
                          }
                          goto LAB_017f2370;
                        }
                        uVar25 = uVar25 ^ *(uint *)((int)puVar31 + 6);
                        bVar3 = (byte)uVar25;
                        bVar4 = (byte)(uVar25 >> 8);
                        bVar5 = (byte)(uVar25 >> 0x10);
                        bVar1 = (byte)(uVar25 >> 0x18);
                        pcVar10 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
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
                                                                     bVar1 >> 7)) >> 3);
                      }
                      else {
                        puVar31 = puVar17;
LAB_017f2370:
                        if (puVar31 < (uint *)((int)puVar18 + -1)) {
                          if ((short)*puVar27 == (short)*puVar31) {
                            puVar27 = (uint *)((int)puVar27 + 2);
                            puVar31 = (uint *)((int)puVar31 + 2);
                          }
                        }
                        if ((puVar31 < puVar18) && ((char)*puVar27 == (char)*puVar31)) {
                          puVar31 = (uint *)((int)puVar31 + 1);
                        }
                        pcVar10 = (char *)((int)puVar31 - (int)puVar17);
                      }
LAB_017f1bf4:
                      pcVar13 = pcVar10;
                      if ((char *)0xfffffffb < pcVar10) {
                        pcVar13 = (char *)0x0;
                      }
                      if (pcVar10 < (char *)0xfffffffc) {
                        pcVar13 = (char *)0x1;
                      }
                      if ((int)(pcVar10 + 4) * 4 <= iVar20 + -0x1e) {
                        pcVar13 = (char *)0x0;
                      }
                      if (pcVar13 != (char *)0x0) {
                        uVar26 = 1;
                        iVar29 = 0x1f;
                        puVar14 = puVar21;
                        pcVar12 = pcVar10 + 4;
                      }
                    }
                  }
                  local_40 = 999999999;
                  if (uVar11 == 5) {
                    pcVar10 = (char *)FUN_017c03ac(param_1,puVar21,puVar18,&local_40);
                  }
                  else if (uVar11 < 6) {
                    pcVar10 = (char *)FUN_017bfc44();
                  }
                  else {
                    pcVar10 = (char *)FUN_017bff9c();
                  }
                  if (pcVar10 < (char *)0x4 ||
                      LZCOUNT(local_40) + (int)pcVar10 * 4 + -0x1f <=
                      iVar29 + (int)(pcVar12 + -6) * 4) goto LAB_017f1c8c;
                }
                puVar14 = puVar21;
                pcVar12 = pcVar10;
                uVar26 = local_40;
                if (puVar30 <= puVar21) goto LAB_017f1c8c;
                puVar27 = (uint *)((int)puVar21 + 1);
                puVar31 = puVar21;
              } while( true );
            }
            uVar26 = 1;
            if (local_68 != (char *)0x0) {
              local_48 = (char *)0x1;
            }
LAB_017f1cac:
            uVar25 = (int)puVar14 - (int)param_4;
            puVar27 = puVar18 + -8;
            puVar31 = (uint *)param_2[3];
            if (puVar27 < puVar14) {
              FUN_017bfa44(puVar31,param_4,puVar14);
LAB_017f2184:
              param_2[3] = param_2[3] + uVar25;
              puVar21 = (uint *)param_2[1];
              piVar7 = param_2;
              if (0xffff < uVar25) {
                param_2[10] = (int)puVar21 - *param_2 >> 3;
                param_2[9] = 1;
              }
            }
            else {
              local_3c = *param_4;
              piStack_38 = (int *)param_4[1];
              uStack_34 = param_4[2];
              uStack_30 = param_4[3];
              puVar31[3] = uStack_30;
              *puVar31 = local_3c;
              puVar31[1] = (uint)piStack_38;
              puVar31[2] = uStack_34;
              iVar29 = param_2[3];
              if (0x10 < uVar25) {
                local_3c = param_4[4];
                piStack_38 = (int *)param_4[5];
                uStack_34 = param_4[6];
                uStack_30 = param_4[7];
                *(uint *)(iVar29 + 0x10) = local_3c;
                *(int **)(iVar29 + 0x14) = piStack_38;
                *(uint *)(iVar29 + 0x18) = uStack_34;
                *(uint *)(iVar29 + 0x1c) = uStack_30;
                if (0x10 < (int)(uVar25 - 0x10)) {
                  puVar31 = (uint *)(iVar29 + 0x20);
                  puVar21 = param_4 + 0x10;
                  do {
                    uVar9 = puVar21[-7];
                    uVar15 = puVar21[-6];
                    puVar17 = puVar31 + 8;
                    uVar22 = puVar21[-5];
                    *puVar31 = puVar21[-8];
                    puVar31[1] = uVar9;
                    puVar31[2] = uVar15;
                    puVar31[3] = uVar22;
                    local_3c = puVar21[-4];
                    piStack_38 = (int *)puVar21[-3];
                    uStack_34 = puVar21[-2];
                    uStack_30 = puVar21[-1];
                    puVar31[4] = local_3c;
                    puVar31[5] = (uint)piStack_38;
                    puVar31[6] = uStack_34;
                    puVar31[7] = uStack_30;
                    puVar31 = puVar17;
                    puVar21 = puVar21 + 8;
                  } while (puVar17 < (uint *)(iVar29 + uVar25));
                }
                goto LAB_017f2184;
              }
              param_2[3] = (int)(iVar29 + uVar25);
              puVar21 = (uint *)param_2[1];
              piVar7 = piStack_38;
            }
            *(short *)(puVar21 + 1) = (short)uVar25;
            *puVar21 = uVar26;
            if ((char *)0xffff < pcVar10 + -3) {
              param_2[10] = (int)puVar21 - *param_2 >> 3;
              piVar7 = (int *)&SUB_00000002;
              param_2[9] = 2;
            }
            *(short *)((int)puVar21 + 6) = (short)(pcVar10 + -3);
            puVar31 = (uint *)((int)puVar14 + (int)pcVar10);
            param_2[1] = (int)(puVar21 + 2);
            if (*(int *)(param_1 + 0xdc) != 0) {
              *(undefined4 *)(param_1 + 0xdc) = 0;
            }
            if (puVar30 < puVar31) {
              pcVar8 = (char *)0x0;
            }
            else {
              pcVar8 = (char *)((uint)local_48 & 1);
            }
            if (pcVar8 == (char *)0x0) {
              pcVar8 = local_74;
              param_4 = puVar31;
              pcVar10 = local_68;
            }
            else {
              while (pcVar10 = local_68, *puVar31 == *(uint *)((int)puVar31 - (int)local_68)) {
                puVar21 = puVar31 + 1;
                puVar14 = (uint *)((int)puVar31 + (4 - (int)local_68));
                if (puVar21 < puVar19) {
                  uVar26 = *(uint *)((int)puVar31 + (4 - (int)local_68));
                  if (uVar26 == puVar31[1]) {
                    puVar17 = puVar31 + 2;
                    while( true ) {
                      puVar14 = puVar14 + 1;
                      if (puVar19 <= puVar17) break;
                      if (*puVar14 != *puVar17) {
                        uVar26 = *puVar14 ^ *puVar17;
                        bVar3 = (byte)uVar26;
                        bVar4 = (byte)(uVar26 >> 8);
                        bVar5 = (byte)(uVar26 >> 0x10);
                        bVar1 = (byte)(uVar26 >> 0x18);
                        pcVar12 = (char *)((int)puVar17 +
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
                                          (int)puVar21));
                        goto LAB_017f2264;
                      }
                      puVar17 = puVar17 + 1;
                    }
                    goto LAB_017f2458;
                  }
                  uVar26 = uVar26 ^ puVar31[1];
                  bVar3 = (byte)uVar26;
                  bVar4 = (byte)(uVar26 >> 8);
                  bVar5 = (byte)(uVar26 >> 0x10);
                  bVar1 = (byte)(uVar26 >> 0x18);
                  pcVar12 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
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
                  puVar17 = puVar21;
LAB_017f2458:
                  if (puVar17 < (uint *)((int)puVar18 + -1)) {
                    if ((short)*puVar14 == (short)*puVar17) {
                      puVar14 = (uint *)((int)puVar14 + 2);
                      puVar17 = (uint *)((int)puVar17 + 2);
                    }
                  }
                  if ((puVar17 < puVar18) && ((char)*puVar14 == (char)*puVar17)) {
                    puVar17 = (uint *)((int)puVar17 + 1);
                  }
                  pcVar12 = (char *)((int)puVar17 - (int)puVar21);
                }
LAB_017f2264:
                puVar14 = (uint *)param_2[3];
                if (puVar27 < puVar31) {
                  FUN_017bfa44(puVar14,puVar31,puVar31,puVar27);
                }
                else {
                  local_3c = *puVar31;
                  piStack_38 = (int *)puVar31[1];
                  uStack_34 = puVar31[2];
                  uStack_30 = puVar31[3];
                  *puVar14 = local_3c;
                  puVar14[1] = (uint)piStack_38;
                  puVar14[2] = uStack_34;
                  puVar14[3] = uStack_30;
                }
                puVar31 = (uint *)((int)puVar31 + (int)(pcVar12 + 4));
                puVar16 = (undefined4 *)param_2[1];
                *(undefined2 *)(puVar16 + 1) = 0;
                piVar7 = (int *)&DAT_00000001;
                *puVar16 = 1;
                uVar2 = SUB42(pcVar12 + 1,0);
                param_4 = puVar31;
                if (pcVar12 + 1 < (char *)0x10000) {
                  *(undefined2 *)((int)puVar16 + 6) = uVar2;
                  param_2[1] = (int)(puVar16 + 2);
                  if (local_4c == (char *)0x0 || puVar30 < puVar31) {
                    pcVar10 = local_4c;
                    local_4c = local_68;
                    goto joined_r0x017f1fd4;
                  }
                }
                else {
                  param_2[10] = (int)puVar16 - *param_2 >> 3;
                  piVar7 = (int *)&SUB_00000002;
                  param_2[9] = 2;
                  *(undefined2 *)((int)puVar16 + 6) = uVar2;
                  param_2[1] = (int)(puVar16 + 2);
                  if (local_4c == (char *)0x0 || puVar30 < puVar31) {
                    pcVar10 = local_4c;
                    local_4c = local_68;
                    goto joined_r0x017f1fd4;
                  }
                }
                local_68 = local_4c;
                local_4c = pcVar10;
              }
              pcVar8 = local_4c;
              param_4 = puVar31;
              if (local_4c != (char *)0x0) {
                pcVar8 = (char *)0x1;
              }
            }
          }
joined_r0x017f1fd4:
          local_68 = pcVar10;
        } while (puVar31 < puVar30);
        pcVar10 = unaff_r4;
        pcVar12 = local_4c;
        if ((uVar28 & (uint)pcVar8) != 0) goto LAB_017f1ff8;
      }
      pcVar10 = pcVar24;
      pcVar12 = unaff_r4;
      if (local_4c != (char *)0x0) {
        pcVar12 = local_4c;
      }
    }
LAB_017f1ff8:
    local_4c = pcVar12;
    *param_3 = local_4c;
    if (local_68 != (char *)0x0) goto LAB_017f200c;
  }
  local_68 = pcVar10;
LAB_017f200c:
  param_3[1] = local_68;
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)puVar18 - (int)param_4,piVar7,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

