// FUN_017f4908 @ 017f4908 size=5160 calls_out=11 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_017f4908(int param_1,int *param_2,undefined4 *param_3,uint *param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  undefined2 uVar4;
  longlong lVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  undefined4 *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  int iVar23;
  uint *puVar24;
  uint *puVar25;
  uint *puVar26;
  int iVar27;
  uint uVar28;
  char *pcVar29;
  char *pcVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  uint uVar35;
  uint *puVar36;
  char *local_90;
  uint local_80;
  char *local_70;
  char *local_64;
  char *local_60;
  char *local_5c;
  uint local_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c;
  
  pcVar29 = (char *)param_3[1];
  puVar16 = (uint *)((int)param_4 + param_5);
  local_2c = DAT_018ddaf8;
  puVar17 = puVar16 + -4;
  uVar18 = *(uint *)(param_1 + 0xc4);
  iVar9 = *(int *)(param_1 + 4);
  uVar19 = uVar18;
  if (5 < uVar18) {
    uVar19 = 6;
  }
  puVar36 = (uint *)(iVar9 + *(int *)(param_1 + 0xc));
  if (uVar19 < 4) {
    uVar19 = 4;
  }
  pcVar10 = (char *)(1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  puVar25 = param_4;
  if (param_4 == puVar36) {
    puVar25 = (uint *)((int)param_4 + 1);
  }
  pcVar11 = (char *)((int)puVar25 + (-*(int *)(param_1 + 0xc) - iVar9));
  if (pcVar11 <= pcVar10) {
    pcVar10 = pcVar11;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    pcVar10 = pcVar11;
  }
  uVar12 = *(uint *)(param_1 + 200);
  pcVar11 = (char *)*param_3;
  if (pcVar10 < pcVar29) {
    local_70 = (char *)0x0;
    pcVar30 = pcVar29;
  }
  else {
    pcVar30 = (char *)0x0;
    local_70 = pcVar29;
  }
  if (pcVar10 < pcVar11) {
    local_5c = (char *)0x0;
    local_80 = 1;
    local_60 = (char *)0x0;
    local_64 = pcVar11;
  }
  else {
    local_5c = pcVar11;
    if (pcVar11 != (char *)0x0) {
      local_5c = (char *)0x1;
    }
    local_64 = (char *)0x0;
    local_80 = 0;
    local_60 = pcVar11;
  }
  uVar20 = *(uint *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0xdc) = 0;
  puVar13 = (uint *)(uVar20 + iVar9);
  if (puVar13 <= puVar17) {
    iVar27 = *(int *)(param_1 + 0x5c);
    pcVar29 = (char *)((int)puVar17 + (1 - (int)puVar13));
    iVar23 = *(int *)(param_1 + 0x28);
    if (pcVar29 < (char *)0x9) {
      uVar22 = uVar20 + (int)pcVar29;
    }
    else {
      uVar22 = uVar20 + 8;
    }
    iVar34 = *(int *)(param_1 + 0x24);
    if (uVar20 < uVar22) {
      uVar33 = *(uint *)(param_1 + 0x54);
      uVar32 = *(uint *)(param_1 + 0x50);
      if (4 < uVar18) {
        if (uVar12 == 5) goto LAB_017f4e30;
        do {
          if (5 < uVar12) {
            uVar31 = *puVar13;
            uVar35 = puVar13[1];
            uVar28 = 0xbf9b0000;
            goto LAB_017f4e48;
          }
          uVar28 = (*puVar13 * -0x61c8864f ^ uVar32) >> (0x18U - iVar34 & 0xff);
          while( true ) {
            iVar1 = (uVar28 >> 8) << (uVar19 & 0xff);
            HintPreloadData(iVar23 + iVar1);
            HintPreloadData(iVar27 + iVar1 * 4);
            HintPreloadData(iVar27 + iVar1 * 4 + 0x40);
            if (uVar18 != 5) {
              HintPreloadData(iVar23 + iVar1 + 0x20);
            }
            uVar31 = uVar20 & 7;
            uVar20 = uVar20 + 1;
            *(uint *)(param_1 + uVar31 * 4 + 0x2c) = uVar28;
            if (uVar22 <= uVar20) goto LAB_017f4a40;
            puVar13 = (uint *)(uVar20 + iVar9);
            if (uVar12 != 5) break;
LAB_017f4e30:
            uVar31 = *puVar13;
            uVar35 = puVar13[1];
            uVar28 = 0xbb000000;
LAB_017f4e48:
            uVar35 = uVar28 * uVar35 + uVar31 * -0x30e44324 +
                     (int)((ulonglong)uVar28 * (ulonglong)uVar31 >> 0x20) ^ uVar33;
            uVar28 = ((uint)((ulonglong)uVar28 * (ulonglong)uVar31) ^ uVar32) >>
                     (0x38U - iVar34 & 0xff) | uVar35 << (iVar34 - 0x18U & 0xff) |
                     uVar35 >> (0x18U - iVar34 & 0xff);
          }
        } while( true );
      }
      if (uVar12 == 5) {
        while( true ) {
          uVar31 = uVar20 & 7;
          puVar26 = (uint *)(uVar20 + iVar9);
          uVar20 = uVar20 + 1;
          lVar5 = (ulonglong)*puVar26 * 0xbb000000;
          uVar28 = puVar13[1] * -0x45000000 + *puVar26 * -0x30e44324 +
                   (int)((ulonglong)lVar5 >> 0x20) ^ uVar33;
          uVar35 = ((uint)lVar5 ^ uVar32) >> (0x38U - iVar34 & 0xff) |
                   uVar28 << (iVar34 - 0x18U & 0xff) | uVar28 >> (0x18U - iVar34 & 0xff);
          uVar28 = uVar35 >> 8;
          HintPreloadData(iVar27 + uVar28 * 0x40);
          HintPreloadData(iVar23 + uVar28 * 0x10);
          *(uint *)(param_1 + uVar31 * 4 + 0x2c) = uVar35;
          if (uVar22 <= uVar20) break;
          puVar13 = (uint *)(uVar20 + iVar9);
        }
      }
      else if (uVar12 < 6) {
        do {
          uVar31 = uVar20 & 7;
          piVar2 = (int *)(uVar20 + iVar9);
          uVar20 = uVar20 + 1;
          uVar28 = (*piVar2 * -0x61c8864f ^ uVar32) >> (0x18U - iVar34 & 0xff);
          uVar33 = uVar28 >> 8;
          HintPreloadData(iVar27 + uVar33 * 0x40);
          HintPreloadData(iVar23 + uVar33 * 0x10);
          *(uint *)(param_1 + uVar31 * 4 + 0x2c) = uVar28;
        } while (uVar20 < uVar22);
      }
      else {
        while( true ) {
          uVar31 = uVar20 & 7;
          puVar26 = (uint *)(uVar20 + iVar9);
          uVar20 = uVar20 + 1;
          lVar5 = (ulonglong)*puVar26 * 0xbf9b0000;
          uVar28 = puVar13[1] * -0x40650000 + *puVar26 * -0x30e44324 +
                   (int)((ulonglong)lVar5 >> 0x20) ^ uVar33;
          uVar35 = ((uint)lVar5 ^ uVar32) >> (0x38U - iVar34 & 0xff) |
                   uVar28 << (iVar34 - 0x18U & 0xff) | uVar28 >> (0x18U - iVar34 & 0xff);
          uVar28 = uVar35 >> 8;
          HintPreloadData(iVar27 + uVar28 * 0x40);
          HintPreloadData(iVar23 + uVar28 * 0x10);
          *(uint *)(param_1 + uVar31 * 4 + 0x2c) = uVar35;
          if (uVar22 <= uVar20) break;
          puVar13 = (uint *)(uVar20 + iVar9);
        }
      }
    }
  }
LAB_017f4a40:
  if (puVar25 < puVar17) {
    do {
      local_5c = local_60;
      if (local_60 != (char *)0x0) {
        local_5c = (char *)0x1;
      }
      if (*(int *)((int)puVar25 + (1 - (int)local_60)) == *(int *)((int)puVar25 + 1)) {
        uVar20 = (uint)local_5c & 1;
      }
      else {
        uVar20 = 0;
      }
      pcVar29 = (char *)0x0;
      if (uVar20 != 0) {
        puVar26 = (uint *)((int)puVar25 + 5);
        puVar13 = (uint *)((int)puVar25 + (5 - (int)local_60));
        if (puVar26 < (uint *)((int)puVar16 + -3)) {
          uVar20 = *(uint *)((int)puVar25 + (5 - (int)local_60));
          if (uVar20 == *(uint *)((int)puVar25 + 5)) {
            for (puVar21 = (uint *)((int)puVar25 + 9); puVar13 = puVar13 + 1,
                puVar21 < (uint *)((int)puVar16 + -3); puVar21 = puVar21 + 1) {
              if (*puVar13 != *puVar21) {
                uVar20 = *puVar13 ^ *puVar21;
                bVar6 = (byte)uVar20;
                bVar7 = (byte)(uVar20 >> 8);
                bVar8 = (byte)(uVar20 >> 0x10);
                bVar3 = (byte)(uVar20 >> 0x18);
                pcVar29 = (char *)((int)puVar21 +
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
                                                                  )) >> 3) - (int)puVar26));
                goto LAB_017f4b10;
              }
            }
            goto LAB_017f4ac0;
          }
          uVar20 = uVar20 ^ *(uint *)((int)puVar25 + 5);
          bVar6 = (byte)uVar20;
          bVar7 = (byte)(uVar20 >> 8);
          bVar8 = (byte)(uVar20 >> 0x10);
          bVar3 = (byte)(uVar20 >> 0x18);
          pcVar29 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) <<
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
        else {
          puVar21 = puVar26;
LAB_017f4ac0:
          if (puVar21 < (uint *)((int)puVar16 + -1)) {
            if ((short)*puVar13 == (short)*puVar21) {
              puVar13 = (uint *)((int)puVar13 + 2);
              puVar21 = (uint *)((int)puVar21 + 2);
            }
          }
          if ((puVar21 < puVar16) && ((char)*puVar13 == (char)*puVar21)) {
            puVar21 = (uint *)((int)puVar21 + 1);
          }
          pcVar29 = (char *)((int)puVar21 - (int)puVar26);
        }
