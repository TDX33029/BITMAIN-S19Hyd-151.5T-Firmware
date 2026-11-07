// FUN_017edcd4 @ 017edcd4 size=4612 calls_out=11 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_017edcd4(int param_1,int *param_2,undefined4 *param_3,uint *param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  undefined2 uVar4;
  longlong lVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  uint *puVar22;
  char *pcVar23;
  uint *puVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  char *pcVar28;
  uint uVar29;
  char *pcVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  uint *puVar34;
  int iVar35;
  uint uVar36;
  char *local_90;
  uint local_7c;
  uint *local_70;
  char *local_64;
  char *local_58;
  char *local_54;
  uint local_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c;
  
  iVar26 = *(int *)(param_1 + 4);
  puVar16 = (uint *)((int)param_4 + param_5);
  pcVar28 = (char *)param_3[1];
  local_2c = DAT_018ddaf8;
  puVar17 = puVar16 + -4;
  uVar18 = *(uint *)(param_1 + 0xc4);
  puVar34 = (uint *)(iVar26 + *(int *)(param_1 + 0xc));
  uVar19 = uVar18;
  if (5 < uVar18) {
    uVar19 = 6;
  }
  pcVar30 = (char *)*param_3;
  if (uVar19 < 4) {
    uVar19 = 4;
  }
  pcVar9 = (char *)(1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  puVar22 = param_4;
  if (param_4 == puVar34) {
    puVar22 = (uint *)((int)param_4 + 1);
  }
  pcVar10 = (char *)((int)puVar22 + (-*(int *)(param_1 + 0xc) - iVar26));
  if (pcVar10 <= pcVar9) {
    pcVar9 = pcVar10;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    pcVar9 = pcVar10;
  }
  uVar11 = *(uint *)(param_1 + 200);
  if (pcVar9 < pcVar28) {
    local_64 = (char *)0x0;
    pcVar10 = pcVar28;
  }
  else {
    pcVar10 = (char *)0x0;
    local_64 = pcVar28;
  }
  if (pcVar9 < pcVar30) {
    local_54 = (char *)0x0;
    local_7c = 1;
    local_58 = (char *)0x0;
    pcVar28 = pcVar30;
  }
  else {
    local_54 = pcVar30;
    if (pcVar30 != (char *)0x0) {
      local_54 = (char *)0x1;
    }
    local_7c = 0;
    pcVar28 = (char *)0x0;
    local_58 = pcVar30;
  }
  uVar20 = *(uint *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0xdc) = 0;
  puVar12 = (uint *)(uVar20 + iVar26);
  if (puVar12 <= puVar17) {
    iVar27 = *(int *)(param_1 + 0x5c);
    pcVar30 = (char *)((int)puVar17 + (1 - (int)puVar12));
    iVar31 = *(int *)(param_1 + 0x28);
    if (pcVar30 < (char *)0x9) {
      uVar13 = uVar20 + (int)pcVar30;
    }
    else {
      uVar13 = uVar20 + 8;
    }
    iVar35 = *(int *)(param_1 + 0x24);
    if (uVar20 < uVar13) {
      uVar32 = *(uint *)(param_1 + 0x50);
      uVar33 = *(uint *)(param_1 + 0x54);
      if (4 < uVar18) {
        if (uVar11 == 5) goto LAB_017ee134;
        do {
          if (5 < uVar11) {
            uVar29 = *puVar12;
            uVar36 = puVar12[1];
            uVar25 = 0xbf9b0000;
            goto LAB_017ee624;
          }
          uVar25 = (*puVar12 * -0x61c8864f ^ uVar32) >> (0x18U - iVar35 & 0xff);
          while( true ) {
            iVar1 = (uVar25 >> 8) << (uVar19 & 0xff);
            HintPreloadData(iVar31 + iVar1);
            HintPreloadData(iVar27 + iVar1 * 4);
            HintPreloadData(iVar27 + iVar1 * 4 + 0x40);
            if (uVar18 != 5) {
              HintPreloadData(iVar31 + iVar1 + 0x20);
            }
            uVar29 = uVar20 & 7;
            uVar20 = uVar20 + 1;
            *(uint *)(param_1 + uVar29 * 4 + 0x2c) = uVar25;
            if (uVar13 <= uVar20) goto LAB_017eddf4;
            puVar12 = (uint *)(uVar20 + iVar26);
            if (uVar11 != 5) break;
LAB_017ee134:
            uVar29 = *puVar12;
            uVar36 = puVar12[1];
            uVar25 = 0xbb000000;
LAB_017ee624:
            uVar36 = uVar25 * uVar36 + uVar29 * -0x30e44324 +
                     (int)((ulonglong)uVar25 * (ulonglong)uVar29 >> 0x20) ^ uVar33;
            uVar25 = ((uint)((ulonglong)uVar25 * (ulonglong)uVar29) ^ uVar32) >>
                     (0x38U - iVar35 & 0xff) | uVar36 << (iVar35 - 0x18U & 0xff) |
                     uVar36 >> (0x18U - iVar35 & 0xff);
          }
        } while( true );
      }
      if (uVar11 == 5) {
        while( true ) {
          puVar24 = (uint *)(uVar20 + iVar26);
          uVar29 = uVar20 & 7;
          uVar20 = uVar20 + 1;
          lVar5 = (ulonglong)*puVar24 * 0xbb000000;
          uVar25 = puVar12[1] * -0x45000000 + *puVar24 * -0x30e44324 +
                   (int)((ulonglong)lVar5 >> 0x20) ^ uVar33;
          uVar36 = ((uint)lVar5 ^ uVar32) >> (0x38U - iVar35 & 0xff) |
                   uVar25 << (iVar35 - 0x18U & 0xff) | uVar25 >> (0x18U - iVar35 & 0xff);
          uVar25 = uVar36 >> 8;
          HintPreloadData(iVar27 + uVar25 * 0x40);
          HintPreloadData(iVar31 + uVar25 * 0x10);
          *(uint *)(param_1 + uVar29 * 4 + 0x2c) = uVar36;
          if (uVar13 <= uVar20) break;
          puVar12 = (uint *)(uVar20 + iVar26);
        }
      }
      else if (uVar11 < 6) {
        do {
          uVar25 = (*(int *)(uVar20 + iVar26) * -0x61c8864f ^ uVar32) >> (0x18U - iVar35 & 0xff);
          uVar29 = uVar20 & 7;
          uVar20 = uVar20 + 1;
          uVar33 = uVar25 >> 8;
          HintPreloadData(iVar27 + uVar33 * 0x40);
          HintPreloadData(iVar31 + uVar33 * 0x10);
          *(uint *)(param_1 + uVar29 * 4 + 0x2c) = uVar25;
        } while (uVar20 < uVar13);
      }
      else {
        while( true ) {
          uVar29 = uVar20 & 7;
          puVar24 = (uint *)(uVar20 + iVar26);
          uVar20 = uVar20 + 1;
          lVar5 = (ulonglong)*puVar24 * 0xbf9b0000;
          uVar25 = puVar12[1] * -0x40650000 + *puVar24 * -0x30e44324 +
                   (int)((ulonglong)lVar5 >> 0x20) ^ uVar33;
          uVar36 = ((uint)lVar5 ^ uVar32) >> (0x38U - iVar35 & 0xff) |
                   uVar25 << (iVar35 - 0x18U & 0xff) | uVar25 >> (0x18U - iVar35 & 0xff);
          uVar25 = uVar36 >> 8;
          HintPreloadData(iVar27 + uVar25 * 0x40);
          HintPreloadData(iVar31 + uVar25 * 0x10);
          *(uint *)(param_1 + uVar29 * 4 + 0x2c) = uVar36;
          if (uVar13 <= uVar20) break;
          puVar12 = (uint *)(uVar20 + iVar26);
        }
      }
    }
  }
LAB_017eddf4:
  if (puVar17 <= puVar22) {
LAB_017ee45c:
    if ((local_7c & (uint)local_54) == 0) {
      if (local_58 == (char *)0x0) {
        local_58 = pcVar28;
      }
      pcVar28 = pcVar10;
    }
    if (local_64 != (char *)0x0) {
      pcVar28 = local_64;
    }
    *param_3 = local_58;
    param_3[1] = pcVar28;
    if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2b78((int)puVar16 - (int)param_4,local_58,local_2c ^ DAT_018ddaf8,0);
    }
    return;
  }
