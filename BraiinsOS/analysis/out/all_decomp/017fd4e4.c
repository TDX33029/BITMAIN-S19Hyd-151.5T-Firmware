// FUN_017fd4e4 @ 017fd4e4 size=5988 calls_out=12 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_017fd4e4(int param_1,uint *param_2,undefined4 *param_3,uint *param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  undefined2 uVar4;
  longlong lVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  char *pcVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint *puVar28;
  char *pcVar29;
  uint *puVar30;
  char *pcVar31;
  char *pcVar32;
  char *pcVar33;
  undefined4 *puVar34;
  uint *puVar35;
  uint uVar36;
  uint *puVar37;
  int iVar38;
  char *pcVar39;
  uint uVar40;
  uint *puVar41;
  uint *puVar42;
  int iVar43;
  uint *puVar44;
  uint uVar45;
  int iVar46;
  char *local_70;
  char *local_60;
  uint *local_44;
  uint local_40;
  uint local_3c;
  uint *puStack_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c;
  
  puVar15 = (uint *)((int)param_4 + param_5);
  puVar9 = puVar15 + -4;
  iVar38 = *(int *)(param_1 + 4);
  local_60 = (char *)*param_3;
  pcVar21 = *(char **)(param_1 + 0xc);
  local_2c = DAT_018ddaf8;
  uVar25 = *(uint *)(param_1 + 0xc4);
  puVar42 = (uint *)(pcVar21 + iVar38);
  uVar26 = uVar25;
  if (5 < uVar25) {
    uVar26 = 6;
  }
  local_70 = (char *)param_3[1];
  if (uVar26 < 4) {
    uVar26 = 4;
  }
  uVar27 = *(uint *)(param_1 + 0x1c);
  puVar16 = (uint *)(uVar27 + iVar38);
  *(undefined4 *)(param_1 + 0xdc) = 0;
  puVar17 = param_4;
  if (param_4 == puVar42) {
    puVar17 = (uint *)((int)param_4 + 1);
  }
  uVar10 = *(uint *)(param_1 + 0xb8);
  iVar22 = *(int *)(param_1 + 8);
  uVar11 = *(uint *)(param_1 + 200);
  iVar23 = *(int *)(param_1 + 0x10);
  if (puVar16 <= puVar9) {
    iVar43 = *(int *)(param_1 + 0x5c);
    iVar46 = *(int *)(param_1 + 0x28);
    pcVar13 = (char *)((int)puVar9 + (1 - (int)puVar16));
    if (pcVar13 < (char *)0x9) {
      uVar45 = uVar27 + (int)pcVar13;
    }
    else {
      uVar45 = uVar27 + 8;
    }
    iVar14 = *(int *)(param_1 + 0x24);
    if (uVar27 < uVar45) {
      uVar19 = *(uint *)(param_1 + 0x54);
      uVar36 = *(uint *)(param_1 + 0x50);
      if (4 < uVar25) {
        if (uVar11 == 5) goto LAB_017fd964;
        do {
          if (5 < uVar11) {
            uVar20 = *puVar16;
            uVar40 = 0xbf9b0000;
            uVar24 = puVar16[1];
            goto LAB_017fdf90;
          }
          uVar40 = (*puVar16 * -0x61c8864f ^ uVar36) >> (0x18U - iVar14 & 0xff);
          while( true ) {
            iVar1 = (uVar40 >> 8) << (uVar26 & 0xff);
            HintPreloadData(iVar46 + iVar1);
            HintPreloadData(iVar43 + iVar1 * 4);
            HintPreloadData(iVar43 + iVar1 * 4 + 0x40);
            if (uVar25 != 5) {
              HintPreloadData(iVar46 + iVar1 + 0x20);
            }
            uVar20 = uVar27 & 7;
            uVar27 = uVar27 + 1;
            *(uint *)(param_1 + uVar20 * 4 + 0x2c) = uVar40;
            if (uVar45 <= uVar27) goto LAB_017fd5c4;
            puVar16 = (uint *)(uVar27 + iVar38);
            if (uVar11 != 5) break;
LAB_017fd964:
            uVar20 = *puVar16;
            uVar40 = 0xbb000000;
            uVar24 = puVar16[1];
LAB_017fdf90:
            uVar24 = uVar40 * uVar24 + uVar20 * -0x30e44324 +
                     (int)((ulonglong)uVar40 * (ulonglong)uVar20 >> 0x20) ^ uVar19;
            uVar40 = ((uint)((ulonglong)uVar40 * (ulonglong)uVar20) ^ uVar36) >>
                     (0x38U - iVar14 & 0xff) | uVar24 << (iVar14 - 0x18U & 0xff) |
                     uVar24 >> (0x18U - iVar14 & 0xff);
          }
        } while( true );
      }
      if (uVar11 == 5) {
        while( true ) {
          puVar28 = (uint *)(uVar27 + iVar38);
          uVar20 = uVar27 & 7;
          uVar27 = uVar27 + 1;
          lVar5 = (ulonglong)*puVar28 * 0xbb000000;
          uVar40 = puVar16[1] * -0x45000000 + *puVar28 * -0x30e44324 +
                   (int)((ulonglong)lVar5 >> 0x20) ^ uVar19;
          uVar24 = ((uint)lVar5 ^ uVar36) >> (0x38U - iVar14 & 0xff) |
                   uVar40 << (iVar14 - 0x18U & 0xff) | uVar40 >> (0x18U - iVar14 & 0xff);
          uVar40 = uVar24 >> 8;
          HintPreloadData(iVar43 + uVar40 * 0x40);
          HintPreloadData(iVar46 + uVar40 * 0x10);
          *(uint *)(param_1 + uVar20 * 4 + 0x2c) = uVar24;
          if (uVar45 <= uVar27) break;
          puVar16 = (uint *)(uVar27 + iVar38);
        }
      }
      else if (uVar11 < 6) {
        do {
          piVar2 = (int *)(uVar27 + iVar38);
          uVar20 = uVar27 & 7;
          uVar27 = uVar27 + 1;
          uVar40 = (*piVar2 * -0x61c8864f ^ uVar36) >> (0x18U - iVar14 & 0xff);
          uVar19 = uVar40 >> 8;
          HintPreloadData(iVar43 + uVar19 * 0x40);
          HintPreloadData(iVar46 + uVar19 * 0x10);
          *(uint *)(param_1 + uVar20 * 4 + 0x2c) = uVar40;
        } while (uVar27 < uVar45);
      }
      else {
        while( true ) {
          puVar28 = (uint *)(uVar27 + iVar38);
          uVar20 = uVar27 & 7;
          uVar27 = uVar27 + 1;
          lVar5 = (ulonglong)*puVar28 * 0xbf9b0000;
          uVar40 = puVar16[1] * -0x40650000 + *puVar28 * -0x30e44324 +
                   (int)((ulonglong)lVar5 >> 0x20) ^ uVar19;
          uVar24 = ((uint)lVar5 ^ uVar36) >> (0x38U - iVar14 & 0xff) |
                   uVar40 << (iVar14 - 0x18U & 0xff) | uVar40 >> (0x18U - iVar14 & 0xff);
          uVar40 = uVar24 >> 8;
          HintPreloadData(iVar43 + uVar40 * 0x40);
          HintPreloadData(iVar46 + uVar40 * 0x10);
          *(uint *)(param_1 + uVar20 * 4 + 0x2c) = uVar24;
          if (uVar45 <= uVar27) break;
          puVar16 = (uint *)(uVar27 + iVar38);
        }
      }
    }
  }