LAB_017f4b10:
        pcVar29 = pcVar29 + 4;
      }
      local_40 = 999999999;
      if (uVar12 == 5) {
        if (uVar18 == 5) {
          pcVar10 = (char *)FUN_017c4ecc(param_1,puVar25,puVar16,&local_40);
        }
        else if (uVar18 < 6) {
          pcVar10 = (char *)FUN_017c34e8();
        }
        else {
          pcVar10 = (char *)FUN_017c6d40();
        }
      }
      else if (uVar12 < 6) {
        if (uVar18 == 5) {
          pcVar10 = (char *)FUN_017c3d84(param_1,puVar25,puVar16,&local_40);
        }
        else if (uVar18 < 6) {
          pcVar10 = (char *)FUN_017c2514();
        }
        else {
          pcVar10 = (char *)FUN_017c581c();
        }
      }
      else if (uVar18 == 5) {
        pcVar10 = (char *)FUN_017c4568(param_1,puVar25,puVar16,&local_40);
      }
      else if (uVar18 < 6) {
        pcVar10 = (char *)FUN_017c2c3c();
      }
      else {
        pcVar10 = (char *)FUN_017c61e4();
      }
      local_90 = local_5c;
      if (pcVar29 < pcVar10) {
        if (&DAT_00000004 <= pcVar10) {
          puVar13 = puVar25;
          pcVar29 = pcVar10;
          uVar20 = local_40;
          if (puVar25 < puVar17) goto LAB_017f4b80;
LAB_017f5080:
          if (uVar20 < 4) {
            local_5c = local_70;
            if (local_70 != (char *)0x0) {
              local_5c = (char *)0x1;
            }
          }
          else {
            if (param_4 < puVar13 && puVar36 < (uint *)((int)puVar13 + (3 - uVar20))) {
              puVar26 = (uint *)((int)puVar13 + (3 - uVar20));
              puVar25 = puVar13;
              do {
                puVar26 = (uint *)((int)puVar26 + -1);
                puVar13 = (uint *)((int)puVar25 + -1);
                if (*(char *)puVar13 != *(char *)puVar26) {
                  puVar13 = puVar25;
                  break;
                }
                pcVar29 = pcVar29 + 1;
                puVar25 = puVar13;
              } while (param_4 < puVar13 && puVar36 < puVar26);
            }
            local_70 = local_60;
            local_90 = (char *)0x1;
            local_60 = (char *)(uVar20 - 3);
          }
          goto LAB_017f50a0;
        }
LAB_017f5370:
        uVar20 = ((uint)((int)puVar25 - (int)param_4) >> 8) + 1;
        puVar25 = (uint *)((int)puVar25 + uVar20);
        *(uint *)(param_1 + 0xdc) = (uint)(8 < uVar20);
      }
      else {
        if (pcVar29 < &DAT_00000004) goto LAB_017f5370;
        puVar13 = (uint *)((int)puVar25 + 1);
        if (puVar25 < puVar17) {
          local_40 = 1;
          pcVar10 = pcVar29;
LAB_017f4b80:
          uVar20 = local_40;
          do {
            puVar26 = (uint *)((int)puVar25 + 1);
            pcVar29 = pcVar10;
            if (uVar20 == 0) {
              iVar27 = 0x20;
            }
            else {
              if (*(int *)((int)puVar26 - (int)local_60) == *(int *)((int)puVar25 + 1)) {
                uVar22 = (uint)local_5c & 1;
              }
              else {
                uVar22 = 0;
              }
              if (uVar22 == 0) {
                iVar27 = LZCOUNT(uVar20);
              }
              else {
                puVar14 = (uint *)((int)puVar25 + 5);
                puVar21 = (uint *)((int)puVar26 + (4 - (int)local_60));
                if (puVar14 < (uint *)((int)puVar16 + -3)) {
                  uVar22 = *(uint *)((int)puVar26 + (4 - (int)local_60));
                  if (uVar22 == *(uint *)((int)puVar25 + 5)) {
                    puVar24 = (uint *)((int)puVar25 + 9);
                    while( true ) {
                      puVar21 = puVar21 + 1;
                      if ((uint *)((int)puVar16 + -3) <= puVar24) break;
                      if (*puVar21 != *puVar24) {
                        uVar22 = *puVar21 ^ *puVar24;
                        bVar6 = (byte)uVar22;
                        bVar7 = (byte)(uVar22 >> 8);
                        bVar8 = (byte)(uVar22 >> 0x10);
                        bVar3 = (byte)(uVar22 >> 0x18);
                        pcVar11 = (char *)((int)puVar24 +
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
                                          (int)puVar14));
                        goto LAB_017f4c08;
                      }
                      puVar24 = puVar24 + 1;
                    }
                    goto LAB_017f55b4;
                  }
                  uVar22 = uVar22 ^ *(uint *)((int)puVar25 + 5);
                  bVar6 = (byte)uVar22;
                  bVar7 = (byte)(uVar22 >> 8);
                  bVar8 = (byte)(uVar22 >> 0x10);
                  bVar3 = (byte)(uVar22 >> 0x18);
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
                else {
                  puVar24 = puVar14;
LAB_017f55b4:
                  if (puVar24 < (uint *)((int)puVar16 + -1)) {
                    if ((short)*puVar21 == (short)*puVar24) {
                      puVar21 = (uint *)((int)puVar21 + 2);
                      puVar24 = (uint *)((int)puVar24 + 2);
                    }
                  }
                  if ((puVar24 < puVar16) && ((char)*puVar21 == (char)*puVar24)) {
                    puVar24 = (uint *)((int)puVar24 + 1);
                  }
                  pcVar11 = (char *)((int)puVar24 - (int)puVar14);
                }
LAB_017f4c08:
                iVar27 = LZCOUNT(uVar20);
                if (pcVar11 < (char *)0xfffffffc &&
                    (int)(pcVar10 + -10) * 3 + iVar27 < (int)(pcVar11 + 4) * 3) {
                  uVar20 = 1;
                  iVar27 = 0x1f;
                  puVar13 = puVar26;
                  pcVar29 = pcVar11 + 4;
                }
              }
            }
            local_40 = 999999999;
            if (uVar12 == 5) {
              if (uVar18 == 5) {
                pcVar10 = (char *)FUN_017c4ecc(param_1,puVar26,puVar16,&local_40);
              }
              else if (uVar18 < 6) {
                pcVar10 = (char *)FUN_017c34e8();
              }
              else {
                pcVar10 = (char *)FUN_017c6d40();
              }
            }
            else if (uVar12 < 6) {
              if (uVar18 == 5) {
                pcVar10 = (char *)FUN_017c3d84(param_1,puVar26,puVar16,&local_40);
              }
              else if (uVar18 < 6) {
                pcVar10 = (char *)FUN_017c2514();
              }
              else {
                pcVar10 = (char *)FUN_017c581c();
              }
            }
            else if (uVar18 == 5) {
              pcVar10 = (char *)FUN_017c4568(param_1,puVar26,puVar16,&local_40);
            }
            else if (uVar18 < 6) {
              pcVar10 = (char *)FUN_017c2c3c();
            }
            else {
              pcVar10 = (char *)FUN_017c61e4();
            }
            iVar23 = iVar27 + (int)pcVar29 * 4;
            if (pcVar10 < &DAT_00000004 ||
                LZCOUNT(local_40) + (int)pcVar10 * 4 + -0x1f <= iVar23 + -0x1b) {
              if (puVar17 <= puVar26) goto LAB_017f5080;
              puVar26 = (uint *)((int)puVar25 + 2);
              if (uVar20 != 0) {
                if (*(int *)((int)puVar26 - (int)local_60) == *(int *)((int)puVar25 + 2)) {
                  uVar22 = (uint)local_5c & 1;
                }
                else {
                  uVar22 = 0;
                }
                if (uVar22 != 0) {
                  puVar14 = (uint *)((int)puVar25 + 6);
                  puVar21 = (uint *)((int)puVar26 + (4 - (int)local_60));
                  if (puVar14 < (uint *)((int)puVar16 + -3)) {
                    uVar22 = *(uint *)((int)puVar26 + (4 - (int)local_60));
                    if (uVar22 == *(uint *)((int)puVar25 + 6)) {
                      puVar25 = (uint *)((int)puVar25 + 10);
                      while( true ) {
                        puVar21 = puVar21 + 1;
                        if ((uint *)((int)puVar16 + -3) <= puVar25) break;
                        if (*puVar21 != *puVar25) {
                          uVar22 = *puVar21 ^ *puVar25;
                          bVar6 = (byte)uVar22;
                          bVar7 = (byte)(uVar22 >> 8);
                          bVar8 = (byte)(uVar22 >> 0x10);
                          bVar3 = (byte)(uVar22 >> 0x18);
                          pcVar10 = (char *)((int)puVar25 +
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
                                            (int)puVar14));
                          goto LAB_017f4fdc;
                        }
                        puVar25 = puVar25 + 1;
                      }
                      goto LAB_017f4f84;
                    }
                    uVar22 = uVar22 ^ *(uint *)((int)puVar25 + 6);
                    bVar6 = (byte)uVar22;
                    bVar7 = (byte)(uVar22 >> 8);
                    bVar8 = (byte)(uVar22 >> 0x10);
                    bVar3 = (byte)(uVar22 >> 0x18);
                    pcVar10 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 |
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
                    puVar25 = puVar14;
LAB_017f4f84:
                    if (puVar25 < (uint *)((int)puVar16 + -1)) {
                      if ((short)*puVar21 == (short)*puVar25) {
                        puVar21 = (uint *)((int)puVar21 + 2);
                        puVar25 = (uint *)((int)puVar25 + 2);
                      }
                    }
                    if ((puVar25 < puVar16) && ((char)*puVar21 == (char)*puVar25)) {
                      puVar25 = (uint *)((int)puVar25 + 1);
                    }
                    pcVar10 = (char *)((int)puVar25 - (int)puVar14);
                  }
LAB_017f4fdc:
                  pcVar11 = pcVar10;
                  if ((char *)0xfffffffb < pcVar10) {
                    pcVar11 = (char *)0x0;
                  }
                  if (pcVar10 < (char *)0xfffffffc) {
                    pcVar11 = (char *)0x1;
                  }
                  if ((int)(pcVar10 + 4) * 4 <= iVar23 + -0x1e) {
                    pcVar11 = (char *)0x0;
                  }
                  if (pcVar11 != (char *)0x0) {
                    uVar20 = 1;
                    iVar27 = 0x1f;
                    puVar13 = puVar26;
                    pcVar29 = pcVar10 + 4;
                  }
                }
              }
              local_40 = 999999999;
              if (uVar12 == 5) {
                if (uVar18 == 5) {
                  pcVar10 = (char *)FUN_017c4ecc(param_1,puVar26,puVar16,&local_40);
                }
                else if (uVar18 < 6) {
                  pcVar10 = (char *)FUN_017c34e8();
                }
                else {
                  pcVar10 = (char *)FUN_017c6d40();
                }
              }
              else if (uVar12 < 6) {
                if (uVar18 == 5) {
                  pcVar10 = (char *)FUN_017c3d84(param_1,puVar26,puVar16,&local_40);
                }
                else if (uVar18 < 6) {
                  pcVar10 = (char *)FUN_017c2514();
                }
                else {
                  pcVar10 = (char *)FUN_017c581c();
                }
              }
              else if (uVar18 == 5) {
                pcVar10 = (char *)FUN_017c4568(param_1,puVar26,puVar16,&local_40);
              }
              else if (uVar18 < 6) {
                pcVar10 = (char *)FUN_017c2c3c();
              }
              else {
                pcVar10 = (char *)FUN_017c61e4();
              }
              if (pcVar10 < (char *)0x4 ||
                  LZCOUNT(local_40) + (int)pcVar10 * 4 + -0x1f <= iVar27 + (int)(pcVar29 + -6) * 4)
              goto LAB_017f5080;
            }
            puVar13 = puVar26;
            pcVar29 = pcVar10;
            uVar20 = local_40;
            if (puVar17 <= puVar26) goto LAB_017f5080;
            puVar25 = puVar26;
          } while( true );
        }
        uVar20 = 1;
        local_5c = local_70;
        if (local_70 != (char *)0x0) {
          local_5c = (char *)0x1;
        }