LAB_017ede2c:
  local_54 = local_58;
  if (local_58 != (char *)0x0) {
    local_54 = (char *)0x1;
  }
  if (*(int *)((int)puVar22 + (1 - (int)local_58)) == *(int *)((int)puVar22 + 1)) {
    uVar20 = (uint)local_54 & 1;
  }
  else {
    uVar20 = 0;
  }
  pcVar30 = (char *)0x0;
  if (uVar20 != 0) {
    puVar24 = (uint *)((int)puVar22 + 5);
    puVar12 = (uint *)((int)puVar22 + (5 - (int)local_58));
    if (puVar24 < (uint *)((int)puVar16 + -3)) {
      uVar20 = *(uint *)((int)puVar22 + (5 - (int)local_58));
      if (uVar20 == *(uint *)((int)puVar22 + 5)) {
        for (puVar21 = (uint *)((int)puVar22 + 9); puVar12 = puVar12 + 1,
            puVar21 < (uint *)((int)puVar16 + -3); puVar21 = puVar21 + 1) {
          if (*puVar12 != *puVar21) {
            uVar20 = *puVar12 ^ *puVar21;
            bVar6 = (byte)uVar20;
            bVar7 = (byte)(uVar20 >> 8);
            bVar8 = (byte)(uVar20 >> 0x10);
            bVar3 = (byte)(uVar20 >> 0x18);
            pcVar30 = (char *)((int)puVar21 +
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
                              - (int)puVar24));
            goto LAB_017edecc;
          }
        }
        goto LAB_017ede7c;
      }
      uVar20 = uVar20 ^ *(uint *)((int)puVar22 + 5);
      bVar6 = (byte)uVar20;
      bVar7 = (byte)(uVar20 >> 8);
      bVar8 = (byte)(uVar20 >> 0x10);
      bVar3 = (byte)(uVar20 >> 0x18);
      pcVar30 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                        bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1
                                                      | bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1
                                                    | bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x18 |
                                       (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 |
                                                        bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1) << 1
                                                      | bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1) << 1
                                                    | bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 0x10 |
                                       (uint)(byte)((((((((bVar8 & 1) << 1 | bVar8 >> 1 & 1) << 1 |
                                                        bVar8 >> 2 & 1) << 1 | bVar8 >> 3 & 1) << 1
                                                      | bVar8 >> 4 & 1) << 1 | bVar8 >> 5 & 1) << 1
                                                    | bVar8 >> 6 & 1) << 1 | bVar8 >> 7) << 8 |
                                       (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                                        bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1
                                                      | bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1
                                                    | bVar3 >> 6 & 1) << 1 | bVar3 >> 7)) >> 3);
    }
    else {
      puVar21 = puVar24;
LAB_017ede7c:
      if (puVar21 < (uint *)((int)puVar16 + -1)) {
        if ((short)*puVar12 == (short)*puVar21) {
          puVar12 = (uint *)((int)puVar12 + 2);
          puVar21 = (uint *)((int)puVar21 + 2);
        }
      }
      if ((puVar21 < puVar16) && ((char)*puVar12 == (char)*puVar21)) {
        puVar21 = (uint *)((int)puVar21 + 1);
      }
      pcVar30 = (char *)((int)puVar21 - (int)puVar24);
    }