LAB_017fd5c4:
  if (puVar9 <= puVar17) {
LAB_017fe1a8:
    *param_3 = local_60;
    param_3[1] = local_70;
    if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2b78((int)puVar15 - (int)param_4,puVar17,local_2c ^ DAT_018ddaf8,0);
    }
    return;
  }
  pcVar13 = (char *)(1 << (uVar10 & 0xff));
  puVar16 = (uint *)(pcVar21 + iVar22);
  puVar28 = (uint *)(iVar22 + iVar23);
  pcVar29 = pcVar21 + -1;
  puVar30 = puVar15 + -8;
  local_44 = puVar17;
LAB_017fd638:
  pcVar31 = (char *)((int)local_44 + ((1 - iVar23) - iVar38));
  pcVar39 = (char *)((int)local_44 + ((1 - (int)local_60) - iVar38));
  if (pcVar13 < pcVar31) {
    pcVar12 = pcVar13;
  }
  else {
    pcVar12 = pcVar31;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    pcVar12 = pcVar31;
  }
  iVar23 = iVar22;
  if (pcVar21 <= pcVar39) {
    iVar23 = iVar38;
  }
  pcVar31 = (char *)0x0;
  if (local_60 <= pcVar12 && 2 < (uint)((int)pcVar29 - (int)pcVar39)) {
    if (*(int *)((int)local_44 + 1) == *(int *)(pcVar39 + iVar23)) {
      puVar17 = (uint *)((int)local_44 + 5);
      if (pcVar39 < pcVar21) {
        puVar35 = puVar16;
      }
      else {
        puVar35 = puVar15;
      }
      puVar44 = (uint *)(pcVar39 + iVar23 + 4);
      puVar18 = (uint *)((int)puVar17 + ((int)puVar35 - (int)puVar44));
      if (puVar15 < puVar18) {
        puVar18 = puVar15;
      }
      if (puVar17 < (uint *)((int)puVar18 + -3)) {
        if (*(uint *)(pcVar39 + iVar23 + 4) == *(uint *)((int)local_44 + 5)) {
          puVar41 = (uint *)(pcVar39 + iVar23 + 8);
          puVar37 = (uint *)((int)local_44 + 9);
          while( true ) {
            if ((uint *)((int)puVar18 + -3) <= puVar37) break;
            if (*puVar41 != *puVar37) {
              uVar27 = *puVar41 ^ *puVar37;
              bVar6 = (byte)uVar27;
              bVar7 = (byte)(uVar27 >> 8);
              bVar8 = (byte)(uVar27 >> 0x10);
              bVar3 = (byte)(uVar27 >> 0x18);
              pcVar31 = (char *)((int)puVar37 +
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
                                                            bVar3 >> 7)) >> 3) - (int)puVar17));
              goto LAB_017fe4f0;
            }
            puVar41 = puVar41 + 1;
            puVar37 = puVar37 + 1;
          }
          goto LAB_017fe4b8;
        }
        uVar27 = *(uint *)(pcVar39 + iVar23 + 4) ^ *(uint *)((int)local_44 + 5);
        bVar6 = (byte)uVar27;
        bVar7 = (byte)(uVar27 >> 8);
        bVar8 = (byte)(uVar27 >> 0x10);
        bVar3 = (byte)(uVar27 >> 0x18);
        pcVar31 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
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
        puVar41 = puVar44;
        puVar37 = puVar17;