LAB_017f50a0:
        uVar22 = (int)puVar13 - (int)param_4;
        puVar26 = puVar16 + -8;
        puVar25 = (uint *)param_2[3];
        if (puVar26 < puVar13) {
          FUN_017bfa44(puVar25,param_4,puVar13);
LAB_017f5564:
          param_2[3] = param_2[3] + uVar22;
          puVar21 = (uint *)param_2[1];
          if (0xffff < uVar22) {
            param_2[10] = (int)puVar21 - *param_2 >> 3;
            param_2[9] = 1;
          }
        }
        else {
          local_3c = *param_4;
          uStack_38 = param_4[1];
          uStack_34 = param_4[2];
          uStack_30 = param_4[3];
          puVar25[2] = uStack_34;
          *puVar25 = local_3c;
          puVar25[1] = uStack_38;
          puVar25[3] = uStack_30;
          iVar27 = param_2[3];
          if (0x10 < uVar22) {
            local_3c = param_4[4];
            uStack_38 = param_4[5];
            uStack_34 = param_4[6];
            uStack_30 = param_4[7];
            *(uint *)(iVar27 + 0x10) = local_3c;
            *(uint *)(iVar27 + 0x14) = uStack_38;
            *(uint *)(iVar27 + 0x18) = uStack_34;
            *(uint *)(iVar27 + 0x1c) = uStack_30;
            if (0x10 < (int)(uVar22 - 0x10)) {
              puVar25 = param_4 + 0x10;
              puVar21 = (uint *)(iVar27 + 0x20);
              do {
                uVar32 = puVar25[-7];
                uVar33 = puVar25[-6];
                puVar14 = puVar21 + 8;
                uVar28 = puVar25[-5];
                *puVar21 = puVar25[-8];
                puVar21[1] = uVar32;
                puVar21[2] = uVar33;
                puVar21[3] = uVar28;
                local_3c = puVar25[-4];
                uStack_38 = puVar25[-3];
                uStack_34 = puVar25[-2];
                uStack_30 = puVar25[-1];
                puVar21[4] = local_3c;
                puVar21[5] = uStack_38;
                puVar21[6] = uStack_34;
                puVar21[7] = uStack_30;
                puVar25 = puVar25 + 8;
                puVar21 = puVar14;
              } while (puVar14 < (uint *)(iVar27 + uVar22));
            }
            goto LAB_017f5564;
          }
          puVar21 = (uint *)param_2[1];
          param_2[3] = (int)(iVar27 + uVar22);
        }
        *(short *)(puVar21 + 1) = (short)uVar22;
        *puVar21 = uVar20;
        if ((char *)0xffff < pcVar29 + -3) {
          param_2[10] = (int)puVar21 - *param_2 >> 3;
          param_2[9] = 2;
        }
        *(short *)((int)puVar21 + 6) = (short)(pcVar29 + -3);
        puVar25 = (uint *)((int)puVar13 + (int)pcVar29);
        param_2[1] = (int)(puVar21 + 2);
        if (*(int *)(param_1 + 0xdc) != 0) {
          uVar20 = *(uint *)(param_1 + 0x1c);
          puVar13 = (uint *)(uVar20 + iVar9);
          if (puVar13 <= puVar17) {
            pcVar29 = (char *)((int)puVar17 + (1 - (int)puVar13));
            if (pcVar29 < (char *)0x9) {
              uVar22 = uVar20 + (int)pcVar29;
            }
            else {
              uVar22 = uVar20 + 8;
            }
            iVar23 = *(int *)(param_1 + 0x28);
            iVar27 = *(int *)(param_1 + 0x5c);
            iVar34 = *(int *)(param_1 + 0x24);
            if (uVar20 < uVar22) {
              uVar32 = *(uint *)(param_1 + 0x50);
              uVar33 = *(uint *)(param_1 + 0x54);
              if (4 < uVar18) {
                do {
                  if (uVar12 == 5) {
                    uVar35 = *puVar13;
                    uVar31 = puVar13[1];
                    uVar28 = 0xbb000000;
LAB_017f5aa0:
                    uVar31 = uVar28 * uVar31 + uVar35 * -0x30e44324 +
                             (int)((ulonglong)uVar28 * (ulonglong)uVar35 >> 0x20) ^ uVar33;
                    uVar28 = ((uint)((ulonglong)uVar28 * (ulonglong)uVar35) ^ uVar32) >>
                             (0x38U - iVar34 & 0xff) | uVar31 << (iVar34 - 0x18U & 0xff) |
                             uVar31 >> (0x18U - iVar34 & 0xff);
                  }
                  else {
                    if (5 < uVar12) {
                      uVar35 = *puVar13;
                      uVar31 = puVar13[1];
                      uVar28 = 0xbf9b0000;
                      goto LAB_017f5aa0;
                    }
                    uVar28 = (*puVar13 * -0x61c8864f ^ uVar32) >> (0x18U - iVar34 & 0xff);
                  }
                  iVar1 = (uVar28 >> 8) << (uVar19 & 0xff);
                  HintPreloadData(iVar23 + iVar1);
                  HintPreloadData(iVar27 + iVar1 * 4);
                  HintPreloadData(iVar27 + iVar1 * 4 + 0x40);
                  if (uVar18 != 5) {
                    HintPreloadData(iVar23 + iVar1 + 0x20);
                  }
                  uVar31 = uVar20 & 7;
                  uVar20 = uVar20 + 1;
                  *(uint *)(param_1 + uVar31 * 4 + 0x2c) = uVar28;
                  if (uVar22 <= uVar20) goto LAB_017f517c;
                  puVar13 = (uint *)(uVar20 + iVar9);
                } while( true );
              }
              if (uVar12 == 5) {
                while( true ) {
                  uVar35 = uVar20 & 7;
                  puVar21 = (uint *)(uVar20 + iVar9);
                  uVar20 = uVar20 + 1;
                  lVar5 = (ulonglong)*puVar21 * 0xbb000000;
                  uVar28 = puVar13[1] * -0x45000000 + *puVar21 * -0x30e44324 +
                           (int)((ulonglong)lVar5 >> 0x20) ^ uVar33;
                  uVar31 = ((uint)lVar5 ^ uVar32) >> (0x38U - iVar34 & 0xff) |
                           uVar28 << (iVar34 - 0x18U & 0xff) | uVar28 >> (0x18U - iVar34 & 0xff);
                  uVar28 = uVar31 >> 8;
                  HintPreloadData(iVar27 + uVar28 * 0x40);
                  HintPreloadData(iVar23 + uVar28 * 0x10);
                  *(uint *)(param_1 + uVar35 * 4 + 0x2c) = uVar31;
                  if (uVar22 <= uVar20) break;
                  puVar13 = (uint *)(uVar20 + iVar9);
                }
              }
              else if (uVar12 < 6) {
                do {
                  piVar2 = (int *)(uVar20 + iVar9);
                  uVar31 = uVar20 & 7;
                  uVar20 = uVar20 + 1;
                  uVar28 = (*piVar2 * -0x61c8864f ^ uVar32) >> (0x18U - iVar34 & 0xff);
                  uVar33 = uVar28 >> 8;
                  HintPreloadData(iVar27 + uVar33 * 0x40);
                  HintPreloadData(iVar23 + uVar33 * 0x10);
                  *(uint *)(param_1 + uVar31 * 4 + 0x2c) = uVar28;
                } while (uVar20 < uVar22);
              }
              else {
                while( true ) {
                  uVar35 = uVar20 & 7;
                  puVar21 = (uint *)(uVar20 + iVar9);
                  uVar20 = uVar20 + 1;
                  lVar5 = (ulonglong)*puVar21 * 0xbf9b0000;
                  uVar28 = puVar13[1] * -0x40650000 + *puVar21 * -0x30e44324 +
                           (int)((ulonglong)lVar5 >> 0x20) ^ uVar33;
                  uVar31 = ((uint)lVar5 ^ uVar32) >> (0x38U - iVar34 & 0xff) |
                           uVar28 << (iVar34 - 0x18U & 0xff) | uVar28 >> (0x18U - iVar34 & 0xff);
                  uVar28 = uVar31 >> 8;
                  HintPreloadData(iVar27 + uVar28 * 0x40);
                  HintPreloadData(iVar23 + uVar28 * 0x10);
                  *(uint *)(param_1 + uVar35 * 4 + 0x2c) = uVar31;
                  if (uVar22 <= uVar20) break;
                  puVar13 = (uint *)(uVar20 + iVar9);
                }
              }
            }
          }
LAB_017f517c:
          *(undefined4 *)(param_1 + 0xdc) = 0;
        }
        if (puVar17 < puVar25) {
          local_5c = (char *)0x0;
        }
        else {
          local_5c = (char *)((uint)local_5c & 1);
        }
        if (local_5c == (char *)0x0) {
          local_5c = local_90;
          param_4 = puVar25;
        }
        else {
          while( true ) {
            pcVar10 = local_60;
            pcVar29 = local_70;
            if (*puVar25 != *(uint *)((int)puVar25 - (int)local_70)) break;
            puVar21 = puVar25 + 1;
            puVar13 = (uint *)((int)puVar25 + (4 - (int)local_70));
            if (puVar21 < (uint *)((int)puVar16 + -3)) {
              uVar20 = *(uint *)((int)puVar25 + (4 - (int)local_70));
              if (uVar20 == puVar25[1]) {
                puVar14 = puVar25 + 2;
                while( true ) {
                  puVar13 = puVar13 + 1;
                  if ((uint *)((int)puVar16 + -3) <= puVar14) break;
                  if (*puVar13 != *puVar14) {
                    uVar20 = *puVar13 ^ *puVar14;
                    bVar6 = (byte)uVar20;
                    bVar7 = (byte)(uVar20 >> 8);
                    bVar8 = (byte)(uVar20 >> 0x10);
                    bVar3 = (byte)(uVar20 >> 0x18);
                    pcVar11 = (char *)((int)puVar14 +
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
                                                                  )) >> 3) - (int)puVar21));
                    goto LAB_017f58bc;
                  }
                  puVar14 = puVar14 + 1;
                }
                goto LAB_017f5a20;
              }
              uVar20 = uVar20 ^ puVar25[1];
              bVar6 = (byte)uVar20;
              bVar7 = (byte)(uVar20 >> 8);
              bVar8 = (byte)(uVar20 >> 0x10);
              bVar3 = (byte)(uVar20 >> 0x18);
              pcVar11 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
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
              puVar14 = puVar21;