LAB_017edecc:
    pcVar30 = pcVar30 + 4;
  }
  local_40 = 999999999;
  if (uVar11 == 5) {
    if (uVar18 == 5) {
      pcVar9 = (char *)FUN_017c4ecc(param_1,puVar22,puVar16,&local_40);
    }
    else if (uVar18 < 6) {
      pcVar9 = (char *)FUN_017c34e8();
    }
    else {
      pcVar9 = (char *)FUN_017c6d40();
    }
  }
  else if (uVar11 < 6) {
    if (uVar18 == 5) {
      pcVar9 = (char *)FUN_017c3d84(param_1,puVar22,puVar16,&local_40);
    }
    else if (uVar18 < 6) {
      pcVar9 = (char *)FUN_017c2514();
    }
    else {
      pcVar9 = (char *)FUN_017c581c();
    }
  }
  else if (uVar18 == 5) {
    pcVar9 = (char *)FUN_017c4568(param_1,puVar22,puVar16,&local_40);
  }
  else if (uVar18 < 6) {
    pcVar9 = (char *)FUN_017c2c3c();
  }
  else {
    pcVar9 = (char *)FUN_017c61e4();
  }
  local_90 = local_54;
  if (pcVar30 < pcVar9) {
    if (pcVar9 < (char *)0x4) goto LAB_017ee568;
    puVar12 = puVar22;
    uVar20 = local_40;
    pcVar30 = pcVar9;
    if (puVar22 < puVar17) goto LAB_017edf3c;
    goto LAB_017ee2e8;
  }
  if ((char *)0x3 < pcVar30) {
    puVar12 = (uint *)((int)puVar22 + 1);
    if (puVar22 < puVar17) {
      local_40 = 1;
LAB_017edf3c:
      local_70 = (uint *)((int)puVar22 + (9 - (int)local_58));
      uVar20 = local_40;
      do {
        puVar24 = (uint *)((int)puVar22 + 1);
        pcVar9 = pcVar30;
        if (uVar20 == 0) {
          iVar27 = 0x20;
        }
        else {
          if (local_70[-2] == *puVar24) {
            uVar13 = (uint)local_54 & 1;
          }
          else {
            uVar13 = 0;
          }
          if (uVar13 == 0) {
            iVar27 = LZCOUNT(uVar20);
          }
          else {
            puVar14 = (uint *)((int)puVar22 + 5);
            puVar21 = local_70 + -1;
            if (puVar14 < (uint *)((int)puVar16 + -3)) {
              if (local_70[-1] == *(uint *)((int)puVar22 + 5)) {
                puVar21 = local_70;
                for (puVar22 = (uint *)((int)puVar22 + 9); puVar22 < (uint *)((int)puVar16 + -3);
                    puVar22 = puVar22 + 1) {
                  if (*puVar21 != *puVar22) {
                    uVar13 = *puVar21 ^ *puVar22;
                    bVar6 = (byte)uVar13;
                    bVar7 = (byte)(uVar13 >> 8);
                    bVar8 = (byte)(uVar13 >> 0x10);
                    bVar3 = (byte)(uVar13 >> 0x18);
                    pcVar23 = (char *)((int)puVar22 +
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
                                                                  )) >> 3) - (int)puVar14));
                    goto LAB_017ee23c;
                  }
                  puVar21 = puVar21 + 1;
                }
                goto LAB_017ee1ec;
              }
              uVar13 = local_70[-1] ^ *(uint *)((int)puVar22 + 5);
              bVar6 = (byte)uVar13;
              bVar7 = (byte)(uVar13 >> 8);
              bVar8 = (byte)(uVar13 >> 0x10);
              bVar3 = (byte)(uVar13 >> 0x18);
              pcVar23 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
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
              puVar22 = puVar14;
LAB_017ee1ec:
              if (puVar22 < (uint *)((int)puVar16 + -1)) {
                if ((short)*puVar21 == (short)*puVar22) {
                  puVar21 = (uint *)((int)puVar21 + 2);
                  puVar22 = (uint *)((int)puVar22 + 2);
                }
              }
              if ((puVar22 < puVar16) && ((char)*puVar21 == (char)*puVar22)) {
                puVar22 = (uint *)((int)puVar22 + 1);
              }
              pcVar23 = (char *)((int)puVar22 - (int)puVar14);
            }
LAB_017ee23c:
            iVar27 = LZCOUNT(uVar20);
            if (pcVar23 < (char *)0xfffffffc &&
                (int)(pcVar30 + -10) * 3 + iVar27 < (int)(pcVar23 + 4) * 3) {
              uVar20 = 1;
              iVar27 = 0x1f;
              puVar12 = puVar24;
              pcVar9 = pcVar23 + 4;
            }
          }
        }
        local_40 = 999999999;
        if (uVar11 == 5) {
          if (uVar18 == 5) {
            pcVar30 = (char *)FUN_017c4ecc(param_1,puVar24,puVar16,&local_40);
          }
          else if (uVar18 < 6) {
            pcVar30 = (char *)FUN_017c34e8();
          }
          else {
            pcVar30 = (char *)FUN_017c6d40();
          }
        }
        else if (uVar11 < 6) {
          if (uVar18 == 5) {
            pcVar30 = (char *)FUN_017c3d84(param_1,puVar24,puVar16,&local_40);
          }
          else if (uVar18 < 6) {
            pcVar30 = (char *)FUN_017c2514();
          }
          else {
            pcVar30 = (char *)FUN_017c581c();
          }
        }
        else if (uVar18 == 5) {
          pcVar30 = (char *)FUN_017c4568(param_1,puVar24,puVar16,&local_40);
        }
        else if (uVar18 < 6) {
          pcVar30 = (char *)FUN_017c2c3c();
        }
        else {
          pcVar30 = (char *)FUN_017c61e4();
        }
        puVar22 = puVar12;
        if (pcVar30 < (char *)0x4 ||
            LZCOUNT(local_40) + (int)pcVar30 * 4 + -0x1f <= iVar27 + (int)pcVar9 * 4 + -0x1b)
        goto LAB_017ee2e8;
        local_70 = (uint *)((int)local_70 + 1);
        puVar22 = puVar24;
        uVar20 = local_40;
        if (puVar17 <= puVar24) goto LAB_017eeea8;
        puVar12 = puVar24;
      } while( true );
    }
    uVar20 = 1;
    local_54 = local_64;
    if (local_64 != (char *)0x0) {
      local_54 = (char *)0x1;
    }
    goto LAB_017ee308;
  }