LAB_017fe4b8:
        if (puVar37 < (uint *)((int)puVar18 + -1)) {
          if ((short)*puVar41 == (short)*puVar37) {
            puVar41 = (uint *)((int)puVar41 + 2);
            puVar37 = (uint *)((int)puVar37 + 2);
          }
        }
        if ((puVar37 < puVar18) && ((char)*puVar41 == (char)*puVar37)) {
          puVar37 = (uint *)((int)puVar37 + 1);
        }
        pcVar31 = (char *)((int)puVar37 - (int)puVar17);
      }
LAB_017fe4f0:
      if (puVar35 == (uint *)((int)puVar44 + (int)pcVar31)) {
        puVar18 = (uint *)((int)puVar17 + (int)pcVar31);
        puVar44 = puVar42;
        puVar35 = puVar18;
        if (puVar18 < (uint *)((int)puVar15 + -3)) {
          if (*puVar42 == *(uint *)((int)puVar17 + (int)pcVar31)) {
            do {
              puVar35 = puVar35 + 1;
              puVar44 = puVar44 + 1;
              if ((uint *)((int)puVar15 + -3) <= puVar35) goto LAB_017fe52c;
            } while (*puVar44 == *puVar35);
            uVar27 = *puVar44 ^ *puVar35;
            bVar6 = (byte)uVar27;
            bVar7 = (byte)(uVar27 >> 8);
            bVar8 = (byte)(uVar27 >> 0x10);
            bVar3 = (byte)(uVar27 >> 0x18);
            pcVar12 = (char *)((int)puVar35 +
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
                              - (int)puVar18));
          }
          else {
            uVar27 = *puVar42 ^ *(uint *)((int)puVar17 + (int)pcVar31);
            bVar6 = (byte)uVar27;
            bVar7 = (byte)(uVar27 >> 8);
            bVar8 = (byte)(uVar27 >> 0x10);
            bVar3 = (byte)(uVar27 >> 0x18);
            pcVar12 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
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
LAB_017fe52c:
          if (puVar35 < (uint *)((int)puVar15 + -1)) {
            if ((short)*puVar44 == (short)*puVar35) {
              puVar44 = (uint *)((int)puVar44 + 2);
              puVar35 = (uint *)((int)puVar35 + 2);
            }
          }
          if ((puVar35 < puVar15) && ((char)*puVar44 == (char)*puVar35)) {
            puVar35 = (uint *)((int)puVar35 + 1);
          }
          pcVar12 = (char *)((int)puVar35 - (int)puVar18);
        }
        pcVar31 = pcVar31 + (int)pcVar12;
      }
      pcVar31 = pcVar31 + 4;
    }
    else {
      pcVar31 = (char *)0x0;
    }
  }
  local_40 = 999999999;
  puVar35 = local_44;
  if (uVar11 != 5) {
    if (uVar11 < 6) {
      if (uVar25 == 5) {
        pcVar12 = (char *)FUN_017d6e8c(param_1,local_44,puVar15,&local_40);
joined_r0x017fe2d0:
        if (pcVar31 < pcVar12) goto LAB_017fdebc;
LAB_017fd6ec:
        if (pcVar31 < (char *)0x4) goto LAB_017fdf00;
        uVar27 = 1;
        puVar35 = (uint *)((int)local_44 + 1);
        pcVar12 = pcVar31;
        if (puVar9 <= local_44) goto LAB_017fdb58;
      }
      else {
        if (5 < uVar25) {
          pcVar12 = (char *)FUN_017d9120();
          goto joined_r0x017fe2d0;
        }
        pcVar12 = (char *)FUN_017d2ca0();
        if (pcVar12 <= pcVar31) goto LAB_017fd6ec;
LAB_017fdebc:
        if (pcVar12 < (char *)0x4) goto LAB_017fdf00;
        pcVar31 = pcVar12;
        uVar27 = local_40;
        if (puVar9 <= local_44) goto LAB_017fdb50;
      }
      if (uVar11 == 5) {
LAB_017fdd28:
        pcVar31 = pcVar12;
        puVar17 = local_44;
        while( true ) {
          local_44 = (uint *)((int)puVar17 + 1);
          if (uVar27 == 0) {
            iVar23 = 0x20;
          }
          else {
            pcVar33 = pcVar39 + ((int)local_60 - *(int *)(param_1 + 0x10));
            pcVar12 = pcVar13;
            if (pcVar33 <= pcVar13) {
              pcVar12 = pcVar33;
            }
            if (*(int *)(param_1 + 0x18) == 0) {
              pcVar33 = pcVar12;
            }
            iVar46 = iVar22;
            if (pcVar21 <= pcVar39) {
              iVar46 = iVar38;
            }
            if ((pcVar33 < local_60 || (uint)((int)pcVar29 - (int)pcVar39) < 3) ||
               (*(uint *)(pcVar39 + iVar46) != *local_44)) {
              iVar23 = LZCOUNT(uVar27);
            }
            else {
              iVar23 = LZCOUNT(uVar27);
              puVar44 = puVar16;
              if (pcVar21 <= pcVar39) {
                puVar44 = puVar15;
              }
              uVar10 = FUN_017ce288((char *)((int)puVar17 + 5),pcVar39 + iVar46 + 4,puVar15,puVar44,
                                    puVar42);
              if (uVar10 < 0xfffffffc && (int)(pcVar31 + -10) * 3 + iVar23 < (int)(uVar10 + 4) * 3)
              {
                uVar27 = 1;
                iVar23 = 0x1f;
                puVar35 = local_44;
                pcVar31 = (char *)(uVar10 + 4);
              }
            }
          }
          local_40 = 999999999;
          if (uVar25 == 5) {
            pcVar12 = (char *)FUN_017d852c(param_1,local_44,puVar15,&local_40);
          }
          else if (uVar25 < 6) {
            pcVar12 = (char *)FUN_017d4200();
          }
          else {
            pcVar12 = (char *)FUN_017daba0();
          }
          if (pcVar12 < (char *)0x4 ||
              LZCOUNT(local_40) + (int)pcVar12 * 4 + -0x1f <= iVar23 + (int)pcVar31 * 4 + -0x1b)
          goto LAB_017fdb4c;
          pcVar39 = pcVar39 + 1;
          if (puVar9 <= local_44) break;
          puVar35 = local_44;
          pcVar31 = pcVar12;
          uVar27 = local_40;
          puVar17 = local_44;
        }
      }
      else {
        puVar17 = local_44;
        while( true ) {
          local_44 = (uint *)((int)puVar17 + 1);
          pcVar31 = pcVar12;
          if (uVar27 == 0) {
            iVar23 = 0x20;
          }
          else {
            pcVar32 = pcVar39 + ((int)local_60 - *(int *)(param_1 + 0x10));
            pcVar33 = pcVar13;
            if (pcVar32 <= pcVar13) {
              pcVar33 = pcVar32;
            }
            if (*(int *)(param_1 + 0x18) != 0) {
              pcVar33 = pcVar32;
            }
            iVar46 = iVar38;
            if (pcVar39 < pcVar21) {
              iVar46 = iVar22;
            }
            if ((pcVar33 < local_60 || (uint)((int)pcVar29 - (int)pcVar39) < 3) ||
               (*(uint *)(pcVar39 + iVar46) != *local_44)) {
              iVar23 = LZCOUNT(uVar27);
            }
            else {
              iVar23 = LZCOUNT(uVar27);
              if (pcVar39 < pcVar21) {
                puVar44 = puVar16;
              }
              else {
                puVar44 = puVar15;
              }
              uVar10 = FUN_017ce288((char *)((int)puVar17 + 5),pcVar39 + iVar46 + 4,puVar15,puVar44,
                                    puVar42);
              if (uVar10 < 0xfffffffc && (int)(pcVar12 + -10) * 3 + iVar23 < (int)(uVar10 + 4) * 3)
              {
                uVar27 = 1;
                iVar23 = 0x1f;
                puVar35 = local_44;
                pcVar31 = (char *)(uVar10 + 4);
              }
            }
          }
          local_40 = 999999999;
          if (uVar25 == 5) {
            pcVar12 = (char *)FUN_017d6e8c(param_1,local_44,puVar15,&local_40);
          }
          else if (uVar25 < 6) {
            pcVar12 = (char *)FUN_017d2ca0();
          }
          else {
            pcVar12 = (char *)FUN_017d9120();
          }
          if (pcVar12 < (char *)0x4 ||
              LZCOUNT(local_40) + (int)pcVar12 * 4 + -0x1f <= iVar23 + (int)pcVar31 * 4 + -0x1b)
          goto LAB_017fdb4c;
          pcVar39 = pcVar39 + 1;
          if (puVar9 <= local_44) break;
          puVar35 = local_44;
          uVar27 = local_40;
          puVar17 = local_44;
        }
      }
    }
    else {
      if (uVar25 == 5) {
        pcVar12 = (char *)FUN_017d792c(param_1,local_44,puVar15,&local_40);
joined_r0x017fe2a0:
        if (pcVar12 <= pcVar31) goto joined_r0x017fe2a8;
LAB_017fda44:
        if (pcVar12 < (char *)0x4) goto LAB_017fdf00;
        pcVar31 = pcVar12;
        uVar27 = local_40;
        if (puVar9 <= local_44) goto LAB_017fdb50;
      }
      else {
        if (5 < uVar25) {
          pcVar12 = (char *)FUN_017d9da0(param_1,local_44);
          goto joined_r0x017fe2a0;
        }
        pcVar12 = (char *)FUN_017d3690(param_1,local_44);
        if (pcVar31 < pcVar12) goto LAB_017fda44;
joined_r0x017fe2a8:
        if (pcVar31 < (char *)0x4) goto LAB_017fdf00;
        puVar35 = (uint *)((int)local_44 + 1);
        uVar27 = 1;
        pcVar12 = pcVar31;
        if (puVar9 <= local_44) goto LAB_017fdb58;
      }
      puVar17 = local_44;
      while( true ) {
        local_44 = (uint *)((int)puVar17 + 1);
        pcVar31 = pcVar12;
        if (uVar27 == 0) {
          iVar23 = 0x20;
        }
        else {
          pcVar32 = pcVar39 + ((int)local_60 - *(int *)(param_1 + 0x10));
          pcVar33 = pcVar13;
          if (pcVar32 <= pcVar13) {
            pcVar33 = pcVar32;
          }
          if (*(int *)(param_1 + 0x18) != 0) {
            pcVar33 = pcVar32;
          }
          iVar46 = iVar38;
          if (pcVar39 < pcVar21) {
            iVar46 = iVar22;
          }
          if ((pcVar33 < local_60 || (uint)((int)pcVar29 - (int)pcVar39) < 3) ||
             (*local_44 != *(uint *)(pcVar39 + iVar46))) {
            iVar23 = LZCOUNT(uVar27);
          }
          else {
            iVar23 = LZCOUNT(uVar27);
            if (pcVar39 < pcVar21) {
              puVar44 = puVar16;
            }
            else {
              puVar44 = puVar15;
            }
            uVar10 = FUN_017ce288((char *)((int)puVar17 + 5),pcVar39 + iVar46 + 4,puVar15,puVar44,
                                  puVar42);
            if (uVar10 < 0xfffffffc && (int)(pcVar12 + -10) * 3 + iVar23 < (int)(uVar10 + 4) * 3) {
              uVar27 = 1;
              iVar23 = 0x1f;
              puVar35 = local_44;
              pcVar31 = (char *)(uVar10 + 4);
            }
          }
        }
        local_40 = 999999999;
        if (uVar25 == 5) {
          pcVar12 = (char *)FUN_017d792c(param_1,local_44,puVar15,&local_40);
        }
        else if (uVar25 < 6) {
          pcVar12 = (char *)FUN_017d3690();
        }
        else {
          pcVar12 = (char *)FUN_017d9da0();
        }
        if (pcVar12 < (char *)0x4 ||
            LZCOUNT(local_40) + (int)pcVar12 * 4 + -0x1f <= iVar23 + (int)pcVar31 * 4 + -0x1b)
        goto LAB_017fdb4c;
        pcVar39 = pcVar39 + 1;
        if (puVar9 <= local_44) break;
        puVar35 = local_44;
        uVar27 = local_40;
        puVar17 = local_44;
      }
    }
    puVar35 = local_44;
    pcVar31 = pcVar12;
    uVar27 = local_40;
    goto LAB_017fdb50;
  }
  if (uVar25 == 5) {
    pcVar12 = (char *)FUN_017d852c(param_1,local_44,puVar15,&local_40);
  }
  else if (uVar25 < 6) {
    pcVar12 = (char *)FUN_017d4200();
  }
  else {
    pcVar12 = (char *)FUN_017daba0();
  }
  if (pcVar12 <= pcVar31) {
    if (pcVar31 < (char *)0x4) goto LAB_017fdf00;
    uVar27 = 1;
    puVar35 = (uint *)((int)local_44 + 1);
    pcVar12 = pcVar31;
    if (local_44 < puVar9) goto LAB_017fdd28;
    goto LAB_017fdb58;
  }
  if ((char *)0x3 < pcVar12) {
    pcVar31 = pcVar12;
    uVar27 = local_40;
    if (local_44 < puVar9) goto LAB_017fdd28;
    goto LAB_017fdb50;
  }