LAB_017f5a20:
              if (puVar14 < (uint *)((int)puVar16 + -1)) {
                if ((short)*puVar13 == (short)*puVar14) {
                  puVar13 = (uint *)((int)puVar13 + 2);
                  puVar14 = (uint *)((int)puVar14 + 2);
                }
              }
              if ((puVar14 < puVar16) && ((char)*puVar13 == (char)*puVar14)) {
                puVar14 = (uint *)((int)puVar14 + 1);
              }
              pcVar11 = (char *)((int)puVar14 - (int)puVar21);
            }
LAB_017f58bc:
            puVar13 = (uint *)param_2[3];
            if (puVar26 < puVar25) {
              FUN_017bfa44(puVar13,puVar25,puVar25,puVar26);
            }
            else {
              local_3c = *puVar25;
              uStack_38 = puVar25[1];
              uStack_34 = puVar25[2];
              uStack_30 = puVar25[3];
              *puVar13 = local_3c;
              puVar13[1] = uStack_38;
              puVar13[2] = uStack_34;
              puVar13[3] = uStack_30;
            }
            puVar25 = (uint *)((int)puVar25 + (int)(pcVar11 + 4));
            puVar15 = (undefined4 *)param_2[1];
            *(undefined2 *)(puVar15 + 1) = 0;
            *puVar15 = 1;
            uVar4 = SUB42(pcVar11 + 1,0);
            param_4 = puVar25;
            if (pcVar11 + 1 < (char *)0x10000) {
              *(undefined2 *)((int)puVar15 + 6) = uVar4;
              param_2[1] = (int)(puVar15 + 2);
              if (local_60 == (char *)0x0 || puVar17 < puVar25) {
                local_60 = local_70;
                local_70 = pcVar10;
                goto LAB_017f51e0;
              }
            }
            else {
              param_2[10] = (int)puVar15 - *param_2 >> 3;
              param_2[9] = 2;
              *(undefined2 *)((int)puVar15 + 6) = uVar4;
              param_2[1] = (int)(puVar15 + 2);
              if (local_60 == (char *)0x0 || puVar17 < puVar25) {
                local_60 = local_70;
                local_70 = pcVar10;
                goto LAB_017f51e0;
              }
            }
            local_70 = local_60;
            local_60 = pcVar29;
          }
          local_5c = local_60;
          if (local_60 != (char *)0x0) {
            local_5c = (char *)0x1;
          }
          param_4 = puVar25;
        }
      }
LAB_017f51e0:
    } while (puVar25 < puVar17);
  }
  if ((local_80 & (uint)local_5c) == 0) {
    if (local_60 == (char *)0x0) {
      local_60 = local_64;
    }
    local_64 = pcVar30;
  }
  if (local_70 == (char *)0x0) {
    local_70 = local_64;
  }
  *param_3 = local_60;
  param_3[1] = local_70;
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)puVar16 - (int)param_4,local_60,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