LAB_017ee568:
  uVar20 = ((uint)((int)puVar22 - (int)param_4) >> 8) + 1;
  puVar22 = (uint *)((int)puVar22 + uVar20);
  *(uint *)(param_1 + 0xdc) = (uint)(8 < uVar20);
  goto LAB_017ee448;
LAB_017eeea8:
  pcVar9 = pcVar30;
LAB_017ee2e8:
  puVar12 = puVar22;
  if (uVar20 < 4) {
    local_54 = local_64;
    if (local_64 != (char *)0x0) {
      local_54 = (char *)0x1;
    }
    pcVar30 = pcVar9;
  }
  else {
    if (param_4 < puVar22 && puVar34 < (uint *)((int)puVar22 + (3 - uVar20))) {
      puVar24 = (uint *)((int)puVar22 + (3 - uVar20));
      do {
        puVar24 = (uint *)((int)puVar24 + -1);
        puVar12 = (uint *)((int)puVar22 + -1);
        if (*(char *)puVar12 != *(char *)puVar24) {
          puVar12 = puVar22;
          break;
        }
        pcVar9 = pcVar9 + 1;
        puVar22 = puVar12;
      } while (param_4 < puVar12 && puVar34 < puVar24);
    }
    local_64 = local_58;
    local_90 = (char *)0x1;
    local_58 = (char *)(uVar20 - 3);
    pcVar30 = pcVar9;
  }