LAB_017fdf00:
  uVar27 = (uint)((int)local_44 - (int)param_4) >> 8;
  *(uint *)(param_1 + 0xdc) = (uint)(8 < uVar27);
  puVar17 = local_44;
  local_44 = (uint *)((int)local_44 + uVar27 + 1);
  goto LAB_017fdf28;
LAB_017fdb4c:
LAB_017fdb50:
  if (3 < uVar27) {
    pcVar39 = (char *)((int)puVar35 + ((3 - uVar27) - iVar38));
    puVar17 = puVar28;
    iVar23 = iVar22;
    if (pcVar21 <= pcVar39) {
      puVar17 = puVar42;
      iVar23 = iVar38;
    }
    puVar18 = (uint *)(pcVar39 + iVar23);
    puVar44 = puVar35;
    if (puVar17 < puVar18 && param_4 < puVar35) {
      do {
        puVar18 = (uint *)((int)puVar18 + -1);
        puVar35 = (uint *)((int)puVar44 + -1);
        if (*(char *)puVar35 != *(char *)puVar18) {
          puVar35 = puVar44;
          break;
        }
        pcVar31 = pcVar31 + 1;
        puVar44 = puVar35;
      } while (param_4 < puVar35 && puVar17 < puVar18);
    }
    local_70 = local_60;
    local_60 = (char *)(uVar27 - 3);
  }
LAB_017fdb58:
  uVar10 = (int)puVar35 - (int)param_4;
  puVar44 = (uint *)param_2[3];
  puVar17 = param_2;
  if (puVar30 < puVar35) {
    FUN_017bfa44(puVar44,param_4,puVar35);
  }
  else {
    local_3c = *param_4;
    puStack_38 = (uint *)param_4[1];
    uStack_34 = param_4[2];
    uStack_30 = param_4[3];
    puVar44[3] = uStack_30;
    *puVar44 = local_3c;
    puVar44[1] = (uint)puStack_38;
    puVar44[2] = uStack_34;
    uVar45 = param_2[3];
    if (uVar10 < 0x11) {
      param_2[3] = uVar45 + uVar10;
      puVar44 = (uint *)param_2[1];
      puVar17 = puStack_38;
      goto LAB_017fdbbc;
    }
    local_3c = param_4[4];
    puStack_38 = (uint *)param_4[5];
    uStack_34 = param_4[6];
    uStack_30 = param_4[7];
    *(uint *)(uVar45 + 0x10) = local_3c;
    *(uint **)(uVar45 + 0x14) = puStack_38;
    *(uint *)(uVar45 + 0x18) = uStack_34;
    *(uint *)(uVar45 + 0x1c) = uStack_30;
    if (0x10 < (int)(uVar10 - 0x10)) {
      puVar44 = param_4 + 0x10;
      puVar18 = (uint *)(uVar45 + 0x20);
      do {
        uVar36 = puVar44[-7];
        uVar19 = puVar44[-6];
        puVar37 = puVar18 + 8;
        uVar40 = puVar44[-5];
        *puVar18 = puVar44[-8];
        puVar18[1] = uVar36;
        puVar18[2] = uVar19;
        puVar18[3] = uVar40;
        local_3c = puVar44[-4];
        puStack_38 = (uint *)puVar44[-3];
        uStack_34 = puVar44[-2];
        uStack_30 = puVar44[-1];
        puVar18[4] = local_3c;
        puVar18[5] = (uint)puStack_38;
        puVar18[6] = uStack_34;
        puVar18[7] = uStack_30;
        puVar44 = puVar44 + 8;
        puVar18 = puVar37;
      } while (puVar37 < (uint *)(uVar45 + uVar10));
    }
  }
  param_2[3] = param_2[3] + uVar10;
  puVar44 = (uint *)param_2[1];
  if (0xffff < uVar10) {
    param_2[10] = (int)((int)puVar44 - *param_2) >> 3;
    param_2[9] = 1;
  }