LAB_017ee308:
  uVar13 = (int)puVar12 - (int)param_4;
  puVar24 = puVar16 + -8;
  puVar22 = (uint *)param_2[3];
  if (puVar24 < puVar12) {
    FUN_017bfa44(puVar22,param_4,puVar12);
  }
  else {
    local_3c = *param_4;
    uStack_38 = param_4[1];
    uStack_34 = param_4[2];
    uStack_30 = param_4[3];
    puVar22[3] = uStack_30;
    *puVar22 = local_3c;
    puVar22[1] = uStack_38;
    puVar22[2] = uStack_34;
    iVar27 = param_2[3];
    if (uVar13 < 0x11) {
      param_2[3] = (int)(iVar27 + uVar13);
      puVar21 = (uint *)param_2[1];
      goto LAB_017ee378;
    }
    local_3c = param_4[4];
    uStack_38 = param_4[5];
    uStack_34 = param_4[6];
    uStack_30 = param_4[7];
    *(uint *)(iVar27 + 0x10) = local_3c;
    *(uint *)(iVar27 + 0x14) = uStack_38;
    *(uint *)(iVar27 + 0x18) = uStack_34;
    *(uint *)(iVar27 + 0x1c) = uStack_30;
    if (0x10 < (int)(uVar13 - 0x10)) {
      puVar22 = param_4 + 0x10;
      puVar21 = (uint *)(iVar27 + 0x20);
      do {
        uVar32 = puVar22[-7];
        uVar33 = puVar22[-6];
        puVar14 = puVar21 + 8;
        uVar25 = puVar22[-5];
        *puVar21 = puVar22[-8];
        puVar21[1] = uVar32;
        puVar21[2] = uVar33;
        puVar21[3] = uVar25;
        local_3c = puVar22[-4];
        uStack_38 = puVar22[-3];
        uStack_34 = puVar22[-2];
        uStack_30 = puVar22[-1];
        puVar21[4] = local_3c;
        puVar21[5] = uStack_38;
        puVar21[6] = uStack_34;
        puVar21[7] = uStack_30;
        puVar22 = puVar22 + 8;
        puVar21 = puVar14;
      } while (puVar14 < (uint *)(iVar27 + uVar13));
    }
  }
  param_2[3] = param_2[3] + uVar13;
  puVar21 = (uint *)param_2[1];
  if (0xffff < uVar13) {
    param_2[10] = (int)puVar21 - *param_2 >> 3;
    param_2[9] = 1;
  }
LAB_017ee378:
  *(short *)(puVar21 + 1) = (short)uVar13;
  *puVar21 = uVar20;
  if ((char *)0xffff < pcVar30 + -3) {
    param_2[10] = (int)puVar21 - *param_2 >> 3;
    param_2[9] = 2;
  }
  *(short *)((int)puVar21 + 6) = (short)(pcVar30 + -3);
  puVar22 = (uint *)((int)puVar12 + (int)pcVar30);
  param_2[1] = (int)(puVar21 + 2);
  if (*(int *)(param_1 + 0xdc) != 0) {
    uVar20 = *(uint *)(param_1 + 0x1c);
    puVar12 = (uint *)(uVar20 + iVar26);
    if (puVar12 <= puVar17) {
      pcVar30 = (char *)((int)puVar17 + (1 - (int)puVar12));
      if (pcVar30 < (char *)0x9) {
        uVar13 = uVar20 + (int)pcVar30;
      }
      else {
        uVar13 = uVar20 + 8;
      }
      iVar31 = *(int *)(param_1 + 0x28);
      iVar27 = *(int *)(param_1 + 0x5c);
      iVar35 = *(int *)(param_1 + 0x24);
      if (uVar20 < uVar13) {
        uVar32 = *(uint *)(param_1 + 0x50);
        uVar33 = *(uint *)(param_1 + 0x54);
        if (4 < uVar18) {
          do {
            if (uVar11 == 5) {
              uVar36 = *puVar12;
              uVar29 = puVar12[1];
              uVar25 = 0xbb000000;
LAB_017eec30:
              uVar29 = uVar25 * uVar29 + uVar36 * -0x30e44324 +
                       (int)((ulonglong)uVar25 * (ulonglong)uVar36 >> 0x20) ^ uVar33;
              uVar25 = ((uint)((ulonglong)uVar25 * (ulonglong)uVar36) ^ uVar32) >>
                       (0x38U - iVar35 & 0xff) | uVar29 << (iVar35 - 0x18U & 0xff) |
                       uVar29 >> (0x18U - iVar35 & 0xff);
            }
            else {
              if (5 < uVar11) {
                uVar36 = *puVar12;
                uVar29 = puVar12[1];
                uVar25 = 0xbf9b0000;
                goto LAB_017eec30;
              }
              uVar25 = (*puVar12 * -0x61c8864f ^ uVar32) >> (0x18U - iVar35 & 0xff);
            }
            iVar1 = (uVar25 >> 8) << (uVar19 & 0xff);
            HintPreloadData(iVar31 + iVar1);
            HintPreloadData(iVar27 + iVar1 * 4);
            HintPreloadData(iVar27 + iVar1 * 4 + 0x40);
            if (uVar18 != 5) {
              HintPreloadData(iVar31 + iVar1 + 0x20);
            }
            uVar29 = uVar20 & 7;
            uVar20 = uVar20 + 1;
            *(uint *)(param_1 + uVar29 * 4 + 0x2c) = uVar25;
            if (uVar13 <= uVar20) goto LAB_017ee3e4;
            puVar12 = (uint *)(uVar20 + iVar26);
          } while( true );
        }
        if (uVar11 == 5) {
          while( true ) {
            uVar36 = uVar20 & 7;
            puVar21 = (uint *)(uVar20 + iVar26);
            uVar20 = uVar20 + 1;
            lVar5 = (ulonglong)*puVar21 * 0xbb000000;
            uVar25 = puVar12[1] * -0x45000000 + *puVar21 * -0x30e44324 +
                     (int)((ulonglong)lVar5 >> 0x20) ^ uVar33;
            uVar29 = ((uint)lVar5 ^ uVar32) >> (0x38U - iVar35 & 0xff) |
                     uVar25 << (iVar35 - 0x18U & 0xff) | uVar25 >> (0x18U - iVar35 & 0xff);
            uVar25 = uVar29 >> 8;
            HintPreloadData(iVar27 + uVar25 * 0x40);
            HintPreloadData(iVar31 + uVar25 * 0x10);
            *(uint *)(param_1 + uVar36 * 4 + 0x2c) = uVar29;
            if (uVar13 <= uVar20) break;
            puVar12 = (uint *)(uVar20 + iVar26);
          }
        }
        else if (uVar11 < 6) {
          do {
            piVar2 = (int *)(uVar20 + iVar26);
            uVar29 = uVar20 & 7;
            uVar20 = uVar20 + 1;
            uVar25 = (*piVar2 * -0x61c8864f ^ uVar32) >> (0x18U - iVar35 & 0xff);
            uVar33 = uVar25 >> 8;
            HintPreloadData(iVar27 + uVar33 * 0x40);
            HintPreloadData(iVar31 + uVar33 * 0x10);
            *(uint *)(param_1 + uVar29 * 4 + 0x2c) = uVar25;
          } while (uVar20 < uVar13);
        }
        else {
          while( true ) {
            uVar36 = uVar20 & 7;
            puVar21 = (uint *)(uVar20 + iVar26);
            uVar20 = uVar20 + 1;
            lVar5 = (ulonglong)*puVar21 * 0xbf9b0000;
            uVar25 = puVar12[1] * -0x40650000 + *puVar21 * -0x30e44324 +
                     (int)((ulonglong)lVar5 >> 0x20) ^ uVar33;
            uVar29 = ((uint)lVar5 ^ uVar32) >> (0x38U - iVar35 & 0xff) |
                     uVar25 << (iVar35 - 0x18U & 0xff) | uVar25 >> (0x18U - iVar35 & 0xff);
            uVar25 = uVar29 >> 8;
            HintPreloadData(iVar27 + uVar25 * 0x40);
            HintPreloadData(iVar31 + uVar25 * 0x10);
            *(uint *)(param_1 + uVar36 * 4 + 0x2c) = uVar29;
            if (uVar13 <= uVar20) break;
            puVar12 = (uint *)(uVar20 + iVar26);
          }
        }
      }
    }
LAB_017ee3e4:
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  if (puVar17 < puVar22) {
    local_54 = (char *)0x0;
  }
  else {
    local_54 = (char *)((uint)local_54 & 1);
  }
  if (local_54 == (char *)0x0) {
    local_54 = local_90;
    param_4 = puVar22;
  }
  else {
    while( true ) {
      pcVar9 = local_58;
      pcVar30 = local_64;
      if (*puVar22 != *(uint *)((int)puVar22 - (int)local_64)) break;
      puVar21 = puVar22 + 1;
      puVar12 = (uint *)((int)puVar22 + (4 - (int)local_64));
      if (puVar21 < (uint *)((int)puVar16 + -3)) {
        uVar20 = *(uint *)((int)puVar22 + (4 - (int)local_64));
        if (uVar20 == puVar22[1]) {
          for (puVar14 = puVar22 + 2; puVar12 = puVar12 + 1, puVar14 < (uint *)((int)puVar16 + -3);
              puVar14 = puVar14 + 1) {
            if (*puVar12 != *puVar14) {
              uVar20 = *puVar12 ^ *puVar14;
              bVar6 = (byte)uVar20;
              bVar7 = (byte)(uVar20 >> 8);
              bVar8 = (byte)(uVar20 >> 0x10);
              bVar3 = (byte)(uVar20 >> 0x18);
              pcVar23 = (char *)((int)puVar14 +
                                (((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1
                                                                  ) << 1 | bVar6 >> 2 & 1) << 1 |
                                                                bVar6 >> 3 & 1) << 1 |
                                                               bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1
                                                              ) << 1 | bVar6 >> 6 & 1) << 1 |
                                                            bVar6 >> 7) << 0x18 |
                                                (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1
                                                                  ) << 1 | bVar7 >> 2 & 1) << 1 |
                                                                bVar7 >> 3 & 1) << 1 |
                                                               bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1
                                                              ) << 1 | bVar7 >> 6 & 1) << 1 |
                                                            bVar7 >> 7) << 0x10 |
                                                (uint)(byte)((((((((bVar8 & 1) << 1 | bVar8 >> 1 & 1
                                                                  ) << 1 | bVar8 >> 2 & 1) << 1 |
                                                                bVar8 >> 3 & 1) << 1 |
                                                               bVar8 >> 4 & 1) << 1 | bVar8 >> 5 & 1
                                                              ) << 1 | bVar8 >> 6 & 1) << 1 |
                                                            bVar8 >> 7) << 8 |
                                                (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1
                                                                  ) << 1 | bVar3 >> 2 & 1) << 1 |
                                                                bVar3 >> 3 & 1) << 1 |
                                                               bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1
                                                              ) << 1 | bVar3 >> 6 & 1) << 1 |
                                                            bVar3 >> 7)) >> 3) - (int)puVar21));
              goto LAB_017eeafc;
            }
          }
          goto LAB_017eeaac;
        }
        uVar20 = uVar20 ^ puVar22[1];
        bVar6 = (byte)uVar20;
        bVar7 = (byte)(uVar20 >> 8);
        bVar8 = (byte)(uVar20 >> 0x10);
        bVar3 = (byte)(uVar20 >> 0x18);
        pcVar23 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                          | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                         << 1 | bVar6 >> 4 & 1) << 1 |
                                                       bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1 |
                                                     bVar6 >> 7) << 0x18 |
                                         (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1
                                                          | bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1)
                                                         << 1 | bVar7 >> 4 & 1) << 1 |
                                                       bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1 |
                                                     bVar7 >> 7) << 0x10 |
                                         (uint)(byte)((((((((bVar8 & 1) << 1 | bVar8 >> 1 & 1) << 1
                                                          | bVar8 >> 2 & 1) << 1 | bVar8 >> 3 & 1)
                                                         << 1 | bVar8 >> 4 & 1) << 1 |
                                                       bVar8 >> 5 & 1) << 1 | bVar8 >> 6 & 1) << 1 |
                                                     bVar8 >> 7) << 8 |
                                         (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1
                                                          | bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1)
                                                         << 1 | bVar3 >> 4 & 1) << 1 |
                                                       bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 |
                                                     bVar3 >> 7)) >> 3);
      }
      else {
        puVar14 = puVar21;
LAB_017eeaac:
        if (puVar14 < (uint *)((int)puVar16 + -1)) {
          if ((short)*puVar12 == (short)*puVar14) {
            puVar12 = (uint *)((int)puVar12 + 2);
            puVar14 = (uint *)((int)puVar14 + 2);
          }
        }
        if ((puVar14 < puVar16) && ((char)*puVar12 == (char)*puVar14)) {
          puVar14 = (uint *)((int)puVar14 + 1);
        }
        pcVar23 = (char *)((int)puVar14 - (int)puVar21);
      }