LAB_017fdbbc:
  *(short *)(puVar44 + 1) = (short)uVar10;
  *puVar44 = uVar27;
  if ((char *)0xffff < pcVar31 + -3) {
    param_2[10] = (int)((int)puVar44 - *param_2) >> 3;
    puVar17 = (uint *)&SUB_00000002;
    param_2[9] = 2;
  }
  *(short *)((int)puVar44 + 6) = (short)(pcVar31 + -3);
  param_4 = (uint *)((int)puVar35 + (int)pcVar31);
  param_2[1] = (uint)(puVar44 + 2);
  if (*(int *)(param_1 + 0xdc) != 0) {
    uVar27 = *(uint *)(param_1 + 0x1c);
    puVar35 = (uint *)(uVar27 + iVar38);
    puVar17 = puVar9;
    if (puVar35 <= puVar9) {
      iVar23 = *(int *)(param_1 + 0x5c);
      pcVar31 = (char *)((int)puVar9 + (1 - (int)puVar35));
      iVar46 = *(int *)(param_1 + 0x28);
      if (pcVar31 < (char *)0x9) {
        uVar10 = uVar27 + (int)pcVar31;
      }
      else {
        uVar10 = uVar27 + 8;
      }
      puVar17 = *(uint **)(param_1 + 0x24);
      if (uVar27 < uVar10) {
        uVar36 = *(uint *)(param_1 + 0x50);
        uVar45 = *(uint *)(param_1 + 0x54);
        if (4 < uVar25) {
          do {
            if (uVar11 == 5) {
              uVar40 = *puVar35;
              uVar20 = puVar35[1];
              uVar19 = 0xbb000000;
LAB_017fe8d0:
              uVar20 = uVar19 * uVar20 + uVar40 * -0x30e44324 +
                       (int)((ulonglong)uVar19 * (ulonglong)uVar40 >> 0x20) ^ uVar45;
              uVar19 = ((uint)((ulonglong)uVar19 * (ulonglong)uVar40) ^ uVar36) >>
                       (0x38U - (int)puVar17 & 0xff) | uVar20 << ((uint)(puVar17 + -6) & 0xff) |
                       uVar20 >> (0x18U - (int)puVar17 & 0xff);
            }
            else {
              if (5 < uVar11) {
                uVar40 = *puVar35;
                uVar20 = puVar35[1];
                uVar19 = 0xbf9b0000;
                goto LAB_017fe8d0;
              }
              uVar19 = (*puVar35 * -0x61c8864f ^ uVar36) >> (0x18U - (int)puVar17 & 0xff);
            }
            iVar43 = (uVar19 >> 8) << (uVar26 & 0xff);
            HintPreloadData(iVar46 + iVar43);
            HintPreloadData(iVar23 + iVar43 * 4);
            HintPreloadData(iVar23 + iVar43 * 4 + 0x40);
            if (uVar25 != 5) {
              HintPreloadData(iVar46 + iVar43 + 0x20);
            }
            uVar40 = uVar27 & 7;
            uVar27 = uVar27 + 1;
            *(uint *)(param_1 + uVar40 * 4 + 0x2c) = uVar19;
            if (uVar10 <= uVar27) goto LAB_017fdc28;
            puVar35 = (uint *)(uVar27 + iVar38);
          } while( true );
        }
        if (uVar11 == 5) {
          uVar40 = 0x38 - (int)puVar17;
          puVar44 = puVar17 + -6;
          uVar19 = 0x18 - (int)puVar17;
          while( true ) {
            uVar20 = uVar27 & 7;
            puVar18 = (uint *)(uVar27 + iVar38);
            uVar27 = uVar27 + 1;
            puVar17 = (uint *)(param_1 + uVar20 * 4);
            lVar5 = (ulonglong)*puVar18 * 0xbb000000;
            uVar20 = puVar35[1] * -0x45000000 + *puVar18 * -0x30e44324 +
                     (int)((ulonglong)lVar5 >> 0x20) ^ uVar45;
            uVar24 = ((uint)lVar5 ^ uVar36) >> (uVar40 & 0xff) | uVar20 << ((uint)puVar44 & 0xff) |
                     uVar20 >> (uVar19 & 0xff);
            uVar20 = uVar24 >> 8;
            HintPreloadData(iVar23 + uVar20 * 0x40);
            HintPreloadData(iVar46 + uVar20 * 0x10);
            puVar17[0xb] = uVar24;
            if (uVar10 <= uVar27) break;
            puVar35 = (uint *)(uVar27 + iVar38);
          }
        }
        else if (uVar11 < 6) {
          puVar17 = (uint *)(0x18 - (int)puVar17);
          do {
            piVar2 = (int *)(uVar27 + iVar38);
            uVar40 = uVar27 & 7;
            uVar27 = uVar27 + 1;
            uVar19 = (*piVar2 * -0x61c8864f ^ uVar36) >> ((uint)puVar17 & 0xff);
            uVar45 = uVar19 >> 8;
            HintPreloadData(iVar23 + uVar45 * 0x40);
            HintPreloadData(iVar46 + uVar45 * 0x10);
            *(uint *)(param_1 + uVar40 * 4 + 0x2c) = uVar19;
          } while (uVar27 < uVar10);
        }
        else {
          uVar40 = 0x38 - (int)puVar17;
          puVar44 = puVar17 + -6;
          uVar19 = 0x18 - (int)puVar17;
          while( true ) {
            uVar20 = uVar27 & 7;
            puVar18 = (uint *)(uVar27 + iVar38);
            uVar27 = uVar27 + 1;
            puVar17 = (uint *)(param_1 + uVar20 * 4);
            lVar5 = (ulonglong)*puVar18 * 0xbf9b0000;
            uVar20 = puVar35[1] * -0x40650000 + *puVar18 * -0x30e44324 +
                     (int)((ulonglong)lVar5 >> 0x20) ^ uVar45;
            uVar24 = ((uint)lVar5 ^ uVar36) >> (uVar40 & 0xff) | uVar20 << ((uint)puVar44 & 0xff) |
                     uVar20 >> (uVar19 & 0xff);
            uVar20 = uVar24 >> 8;
            HintPreloadData(iVar23 + uVar20 * 0x40);
            HintPreloadData(iVar46 + uVar20 * 0x10);
            puVar17[0xb] = uVar24;
            if (uVar10 <= uVar27) break;
            puVar35 = (uint *)(uVar27 + iVar38);
          }
        }
      }
    }
LAB_017fdc28:
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  local_44 = param_4;
  if (puVar9 < param_4) {
LAB_017fe1a4:
    param_4 = local_44;
    goto LAB_017fe1a8;
  }
  while( true ) {
    pcVar39 = local_70;
    iVar23 = (int)param_4 - iVar38;
    pcVar31 = (char *)(iVar23 - *(int *)(param_1 + 0x10));
    if (pcVar13 < pcVar31) {
      pcVar12 = pcVar13;
    }
    else {
      pcVar12 = pcVar31;
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      pcVar12 = pcVar31;
    }
    pcVar31 = (char *)(iVar23 - (int)pcVar39);
    iVar46 = iVar22;
    if (pcVar21 <= pcVar31) {
      iVar46 = iVar38;
    }
    puVar17 = (uint *)0x0;
    if ((pcVar12 < pcVar39 || (uint)((int)(pcVar39 + (int)pcVar29) - iVar23) < 3) ||
       (puVar17 = *(uint **)(pcVar31 + iVar46), (uint *)*param_4 != puVar17)) break;
    if (pcVar31 < pcVar21) {
      puVar17 = puVar16;
    }
    else {
      puVar17 = puVar15;
    }
    puVar35 = param_4 + 1;
    puVar18 = (uint *)(pcVar31 + iVar46 + 4);
    puVar44 = (uint *)((int)puVar35 + ((int)puVar17 - (int)puVar18));
    if (puVar15 < puVar44) {
      puVar44 = puVar15;
    }
    puVar37 = (uint *)((int)puVar44 + -3);
    if (puVar35 < puVar37) {
      if (*(uint *)(pcVar31 + iVar46 + 4) == param_4[1]) {
        puVar41 = param_4 + 2;
        local_44 = (uint *)(pcVar31 + iVar46 + 8);
        if (puVar41 < puVar37) {
          do {
            if (*local_44 != *puVar41) {
              uVar27 = *puVar41 ^ *local_44;
              bVar6 = (byte)uVar27;
              bVar7 = (byte)(uVar27 >> 8);
              bVar8 = (byte)(uVar27 >> 0x10);
              bVar3 = (byte)(uVar27 >> 0x18);
              pcVar31 = (char *)((int)puVar41 +
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
                                                            bVar3 >> 7)) >> 3) - (int)puVar35));
              goto LAB_017fe630;
            }
            puVar41 = puVar41 + 1;
            local_44 = local_44 + 1;
          } while (puVar41 < puVar37);
        }
        goto LAB_017fe7e4;
      }
      uVar27 = *(uint *)(pcVar31 + iVar46 + 4) ^ param_4[1];
      bVar6 = (byte)uVar27;
      bVar7 = (byte)(uVar27 >> 8);
      bVar8 = (byte)(uVar27 >> 0x10);
      bVar3 = (byte)(uVar27 >> 0x18);
      pcVar31 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
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
      puVar41 = puVar35;
      local_44 = puVar18;