LAB_017eeafc:
      puVar12 = (uint *)param_2[3];
      if (puVar24 < puVar22) {
        FUN_017bfa44(puVar12,puVar22,puVar22,puVar24);
      }
      else {
        local_3c = *puVar22;
        uStack_38 = puVar22[1];
        uStack_34 = puVar22[2];
        uStack_30 = puVar22[3];
        *puVar12 = local_3c;
        puVar12[1] = uStack_38;
        puVar12[2] = uStack_34;
        puVar12[3] = uStack_30;
      }
      puVar22 = (uint *)((int)puVar22 + (int)(pcVar23 + 4));
      puVar15 = (undefined4 *)param_2[1];
      *(undefined2 *)(puVar15 + 1) = 0;
      *puVar15 = 1;
      uVar4 = SUB42(pcVar23 + 1,0);
      param_4 = puVar22;
      if (pcVar23 + 1 < (char *)0x10000) {
        *(undefined2 *)((int)puVar15 + 6) = uVar4;
        param_2[1] = (int)(puVar15 + 2);
        if (local_58 == (char *)0x0 || puVar17 < puVar22) {
          local_58 = local_64;
          local_64 = pcVar9;
          goto LAB_017ee448;
        }
      }
      else {
        param_2[10] = (int)puVar15 - *param_2 >> 3;
        param_2[9] = 2;
        *(undefined2 *)((int)puVar15 + 6) = uVar4;
        param_2[1] = (int)(puVar15 + 2);
        if (local_58 == (char *)0x0 || puVar17 < puVar22) {
          local_58 = local_64;
          local_64 = pcVar9;
          goto LAB_017ee448;
        }
      }
      local_64 = local_58;
      local_58 = pcVar30;
    }
    local_54 = local_58;
    if (local_58 != (char *)0x0) {
      local_54 = (char *)0x1;
    }
    param_4 = puVar22;
  }
LAB_017ee448:
  if (puVar17 <= puVar22) goto LAB_017ee45c;
  goto LAB_017ede2c;
}