LAB_017fe7e4:
      if (puVar41 < (uint *)((int)puVar44 + -1)) {
        if ((short)*local_44 == (short)*puVar41) {
          local_44 = (uint *)((int)local_44 + 2);
          puVar41 = (uint *)((int)puVar41 + 2);
        }
      }
      if ((puVar41 < puVar44) && ((char)*local_44 == (char)*puVar41)) {
        puVar41 = (uint *)((int)puVar41 + 1);
      }
      pcVar31 = (char *)((int)puVar41 - (int)puVar35);
    }
LAB_017fe630:
    if (puVar17 == (uint *)((int)puVar18 + (int)pcVar31)) {
      puVar18 = (uint *)((int)puVar35 + (int)pcVar31);
      puVar44 = puVar42;
      puVar17 = puVar18;
      if (puVar18 < (uint *)((int)puVar15 + -3)) {
        if (*puVar42 == *(uint *)((int)puVar35 + (int)pcVar31)) {
          do {
            puVar17 = puVar17 + 1;
            puVar44 = puVar44 + 1;
            if ((uint *)((int)puVar15 + -3) <= puVar17) goto LAB_017feb68;
          } while (*puVar44 == *puVar17);
          uVar27 = *puVar44 ^ *puVar17;
          bVar6 = (byte)uVar27;
          bVar7 = (byte)(uVar27 >> 8);
          bVar8 = (byte)(uVar27 >> 0x10);
          bVar3 = (byte)(uVar27 >> 0x18);
          pcVar12 = (char *)((int)puVar17 +
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
                            (int)puVar18));
        }
        else {
          uVar27 = *puVar42 ^ *(uint *)((int)puVar35 + (int)pcVar31);
          bVar6 = (byte)uVar27;
          bVar7 = (byte)(uVar27 >> 8);
          bVar8 = (byte)(uVar27 >> 0x10);
          bVar3 = (byte)(uVar27 >> 0x18);
          pcVar12 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) <<
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
LAB_017feb68:
        if (puVar17 < (uint *)((int)puVar15 + -1)) {
          if ((short)*puVar44 == (short)*puVar17) {
            puVar44 = (uint *)((int)puVar44 + 2);
            puVar17 = (uint *)((int)puVar17 + 2);
          }
        }
        if ((puVar17 < puVar15) && ((char)*puVar44 == (char)*puVar17)) {
          puVar17 = (uint *)((int)puVar17 + 1);
        }
        pcVar12 = (char *)((int)puVar17 - (int)puVar18);
      }
      pcVar31 = pcVar31 + (int)pcVar12;
    }
    pcVar12 = pcVar31 + 4;
    puVar17 = (uint *)param_2[3];
    if (puVar30 < param_4) {
      FUN_017bfa44(puVar17,param_4,param_4,puVar30);
    }
    else {
      local_3c = *param_4;
      puStack_38 = (uint *)param_4[1];
      uStack_34 = param_4[2];
      uStack_30 = param_4[3];
      *puVar17 = local_3c;
      puVar17[1] = (uint)puStack_38;
      puVar17[2] = uStack_34;
      puVar17[3] = uStack_30;
    }
    puVar34 = (undefined4 *)param_2[1];
    *(undefined2 *)(puVar34 + 1) = 0;
    *puVar34 = 1;
    uVar4 = SUB42(pcVar31 + 1,0);
    if (pcVar31 + 1 < (char *)0x10000) {
      *(undefined2 *)((int)puVar34 + 6) = uVar4;
      param_2[1] = (uint)(puVar34 + 2);
    }
    else {
      param_2[10] = (int)((int)puVar34 - *param_2) >> 3;
      param_2[9] = 2;
      *(undefined2 *)((int)puVar34 + 6) = uVar4;
      param_2[1] = (uint)(puVar34 + 2);
    }
    if (puVar9 < (uint *)((int)param_4 + (int)pcVar12)) {
      local_44 = (uint *)((int)param_4 + (int)pcVar12);
      local_70 = local_60;
      puVar17 = param_2;
      local_60 = pcVar39;
      goto LAB_017fe1a4;
    }
    param_4 = (uint *)((int)param_4 + (int)pcVar12);
    local_70 = local_60;
    local_60 = pcVar39;
  }
  local_70 = pcVar39;
  local_44 = param_4;
LAB_017fdf28:
  if (puVar9 <= local_44) goto LAB_017fe1a8;
  iVar23 = *(int *)(param_1 + 0x10);
  goto LAB_017fd638;
}

