// FUN_017bbfa0 @ 017bbfa0 size=19600 calls_out=2 calls_in=0
// strings: 

void FUN_017bbfa0(int param_1,uint *param_2,undefined4 *param_3,uint *param_4,int param_5)

{
  byte bVar1;
  undefined2 uVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  char *pcVar19;
  uint *puVar20;
  undefined4 *puVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  char *pcVar26;
  int iVar27;
  uint *puVar28;
  int iVar29;
  uint uVar30;
  char *pcVar31;
  int *piVar32;
  char *pcVar33;
  uint *puVar34;
  uint *puVar35;
  uint *puVar36;
  int iVar37;
  uint *puVar38;
  int iVar39;
  uint *puVar40;
  int iVar41;
  uint uVar42;
  uint *puVar43;
  uint uVar44;
  char *pcVar45;
  int iVar46;
  char *local_a4;
  char *local_a0;
  uint *local_9c;
  char *local_98;
  char *local_90;
  char *local_8c;
  uint *local_88;
  char *local_7c;
  uint *local_78;
  uint *local_50;
  uint *local_4c;
  
  uVar16 = DAT_018ddaf8;
  iVar46 = *(int *)(param_1 + 200);
  puVar35 = param_4;
  if (iVar46 == 6) {
    iVar46 = *(int *)(param_1 + 0xcc);
    puVar21 = *(undefined4 **)(param_1 + 0xb4);
    if (iVar46 == 0) {
      iVar46 = 1;
    }
    puVar38 = (uint *)((int)param_4 + iVar46);
    local_98 = (char *)*param_3;
    iVar29 = puVar21[0x17];
    puVar11 = (uint *)((int)param_4 + param_5 + -8);
    local_a4 = (char *)param_3[1];
    uVar14 = puVar21[0x30];
    if ((*(int *)(param_1 + 0xd8) != 0) && (uVar13 = 4 << (uVar14 & 0xff), uVar13 != 0)) {
      uVar22 = 0;
      do {
        HintPreloadData(iVar29 + uVar22);
        uVar22 = uVar22 + 0x40;
      } while (uVar22 < uVar13);
    }
    local_88 = param_4;
    if (puVar38 <= puVar11) {
      puVar40 = *(uint **)(param_1 + 0xc);
      iVar39 = *(int *)(param_1 + 4);
      iVar37 = puVar21[1];
      puVar36 = (uint *)(iVar39 + (int)puVar40);
      puVar43 = (uint *)*puVar21;
      uVar13 = puVar21[3];
      iVar9 = *(int *)(param_1 + 0xc0);
      iVar41 = *(int *)(param_1 + 0x5c);
      pcVar31 = (char *)(iVar37 + uVar13);
      if (pcVar31 == (char *)((int)puVar43 + ((int)param_4 - (int)puVar36))) {
        puVar35 = (uint *)((int)param_4 + 1);
      }
      uVar22 = 0x40 - iVar9;
      uVar30 = iVar9 - 0x20;
      puVar25 = (uint *)(0x20 - iVar9);
      local_88 = param_4;
LAB_017bc6b8:
      local_9c = (uint *)((int)param_4 + param_5);
      local_50 = puVar35 + 0x40;
      lVar3 = (ulonglong)*puVar35 * 0xbf9b0000;
      uVar42 = (uint)lVar3;
      iVar27 = (int)puVar35 - iVar39;
      uVar23 = puVar35[1] * -0x40650000 + *puVar35 * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20);
      uVar24 = uVar42 >> (0x38 - uVar14 & 0xff) | uVar23 << (uVar14 - 0x18 & 0xff) |
               uVar23 >> (0x18 - uVar14 & 0xff);
      uVar23 = uVar42 >> (uVar22 & 0xff) | uVar23 << (uVar30 & 0xff) |
               uVar23 >> ((uint)puVar25 & 0xff);
      uVar42 = *(uint *)(iVar29 + (uVar24 >> 8) * 4);
      uVar24 = uVar24 ^ uVar42;
      puVar18 = *(uint **)(iVar41 + uVar23 * 4);
      iVar9 = iVar46;
      do {
        puVar12 = puVar38;
        puVar38 = (uint *)(iVar27 + (1 - (int)local_98));
        iVar8 = iVar39;
        if (puVar38 < puVar40) {
          iVar8 = (int)puVar43 - (int)puVar40;
        }
        piVar32 = (int *)(iVar8 + (int)puVar38);
        uVar10 = puVar12[1];
        uVar44 = *puVar12;
        *(int *)(iVar41 + uVar23 * 4) = iVar27;
        if (((char *)0x2 < (char *)((int)puVar40 + (-1 - (int)puVar38))) &&
           (*piVar32 == *(int *)((int)puVar35 + 1))) {
          if (puVar38 < puVar40) {
            puVar38 = puVar43;
          }
          else {
            puVar38 = local_9c;
          }
          puVar34 = (uint *)(piVar32 + 1);
          puVar12 = (uint *)((int)puVar35 + 5);
          puVar18 = (uint *)((int)puVar12 + ((int)puVar38 - (int)puVar34));
          if (local_9c < puVar18) {
            puVar18 = local_9c;
          }
          if ((uint *)((int)puVar18 + -3) <= puVar12) {
            puVar17 = puVar12;
            puVar28 = puVar34;
            goto LAB_017bd31c;
          }
          if (piVar32[1] == *(uint *)((int)puVar35 + 5)) {
            puVar17 = (uint *)((int)puVar35 + 9);
            puVar28 = (uint *)(piVar32 + 2);
            goto joined_r0x017bd124;
          }
          uVar23 = piVar32[1] ^ *(uint *)((int)puVar35 + 5);
          bVar5 = (byte)uVar23;
          bVar6 = (byte)(uVar23 >> 8);
          bVar7 = (byte)(uVar23 >> 0x10);
          bVar1 = (byte)(uVar23 >> 0x18);
          pcVar45 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) <<
                                                             1 | bVar5 >> 2 & 1) << 1 |
                                                           bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) <<
                                                          1 | bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1)
                                                        << 1 | bVar5 >> 7) << 0x18 |
                                           (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) <<
                                                             1 | bVar6 >> 2 & 1) << 1 |
                                                           bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) <<
                                                          1 | bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1)
                                                        << 1 | bVar6 >> 7) << 0x10 |
                                           (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) <<
                                                             1 | bVar7 >> 2 & 1) << 1 |
                                                           bVar7 >> 3 & 1) << 1 | bVar7 >> 4 & 1) <<
                                                          1 | bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1)
                                                        << 1 | bVar7 >> 7) << 8 |
                                           (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                             1 | bVar1 >> 2 & 1) << 1 |
                                                           bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) <<
                                                          1 | bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1)
                                                        << 1 | bVar1 >> 7)) >> 3);
          goto LAB_017bd354;
        }
        if (((uVar24 & 0xff) == 0) && (uVar23 = uVar42 >> 8, uVar13 < uVar23)) {
          uVar24 = *puVar35;
          pcVar45 = (char *)(iVar37 + uVar23);
          if (*(uint *)(iVar37 + (uVar42 >> 8)) != uVar24) goto LAB_017bc880;
          if (puVar18 <= puVar40) {
            puVar12 = (uint *)(pcVar45 + 4);
            puVar18 = puVar35 + 1;
            pcVar19 = (char *)((int)puVar43 + iVar27 + (-(int)((int)puVar40 + uVar23) - iVar37));
            puVar38 = (uint *)((int)puVar18 + ((int)puVar43 - (int)puVar12));
            if (local_9c < puVar38) {
              puVar38 = local_9c;
            }
            if ((uint *)((int)puVar38 + -3) <= puVar18) {
              puVar17 = puVar12;
              puVar34 = puVar18;
              goto LAB_017bebec;
            }
            if (*(uint *)(pcVar45 + 4) != puVar35[1]) {
              uVar23 = *(uint *)(pcVar45 + 4) ^ puVar35[1];
              bVar5 = (byte)uVar23;
              bVar6 = (byte)(uVar23 >> 8);
              bVar7 = (byte)(uVar23 >> 0x10);
              bVar1 = (byte)(uVar23 >> 0x18);
              pcVar33 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                                 << 1 | bVar5 >> 2 & 1) << 1 |
                                                               bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1
                                                              ) << 1 | bVar5 >> 5 & 1) << 1 |
                                                            bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                               0x18 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                        bVar6 >> 1 & 1) << 1 |
                                                                       bVar6 >> 2 & 1) << 1 |
                                                                      bVar6 >> 3 & 1) << 1 |
                                                                     bVar6 >> 4 & 1) << 1 |
                                                                    bVar6 >> 5 & 1) << 1 |
                                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7
                                                                  ) << 0x10 |
                                               (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1)
                                                                 << 1 | bVar7 >> 2 & 1) << 1 |
                                                               bVar7 >> 3 & 1) << 1 | bVar7 >> 4 & 1
                                                              ) << 1 | bVar7 >> 5 & 1) << 1 |
                                                            bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8
                                               | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                   bVar1 >> 1 & 1) << 1 |
                                                                  bVar1 >> 2 & 1) << 1 |
                                                                 bVar1 >> 3 & 1) << 1 |
                                                                bVar1 >> 4 & 1) << 1 |
                                                               bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1
                                                              ) << 1 | bVar1 >> 7)) >> 3);
              goto LAB_017bc99c;
            }
            puVar34 = puVar35 + 2;
            puVar17 = (uint *)(pcVar45 + 8);
            goto joined_r0x017bf3e0;
          }
LAB_017bc8b0:
          puVar38 = (uint *)(iVar39 + (int)puVar18);
          if (*(uint *)(iVar39 + (int)puVar18) == uVar24) goto code_r0x017bc8c0;
        }
        else {
LAB_017bc880:
          if (puVar40 < puVar18) {
            uVar24 = *puVar35;
            goto LAB_017bc8b0;
          }
        }
        if (puVar12 < local_50) {
          puVar38 = (uint *)((int)puVar12 + iVar9);
          if (puVar11 < puVar38) goto LAB_017bc344;
        }
        else {
          iVar9 = iVar9 + 1;
          puVar38 = (uint *)((int)puVar12 + iVar9);
          if (puVar11 < puVar38) goto LAB_017bc344;
          local_50 = local_50 + 0x40;
        }
        iVar27 = (int)puVar12 - iVar39;
        lVar3 = (ulonglong)uVar44 * 0xbf9b0000;
        uVar42 = (uint)lVar3;
        uVar23 = uVar10 * -0x40650000 + uVar44 * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20);
        uVar24 = uVar42 >> (0x38 - uVar14 & 0xff) | uVar23 << (uVar14 - 0x18 & 0xff) |
                 uVar23 >> (0x18 - uVar14 & 0xff);
        uVar23 = uVar42 >> (uVar22 & 0xff) | uVar23 << (uVar30 & 0xff) |
                 uVar23 >> ((uint)puVar25 & 0xff);
        uVar42 = *(uint *)(iVar29 + (uVar24 >> 8) * 4);
        uVar24 = uVar24 ^ uVar42;
        puVar18 = *(uint **)(iVar41 + uVar23 * 4);
        puVar35 = puVar12;
      } while( true );
    }
  }
  else {
    if (iVar46 != 7) {
      if (iVar46 != 5) {
        puVar35 = (uint *)((int)param_4 + param_5);
        iVar46 = *(int *)(param_1 + 0xcc);
        if (iVar46 == 0) {
          iVar46 = 1;
        }
        puVar21 = *(undefined4 **)(param_1 + 0xb4);
        puVar11 = (uint *)((int)param_4 + iVar46);
        local_7c = (char *)*param_3;
        iVar29 = puVar21[0x17];
        local_8c = (char *)param_3[1];
        puVar38 = puVar35 + -2;
        if ((*(int *)(param_1 + 0xd8) != 0) && (uVar14 = 4 << (puVar21[0x30] & 0xff), uVar14 != 0))
        {
          uVar13 = 0;
          do {
            HintPreloadData(iVar29 + uVar13);
            uVar13 = uVar13 + 0x40;
          } while (uVar13 < uVar14);
        }
        local_78 = param_4;
        if (puVar38 < puVar11) {
LAB_017b4f90:
          *param_3 = local_7c;
          param_3[1] = local_8c;
          uVar16 = uVar16 ^ DAT_018ddaf8;
          if (uVar16 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_016d2b78((int)puVar35 - (int)local_78,puVar11,uVar16,0);
          }
          return;
        }
        iVar39 = *(int *)(param_1 + 4);
        uVar14 = 0x18 - puVar21[0x30];
        iVar41 = puVar21[1];
        puVar43 = (uint *)*puVar21;
        uVar30 = puVar21[3];
        uVar13 = *(uint *)(param_1 + 0xc);
        iVar9 = *(int *)(param_1 + 0x5c);
        uVar22 = 0x20 - *(int *)(param_1 + 0xc0);
        puVar36 = (uint *)(iVar39 + uVar13);
        pcVar31 = (char *)(iVar41 + uVar30);
        puVar40 = param_4;
        if (pcVar31 == (char *)((int)puVar43 + ((int)param_4 - (int)puVar36))) {
          puVar40 = (uint *)((int)param_4 + 1);
        }
        local_78 = param_4;
LAB_017b4e20:
        local_4c = puVar40 + 0x40;
        iVar27 = (int)puVar40 - iVar39;
        uVar23 = *puVar40 * -0x61c8864f >> (uVar14 & 0xff);
        uVar24 = *puVar40 * -0x61c8864f >> (uVar22 & 0xff);
        uVar44 = *(uint *)(iVar29 + (uVar23 >> 8) * 4);
        uVar23 = uVar23 ^ uVar44;
        uVar42 = *(uint *)(iVar9 + uVar24 * 4);
        puVar25 = puVar11;
        iVar37 = iVar46;
        do {
          puVar11 = puVar25;
          uVar10 = iVar27 + (1 - (int)local_7c);
          if (uVar10 < uVar13) {
            piVar32 = (int *)((int)puVar43 + (uVar10 - uVar13));
          }
          else {
            piVar32 = (int *)(iVar39 + uVar10);
          }
          uVar15 = *puVar11;
          *(int *)(iVar9 + uVar24 * 4) = iVar27;
          if ((2 < (uVar13 - 1) - uVar10) && (*piVar32 == *(int *)((int)puVar40 + 1))) {
            puVar25 = (uint *)(piVar32 + 1);
            puVar11 = (uint *)((int)puVar40 + 5);
            if (uVar10 < uVar13) {
              puVar18 = puVar43;
            }
            else {
              puVar18 = puVar35;
            }
            puVar12 = (uint *)((int)puVar11 + ((int)puVar18 - (int)puVar25));
            if (puVar35 < puVar12) {
              puVar12 = puVar35;
            }
            if ((uint *)((int)puVar12 + -3) <= puVar11) {
              puVar34 = puVar11;
              puVar17 = puVar25;
              goto LAB_017b5340;
            }
            if (piVar32[1] == *(uint *)((int)puVar40 + 5)) {
              puVar34 = (uint *)((int)puVar40 + 9);
              puVar17 = (uint *)(piVar32 + 2);
              goto joined_r0x017b5294;
            }
            uVar23 = piVar32[1] ^ *(uint *)((int)puVar40 + 5);
            bVar5 = (byte)uVar23;
            bVar6 = (byte)(uVar23 >> 8);
            bVar7 = (byte)(uVar23 >> 0x10);
            bVar1 = (byte)(uVar23 >> 0x18);
            pcVar45 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                               << 1 | bVar5 >> 2 & 1) << 1 |
                                                             bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                            << 1 | bVar5 >> 5 & 1) << 1 |
                                                          bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18
                                             | (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                 << 1 | bVar6 >> 2 & 1) << 1 |
                                                               bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1
                                                              ) << 1 | bVar6 >> 5 & 1) << 1 |
                                                            bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                               0x10 | (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                        bVar7 >> 1 & 1) << 1 |
                                                                       bVar7 >> 2 & 1) << 1 |
                                                                      bVar7 >> 3 & 1) << 1 |
                                                                     bVar7 >> 4 & 1) << 1 |
                                                                    bVar7 >> 5 & 1) << 1 |
                                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7
                                                                  ) << 8 |
                                             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                               << 1 | bVar1 >> 2 & 1) << 1 |
                                                             bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                            << 1 | bVar1 >> 5 & 1) << 1 |
                                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
            goto joined_r0x017b52c4;
          }
          if (((uVar23 & 0xff) == 0) && (uVar23 = uVar44 >> 8, uVar30 < uVar23)) {
            uVar24 = *puVar40;
            pcVar45 = (char *)(iVar41 + uVar23);
            if (*(uint *)(iVar41 + (uVar44 >> 8)) != uVar24) goto LAB_017b4f64;
            if (uVar42 <= uVar13) {
              puVar18 = puVar40 + 1;
              pcVar19 = (char *)((int)puVar43 + iVar27 + (-(uVar13 + uVar23) - iVar41));
              puVar25 = (uint *)(pcVar45 + 4);
              puVar11 = (uint *)((int)puVar18 + ((int)puVar43 - (int)puVar25));
              if (puVar35 < puVar11) {
                puVar11 = puVar35;
              }
              if ((uint *)((int)puVar11 + -3) <= puVar18) {
                puVar34 = puVar25;
                puVar12 = puVar18;
                goto LAB_017b50bc;
              }
              if (*(uint *)(pcVar45 + 4) != puVar40[1]) {
                uVar23 = *(uint *)(pcVar45 + 4) ^ puVar40[1];
                bVar5 = (byte)uVar23;
                bVar6 = (byte)(uVar23 >> 8);
                bVar7 = (byte)(uVar23 >> 0x10);
                bVar1 = (byte)(uVar23 >> 0x18);
                pcVar33 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                   bVar5 >> 1 & 1) << 1 |
                                                                  bVar5 >> 2 & 1) << 1 |
                                                                 bVar5 >> 3 & 1) << 1 |
                                                                bVar5 >> 4 & 1) << 1 |
                                                               bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1
                                                              ) << 1 | bVar5 >> 7) << 0x18 |
                                                 (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                   bVar6 >> 1 & 1) << 1 |
                                                                  bVar6 >> 2 & 1) << 1 |
                                                                 bVar6 >> 3 & 1) << 1 |
                                                                bVar6 >> 4 & 1) << 1 |
                                                               bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1
                                                              ) << 1 | bVar6 >> 7) << 0x10 |
                                                 (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                   bVar7 >> 1 & 1) << 1 |
                                                                  bVar7 >> 2 & 1) << 1 |
                                                                 bVar7 >> 3 & 1) << 1 |
                                                                bVar7 >> 4 & 1) << 1 |
                                                               bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1
                                                              ) << 1 | bVar7 >> 7) << 8 |
                                                 (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                   bVar1 >> 1 & 1) << 1 |
                                                                  bVar1 >> 2 & 1) << 1 |
                                                                 bVar1 >> 3 & 1) << 1 |
                                                                bVar1 >> 4 & 1) << 1 |
                                                               bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1
                                                              ) << 1 | bVar1 >> 7)) >> 3);
                goto LAB_017b5104;
              }
              puVar12 = puVar40 + 2;
              puVar34 = (uint *)(pcVar45 + 8);
              goto joined_r0x017b5d58;
            }
LAB_017b4fec:
            puVar25 = (uint *)(iVar39 + uVar42);
            if (*(uint *)(iVar39 + uVar42) == uVar24) goto code_r0x017b4ffc;
          }
          else {
LAB_017b4f64:
            if (uVar13 < uVar42) {
              uVar24 = *puVar40;
              goto LAB_017b4fec;
            }
          }
          if (puVar11 < local_4c) {
            puVar25 = (uint *)((int)puVar11 + iVar37);
            if (puVar38 < puVar25) goto LAB_017b4f8c;
          }
          else {
            iVar37 = iVar37 + 1;
            puVar25 = (uint *)((int)puVar11 + iVar37);
            if (puVar38 < puVar25) {
LAB_017b4f8c:
              goto LAB_017b4f90;
            }
            local_4c = local_4c + 0x40;
          }
          iVar27 = (int)puVar11 - iVar39;
          uVar23 = uVar15 * -0x61c8864f >> (uVar14 & 0xff);
          uVar24 = uVar15 * -0x61c8864f >> (uVar22 & 0xff);
          uVar44 = *(uint *)(iVar29 + (uVar23 >> 8) * 4);
          uVar23 = uVar23 ^ uVar44;
          uVar42 = *(uint *)(iVar9 + uVar24 * 4);
          puVar40 = puVar11;
        } while( true );
      }
      iVar46 = *(int *)(param_1 + 0xcc);
      puVar21 = *(undefined4 **)(param_1 + 0xb4);
      puVar35 = (uint *)((int)param_4 + param_5);
      if (iVar46 == 0) {
        iVar46 = 1;
      }
      puVar38 = (uint *)((int)param_4 + iVar46);
      local_90 = (char *)*param_3;
      iVar29 = puVar21[0x17];
      puVar40 = puVar35 + -2;
      local_a0 = (char *)param_3[1];
      uVar14 = puVar21[0x30];
      if ((*(int *)(param_1 + 0xd8) != 0) && (uVar13 = 4 << (uVar14 & 0xff), uVar13 != 0)) {
        uVar22 = 0;
        do {
          HintPreloadData(iVar29 + uVar22);
          uVar22 = uVar22 + 0x40;
        } while (uVar22 < uVar13);
      }
      puVar11 = puVar40;
      local_88 = param_4;
      if (puVar38 <= puVar40) {
        puVar43 = *(uint **)(param_1 + 0xc);
        iVar39 = *(int *)(param_1 + 4);
        puVar18 = (uint *)*puVar21;
        puVar25 = (uint *)(iVar39 + (int)puVar43);
        iVar37 = puVar21[1];
        uVar13 = puVar21[3];
        iVar9 = *(int *)(param_1 + 0xc0);
        iVar41 = *(int *)(param_1 + 0x5c);
        pcVar31 = (char *)(iVar37 + uVar13);
        puVar36 = param_4;
        if (pcVar31 == (char *)((int)puVar18 + ((int)param_4 - (int)puVar25))) {
          puVar36 = (uint *)((int)param_4 + 1);
        }
        uVar22 = 0x40 - iVar9;
        uVar30 = iVar9 - 0x20;
        puVar12 = (uint *)(0x20 - iVar9);
        local_88 = param_4;
LAB_017bcbb8:
        local_50 = puVar36 + 0x40;
        lVar3 = (ulonglong)*puVar36 * 0xbb000000;
        uVar42 = (uint)lVar3;
        iVar27 = (int)puVar36 - iVar39;
        uVar23 = puVar36[1] * -0x45000000 + *puVar36 * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20)
        ;
        uVar24 = uVar42 >> (0x38 - uVar14 & 0xff) | uVar23 << (uVar14 - 0x18 & 0xff) |
                 uVar23 >> (0x18 - uVar14 & 0xff);
        uVar23 = uVar42 >> (uVar22 & 0xff) | uVar23 << (uVar30 & 0xff) |
                 uVar23 >> ((uint)puVar12 & 0xff);
        uVar42 = *(uint *)(iVar29 + (uVar24 >> 8) * 4);
        uVar24 = uVar24 ^ uVar42;
        puVar11 = *(uint **)(iVar41 + uVar23 * 4);
        iVar9 = iVar46;
        do {
          puVar34 = puVar38;
          puVar38 = (uint *)(iVar27 + (1 - (int)local_90));
          iVar8 = iVar39;
          if (puVar38 < puVar43) {
            iVar8 = (int)puVar18 - (int)puVar43;
          }
          piVar32 = (int *)(iVar8 + (int)puVar38);
          uVar10 = puVar34[1];
          uVar44 = *puVar34;
          *(int *)(iVar41 + uVar23 * 4) = iVar27;
          if (((char *)0x2 < (char *)((int)puVar43 + (-1 - (int)puVar38))) &&
             (*piVar32 == *(int *)((int)puVar36 + 1))) {
            if (puVar38 < puVar43) {
              puVar11 = puVar18;
            }
            else {
              puVar11 = puVar35;
            }
            puVar17 = (uint *)(piVar32 + 1);
            puVar34 = (uint *)((int)puVar36 + 5);
            puVar38 = (uint *)((int)puVar34 + ((int)puVar11 - (int)puVar17));
            if (puVar35 < puVar38) {
              puVar38 = puVar35;
            }
            if ((uint *)((int)puVar38 + -3) <= puVar34) {
              puVar28 = puVar34;
              puVar20 = puVar17;
              goto LAB_017bd1e4;
            }
            if (piVar32[1] == *(uint *)((int)puVar36 + 5)) {
              puVar28 = (uint *)((int)puVar36 + 9);
              puVar20 = (uint *)(piVar32 + 2);
              goto joined_r0x017bd098;
            }
            uVar23 = piVar32[1] ^ *(uint *)((int)puVar36 + 5);
            bVar5 = (byte)uVar23;
            bVar6 = (byte)(uVar23 >> 8);
            bVar7 = (byte)(uVar23 >> 0x10);
            bVar1 = (byte)(uVar23 >> 0x18);
            pcVar45 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                               << 1 | bVar5 >> 2 & 1) << 1 |
                                                             bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                            << 1 | bVar5 >> 5 & 1) << 1 |
                                                          bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18
                                             | (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                 << 1 | bVar6 >> 2 & 1) << 1 |
                                                               bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1
                                                              ) << 1 | bVar6 >> 5 & 1) << 1 |
                                                            bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                               0x10 | (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                        bVar7 >> 1 & 1) << 1 |
                                                                       bVar7 >> 2 & 1) << 1 |
                                                                      bVar7 >> 3 & 1) << 1 |
                                                                     bVar7 >> 4 & 1) << 1 |
                                                                    bVar7 >> 5 & 1) << 1 |
                                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7
                                                                  ) << 8 |
                                             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                               << 1 | bVar1 >> 2 & 1) << 1 |
                                                             bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                            << 1 | bVar1 >> 5 & 1) << 1 |
                                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
            goto LAB_017bd21c;
          }
          if (((uVar24 & 0xff) == 0) && (uVar23 = uVar42 >> 8, uVar13 < uVar23)) {
            uVar24 = *puVar36;
            pcVar45 = (char *)(iVar37 + uVar23);
            if (*(uint *)(iVar37 + (uVar42 >> 8)) != uVar24) goto LAB_017bcd80;
            if (puVar11 <= puVar43) {
              puVar34 = (uint *)(pcVar45 + 4);
              puVar38 = puVar36 + 1;
              pcVar19 = (char *)((int)puVar18 + iVar27 + (-(int)((int)puVar43 + uVar23) - iVar37));
              puVar11 = (uint *)((int)puVar38 + ((int)puVar18 - (int)puVar34));
              if (puVar35 < puVar11) {
                puVar11 = puVar35;
              }
              if ((uint *)((int)puVar11 + -3) <= puVar38) {
                puVar28 = puVar34;
                puVar17 = puVar38;
                goto LAB_017beb44;
              }
              if (*(uint *)(pcVar45 + 4) != puVar36[1]) {
                uVar23 = *(uint *)(pcVar45 + 4) ^ puVar36[1];
                bVar5 = (byte)uVar23;
                bVar6 = (byte)(uVar23 >> 8);
                bVar7 = (byte)(uVar23 >> 0x10);
                bVar1 = (byte)(uVar23 >> 0x18);
                pcVar33 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                   bVar5 >> 1 & 1) << 1 |
                                                                  bVar5 >> 2 & 1) << 1 |
                                                                 bVar5 >> 3 & 1) << 1 |
                                                                bVar5 >> 4 & 1) << 1 |
                                                               bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1
                                                              ) << 1 | bVar5 >> 7) << 0x18 |
                                                 (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                   bVar6 >> 1 & 1) << 1 |
                                                                  bVar6 >> 2 & 1) << 1 |
                                                                 bVar6 >> 3 & 1) << 1 |
                                                                bVar6 >> 4 & 1) << 1 |
                                                               bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1
                                                              ) << 1 | bVar6 >> 7) << 0x10 |
                                                 (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                   bVar7 >> 1 & 1) << 1 |
                                                                  bVar7 >> 2 & 1) << 1 |
                                                                 bVar7 >> 3 & 1) << 1 |
                                                                bVar7 >> 4 & 1) << 1 |
                                                               bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1
                                                              ) << 1 | bVar7 >> 7) << 8 |
                                                 (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                   bVar1 >> 1 & 1) << 1 |
                                                                  bVar1 >> 2 & 1) << 1 |
                                                                 bVar1 >> 3 & 1) << 1 |
                                                                bVar1 >> 4 & 1) << 1 |
                                                               bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1
                                                              ) << 1 | bVar1 >> 7)) >> 3);
                goto LAB_017bcebc;
              }
              puVar17 = puVar36 + 2;
              puVar28 = (uint *)(pcVar45 + 8);
              goto joined_r0x017bf460;
            }
LAB_017bcdd0:
            puVar38 = (uint *)(iVar39 + (int)puVar11);
            if (*(uint *)(iVar39 + (int)puVar11) == uVar24) goto code_r0x017bcde0;
          }
          else {
LAB_017bcd80:
            if (puVar43 < puVar11) {
              uVar24 = *puVar36;
              goto LAB_017bcdd0;
            }
          }
          if (puVar34 < local_50) {
            puVar38 = (uint *)((int)puVar34 + iVar9);
            if (puVar40 < puVar38) goto LAB_017bcda8;
          }
          else {
            iVar9 = iVar9 + 1;
            puVar38 = (uint *)((int)puVar34 + iVar9);
            if (puVar40 < puVar38) {
LAB_017bcda8:
              puVar11 = puVar40;
              break;
            }
            local_50 = local_50 + 0x40;
          }
          iVar27 = (int)puVar34 - iVar39;
          lVar3 = (ulonglong)uVar44 * 0xbb000000;
          uVar42 = (uint)lVar3;
          uVar23 = uVar10 * -0x45000000 + uVar44 * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20);
          uVar24 = uVar42 >> (0x38 - uVar14 & 0xff) | uVar23 << (uVar14 - 0x18 & 0xff) |
                   uVar23 >> (0x18 - uVar14 & 0xff);
          uVar23 = uVar42 >> (uVar22 & 0xff) | uVar23 << (uVar30 & 0xff) |
                   uVar23 >> ((uint)puVar12 & 0xff);
          uVar42 = *(uint *)(iVar29 + (uVar24 >> 8) * 4);
          uVar24 = uVar24 ^ uVar42;
          puVar11 = *(uint **)(iVar41 + uVar23 * 4);
          puVar36 = puVar34;
        } while( true );
      }
LAB_017bcdac:
      pcVar31 = (char *)((int)puVar35 - (int)local_88);
      *param_3 = local_90;
      param_3[1] = local_a0;
      goto LAB_017bc364;
    }
    iVar46 = *(int *)(param_1 + 0xcc);
    puVar21 = *(undefined4 **)(param_1 + 0xb4);
    puVar38 = (uint *)((int)param_4 + param_5);
    if (iVar46 == 0) {
      iVar46 = 1;
    }
    puVar40 = (uint *)((int)param_4 + iVar46);
    local_98 = (char *)*param_3;
    iVar29 = puVar21[0x17];
    puVar11 = puVar38 + -2;
    local_a4 = (char *)param_3[1];
    uVar14 = puVar21[0x30];
    if ((*(int *)(param_1 + 0xd8) != 0) && (uVar13 = 4 << (uVar14 & 0xff), uVar13 != 0)) {
      uVar22 = 0;
      do {
        HintPreloadData(iVar29 + uVar22);
        uVar22 = uVar22 + 0x40;
      } while (uVar22 < uVar13);
    }
    local_88 = param_4;
    if (puVar40 <= puVar11) {
      puVar36 = *(uint **)(param_1 + 0xc);
      iVar39 = *(int *)(param_1 + 4);
      iVar37 = puVar21[1];
      puVar43 = (uint *)(iVar39 + (int)puVar36);
      puVar25 = (uint *)*puVar21;
      uVar13 = puVar21[3];
      iVar9 = *(int *)(param_1 + 0xc0);
      iVar41 = *(int *)(param_1 + 0x5c);
      pcVar31 = (char *)(iVar37 + uVar13);
      if (pcVar31 == (char *)((int)puVar25 + ((int)param_4 - (int)puVar43))) {
        puVar35 = (uint *)((int)param_4 + 1);
      }
      uVar22 = 0x40 - iVar9;
      uVar30 = iVar9 - 0x20;
      puVar12 = (uint *)(0x20 - iVar9);
      local_88 = param_4;
LAB_017bc154:
      local_50 = puVar35 + 0x40;
      lVar3 = (ulonglong)*puVar35 * 0xbfa56300;
      uVar42 = (uint)lVar3;
      iVar27 = (int)puVar35 - iVar39;
      uVar23 = puVar35[1] * -0x405a9d00 + *puVar35 * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20);
      uVar24 = uVar42 >> (0x38 - uVar14 & 0xff) | uVar23 << (uVar14 - 0x18 & 0xff) |
               uVar23 >> (0x18 - uVar14 & 0xff);
      uVar23 = uVar42 >> (uVar22 & 0xff) | uVar23 << (uVar30 & 0xff) |
               uVar23 >> ((uint)puVar12 & 0xff);
      uVar42 = *(uint *)(iVar29 + (uVar24 >> 8) * 4);
      uVar24 = uVar24 ^ uVar42;
      puVar18 = *(uint **)(iVar41 + uVar23 * 4);
      iVar9 = iVar46;
      do {
        puVar34 = puVar40;
        puVar40 = (uint *)(iVar27 + (1 - (int)local_98));
        iVar8 = iVar39;
        if (puVar40 < puVar36) {
          iVar8 = (int)puVar25 - (int)puVar36;
        }
        piVar32 = (int *)(iVar8 + (int)puVar40);
        uVar10 = puVar34[1];
        uVar44 = *puVar34;
        *(int *)(iVar41 + uVar23 * 4) = iVar27;
        if (((char *)0x2 < (char *)((int)puVar36 + (-1 - (int)puVar40))) &&
           (*piVar32 == *(int *)((int)puVar35 + 1))) {
          if (puVar40 < puVar36) {
            puVar40 = puVar25;
          }
          else {
            puVar40 = puVar38;
          }
          puVar17 = (uint *)(piVar32 + 1);
          puVar34 = (uint *)((int)puVar35 + 5);
          puVar18 = (uint *)((int)puVar34 + ((int)puVar40 - (int)puVar17));
          if (puVar38 < puVar18) {
            puVar18 = puVar38;
          }
          if ((uint *)((int)puVar18 + -3) <= puVar34) {
            puVar28 = puVar34;
            puVar20 = puVar17;
            goto LAB_017bd454;
          }
          if (piVar32[1] == *(uint *)((int)puVar35 + 5)) {
            puVar28 = (uint *)((int)puVar35 + 9);
            puVar20 = (uint *)(piVar32 + 2);
            goto joined_r0x017bd1b0;
          }
          uVar23 = piVar32[1] ^ *(uint *)((int)puVar35 + 5);
          bVar5 = (byte)uVar23;
          bVar6 = (byte)(uVar23 >> 8);
          bVar7 = (byte)(uVar23 >> 0x10);
          bVar1 = (byte)(uVar23 >> 0x18);
          pcVar45 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) <<
                                                             1 | bVar5 >> 2 & 1) << 1 |
                                                           bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) <<
                                                          1 | bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1)
                                                        << 1 | bVar5 >> 7) << 0x18 |
                                           (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) <<
                                                             1 | bVar6 >> 2 & 1) << 1 |
                                                           bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) <<
                                                          1 | bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1)
                                                        << 1 | bVar6 >> 7) << 0x10 |
                                           (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) <<
                                                             1 | bVar7 >> 2 & 1) << 1 |
                                                           bVar7 >> 3 & 1) << 1 | bVar7 >> 4 & 1) <<
                                                          1 | bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1)
                                                        << 1 | bVar7 >> 7) << 8 |
                                           (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                             1 | bVar1 >> 2 & 1) << 1 |
                                                           bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) <<
                                                          1 | bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1)
                                                        << 1 | bVar1 >> 7)) >> 3);
          goto LAB_017bd48c;
        }
        if (((uVar24 & 0xff) == 0) && (uVar23 = uVar42 >> 8, uVar13 < uVar23)) {
          uVar24 = *puVar35;
          pcVar45 = (char *)(iVar37 + uVar23);
          if (*(uint *)(iVar37 + (uVar42 >> 8)) != uVar24) goto LAB_017bc31c;
          if (puVar18 <= puVar36) {
            puVar34 = (uint *)(pcVar45 + 4);
            puVar18 = puVar35 + 1;
            pcVar19 = (char *)((int)puVar25 + iVar27 + (-(int)((int)puVar36 + uVar23) - iVar37));
            puVar40 = (uint *)((int)puVar18 + ((int)puVar25 - (int)puVar34));
            if (puVar38 < puVar40) {
              puVar40 = puVar38;
            }
            if ((uint *)((int)puVar40 + -3) <= puVar18) {
              puVar28 = puVar34;
              puVar17 = puVar18;
              goto LAB_017beb98;
            }
            if (*(uint *)(pcVar45 + 4) != puVar35[1]) {
              uVar23 = *(uint *)(pcVar45 + 4) ^ puVar35[1];
              bVar5 = (byte)uVar23;
              bVar6 = (byte)(uVar23 >> 8);
              bVar7 = (byte)(uVar23 >> 0x10);
              bVar1 = (byte)(uVar23 >> 0x18);
              pcVar33 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                                 << 1 | bVar5 >> 2 & 1) << 1 |
                                                               bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1
                                                              ) << 1 | bVar5 >> 5 & 1) << 1 |
                                                            bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                               0x18 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                        bVar6 >> 1 & 1) << 1 |
                                                                       bVar6 >> 2 & 1) << 1 |
                                                                      bVar6 >> 3 & 1) << 1 |
                                                                     bVar6 >> 4 & 1) << 1 |
                                                                    bVar6 >> 5 & 1) << 1 |
                                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7
                                                                  ) << 0x10 |
                                               (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1)
                                                                 << 1 | bVar7 >> 2 & 1) << 1 |
                                                               bVar7 >> 3 & 1) << 1 | bVar7 >> 4 & 1
                                                              ) << 1 | bVar7 >> 5 & 1) << 1 |
                                                            bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8
                                               | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                   bVar1 >> 1 & 1) << 1 |
                                                                  bVar1 >> 2 & 1) << 1 |
                                                                 bVar1 >> 3 & 1) << 1 |
                                                                bVar1 >> 4 & 1) << 1 |
                                                               bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1
                                                              ) << 1 | bVar1 >> 7)) >> 3);
              goto LAB_017bc490;
            }
            puVar17 = puVar35 + 2;
            puVar28 = (uint *)(pcVar45 + 8);
            goto joined_r0x017bf3a8;
          }
LAB_017bc3a4:
          puVar40 = (uint *)(iVar39 + (int)puVar18);
          if (*(uint *)(iVar39 + (int)puVar18) == uVar24) goto code_r0x017bc3b4;
        }
        else {
LAB_017bc31c:
          if (puVar36 < puVar18) {
            uVar24 = *puVar35;
            goto LAB_017bc3a4;
          }
        }
        if (puVar34 < local_50) {
          puVar40 = (uint *)((int)puVar34 + iVar9);
          if (puVar11 < puVar40) goto LAB_017bc344;
        }
        else {
          iVar9 = iVar9 + 1;
          puVar40 = (uint *)((int)puVar34 + iVar9);
          if (puVar11 < puVar40) goto LAB_017bc344;
          local_50 = local_50 + 0x40;
        }
        iVar27 = (int)puVar34 - iVar39;
        lVar3 = (ulonglong)uVar44 * 0xbfa56300;
        uVar42 = (uint)lVar3;
        uVar23 = uVar10 * -0x405a9d00 + uVar44 * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20);
        uVar24 = uVar42 >> (0x38 - uVar14 & 0xff) | uVar23 << (uVar14 - 0x18 & 0xff) |
                 uVar23 >> (0x18 - uVar14 & 0xff);
        uVar23 = uVar42 >> (uVar22 & 0xff) | uVar23 << (uVar30 & 0xff) |
                 uVar23 >> ((uint)puVar12 & 0xff);
        uVar42 = *(uint *)(iVar29 + (uVar24 >> 8) * 4);
        uVar24 = uVar24 ^ uVar42;
        puVar18 = *(uint **)(iVar41 + uVar23 * 4);
        puVar35 = puVar34;
      } while( true );
    }
  }
  goto LAB_017bc348;
joined_r0x017bd124:
  if ((uint *)((int)puVar18 + -3) <= puVar17) goto LAB_017bd31c;
  if (*puVar28 != *puVar17) {
    uVar23 = *puVar28 ^ *puVar17;
    bVar5 = (byte)uVar23;
    bVar6 = (byte)(uVar23 >> 8);
    bVar7 = (byte)(uVar23 >> 0x10);
    bVar1 = (byte)(uVar23 >> 0x18);
    pcVar45 = (char *)((int)puVar17 +
                      (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                       bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                                     bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18 |
                                      (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                       bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1 |
                                                     bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x10 |
                                      (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 |
                                                       bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1) << 1 |
                                                     bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1) << 1 |
                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8 |
                                      (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                       bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                                     bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3) -
                      (int)puVar12));
    goto LAB_017bd354;
  }
  puVar17 = puVar17 + 1;
  puVar28 = puVar28 + 1;
  goto joined_r0x017bd124;
LAB_017bd31c:
  if (puVar17 < (uint *)((int)puVar18 + -1)) {
    if ((short)*puVar28 == (short)*puVar17) {
      puVar17 = (uint *)((int)puVar17 + 2);
      puVar28 = (uint *)((int)puVar28 + 2);
    }
  }
  if ((puVar17 < puVar18) && ((char)*puVar28 == (char)*puVar17)) {
    puVar17 = (uint *)((int)puVar17 + 1);
  }
  pcVar45 = (char *)((int)puVar17 - (int)puVar12);
LAB_017bd354:
  if (puVar38 == (uint *)((int)puVar34 + (int)pcVar45)) {
    puVar34 = (uint *)((int)puVar12 + (int)pcVar45);
    puVar38 = puVar34;
    puVar18 = puVar36;
    if (puVar34 < (uint *)((int)local_9c + -3)) {
      if (*puVar36 == *(uint *)((int)puVar12 + (int)pcVar45)) {
        do {
          puVar38 = puVar38 + 1;
          puVar18 = puVar18 + 1;
          if ((uint *)((int)local_9c + -3) <= puVar38) goto LAB_017bdab0;
        } while (*puVar18 == *puVar38);
        uVar23 = *puVar18 ^ *puVar38;
        bVar5 = (byte)uVar23;
        bVar6 = (byte)(uVar23 >> 8);
        bVar7 = (byte)(uVar23 >> 0x10);
        bVar1 = (byte)(uVar23 >> 0x18);
        pcVar33 = (char *)((int)puVar38 +
                          (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                           | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                          << 1 | bVar5 >> 4 & 1) << 1 |
                                                        bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1
                                                      | bVar5 >> 7) << 0x18 |
                                          (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                           | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                          << 1 | bVar6 >> 4 & 1) << 1 |
                                                        bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1
                                                      | bVar6 >> 7) << 0x10 |
                                          (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1
                                                           | bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1)
                                                          << 1 | bVar7 >> 4 & 1) << 1 |
                                                        bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1
                                                      | bVar7 >> 7) << 8 |
                                          (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                           | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                          << 1 | bVar1 >> 4 & 1) << 1 |
                                                        bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1
                                                      | bVar1 >> 7)) >> 3) - (int)puVar34));
      }
      else {
        uVar23 = *puVar36 ^ *(uint *)((int)puVar12 + (int)pcVar45);
        bVar5 = (byte)uVar23;
        bVar6 = (byte)(uVar23 >> 8);
        bVar7 = (byte)(uVar23 >> 0x10);
        bVar1 = (byte)(uVar23 >> 0x18);
        pcVar33 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                          | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                         << 1 | bVar5 >> 4 & 1) << 1 |
                                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 |
                                                     bVar5 >> 7) << 0x18 |
                                         (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                          | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                         << 1 | bVar6 >> 4 & 1) << 1 |
                                                       bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1 |
                                                     bVar6 >> 7) << 0x10 |
                                         (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1
                                                          | bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1)
                                                         << 1 | bVar7 >> 4 & 1) << 1 |
                                                       bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1 |
                                                     bVar7 >> 7) << 8 |
                                         (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                          | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                         << 1 | bVar1 >> 4 & 1) << 1 |
                                                       bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 |
                                                     bVar1 >> 7)) >> 3);
      }
    }
    else {
LAB_017bdab0:
      if (puVar38 < (uint *)((int)local_9c + -1)) {
        if ((short)*puVar18 == (short)*puVar38) {
          puVar38 = (uint *)((int)puVar38 + 2);
          puVar18 = (uint *)((int)puVar18 + 2);
        }
      }
      if ((puVar38 < local_9c) && ((char)*puVar18 == (char)*puVar38)) {
        puVar38 = (uint *)((int)puVar38 + 1);
      }
      pcVar33 = (char *)((int)puVar38 - (int)puVar34);
    }
    pcVar45 = pcVar45 + (int)pcVar33;
  }
  puVar35 = (uint *)((int)puVar35 + 1);
  pcVar33 = pcVar45 + 4;
  puVar38 = (uint *)param_2[3];
  uVar23 = (int)puVar35 - (int)local_88;
  if (local_9c + -8 < puVar35) {
    FUN_017b3404(puVar38,local_88,puVar35,local_9c + -8);
LAB_017bdce8:
    param_2[3] = param_2[3] + uVar23;
    puVar21 = (undefined4 *)param_2[1];
    if (0xffff < uVar23) {
      param_2[10] = (int)((int)puVar21 - *param_2) >> 3;
      param_2[9] = 1;
    }
  }
  else {
    uVar24 = *local_88;
    uVar42 = local_88[1];
    uVar44 = local_88[2];
    puVar38[3] = local_88[3];
    *puVar38 = uVar24;
    puVar38[1] = uVar42;
    puVar38[2] = uVar44;
    uVar24 = param_2[3];
    if (0x10 < uVar23) {
      uVar42 = local_88[5];
      uVar44 = local_88[6];
      uVar10 = local_88[7];
      *(uint *)(uVar24 + 0x10) = local_88[4];
      *(uint *)(uVar24 + 0x14) = uVar42;
      *(uint *)(uVar24 + 0x18) = uVar44;
      *(uint *)(uVar24 + 0x1c) = uVar10;
      if (0x10 < (int)(uVar23 - 0x10)) {
        puVar38 = (uint *)(uVar24 + 0x20);
        puVar18 = local_88 + 0x10;
        do {
          uVar42 = puVar18[-7];
          uVar44 = puVar18[-6];
          puVar12 = puVar38 + 8;
          uVar10 = puVar18[-5];
          *puVar38 = puVar18[-8];
          puVar38[1] = uVar42;
          puVar38[2] = uVar44;
          puVar38[3] = uVar10;
          uVar42 = puVar18[-3];
          uVar44 = puVar18[-2];
          uVar10 = puVar18[-1];
          puVar38[4] = puVar18[-4];
          puVar38[5] = uVar42;
          puVar38[6] = uVar44;
          puVar38[7] = uVar10;
          puVar38 = puVar12;
          puVar18 = puVar18 + 8;
        } while (puVar12 < (uint *)(uVar24 + uVar23));
      }
      goto LAB_017bdce8;
    }
    param_2[3] = uVar24 + uVar23;
    puVar21 = (undefined4 *)param_2[1];
  }
  puVar18 = (uint *)&DAT_00000001;
  *(short *)(puVar21 + 1) = (short)uVar23;
  *puVar21 = 1;
  if ((char *)0xffff < pcVar45 + 1) {
    param_2[10] = (int)((int)puVar21 - *param_2) >> 3;
    puVar18 = (uint *)&SUB_00000002;
    param_2[9] = 2;
  }
  *(short *)((int)puVar21 + 6) = (short)(pcVar45 + 1);
  goto LAB_017bd418;
joined_r0x017bf3e0:
  if ((uint *)((int)puVar38 + -3) <= puVar34) goto LAB_017bebec;
  if (*puVar17 != *puVar34) {
    uVar23 = *puVar17 ^ *puVar34;
    bVar5 = (byte)uVar23;
    bVar6 = (byte)(uVar23 >> 8);
    bVar7 = (byte)(uVar23 >> 0x10);
    bVar1 = (byte)(uVar23 >> 0x18);
    pcVar33 = (char *)((int)puVar34 +
                      (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                       bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                                     bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18 |
                                      (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                       bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1 |
                                                     bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x10 |
                                      (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 |
                                                       bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1) << 1 |
                                                     bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1) << 1 |
                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8 |
                                      (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                       bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                                     bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3) -
                      (int)puVar18));
    goto LAB_017bc99c;
  }
  puVar34 = puVar34 + 1;
  puVar17 = puVar17 + 1;
  goto joined_r0x017bf3e0;
LAB_017bebec:
  if (puVar34 < (uint *)((int)puVar38 + -1)) {
    if ((short)*puVar17 == (short)*puVar34) {
      puVar17 = (uint *)((int)puVar17 + 2);
      puVar34 = (uint *)((int)puVar34 + 2);
    }
  }
  if ((puVar34 < puVar38) && ((char)*puVar17 == (char)*puVar34)) {
    puVar34 = (uint *)((int)puVar34 + 1);
  }
  pcVar33 = (char *)((int)puVar34 - (int)puVar18);
LAB_017bc99c:
  if (puVar43 == (uint *)((int)puVar12 + (int)pcVar33)) {
    puVar34 = (uint *)((int)puVar18 + (int)pcVar33);
    puVar12 = puVar36;
    puVar38 = puVar34;
    if (puVar34 < (uint *)((int)local_9c + -3)) {
      if (*puVar36 == *(uint *)((int)puVar18 + (int)pcVar33)) {
        do {
          puVar38 = puVar38 + 1;
          puVar12 = puVar12 + 1;
          if ((uint *)((int)local_9c + -3) <= puVar38) goto LAB_017bf560;
        } while (*puVar12 == *puVar38);
        uVar23 = *puVar12 ^ *puVar38;
        bVar5 = (byte)uVar23;
        bVar6 = (byte)(uVar23 >> 8);
        bVar7 = (byte)(uVar23 >> 0x10);
        bVar1 = (byte)(uVar23 >> 0x18);
        pcVar26 = (char *)((int)puVar38 +
                          (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                           | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                          << 1 | bVar5 >> 4 & 1) << 1 |
                                                        bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1
                                                      | bVar5 >> 7) << 0x18 |
                                          (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                           | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                          << 1 | bVar6 >> 4 & 1) << 1 |
                                                        bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1
                                                      | bVar6 >> 7) << 0x10 |
                                          (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1
                                                           | bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1)
                                                          << 1 | bVar7 >> 4 & 1) << 1 |
                                                        bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1
                                                      | bVar7 >> 7) << 8 |
                                          (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                           | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                          << 1 | bVar1 >> 4 & 1) << 1 |
                                                        bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1
                                                      | bVar1 >> 7)) >> 3) - (int)puVar34));
      }
      else {
        uVar23 = *puVar36 ^ *(uint *)((int)puVar18 + (int)pcVar33);
        bVar5 = (byte)uVar23;
        bVar6 = (byte)(uVar23 >> 8);
        bVar7 = (byte)(uVar23 >> 0x10);
        bVar1 = (byte)(uVar23 >> 0x18);
        pcVar26 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                          | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                         << 1 | bVar5 >> 4 & 1) << 1 |
                                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 |
                                                     bVar5 >> 7) << 0x18 |
                                         (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                          | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                         << 1 | bVar6 >> 4 & 1) << 1 |
                                                       bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1 |
                                                     bVar6 >> 7) << 0x10 |
                                         (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1
                                                          | bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1)
                                                         << 1 | bVar7 >> 4 & 1) << 1 |
                                                       bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1 |
                                                     bVar7 >> 7) << 8 |
                                         (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                          | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                         << 1 | bVar1 >> 4 & 1) << 1 |
                                                       bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 |
                                                     bVar1 >> 7)) >> 3);
      }
    }
    else {
LAB_017bf560:
      if (puVar38 < (uint *)((int)local_9c + -1)) {
        if ((short)*puVar12 == (short)*puVar38) {
          puVar12 = (uint *)((int)puVar12 + 2);
          puVar38 = (uint *)((int)puVar38 + 2);
        }
      }
      if ((puVar38 < local_9c) && ((char)*puVar12 == (char)*puVar38)) {
        puVar38 = (uint *)((int)puVar38 + 1);
      }
      pcVar26 = (char *)((int)puVar38 - (int)puVar34);
    }
    pcVar33 = pcVar33 + (int)pcVar26;
  }
  pcVar33 = pcVar33 + 4;
  puVar38 = puVar35;
  if (local_88 < puVar35 && pcVar31 < pcVar45) {
    do {
      pcVar45 = pcVar45 + -1;
      puVar35 = (uint *)((int)puVar38 + -1);
      if (*(char *)puVar35 != *pcVar45) {
        puVar35 = puVar38;
        break;
      }
      pcVar33 = pcVar33 + 1;
      puVar38 = puVar35;
    } while (local_88 < puVar35 && pcVar31 < pcVar45);
  }
  puVar38 = (uint *)param_2[3];
  uVar23 = (int)puVar35 - (int)local_88;
  if (local_9c + -8 < puVar35) {
    FUN_017b3404(puVar38,local_88,puVar35,local_9c + -8);
LAB_017bf13c:
    param_2[3] = param_2[3] + uVar23;
    puVar21 = (undefined4 *)param_2[1];
    puVar18 = param_2;
    if (0xffff < uVar23) {
      param_2[10] = (int)((int)puVar21 - *param_2) >> 3;
      param_2[9] = 1;
    }
  }
  else {
    uVar24 = *local_88;
    puVar18 = (uint *)local_88[1];
    uVar42 = local_88[2];
    puVar38[3] = local_88[3];
    *puVar38 = uVar24;
    puVar38[1] = (uint)puVar18;
    puVar38[2] = uVar42;
    uVar24 = param_2[3];
    if (0x10 < uVar23) {
      uVar42 = local_88[5];
      uVar44 = local_88[6];
      uVar10 = local_88[7];
      *(uint *)(uVar24 + 0x10) = local_88[4];
      *(uint *)(uVar24 + 0x14) = uVar42;
      *(uint *)(uVar24 + 0x18) = uVar44;
      *(uint *)(uVar24 + 0x1c) = uVar10;
      if (0x10 < (int)(uVar23 - 0x10)) {
        puVar38 = local_88 + 0x10;
        puVar18 = (uint *)(uVar24 + 0x20);
        do {
          uVar42 = puVar38[-7];
          uVar44 = puVar38[-6];
          puVar12 = puVar18 + 8;
          uVar10 = puVar38[-5];
          *puVar18 = puVar38[-8];
          puVar18[1] = uVar42;
          puVar18[2] = uVar44;
          puVar18[3] = uVar10;
          uVar42 = puVar38[-3];
          uVar44 = puVar38[-2];
          uVar10 = puVar38[-1];
          puVar18[4] = puVar38[-4];
          puVar18[5] = uVar42;
          puVar18[6] = uVar44;
          puVar18[7] = uVar10;
          puVar38 = puVar38 + 8;
          puVar18 = puVar12;
        } while (puVar12 < (uint *)(uVar24 + uVar23));
      }
      goto LAB_017bf13c;
    }
    param_2[3] = uVar24 + uVar23;
    puVar21 = (undefined4 *)param_2[1];
  }
  *puVar21 = pcVar19 + 3;
  *(short *)(puVar21 + 1) = (short)uVar23;
joined_r0x017bca94:
  if ((char *)0xffff < pcVar33 + -3) {
    param_2[10] = (int)((int)puVar21 - *param_2) >> 3;
    puVar18 = (uint *)&SUB_00000002;
    param_2[9] = 2;
  }
  *(short *)((int)puVar21 + 6) = (short)(pcVar33 + -3);
  local_a4 = local_98;
  local_98 = pcVar19;
LAB_017bd418:
  local_50 = local_9c + -8;
  puVar35 = (uint *)((int)puVar35 + (int)pcVar33);
  param_2[1] = (uint)(puVar21 + 2);
  if (puVar35 <= puVar11) {
    iVar27 = iVar27 + 2;
    lVar3 = (ulonglong)*(uint *)(iVar39 + iVar27) * 0xbf9b0000;
    lVar4 = (ulonglong)*(uint *)((int)puVar35 + -2) * 0xbf9b0000;
    uVar24 = *(int *)(iVar39 + iVar27 + 4) * -0x40650000 + *(uint *)(iVar39 + iVar27) * -0x30e44324
             + (int)((ulonglong)lVar3 >> 0x20);
    uVar23 = *(int *)((int)puVar35 + 2) * -0x40650000 + *(uint *)((int)puVar35 + -2) * -0x30e44324 +
             (int)((ulonglong)lVar4 >> 0x20);
    *(int *)(iVar41 + ((uint)lVar3 >> (uVar22 & 0xff) | uVar24 << (uVar30 & 0xff) |
                      uVar24 >> ((uint)puVar25 & 0xff)) * 4) = iVar27;
    *(char **)(iVar41 + ((uint)lVar4 >> (uVar22 & 0xff) | uVar23 << (uVar30 & 0xff) |
                        uVar23 >> ((uint)puVar25 & 0xff)) * 4) =
         (char *)((int)puVar35 + (-2 - iVar39));
    do {
      pcVar45 = local_a4;
      local_9c = (uint *)((int)param_4 + param_5);
      iVar27 = (int)puVar35 - iVar39;
      puVar18 = (uint *)(iVar27 - (int)pcVar45);
      iVar9 = iVar39;
      if (puVar18 < puVar40) {
        iVar9 = (int)puVar43 - (int)puVar40;
      }
      puVar38 = (uint *)(iVar9 + (int)puVar18);
      if (((char *)((int)puVar40 + (int)(pcVar45 + (-1 - iVar27))) < (char *)0x3) ||
         (*puVar38 != *puVar35)) {
        local_a4 = pcVar45;
        break;
      }
      if (puVar18 < puVar40) {
        puVar18 = puVar43;
      }
      else {
        puVar18 = local_9c;
      }
      puVar12 = puVar38 + 1;
      puVar17 = puVar35 + 1;
      puVar34 = (uint *)((int)puVar17 + ((int)puVar18 - (int)puVar12));
      if (local_9c < puVar34) {
        puVar34 = local_9c;
      }
      if (puVar17 < (uint *)((int)puVar34 + -3)) {
        if (puVar38[1] == puVar35[1]) {
          puVar38 = puVar38 + 2;
          puVar28 = puVar35 + 2;
          while( true ) {
            if ((uint *)((int)puVar34 + -3) <= puVar28) break;
            if (*puVar38 != *puVar28) {
              uVar23 = *puVar38 ^ *puVar28;
              bVar5 = (byte)uVar23;
              bVar6 = (byte)(uVar23 >> 8);
              bVar7 = (byte)(uVar23 >> 0x10);
              bVar1 = (byte)(uVar23 >> 0x18);
              pcVar33 = (char *)((int)puVar28 +
                                (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1
                                                                  ) << 1 | bVar5 >> 2 & 1) << 1 |
                                                                bVar5 >> 3 & 1) << 1 |
                                                               bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1
                                                              ) << 1 | bVar5 >> 6 & 1) << 1 |
                                                            bVar5 >> 7) << 0x18 |
                                                (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1
                                                                  ) << 1 | bVar6 >> 2 & 1) << 1 |
                                                                bVar6 >> 3 & 1) << 1 |
                                                               bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1
                                                              ) << 1 | bVar6 >> 6 & 1) << 1 |
                                                            bVar6 >> 7) << 0x10 |
                                                (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1
                                                                  ) << 1 | bVar7 >> 2 & 1) << 1 |
                                                                bVar7 >> 3 & 1) << 1 |
                                                               bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1
                                                              ) << 1 | bVar7 >> 6 & 1) << 1 |
                                                            bVar7 >> 7) << 8 |
                                                (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1
                                                                  ) << 1 | bVar1 >> 2 & 1) << 1 |
                                                                bVar1 >> 3 & 1) << 1 |
                                                               bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1
                                                              ) << 1 | bVar1 >> 6 & 1) << 1 |
                                                            bVar1 >> 7)) >> 3) - (int)puVar17));
              goto LAB_017be900;
            }
            puVar38 = puVar38 + 1;
            puVar28 = puVar28 + 1;
          }
          goto LAB_017bee44;
        }
        uVar23 = puVar38[1] ^ puVar35[1];
        bVar5 = (byte)uVar23;
        bVar6 = (byte)(uVar23 >> 8);
        bVar7 = (byte)(uVar23 >> 0x10);
        bVar1 = (byte)(uVar23 >> 0x18);
        pcVar33 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                          | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                         << 1 | bVar5 >> 4 & 1) << 1 |
                                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 |
                                                     bVar5 >> 7) << 0x18 |
                                         (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                          | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                         << 1 | bVar6 >> 4 & 1) << 1 |
                                                       bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1 |
                                                     bVar6 >> 7) << 0x10 |
                                         (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1
                                                          | bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1)
                                                         << 1 | bVar7 >> 4 & 1) << 1 |
                                                       bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1 |
                                                     bVar7 >> 7) << 8 |
                                         (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                          | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                         << 1 | bVar1 >> 4 & 1) << 1 |
                                                       bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 |
                                                     bVar1 >> 7)) >> 3);
      }
      else {
        puVar28 = puVar17;
        puVar38 = puVar12;
LAB_017bee44:
        if (puVar28 < (uint *)((int)puVar34 + -1)) {
          if ((short)*puVar38 == (short)*puVar28) {
            puVar28 = (uint *)((int)puVar28 + 2);
            puVar38 = (uint *)((int)puVar38 + 2);
          }
        }
        if ((puVar28 < puVar34) && ((char)*puVar38 == (char)*puVar28)) {
          puVar28 = (uint *)((int)puVar28 + 1);
        }
        pcVar33 = (char *)((int)puVar28 - (int)puVar17);
      }
LAB_017be900:
      if (puVar18 == (uint *)((int)puVar12 + (int)pcVar33)) {
        puVar12 = (uint *)((int)puVar17 + (int)pcVar33);
        puVar18 = puVar36;
        puVar38 = puVar12;
        if (puVar12 < (uint *)((int)local_9c + -3)) {
          if (*puVar36 == *(uint *)((int)puVar17 + (int)pcVar33)) {
            do {
              puVar38 = puVar38 + 1;
              puVar18 = puVar18 + 1;
              if ((uint *)((int)local_9c + -3) <= puVar38) goto LAB_017bf6ac;
            } while (*puVar18 == *puVar38);
            uVar23 = *puVar18 ^ *puVar38;
            bVar5 = (byte)uVar23;
            bVar6 = (byte)(uVar23 >> 8);
            bVar7 = (byte)(uVar23 >> 0x10);
            bVar1 = (byte)(uVar23 >> 0x18);
            pcVar19 = (char *)((int)puVar38 +
                              (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                                << 1 | bVar5 >> 2 & 1) << 1 |
                                                              bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                             << 1 | bVar5 >> 5 & 1) << 1 |
                                                           bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                              0x18 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                       bVar6 >> 1 & 1) << 1 |
                                                                      bVar6 >> 2 & 1) << 1 |
                                                                     bVar6 >> 3 & 1) << 1 |
                                                                    bVar6 >> 4 & 1) << 1 |
                                                                   bVar6 >> 5 & 1) << 1 |
                                                                  bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                     << 0x10 |
                                              (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1)
                                                                << 1 | bVar7 >> 2 & 1) << 1 |
                                                              bVar7 >> 3 & 1) << 1 | bVar7 >> 4 & 1)
                                                             << 1 | bVar7 >> 5 & 1) << 1 |
                                                           bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8 |
                                              (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                                << 1 | bVar1 >> 2 & 1) << 1 |
                                                              bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                             << 1 | bVar1 >> 5 & 1) << 1 |
                                                           bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3)
                              - (int)puVar12));
          }
          else {
            uVar23 = *puVar36 ^ *(uint *)((int)puVar17 + (int)pcVar33);
            bVar5 = (byte)uVar23;
            bVar6 = (byte)(uVar23 >> 8);
            bVar7 = (byte)(uVar23 >> 0x10);
            bVar1 = (byte)(uVar23 >> 0x18);
            pcVar19 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                               << 1 | bVar5 >> 2 & 1) << 1 |
                                                             bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                            << 1 | bVar5 >> 5 & 1) << 1 |
                                                          bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18
                                             | (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                 << 1 | bVar6 >> 2 & 1) << 1 |
                                                               bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1
                                                              ) << 1 | bVar6 >> 5 & 1) << 1 |
                                                            bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                               0x10 | (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                        bVar7 >> 1 & 1) << 1 |
                                                                       bVar7 >> 2 & 1) << 1 |
                                                                      bVar7 >> 3 & 1) << 1 |
                                                                     bVar7 >> 4 & 1) << 1 |
                                                                    bVar7 >> 5 & 1) << 1 |
                                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7
                                                                  ) << 8 |
                                             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                               << 1 | bVar1 >> 2 & 1) << 1 |
                                                             bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                            << 1 | bVar1 >> 5 & 1) << 1 |
                                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
          }
        }
        else {
LAB_017bf6ac:
          if (puVar38 < (uint *)((int)local_9c + -1)) {
            if ((short)*puVar18 == (short)*puVar38) {
              puVar18 = (uint *)((int)puVar18 + 2);
              puVar38 = (uint *)((int)puVar38 + 2);
            }
          }
          if ((puVar38 < local_9c) && ((char)*puVar18 == (char)*puVar38)) {
            puVar38 = (uint *)((int)puVar38 + 1);
          }
          pcVar19 = (char *)((int)puVar38 - (int)puVar12);
        }
        pcVar33 = pcVar33 + (int)pcVar19;
      }
      pcVar19 = pcVar33 + 4;
      puVar38 = (uint *)param_2[3];
      if (local_50 < puVar35) {
        FUN_017b3404(puVar38,puVar35,puVar35,local_50);
      }
      else {
        uVar23 = puVar35[1];
        uVar24 = puVar35[2];
        uVar42 = puVar35[3];
        *puVar38 = *puVar35;
        puVar38[1] = uVar23;
        puVar38[2] = uVar24;
        puVar38[3] = uVar42;
      }
      puVar21 = (undefined4 *)param_2[1];
      *(undefined2 *)(puVar21 + 1) = 0;
      *puVar21 = 1;
      uVar2 = SUB42(pcVar33 + 1,0);
      if (pcVar33 + 1 < (char *)0x10000) {
        *(undefined2 *)((int)puVar21 + 6) = uVar2;
        uVar23 = puVar35[1];
        param_2[1] = (uint)(puVar21 + 2);
        lVar3 = (ulonglong)*puVar35 * 0xbf9b0000;
        uVar23 = uVar23 * -0x40650000 + *puVar35 * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20);
        *(int *)(iVar41 + ((uint)lVar3 >> (uVar22 & 0xff) | uVar23 << (uVar30 & 0xff) |
                          uVar23 >> ((uint)puVar25 & 0xff)) * 4) = iVar27;
        puVar18 = puVar25;
      }
      else {
        lVar3 = (ulonglong)*puVar35 * 0xbf9b0000;
        uVar23 = puVar35[1] * -0x40650000 + *puVar35 * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20)
        ;
        param_2[10] = (int)((int)puVar21 - *param_2) >> 3;
        puVar18 = (uint *)&SUB_00000002;
        param_2[9] = 2;
        *(undefined2 *)((int)puVar21 + 6) = uVar2;
        param_2[1] = (uint)(puVar21 + 2);
        *(int *)(iVar41 + ((uint)lVar3 >> (uVar22 & 0xff) | uVar23 << (uVar30 & 0xff) |
                          uVar23 >> ((uint)puVar25 & 0xff)) * 4) = iVar27;
      }
      if (puVar11 < (uint *)((int)puVar35 + (int)pcVar19)) goto LAB_017bed5c;
      puVar35 = (uint *)((int)puVar35 + (int)pcVar19);
      local_a4 = local_98;
      local_98 = pcVar45;
    } while( true );
  }
LAB_017bd430:
  puVar38 = (uint *)((int)puVar35 + iVar46);
  if (puVar11 < puVar38) goto LAB_017be5dc;
  local_88 = puVar35;
  goto LAB_017bc6b8;
code_r0x017bc8c0:
  puVar18 = puVar35 + 1;
  pcVar19 = (char *)((int)puVar35 - (int)puVar38);
  if (puVar18 < (uint *)((int)local_9c + -3)) {
    if (puVar38[1] == puVar35[1]) {
      puVar34 = puVar38 + 2;
      for (puVar12 = puVar35 + 2; puVar12 < (uint *)((int)local_9c + -3); puVar12 = puVar12 + 1) {
        if (*puVar34 != *puVar12) {
          uVar23 = *puVar34 ^ *puVar12;
          bVar5 = (byte)uVar23;
          bVar6 = (byte)(uVar23 >> 8);
          bVar7 = (byte)(uVar23 >> 0x10);
          bVar1 = (byte)(uVar23 >> 0x18);
          pcVar33 = (char *)((int)puVar12 +
                            (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) <<
                                                              1 | bVar5 >> 2 & 1) << 1 |
                                                            bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                           << 1 | bVar5 >> 5 & 1) << 1 |
                                                         bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18
                                            | (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                << 1 | bVar6 >> 2 & 1) << 1 |
                                                              bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1)
                                                             << 1 | bVar6 >> 5 & 1) << 1 |
                                                           bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                              0x10 | (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                       bVar7 >> 1 & 1) << 1 |
                                                                      bVar7 >> 2 & 1) << 1 |
                                                                     bVar7 >> 3 & 1) << 1 |
                                                                    bVar7 >> 4 & 1) << 1 |
                                                                   bVar7 >> 5 & 1) << 1 |
                                                                  bVar7 >> 6 & 1) << 1 | bVar7 >> 7)
                                                     << 8 |
                                            (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                              1 | bVar1 >> 2 & 1) << 1 |
                                                            bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                           << 1 | bVar1 >> 5 & 1) << 1 |
                                                         bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3) -
                            (int)puVar18));
          goto LAB_017bd894;
        }
        puVar34 = puVar34 + 1;
      }
      goto LAB_017bd854;
    }
    uVar23 = puVar38[1] ^ puVar35[1];
    bVar5 = (byte)uVar23;
    bVar6 = (byte)(uVar23 >> 8);
    bVar7 = (byte)(uVar23 >> 0x10);
    bVar1 = (byte)(uVar23 >> 0x18);
    pcVar33 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                      bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                                    bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                                  bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18 |
                                     (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                      bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1 |
                                                    bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                                                  bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x10 |
                                     (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 |
                                                      bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1) << 1 |
                                                    bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1) << 1 |
                                                  bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8 |
                                     (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                      bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                                    bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                                  bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
  }
  else {
    puVar34 = puVar38 + 1;
    puVar12 = puVar18;
LAB_017bd854:
    if (puVar12 < (uint *)((int)local_9c + -1)) {
      if ((short)*puVar34 == (short)*puVar12) {
        puVar12 = (uint *)((int)puVar12 + 2);
        puVar34 = (uint *)((int)puVar34 + 2);
      }
    }
    if ((puVar12 < local_9c) && ((char)*puVar34 == (char)*puVar12)) {
      puVar12 = (uint *)((int)puVar12 + 1);
    }
    pcVar33 = (char *)((int)puVar12 - (int)puVar18);
  }
LAB_017bd894:
  pcVar33 = pcVar33 + 4;
  puVar18 = puVar35;
  if (local_88 < puVar35 && puVar36 < puVar38) {
    do {
      puVar38 = (uint *)((int)puVar38 + -1);
      puVar35 = (uint *)((int)puVar18 + -1);
      if (*(char *)puVar35 != *(char *)puVar38) {
        puVar35 = puVar18;
        break;
      }
      pcVar33 = pcVar33 + 1;
      puVar18 = puVar35;
    } while (local_88 < puVar35 && puVar36 < puVar38);
  }
  puVar38 = (uint *)param_2[3];
  uVar23 = (int)puVar35 - (int)local_88;
  if (local_9c + -8 < puVar35) {
    FUN_017b3404(puVar38,local_88,puVar35,local_9c + -8);
LAB_017be118:
    param_2[3] = param_2[3] + uVar23;
    puVar21 = (undefined4 *)param_2[1];
    puVar18 = param_2;
    if (0xffff < uVar23) {
      param_2[10] = (int)((int)puVar21 - *param_2) >> 3;
      param_2[9] = 1;
    }
  }
  else {
    uVar24 = *local_88;
    puVar18 = (uint *)local_88[1];
    uVar42 = local_88[2];
    puVar38[3] = local_88[3];
    *puVar38 = uVar24;
    puVar38[1] = (uint)puVar18;
    puVar38[2] = uVar42;
    uVar24 = param_2[3];
    if (0x10 < uVar23) {
      uVar42 = local_88[5];
      uVar44 = local_88[6];
      uVar10 = local_88[7];
      *(uint *)(uVar24 + 0x10) = local_88[4];
      *(uint *)(uVar24 + 0x14) = uVar42;
      *(uint *)(uVar24 + 0x18) = uVar44;
      *(uint *)(uVar24 + 0x1c) = uVar10;
      if (0x10 < (int)(uVar23 - 0x10)) {
        puVar38 = (uint *)(uVar24 + 0x20);
        puVar18 = local_88 + 0x10;
        do {
          uVar42 = puVar18[-7];
          uVar44 = puVar18[-6];
          puVar12 = puVar38 + 8;
          uVar10 = puVar18[-5];
          *puVar38 = puVar18[-8];
          puVar38[1] = uVar42;
          puVar38[2] = uVar44;
          puVar38[3] = uVar10;
          uVar42 = puVar18[-3];
          uVar44 = puVar18[-2];
          uVar10 = puVar18[-1];
          puVar38[4] = puVar18[-4];
          puVar38[5] = uVar42;
          puVar38[6] = uVar44;
          puVar38[7] = uVar10;
          puVar38 = puVar12;
          puVar18 = puVar18 + 8;
        } while (puVar12 < (uint *)(uVar24 + uVar23));
      }
      goto LAB_017be118;
    }
    param_2[3] = uVar24 + uVar23;
    puVar21 = (undefined4 *)param_2[1];
  }
  *(short *)(puVar21 + 1) = (short)uVar23;
  *puVar21 = pcVar19 + 3;
  goto joined_r0x017bca94;
LAB_017bed5c:
  puVar35 = (uint *)((int)puVar35 + (int)pcVar19);
  local_a4 = local_98;
  local_98 = pcVar45;
  goto LAB_017bd430;
joined_r0x017b5294:
  if ((uint *)((int)puVar12 + -3) <= puVar34) goto LAB_017b5340;
  if (*puVar17 != *puVar34) {
    uVar23 = *puVar17 ^ *puVar34;
    bVar5 = (byte)uVar23;
    bVar6 = (byte)(uVar23 >> 8);
    bVar7 = (byte)(uVar23 >> 0x10);
    bVar1 = (byte)(uVar23 >> 0x18);
    pcVar45 = (char *)((int)puVar34 +
                      (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                       bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                                     bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18 |
                                      (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                       bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1 |
                                                     bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x10 |
                                      (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 |
                                                       bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1) << 1 |
                                                     bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1) << 1 |
                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8 |
                                      (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                       bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                                     bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3) -
                      (int)puVar11));
    goto joined_r0x017b52c4;
  }
  puVar34 = puVar34 + 1;
  puVar17 = puVar17 + 1;
  goto joined_r0x017b5294;
LAB_017b5340:
  if (puVar34 < (uint *)((int)puVar12 + -1)) {
    if ((short)*puVar17 == (short)*puVar34) {
      puVar34 = (uint *)((int)puVar34 + 2);
      puVar17 = (uint *)((int)puVar17 + 2);
    }
  }
  if ((puVar34 < puVar12) && ((char)*puVar17 == (char)*puVar34)) {
    puVar34 = (uint *)((int)puVar34 + 1);
  }
  pcVar45 = (char *)((int)puVar34 - (int)puVar11);
joined_r0x017b52c4:
  if (puVar18 == (uint *)((int)puVar25 + (int)pcVar45)) {
    puVar12 = (uint *)((int)puVar11 + (int)pcVar45);
    puVar25 = puVar12;
    puVar18 = puVar36;
    if (puVar12 < (uint *)((int)puVar35 + -3)) {
      if (*puVar36 == *(uint *)((int)puVar11 + (int)pcVar45)) {
        do {
          puVar25 = puVar25 + 1;
          puVar18 = puVar18 + 1;
          if ((uint *)((int)puVar35 + -3) <= puVar25) goto LAB_017b52e4;
        } while (*puVar18 == *puVar25);
        uVar23 = *puVar18 ^ *puVar25;
        bVar5 = (byte)uVar23;
        bVar6 = (byte)(uVar23 >> 8);
        bVar7 = (byte)(uVar23 >> 0x10);
        bVar1 = (byte)(uVar23 >> 0x18);
        pcVar33 = (char *)((int)puVar25 +
                          (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                           | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                          << 1 | bVar5 >> 4 & 1) << 1 |
                                                        bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1
                                                      | bVar5 >> 7) << 0x18 |
                                          (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                           | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                          << 1 | bVar6 >> 4 & 1) << 1 |
                                                        bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1
                                                      | bVar6 >> 7) << 0x10 |
                                          (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1
                                                           | bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1)
                                                          << 1 | bVar7 >> 4 & 1) << 1 |
                                                        bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1
                                                      | bVar7 >> 7) << 8 |
                                          (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                           | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                          << 1 | bVar1 >> 4 & 1) << 1 |
                                                        bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1
                                                      | bVar1 >> 7)) >> 3) - (int)puVar12));
      }
      else {
        uVar23 = *puVar36 ^ *(uint *)((int)puVar11 + (int)pcVar45);
        bVar5 = (byte)uVar23;
        bVar6 = (byte)(uVar23 >> 8);
        bVar7 = (byte)(uVar23 >> 0x10);
        bVar1 = (byte)(uVar23 >> 0x18);
        pcVar33 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                          | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                         << 1 | bVar5 >> 4 & 1) << 1 |
                                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 |
                                                     bVar5 >> 7) << 0x18 |
                                         (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                          | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                         << 1 | bVar6 >> 4 & 1) << 1 |
                                                       bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1 |
                                                     bVar6 >> 7) << 0x10 |
                                         (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1
                                                          | bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1)
                                                         << 1 | bVar7 >> 4 & 1) << 1 |
                                                       bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1 |
                                                     bVar7 >> 7) << 8 |
                                         (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                          | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                         << 1 | bVar1 >> 4 & 1) << 1 |
                                                       bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 |
                                                     bVar1 >> 7)) >> 3);
      }
    }
    else {
LAB_017b52e4:
      if (puVar25 < (uint *)((int)puVar35 + -1)) {
        if ((short)*puVar18 == (short)*puVar25) {
          puVar25 = (uint *)((int)puVar25 + 2);
          puVar18 = (uint *)((int)puVar18 + 2);
        }
      }
      if ((puVar25 < puVar35) && ((char)*puVar18 == (char)*puVar25)) {
        puVar25 = (uint *)((int)puVar25 + 1);
      }
      pcVar33 = (char *)((int)puVar25 - (int)puVar12);
    }
    pcVar45 = pcVar45 + (int)pcVar33;
  }
  puVar40 = (uint *)((int)puVar40 + 1);
  pcVar33 = pcVar45 + 4;
  puVar11 = (uint *)param_2[3];
  uVar23 = (int)puVar40 - (int)local_78;
  if (puVar35 + -8 < puVar40) {
    FUN_017b3404(puVar11,local_78,puVar40,puVar35 + -8);
LAB_017b56a4:
    param_2[3] = param_2[3] + uVar23;
    puVar21 = (undefined4 *)param_2[1];
    if (0xffff < uVar23) {
      param_2[10] = (int)((int)puVar21 - *param_2) >> 3;
      param_2[9] = 1;
    }
  }
  else {
    uVar24 = *local_78;
    uVar42 = local_78[1];
    uVar44 = local_78[2];
    puVar11[3] = local_78[3];
    *puVar11 = uVar24;
    puVar11[1] = uVar42;
    puVar11[2] = uVar44;
    uVar24 = param_2[3];
    if (0x10 < uVar23) {
      uVar42 = local_78[5];
      uVar44 = local_78[6];
      uVar10 = local_78[7];
      *(uint *)(uVar24 + 0x10) = local_78[4];
      *(uint *)(uVar24 + 0x14) = uVar42;
      *(uint *)(uVar24 + 0x18) = uVar44;
      *(uint *)(uVar24 + 0x1c) = uVar10;
      if (0x10 < (int)(uVar23 - 0x10)) {
        puVar11 = (uint *)(uVar24 + 0x20);
        puVar25 = local_78 + 0x10;
        do {
          uVar42 = puVar25[-7];
          uVar44 = puVar25[-6];
          puVar18 = puVar11 + 8;
          uVar10 = puVar25[-5];
          *puVar11 = puVar25[-8];
          puVar11[1] = uVar42;
          puVar11[2] = uVar44;
          puVar11[3] = uVar10;
          uVar42 = puVar25[-3];
          uVar44 = puVar25[-2];
          uVar10 = puVar25[-1];
          puVar11[4] = puVar25[-4];
          puVar11[5] = uVar42;
          puVar11[6] = uVar44;
          puVar11[7] = uVar10;
          puVar11 = puVar18;
          puVar25 = puVar25 + 8;
        } while (puVar18 < (uint *)(uVar24 + uVar23));
      }
      goto LAB_017b56a4;
    }
    param_2[3] = uVar24 + uVar23;
    puVar21 = (undefined4 *)param_2[1];
  }
  *(short *)(puVar21 + 1) = (short)uVar23;
  *puVar21 = 1;
  if ((char *)0xffff < pcVar45 + 1) {
    param_2[10] = (int)((int)puVar21 - *param_2) >> 3;
    param_2[9] = 2;
  }
  *(short *)((int)puVar21 + 6) = (short)(pcVar45 + 1);
  puVar21 = puVar21 + 2;
  goto LAB_017b543c;
joined_r0x017b5d58:
  if ((uint *)((int)puVar11 + -3) <= puVar12) goto LAB_017b50bc;
  if (*puVar34 != *puVar12) {
    uVar23 = *puVar34 ^ *puVar12;
    bVar5 = (byte)uVar23;
    bVar6 = (byte)(uVar23 >> 8);
    bVar7 = (byte)(uVar23 >> 0x10);
    bVar1 = (byte)(uVar23 >> 0x18);
    pcVar33 = (char *)((int)puVar12 +
                      (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                       bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                                     bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18 |
                                      (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                       bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1 |
                                                     bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x10 |
                                      (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 |
                                                       bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1) << 1 |
                                                     bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1) << 1 |
                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8 |
                                      (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                       bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                                     bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3) -
                      (int)puVar18));
    goto LAB_017b5104;
  }
  puVar12 = puVar12 + 1;
  puVar34 = puVar34 + 1;
  goto joined_r0x017b5d58;
LAB_017b50bc:
  if (puVar12 < (uint *)((int)puVar11 + -1)) {
    if ((short)*puVar34 == (short)*puVar12) {
      puVar34 = (uint *)((int)puVar34 + 2);
      puVar12 = (uint *)((int)puVar12 + 2);
    }
  }
  if ((puVar12 < puVar11) && ((char)*puVar34 == (char)*puVar12)) {
    puVar12 = (uint *)((int)puVar12 + 1);
  }
  pcVar33 = (char *)((int)puVar12 - (int)puVar18);
LAB_017b5104:
  if (puVar43 == (uint *)((int)puVar25 + (int)pcVar33)) {
    puVar12 = (uint *)((int)puVar18 + (int)pcVar33);
    puVar25 = puVar36;
    puVar11 = puVar12;
    if (puVar12 < (uint *)((int)puVar35 + -3)) {
      if (*puVar36 == *(uint *)((int)puVar18 + (int)pcVar33)) {
        do {
          puVar11 = puVar11 + 1;
          puVar25 = puVar25 + 1;
          if ((uint *)((int)puVar35 + -3) <= puVar11) goto LAB_017b5dc4;
        } while (*puVar25 == *puVar11);
        uVar23 = *puVar25 ^ *puVar11;
        bVar5 = (byte)uVar23;
        bVar6 = (byte)(uVar23 >> 8);
        bVar7 = (byte)(uVar23 >> 0x10);
        bVar1 = (byte)(uVar23 >> 0x18);
        pcVar26 = (char *)((int)puVar11 +
                          (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                           | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                          << 1 | bVar5 >> 4 & 1) << 1 |
                                                        bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1
                                                      | bVar5 >> 7) << 0x18 |
                                          (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                           | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                          << 1 | bVar6 >> 4 & 1) << 1 |
                                                        bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1
                                                      | bVar6 >> 7) << 0x10 |
                                          (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1
                                                           | bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1)
                                                          << 1 | bVar7 >> 4 & 1) << 1 |
                                                        bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1
                                                      | bVar7 >> 7) << 8 |
                                          (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                           | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                          << 1 | bVar1 >> 4 & 1) << 1 |
                                                        bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1
                                                      | bVar1 >> 7)) >> 3) - (int)puVar12));
      }
      else {
        uVar23 = *puVar36 ^ *(uint *)((int)puVar18 + (int)pcVar33);
        bVar5 = (byte)uVar23;
        bVar6 = (byte)(uVar23 >> 8);
        bVar7 = (byte)(uVar23 >> 0x10);
        bVar1 = (byte)(uVar23 >> 0x18);
        pcVar26 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                          | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                         << 1 | bVar5 >> 4 & 1) << 1 |
                                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 |
                                                     bVar5 >> 7) << 0x18 |
                                         (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                          | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                         << 1 | bVar6 >> 4 & 1) << 1 |
                                                       bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1 |
                                                     bVar6 >> 7) << 0x10 |
                                         (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1
                                                          | bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1)
                                                         << 1 | bVar7 >> 4 & 1) << 1 |
                                                       bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1 |
                                                     bVar7 >> 7) << 8 |
                                         (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                          | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                         << 1 | bVar1 >> 4 & 1) << 1 |
                                                       bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 |
                                                     bVar1 >> 7)) >> 3);
      }
    }
    else {
LAB_017b5dc4:
      if (puVar11 < (uint *)((int)puVar35 + -1)) {
        if ((short)*puVar25 == (short)*puVar11) {
          puVar25 = (uint *)((int)puVar25 + 2);
          puVar11 = (uint *)((int)puVar11 + 2);
        }
      }
      if ((puVar11 < puVar35) && ((char)*puVar25 == (char)*puVar11)) {
        puVar11 = (uint *)((int)puVar11 + 1);
      }
      pcVar26 = (char *)((int)puVar11 - (int)puVar12);
    }
    pcVar33 = pcVar33 + (int)pcVar26;
  }
  pcVar33 = pcVar33 + 4;
  puVar11 = puVar40;
  if (local_78 < puVar40 && pcVar31 < pcVar45) {
    do {
      pcVar45 = pcVar45 + -1;
      puVar40 = (uint *)((int)puVar11 + -1);
      if (*(char *)puVar40 != *pcVar45) {
        puVar40 = puVar11;
        break;
      }
      pcVar33 = pcVar33 + 1;
      puVar11 = puVar40;
    } while (local_78 < puVar40 && pcVar31 < pcVar45);
  }
  puVar11 = (uint *)param_2[3];
  uVar23 = (int)puVar40 - (int)local_78;
  if (puVar35 + -8 < puVar40) {
    FUN_017b3404(puVar11,local_78,puVar40,puVar35 + -8);
LAB_017b5c98:
    param_2[3] = param_2[3] + uVar23;
    puVar21 = (undefined4 *)param_2[1];
    if (0xffff < uVar23) {
      param_2[10] = (int)((int)puVar21 - *param_2) >> 3;
      param_2[9] = 1;
    }
  }
  else {
    uVar24 = *local_78;
    uVar42 = local_78[1];
    uVar44 = local_78[2];
    puVar11[3] = local_78[3];
    *puVar11 = uVar24;
    puVar11[1] = uVar42;
    puVar11[2] = uVar44;
    uVar24 = param_2[3];
    if (0x10 < uVar23) {
      uVar42 = local_78[5];
      uVar44 = local_78[6];
      uVar10 = local_78[7];
      *(uint *)(uVar24 + 0x10) = local_78[4];
      *(uint *)(uVar24 + 0x14) = uVar42;
      *(uint *)(uVar24 + 0x18) = uVar44;
      *(uint *)(uVar24 + 0x1c) = uVar10;
      if (0x10 < (int)(uVar23 - 0x10)) {
        puVar11 = (uint *)(uVar24 + 0x20);
        puVar25 = local_78 + 0x10;
        do {
          uVar42 = puVar25[-7];
          uVar44 = puVar25[-6];
          puVar18 = puVar11 + 8;
          uVar10 = puVar25[-5];
          *puVar11 = puVar25[-8];
          puVar11[1] = uVar42;
          puVar11[2] = uVar44;
          puVar11[3] = uVar10;
          uVar42 = puVar25[-3];
          uVar44 = puVar25[-2];
          uVar10 = puVar25[-1];
          puVar11[4] = puVar25[-4];
          puVar11[5] = uVar42;
          puVar11[6] = uVar44;
          puVar11[7] = uVar10;
          puVar11 = puVar18;
          puVar25 = puVar25 + 8;
        } while (puVar18 < (uint *)(uVar24 + uVar23));
      }
      goto LAB_017b5c98;
    }
    param_2[3] = uVar24 + uVar23;
    puVar21 = (undefined4 *)param_2[1];
  }
  *puVar21 = pcVar19 + 3;
  *(short *)(puVar21 + 1) = (short)uVar23;
  if ((char *)0xffff < pcVar33 + -3) {
    param_2[10] = (int)((int)puVar21 - *param_2) >> 3;
    param_2[9] = 2;
  }
  *(short *)((int)puVar21 + 6) = (short)(pcVar33 + -3);
  puVar21 = puVar21 + 2;
  local_8c = local_7c;
  local_7c = pcVar19;
LAB_017b543c:
  local_4c = puVar35 + -8;
  puVar40 = (uint *)((int)puVar40 + (int)pcVar33);
  param_2[1] = (uint)puVar21;
  if (puVar40 <= puVar38) {
    *(int *)(iVar9 + ((uint)(*(int *)(iVar39 + iVar27 + 2) * -0x61c8864f) >> (uVar22 & 0xff)) * 4) =
         iVar27 + 2;
    *(int *)(iVar9 + ((uint)(*(int *)((int)puVar40 + -2) * -0x61c8864f) >> (uVar22 & 0xff)) * 4) =
         ((int)puVar40 + -2) - iVar39;
    do {
      pcVar45 = local_8c;
      iVar37 = (int)puVar40 - iVar39;
      uVar23 = iVar37 - (int)pcVar45;
      if (uVar23 < uVar13) {
        puVar11 = (uint *)((int)puVar43 + (uVar23 - uVar13));
      }
      else {
        puVar11 = (uint *)(iVar39 + uVar23);
      }
      if ((pcVar45 + ((uVar13 - 1) - iVar37) < (char *)0x3) || (*puVar11 != *puVar40)) {
        local_8c = pcVar45;
        break;
      }
      if (uVar23 < uVar13) {
        puVar25 = puVar43;
      }
      else {
        puVar25 = puVar35;
      }
      puVar18 = puVar11 + 1;
      puVar34 = puVar40 + 1;
      puVar12 = (uint *)((int)puVar34 + ((int)puVar25 - (int)puVar18));
      if (puVar35 < puVar12) {
        puVar12 = puVar35;
      }
      if (puVar34 < (uint *)((int)puVar12 + -3)) {
        if (puVar11[1] == puVar40[1]) {
          puVar11 = puVar11 + 2;
          for (puVar17 = puVar40 + 2; puVar17 < (uint *)((int)puVar12 + -3); puVar17 = puVar17 + 1)
          {
            if (*puVar11 != *puVar17) {
              uVar23 = *puVar11 ^ *puVar17;
              bVar5 = (byte)uVar23;
              bVar6 = (byte)(uVar23 >> 8);
              bVar7 = (byte)(uVar23 >> 0x10);
              bVar1 = (byte)(uVar23 >> 0x18);
              pcVar33 = (char *)((int)puVar17 +
                                (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1
                                                                  ) << 1 | bVar5 >> 2 & 1) << 1 |
                                                                bVar5 >> 3 & 1) << 1 |
                                                               bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1
                                                              ) << 1 | bVar5 >> 6 & 1) << 1 |
                                                            bVar5 >> 7) << 0x18 |
                                                (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1
                                                                  ) << 1 | bVar6 >> 2 & 1) << 1 |
                                                                bVar6 >> 3 & 1) << 1 |
                                                               bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1
                                                              ) << 1 | bVar6 >> 6 & 1) << 1 |
                                                            bVar6 >> 7) << 0x10 |
                                                (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1
                                                                  ) << 1 | bVar7 >> 2 & 1) << 1 |
                                                                bVar7 >> 3 & 1) << 1 |
                                                               bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1
                                                              ) << 1 | bVar7 >> 6 & 1) << 1 |
                                                            bVar7 >> 7) << 8 |
                                                (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1
                                                                  ) << 1 | bVar1 >> 2 & 1) << 1 |
                                                                bVar1 >> 3 & 1) << 1 |
                                                               bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1
                                                              ) << 1 | bVar1 >> 6 & 1) << 1 |
                                                            bVar1 >> 7)) >> 3) - (int)puVar34));
              goto LAB_017b59cc;
            }
            puVar11 = puVar11 + 1;
          }
          goto LAB_017b597c;
        }
        uVar23 = puVar11[1] ^ puVar40[1];
        bVar5 = (byte)uVar23;
        bVar6 = (byte)(uVar23 >> 8);
        bVar7 = (byte)(uVar23 >> 0x10);
        bVar1 = (byte)(uVar23 >> 0x18);
        pcVar33 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                          | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                         << 1 | bVar5 >> 4 & 1) << 1 |
                                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 |
                                                     bVar5 >> 7) << 0x18 |
                                         (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                          | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                         << 1 | bVar6 >> 4 & 1) << 1 |
                                                       bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1 |
                                                     bVar6 >> 7) << 0x10 |
                                         (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1
                                                          | bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1)
                                                         << 1 | bVar7 >> 4 & 1) << 1 |
                                                       bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1 |
                                                     bVar7 >> 7) << 8 |
                                         (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                          | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                         << 1 | bVar1 >> 4 & 1) << 1 |
                                                       bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 |
                                                     bVar1 >> 7)) >> 3);
      }
      else {
        puVar17 = puVar34;
        puVar11 = puVar18;
LAB_017b597c:
        if (puVar17 < (uint *)((int)puVar12 + -1)) {
          if ((short)*puVar11 == (short)*puVar17) {
            puVar17 = (uint *)((int)puVar17 + 2);
            puVar11 = (uint *)((int)puVar11 + 2);
          }
        }
        if ((puVar17 < puVar12) && ((char)*puVar11 == (char)*puVar17)) {
          puVar17 = (uint *)((int)puVar17 + 1);
        }
        pcVar33 = (char *)((int)puVar17 - (int)puVar34);
      }
LAB_017b59cc:
      if (puVar25 == (uint *)((int)puVar18 + (int)pcVar33)) {
        puVar18 = (uint *)((int)puVar34 + (int)pcVar33);
        puVar25 = puVar36;
        puVar11 = puVar18;
        if (puVar18 < (uint *)((int)puVar35 + -3)) {
          if (*puVar36 == *(uint *)((int)puVar34 + (int)pcVar33)) {
            do {
              puVar11 = puVar11 + 1;
              puVar25 = puVar25 + 1;
              if ((uint *)((int)puVar35 + -3) <= puVar11) goto LAB_017b5e20;
            } while (*puVar25 == *puVar11);
            uVar23 = *puVar25 ^ *puVar11;
            bVar5 = (byte)uVar23;
            bVar6 = (byte)(uVar23 >> 8);
            bVar7 = (byte)(uVar23 >> 0x10);
            bVar1 = (byte)(uVar23 >> 0x18);
            pcVar19 = (char *)((int)puVar11 +
                              (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                                << 1 | bVar5 >> 2 & 1) << 1 |
                                                              bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                             << 1 | bVar5 >> 5 & 1) << 1 |
                                                           bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                              0x18 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                       bVar6 >> 1 & 1) << 1 |
                                                                      bVar6 >> 2 & 1) << 1 |
                                                                     bVar6 >> 3 & 1) << 1 |
                                                                    bVar6 >> 4 & 1) << 1 |
                                                                   bVar6 >> 5 & 1) << 1 |
                                                                  bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                     << 0x10 |
                                              (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1)
                                                                << 1 | bVar7 >> 2 & 1) << 1 |
                                                              bVar7 >> 3 & 1) << 1 | bVar7 >> 4 & 1)
                                                             << 1 | bVar7 >> 5 & 1) << 1 |
                                                           bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8 |
                                              (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                                << 1 | bVar1 >> 2 & 1) << 1 |
                                                              bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                             << 1 | bVar1 >> 5 & 1) << 1 |
                                                           bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3)
                              - (int)puVar18));
          }
          else {
            uVar23 = *puVar36 ^ *(uint *)((int)puVar34 + (int)pcVar33);
            bVar5 = (byte)uVar23;
            bVar6 = (byte)(uVar23 >> 8);
            bVar7 = (byte)(uVar23 >> 0x10);
            bVar1 = (byte)(uVar23 >> 0x18);
            pcVar19 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                               << 1 | bVar5 >> 2 & 1) << 1 |
                                                             bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                            << 1 | bVar5 >> 5 & 1) << 1 |
                                                          bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18
                                             | (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                 << 1 | bVar6 >> 2 & 1) << 1 |
                                                               bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1
                                                              ) << 1 | bVar6 >> 5 & 1) << 1 |
                                                            bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                               0x10 | (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                        bVar7 >> 1 & 1) << 1 |
                                                                       bVar7 >> 2 & 1) << 1 |
                                                                      bVar7 >> 3 & 1) << 1 |
                                                                     bVar7 >> 4 & 1) << 1 |
                                                                    bVar7 >> 5 & 1) << 1 |
                                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7
                                                                  ) << 8 |
                                             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                               << 1 | bVar1 >> 2 & 1) << 1 |
                                                             bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                            << 1 | bVar1 >> 5 & 1) << 1 |
                                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
          }
        }
        else {
LAB_017b5e20:
          if (puVar11 < (uint *)((int)puVar35 + -1)) {
            if ((short)*puVar25 == (short)*puVar11) {
              puVar25 = (uint *)((int)puVar25 + 2);
              puVar11 = (uint *)((int)puVar11 + 2);
            }
          }
          if ((puVar11 < puVar35) && ((char)*puVar25 == (char)*puVar11)) {
            puVar11 = (uint *)((int)puVar11 + 1);
          }
          pcVar19 = (char *)((int)puVar11 - (int)puVar18);
        }
        pcVar33 = pcVar33 + (int)pcVar19;
      }
      puVar11 = (uint *)param_2[3];
      if (local_4c < puVar40) {
        FUN_017b3404(puVar11,puVar40,puVar40,local_4c);
      }
      else {
        uVar23 = puVar40[1];
        uVar24 = puVar40[2];
        uVar42 = puVar40[3];
        *puVar11 = *puVar40;
        puVar11[1] = uVar23;
        puVar11[2] = uVar24;
        puVar11[3] = uVar42;
      }
      puVar21 = (undefined4 *)param_2[1];
      *(undefined2 *)(puVar21 + 1) = 0;
      *puVar21 = 1;
      uVar2 = SUB42(pcVar33 + 1,0);
      if (pcVar33 + 1 < (char *)0x10000) {
        *(undefined2 *)((int)puVar21 + 6) = uVar2;
        uVar23 = *puVar40;
        param_2[1] = (uint)(puVar21 + 2);
        uVar24 = 0x9e3779b1;
      }
      else {
        param_2[10] = (int)((int)puVar21 - *param_2) >> 3;
        param_2[9] = 2;
        *(undefined2 *)((int)puVar21 + 6) = uVar2;
        param_2[1] = (uint)(puVar21 + 2);
        uVar24 = *puVar40;
        uVar23 = 0x9e3779b1;
      }
      puVar40 = (uint *)((int)puVar40 + (int)(pcVar33 + 4));
      *(int *)(iVar9 + (uVar24 * uVar23 >> (uVar22 & 0xff)) * 4) = iVar37;
      if (puVar38 < puVar40) goto LAB_017b5f14;
      local_8c = local_7c;
      local_7c = pcVar45;
    } while( true );
  }
LAB_017b5454:
  puVar11 = (uint *)((int)puVar40 + iVar46);
  local_78 = puVar40;
  if (puVar38 < puVar11) goto LAB_017b4f90;
  goto LAB_017b4e20;
code_r0x017b4ffc:
  puVar11 = puVar40 + 1;
  pcVar45 = (char *)((int)puVar40 - (int)puVar25);
  if (puVar11 < (uint *)((int)puVar35 + -3)) {
    if (puVar25[1] == puVar40[1]) {
      puVar12 = puVar25 + 2;
      for (puVar18 = puVar40 + 2; puVar18 < (uint *)((int)puVar35 + -3); puVar18 = puVar18 + 1) {
        if (*puVar12 != *puVar18) {
          uVar23 = *puVar12 ^ *puVar18;
          bVar5 = (byte)uVar23;
          bVar6 = (byte)(uVar23 >> 8);
          bVar7 = (byte)(uVar23 >> 0x10);
          bVar1 = (byte)(uVar23 >> 0x18);
          pcVar33 = (char *)((int)puVar18 +
                            (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) <<
                                                              1 | bVar5 >> 2 & 1) << 1 |
                                                            bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                           << 1 | bVar5 >> 5 & 1) << 1 |
                                                         bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18
                                            | (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                << 1 | bVar6 >> 2 & 1) << 1 |
                                                              bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1)
                                                             << 1 | bVar6 >> 5 & 1) << 1 |
                                                           bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                              0x10 | (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                       bVar7 >> 1 & 1) << 1 |
                                                                      bVar7 >> 2 & 1) << 1 |
                                                                     bVar7 >> 3 & 1) << 1 |
                                                                    bVar7 >> 4 & 1) << 1 |
                                                                   bVar7 >> 5 & 1) << 1 |
                                                                  bVar7 >> 6 & 1) << 1 | bVar7 >> 7)
                                                     << 8 |
                                            (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                              1 | bVar1 >> 2 & 1) << 1 |
                                                            bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                           << 1 | bVar1 >> 5 & 1) << 1 |
                                                         bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3) -
                            (int)puVar11));
          goto LAB_017b54b8;
        }
        puVar12 = puVar12 + 1;
      }
      goto LAB_017b5478;
    }
    uVar23 = puVar25[1] ^ puVar40[1];
    bVar5 = (byte)uVar23;
    bVar6 = (byte)(uVar23 >> 8);
    bVar7 = (byte)(uVar23 >> 0x10);
    bVar1 = (byte)(uVar23 >> 0x18);
    pcVar33 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                      bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                                    bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                                  bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18 |
                                     (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                      bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1 |
                                                    bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                                                  bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x10 |
                                     (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 |
                                                      bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1) << 1 |
                                                    bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1) << 1 |
                                                  bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8 |
                                     (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                      bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                                    bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                                  bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
  }
  else {
    puVar12 = puVar25 + 1;
    puVar18 = puVar11;
LAB_017b5478:
    if (puVar18 < (uint *)((int)puVar35 + -1)) {
      if ((short)*puVar12 == (short)*puVar18) {
        puVar18 = (uint *)((int)puVar18 + 2);
        puVar12 = (uint *)((int)puVar12 + 2);
      }
    }
    if ((puVar18 < puVar35) && ((char)*puVar12 == (char)*puVar18)) {
      puVar18 = (uint *)((int)puVar18 + 1);
    }
    pcVar33 = (char *)((int)puVar18 - (int)puVar11);
  }
LAB_017b54b8:
  pcVar33 = pcVar33 + 4;
  puVar11 = puVar40;
  if (local_78 < puVar40 && puVar36 < puVar25) {
    do {
      puVar25 = (uint *)((int)puVar25 + -1);
      puVar40 = (uint *)((int)puVar11 + -1);
      if (*(char *)puVar40 != *(char *)puVar25) {
        puVar40 = puVar11;
        break;
      }
      pcVar33 = pcVar33 + 1;
      puVar11 = puVar40;
    } while (local_78 < puVar40 && puVar36 < puVar25);
  }
  puVar11 = (uint *)param_2[3];
  uVar23 = (int)puVar40 - (int)local_78;
  if (puVar35 + -8 < puVar40) {
    FUN_017b3404(puVar11,local_78,puVar40,puVar35 + -8);
LAB_017b57bc:
    param_2[3] = param_2[3] + uVar23;
    puVar21 = (undefined4 *)param_2[1];
    if (0xffff < uVar23) {
      param_2[10] = (int)((int)puVar21 - *param_2) >> 3;
      param_2[9] = 1;
    }
  }
  else {
    uVar24 = *local_78;
    uVar42 = local_78[1];
    uVar44 = local_78[2];
    puVar11[3] = local_78[3];
    puVar11[2] = uVar44;
    *puVar11 = uVar24;
    puVar11[1] = uVar42;
    uVar24 = param_2[3];
    if (0x10 < uVar23) {
      uVar42 = local_78[5];
      uVar44 = local_78[6];
      uVar10 = local_78[7];
      *(uint *)(uVar24 + 0x10) = local_78[4];
      *(uint *)(uVar24 + 0x14) = uVar42;
      *(uint *)(uVar24 + 0x18) = uVar44;
      *(uint *)(uVar24 + 0x1c) = uVar10;
      if (0x10 < (int)(uVar23 - 0x10)) {
        puVar11 = (uint *)(uVar24 + 0x20);
        puVar25 = local_78 + 0x10;
        do {
          uVar42 = puVar25[-7];
          uVar44 = puVar25[-6];
          puVar18 = puVar11 + 8;
          uVar10 = puVar25[-5];
          *puVar11 = puVar25[-8];
          puVar11[1] = uVar42;
          puVar11[2] = uVar44;
          puVar11[3] = uVar10;
          uVar42 = puVar25[-3];
          uVar44 = puVar25[-2];
          uVar10 = puVar25[-1];
          puVar11[4] = puVar25[-4];
          puVar11[5] = uVar42;
          puVar11[6] = uVar44;
          puVar11[7] = uVar10;
          puVar11 = puVar18;
          puVar25 = puVar25 + 8;
        } while (puVar18 < (uint *)(uVar24 + uVar23));
      }
      goto LAB_017b57bc;
    }
    param_2[3] = uVar24 + uVar23;
    puVar21 = (undefined4 *)param_2[1];
  }
  *(short *)(puVar21 + 1) = (short)uVar23;
  *puVar21 = pcVar45 + 3;
  if ((char *)0xffff < pcVar33 + -3) {
    param_2[10] = (int)((int)puVar21 - *param_2) >> 3;
    param_2[9] = 2;
  }
  *(short *)((int)puVar21 + 6) = (short)(pcVar33 + -3);
  puVar21 = puVar21 + 2;
  local_8c = local_7c;
  local_7c = pcVar45;
  goto LAB_017b543c;
LAB_017b5f14:
  local_8c = local_7c;
  local_7c = pcVar45;
  goto LAB_017b5454;
joined_r0x017bd098:
  if ((uint *)((int)puVar38 + -3) <= puVar28) goto LAB_017bd1e4;
  if (*puVar20 != *puVar28) {
    uVar23 = *puVar20 ^ *puVar28;
    bVar5 = (byte)uVar23;
    bVar6 = (byte)(uVar23 >> 8);
    bVar7 = (byte)(uVar23 >> 0x10);
    bVar1 = (byte)(uVar23 >> 0x18);
    pcVar45 = (char *)((int)puVar28 +
                      (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                       bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                                     bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18 |
                                      (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                       bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1 |
                                                     bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x10 |
                                      (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 |
                                                       bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1) << 1 |
                                                     bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1) << 1 |
                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8 |
                                      (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                       bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                                     bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3) -
                      (int)puVar34));
    goto LAB_017bd21c;
  }
  puVar28 = puVar28 + 1;
  puVar20 = puVar20 + 1;
  goto joined_r0x017bd098;
LAB_017bd1e4:
  if (puVar28 < (uint *)((int)puVar38 + -1)) {
    if ((short)*puVar20 == (short)*puVar28) {
      puVar28 = (uint *)((int)puVar28 + 2);
      puVar20 = (uint *)((int)puVar20 + 2);
    }
  }
  if ((puVar28 < puVar38) && ((char)*puVar20 == (char)*puVar28)) {
    puVar28 = (uint *)((int)puVar28 + 1);
  }
  pcVar45 = (char *)((int)puVar28 - (int)puVar34);
LAB_017bd21c:
  if (puVar11 == (uint *)((int)puVar17 + (int)pcVar45)) {
    puVar17 = (uint *)((int)puVar34 + (int)pcVar45);
    puVar11 = puVar17;
    puVar38 = puVar25;
    if (puVar17 < (uint *)((int)puVar35 + -3)) {
      if (*puVar25 == *(uint *)((int)puVar34 + (int)pcVar45)) {
        do {
          puVar11 = puVar11 + 1;
          puVar38 = puVar38 + 1;
          if ((uint *)((int)puVar35 + -3) <= puVar11) goto LAB_017bda3c;
        } while (*puVar38 == *puVar11);
        uVar23 = *puVar38 ^ *puVar11;
        bVar5 = (byte)uVar23;
        bVar6 = (byte)(uVar23 >> 8);
        bVar7 = (byte)(uVar23 >> 0x10);
        bVar1 = (byte)(uVar23 >> 0x18);
        pcVar33 = (char *)((int)puVar11 +
                          (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                           | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                          << 1 | bVar5 >> 4 & 1) << 1 |
                                                        bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1
                                                      | bVar5 >> 7) << 0x18 |
                                          (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                           | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                          << 1 | bVar6 >> 4 & 1) << 1 |
                                                        bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1
                                                      | bVar6 >> 7) << 0x10 |
                                          (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1
                                                           | bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1)
                                                          << 1 | bVar7 >> 4 & 1) << 1 |
                                                        bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1
                                                      | bVar7 >> 7) << 8 |
                                          (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                           | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                          << 1 | bVar1 >> 4 & 1) << 1 |
                                                        bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1
                                                      | bVar1 >> 7)) >> 3) - (int)puVar17));
      }
      else {
        uVar23 = *puVar25 ^ *(uint *)((int)puVar34 + (int)pcVar45);
        bVar5 = (byte)uVar23;
        bVar6 = (byte)(uVar23 >> 8);
        bVar7 = (byte)(uVar23 >> 0x10);
        bVar1 = (byte)(uVar23 >> 0x18);
        pcVar33 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                          | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                         << 1 | bVar5 >> 4 & 1) << 1 |
                                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 |
                                                     bVar5 >> 7) << 0x18 |
                                         (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                          | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                         << 1 | bVar6 >> 4 & 1) << 1 |
                                                       bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1 |
                                                     bVar6 >> 7) << 0x10 |
                                         (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1
                                                          | bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1)
                                                         << 1 | bVar7 >> 4 & 1) << 1 |
                                                       bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1 |
                                                     bVar7 >> 7) << 8 |
                                         (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                          | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                         << 1 | bVar1 >> 4 & 1) << 1 |
                                                       bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 |
                                                     bVar1 >> 7)) >> 3);
      }
    }
    else {
LAB_017bda3c:
      if (puVar11 < (uint *)((int)puVar35 + -1)) {
        if ((short)*puVar38 == (short)*puVar11) {
          puVar11 = (uint *)((int)puVar11 + 2);
          puVar38 = (uint *)((int)puVar38 + 2);
        }
      }
      if ((puVar11 < puVar35) && ((char)*puVar38 == (char)*puVar11)) {
        puVar11 = (uint *)((int)puVar11 + 1);
      }
      pcVar33 = (char *)((int)puVar11 - (int)puVar17);
    }
    pcVar45 = pcVar45 + (int)pcVar33;
  }
  puVar36 = (uint *)((int)puVar36 + 1);
  pcVar33 = pcVar45 + 4;
  puVar11 = (uint *)param_2[3];
  uVar23 = (int)puVar36 - (int)local_88;
  if (puVar35 + -8 < puVar36) {
    FUN_017b3404(puVar11,local_88,puVar36,puVar35 + -8);
LAB_017bddf4:
    param_2[3] = param_2[3] + uVar23;
    puVar21 = (undefined4 *)param_2[1];
    if (0xffff < uVar23) {
      param_2[10] = (int)((int)puVar21 - *param_2) >> 3;
      param_2[9] = 1;
    }
  }
  else {
    uVar24 = *local_88;
    uVar42 = local_88[1];
    uVar44 = local_88[2];
    puVar11[3] = local_88[3];
    *puVar11 = uVar24;
    puVar11[1] = uVar42;
    puVar11[2] = uVar44;
    uVar24 = param_2[3];
    if (0x10 < uVar23) {
      uVar42 = local_88[5];
      uVar44 = local_88[6];
      uVar10 = local_88[7];
      *(uint *)(uVar24 + 0x10) = local_88[4];
      *(uint *)(uVar24 + 0x14) = uVar42;
      *(uint *)(uVar24 + 0x18) = uVar44;
      *(uint *)(uVar24 + 0x1c) = uVar10;
      if (0x10 < (int)(uVar23 - 0x10)) {
        puVar11 = (uint *)(uVar24 + 0x20);
        puVar38 = local_88 + 0x10;
        do {
          uVar42 = puVar38[-7];
          uVar44 = puVar38[-6];
          puVar34 = puVar11 + 8;
          uVar10 = puVar38[-5];
          *puVar11 = puVar38[-8];
          puVar11[1] = uVar42;
          puVar11[2] = uVar44;
          puVar11[3] = uVar10;
          uVar42 = puVar38[-3];
          uVar44 = puVar38[-2];
          uVar10 = puVar38[-1];
          puVar11[4] = puVar38[-4];
          puVar11[5] = uVar42;
          puVar11[6] = uVar44;
          puVar11[7] = uVar10;
          puVar11 = puVar34;
          puVar38 = puVar38 + 8;
        } while (puVar34 < (uint *)(uVar24 + uVar23));
      }
      goto LAB_017bddf4;
    }
    param_2[3] = uVar24 + uVar23;
    puVar21 = (undefined4 *)param_2[1];
  }
  puVar11 = (uint *)&DAT_00000001;
  *(short *)(puVar21 + 1) = (short)uVar23;
  *puVar21 = 1;
  if ((char *)0xffff < pcVar45 + 1) {
    param_2[10] = (int)((int)puVar21 - *param_2) >> 3;
    puVar11 = (uint *)&SUB_00000002;
    param_2[9] = 2;
  }
  *(short *)((int)puVar21 + 6) = (short)(pcVar45 + 1);
  goto LAB_017bd2e0;
joined_r0x017bf460:
  if ((uint *)((int)puVar11 + -3) <= puVar17) goto LAB_017beb44;
  if (*puVar28 != *puVar17) {
    uVar23 = *puVar28 ^ *puVar17;
    bVar5 = (byte)uVar23;
    bVar6 = (byte)(uVar23 >> 8);
    bVar7 = (byte)(uVar23 >> 0x10);
    bVar1 = (byte)(uVar23 >> 0x18);
    pcVar33 = (char *)((int)puVar17 +
                      (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                       bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                                     bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18 |
                                      (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                       bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1 |
                                                     bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x10 |
                                      (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 |
                                                       bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1) << 1 |
                                                     bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1) << 1 |
                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8 |
                                      (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                       bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                                     bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3) -
                      (int)puVar38));
    goto LAB_017bcebc;
  }
  puVar17 = puVar17 + 1;
  puVar28 = puVar28 + 1;
  goto joined_r0x017bf460;
LAB_017beb44:
  if (puVar17 < (uint *)((int)puVar11 + -1)) {
    if ((short)*puVar28 == (short)*puVar17) {
      puVar28 = (uint *)((int)puVar28 + 2);
      puVar17 = (uint *)((int)puVar17 + 2);
    }
  }
  if ((puVar17 < puVar11) && ((char)*puVar28 == (char)*puVar17)) {
    puVar17 = (uint *)((int)puVar17 + 1);
  }
  pcVar33 = (char *)((int)puVar17 - (int)puVar38);
LAB_017bcebc:
  if (puVar18 == (uint *)((int)puVar34 + (int)pcVar33)) {
    puVar17 = (uint *)((int)puVar38 + (int)pcVar33);
    puVar34 = puVar25;
    puVar11 = puVar17;
    if (puVar17 < (uint *)((int)puVar35 + -3)) {
      if (*puVar25 == *(uint *)((int)puVar38 + (int)pcVar33)) {
        do {
          puVar11 = puVar11 + 1;
          puVar34 = puVar34 + 1;
          if ((uint *)((int)puVar35 + -3) <= puVar11) goto LAB_017bf494;
        } while (*puVar34 == *puVar11);
        uVar23 = *puVar34 ^ *puVar11;
        bVar5 = (byte)uVar23;
        bVar6 = (byte)(uVar23 >> 8);
        bVar7 = (byte)(uVar23 >> 0x10);
        bVar1 = (byte)(uVar23 >> 0x18);
        pcVar26 = (char *)((int)puVar11 +
                          (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                           | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                          << 1 | bVar5 >> 4 & 1) << 1 |
                                                        bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1
                                                      | bVar5 >> 7) << 0x18 |
                                          (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                           | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                          << 1 | bVar6 >> 4 & 1) << 1 |
                                                        bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1
                                                      | bVar6 >> 7) << 0x10 |
                                          (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1
                                                           | bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1)
                                                          << 1 | bVar7 >> 4 & 1) << 1 |
                                                        bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1
                                                      | bVar7 >> 7) << 8 |
                                          (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                           | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                          << 1 | bVar1 >> 4 & 1) << 1 |
                                                        bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1
                                                      | bVar1 >> 7)) >> 3) - (int)puVar17));
      }
      else {
        uVar23 = *puVar25 ^ *(uint *)((int)puVar38 + (int)pcVar33);
        bVar5 = (byte)uVar23;
        bVar6 = (byte)(uVar23 >> 8);
        bVar7 = (byte)(uVar23 >> 0x10);
        bVar1 = (byte)(uVar23 >> 0x18);
        pcVar26 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                          | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                         << 1 | bVar5 >> 4 & 1) << 1 |
                                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 |
                                                     bVar5 >> 7) << 0x18 |
                                         (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                          | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                         << 1 | bVar6 >> 4 & 1) << 1 |
                                                       bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1 |
                                                     bVar6 >> 7) << 0x10 |
                                         (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1
                                                          | bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1)
                                                         << 1 | bVar7 >> 4 & 1) << 1 |
                                                       bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1 |
                                                     bVar7 >> 7) << 8 |
                                         (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                          | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                         << 1 | bVar1 >> 4 & 1) << 1 |
                                                       bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 |
                                                     bVar1 >> 7)) >> 3);
      }
    }
    else {
LAB_017bf494:
      if (puVar11 < (uint *)((int)puVar35 + -1)) {
        if ((short)*puVar34 == (short)*puVar11) {
          puVar34 = (uint *)((int)puVar34 + 2);
          puVar11 = (uint *)((int)puVar11 + 2);
        }
      }
      if ((puVar11 < puVar35) && ((char)*puVar34 == (char)*puVar11)) {
        puVar11 = (uint *)((int)puVar11 + 1);
      }
      pcVar26 = (char *)((int)puVar11 - (int)puVar17);
    }
    pcVar33 = pcVar33 + (int)pcVar26;
  }
  pcVar33 = pcVar33 + 4;
  puVar11 = puVar36;
  if (local_88 < puVar36 && pcVar31 < pcVar45) {
    do {
      pcVar45 = pcVar45 + -1;
      puVar36 = (uint *)((int)puVar11 + -1);
      if (*(char *)puVar36 != *pcVar45) {
        puVar36 = puVar11;
        break;
      }
      pcVar33 = pcVar33 + 1;
      puVar11 = puVar36;
    } while (local_88 < puVar36 && pcVar31 < pcVar45);
  }
  puVar38 = (uint *)param_2[3];
  uVar23 = (int)puVar36 - (int)local_88;
  if (puVar35 + -8 < puVar36) {
    FUN_017b3404(puVar38,local_88,puVar36,puVar35 + -8);
LAB_017bf028:
    param_2[3] = param_2[3] + uVar23;
    puVar21 = (undefined4 *)param_2[1];
    puVar11 = param_2;
    if (0xffff < uVar23) {
      param_2[10] = (int)((int)puVar21 - *param_2) >> 3;
      param_2[9] = 1;
    }
  }
  else {
    uVar24 = *local_88;
    puVar11 = (uint *)local_88[1];
    uVar42 = local_88[2];
    puVar38[3] = local_88[3];
    *puVar38 = uVar24;
    puVar38[1] = (uint)puVar11;
    puVar38[2] = uVar42;
    uVar24 = param_2[3];
    if (0x10 < uVar23) {
      uVar42 = local_88[5];
      uVar44 = local_88[6];
      uVar10 = local_88[7];
      *(uint *)(uVar24 + 0x10) = local_88[4];
      *(uint *)(uVar24 + 0x14) = uVar42;
      *(uint *)(uVar24 + 0x18) = uVar44;
      *(uint *)(uVar24 + 0x1c) = uVar10;
      if (0x10 < (int)(uVar23 - 0x10)) {
        puVar11 = local_88 + 0x10;
        puVar38 = (uint *)(uVar24 + 0x20);
        do {
          uVar42 = puVar11[-7];
          uVar44 = puVar11[-6];
          puVar34 = puVar38 + 8;
          uVar10 = puVar11[-5];
          *puVar38 = puVar11[-8];
          puVar38[1] = uVar42;
          puVar38[2] = uVar44;
          puVar38[3] = uVar10;
          uVar42 = puVar11[-3];
          uVar44 = puVar11[-2];
          uVar10 = puVar11[-1];
          puVar38[4] = puVar11[-4];
          puVar38[5] = uVar42;
          puVar38[6] = uVar44;
          puVar38[7] = uVar10;
          puVar11 = puVar11 + 8;
          puVar38 = puVar34;
        } while (puVar34 < (uint *)(uVar24 + uVar23));
      }
      goto LAB_017bf028;
    }
    param_2[3] = uVar24 + uVar23;
    puVar21 = (undefined4 *)param_2[1];
  }
  *puVar21 = pcVar19 + 3;
  *(short *)(puVar21 + 1) = (short)uVar23;
joined_r0x017bcfc4:
  if ((char *)0xffff < pcVar33 + -3) {
    param_2[10] = (int)((int)puVar21 - *param_2) >> 3;
    puVar11 = (uint *)&SUB_00000002;
    param_2[9] = 2;
  }
  *(short *)((int)puVar21 + 6) = (short)(pcVar33 + -3);
  local_a0 = local_90;
  local_90 = pcVar19;
LAB_017bd2e0:
  local_50 = puVar35 + -8;
  puVar36 = (uint *)((int)puVar36 + (int)pcVar33);
  param_2[1] = (uint)(puVar21 + 2);
  if (puVar36 <= puVar40) {
    iVar27 = iVar27 + 2;
    lVar3 = (ulonglong)*(uint *)(iVar39 + iVar27) * 0xbb000000;
    lVar4 = (ulonglong)*(uint *)((int)puVar36 + -2) * 0xbb000000;
    uVar24 = *(int *)(iVar39 + iVar27 + 4) * -0x45000000 + *(uint *)(iVar39 + iVar27) * -0x30e44324
             + (int)((ulonglong)lVar3 >> 0x20);
    uVar23 = *(int *)((int)puVar36 + 2) * -0x45000000 + *(uint *)((int)puVar36 + -2) * -0x30e44324 +
             (int)((ulonglong)lVar4 >> 0x20);
    *(int *)(iVar41 + ((uint)lVar3 >> (uVar22 & 0xff) | uVar24 << (uVar30 & 0xff) |
                      uVar24 >> ((uint)puVar12 & 0xff)) * 4) = iVar27;
    *(char **)(iVar41 + ((uint)lVar4 >> (uVar22 & 0xff) | uVar23 << (uVar30 & 0xff) |
                        uVar23 >> ((uint)puVar12 & 0xff)) * 4) =
         (char *)((int)puVar36 + (-2 - iVar39));
    do {
      pcVar45 = local_a0;
      iVar27 = (int)puVar36 - iVar39;
      puVar11 = (uint *)(iVar27 - (int)pcVar45);
      iVar9 = iVar39;
      if (puVar11 < puVar43) {
        iVar9 = (int)puVar18 - (int)puVar43;
      }
      puVar38 = (uint *)(iVar9 + (int)puVar11);
      if (((char *)((int)puVar43 + (int)(pcVar45 + (-1 - iVar27))) < (char *)0x3) ||
         (*puVar38 != *puVar36)) {
        local_a0 = pcVar45;
        break;
      }
      if (puVar11 < puVar43) {
        puVar11 = puVar18;
      }
      else {
        puVar11 = puVar35;
      }
      puVar34 = puVar38 + 1;
      puVar28 = puVar36 + 1;
      puVar17 = (uint *)((int)puVar28 + ((int)puVar11 - (int)puVar34));
      if (puVar35 < puVar17) {
        puVar17 = puVar35;
      }
      if (puVar28 < (uint *)((int)puVar17 + -3)) {
        if (puVar38[1] == puVar36[1]) {
          puVar38 = puVar38 + 2;
          puVar20 = puVar36 + 2;
          while( true ) {
            if ((uint *)((int)puVar17 + -3) <= puVar20) break;
            if (*puVar38 != *puVar20) {
              uVar23 = *puVar38 ^ *puVar20;
              bVar5 = (byte)uVar23;
              bVar6 = (byte)(uVar23 >> 8);
              bVar7 = (byte)(uVar23 >> 0x10);
              bVar1 = (byte)(uVar23 >> 0x18);
              pcVar33 = (char *)((int)puVar20 +
                                (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1
                                                                  ) << 1 | bVar5 >> 2 & 1) << 1 |
                                                                bVar5 >> 3 & 1) << 1 |
                                                               bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1
                                                              ) << 1 | bVar5 >> 6 & 1) << 1 |
                                                            bVar5 >> 7) << 0x18 |
                                                (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1
                                                                  ) << 1 | bVar6 >> 2 & 1) << 1 |
                                                                bVar6 >> 3 & 1) << 1 |
                                                               bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1
                                                              ) << 1 | bVar6 >> 6 & 1) << 1 |
                                                            bVar6 >> 7) << 0x10 |
                                                (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1
                                                                  ) << 1 | bVar7 >> 2 & 1) << 1 |
                                                                bVar7 >> 3 & 1) << 1 |
                                                               bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1
                                                              ) << 1 | bVar7 >> 6 & 1) << 1 |
                                                            bVar7 >> 7) << 8 |
                                                (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1
                                                                  ) << 1 | bVar1 >> 2 & 1) << 1 |
                                                                bVar1 >> 3 & 1) << 1 |
                                                               bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1
                                                              ) << 1 | bVar1 >> 6 & 1) << 1 |
                                                            bVar1 >> 7)) >> 3) - (int)puVar28));
              goto LAB_017be7a4;
            }
            puVar38 = puVar38 + 1;
            puVar20 = puVar20 + 1;
          }
          goto LAB_017beea0;
        }
        uVar23 = puVar38[1] ^ puVar36[1];
        bVar5 = (byte)uVar23;
        bVar6 = (byte)(uVar23 >> 8);
        bVar7 = (byte)(uVar23 >> 0x10);
        bVar1 = (byte)(uVar23 >> 0x18);
        pcVar33 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                          | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                         << 1 | bVar5 >> 4 & 1) << 1 |
                                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 |
                                                     bVar5 >> 7) << 0x18 |
                                         (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                          | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                         << 1 | bVar6 >> 4 & 1) << 1 |
                                                       bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1 |
                                                     bVar6 >> 7) << 0x10 |
                                         (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1
                                                          | bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1)
                                                         << 1 | bVar7 >> 4 & 1) << 1 |
                                                       bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1 |
                                                     bVar7 >> 7) << 8 |
                                         (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                          | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                         << 1 | bVar1 >> 4 & 1) << 1 |
                                                       bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 |
                                                     bVar1 >> 7)) >> 3);
      }
      else {
        puVar20 = puVar28;
        puVar38 = puVar34;
LAB_017beea0:
        if (puVar20 < (uint *)((int)puVar17 + -1)) {
          if ((short)*puVar38 == (short)*puVar20) {
            puVar20 = (uint *)((int)puVar20 + 2);
            puVar38 = (uint *)((int)puVar38 + 2);
          }
        }
        if ((puVar20 < puVar17) && ((char)*puVar38 == (char)*puVar20)) {
          puVar20 = (uint *)((int)puVar20 + 1);
        }
        pcVar33 = (char *)((int)puVar20 - (int)puVar28);
      }
LAB_017be7a4:
      if (puVar11 == (uint *)((int)puVar34 + (int)pcVar33)) {
        puVar34 = (uint *)((int)puVar28 + (int)pcVar33);
        puVar38 = puVar25;
        puVar11 = puVar34;
        if (puVar34 < (uint *)((int)puVar35 + -3)) {
          if (*puVar25 == *(uint *)((int)puVar28 + (int)pcVar33)) {
            do {
              puVar11 = puVar11 + 1;
              puVar38 = puVar38 + 1;
              if ((uint *)((int)puVar35 + -3) <= puVar11) goto LAB_017bf650;
            } while (*puVar38 == *puVar11);
            uVar23 = *puVar38 ^ *puVar11;
            bVar5 = (byte)uVar23;
            bVar6 = (byte)(uVar23 >> 8);
            bVar7 = (byte)(uVar23 >> 0x10);
            bVar1 = (byte)(uVar23 >> 0x18);
            pcVar19 = (char *)((int)puVar11 +
                              (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                                << 1 | bVar5 >> 2 & 1) << 1 |
                                                              bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                             << 1 | bVar5 >> 5 & 1) << 1 |
                                                           bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                              0x18 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                       bVar6 >> 1 & 1) << 1 |
                                                                      bVar6 >> 2 & 1) << 1 |
                                                                     bVar6 >> 3 & 1) << 1 |
                                                                    bVar6 >> 4 & 1) << 1 |
                                                                   bVar6 >> 5 & 1) << 1 |
                                                                  bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                     << 0x10 |
                                              (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1)
                                                                << 1 | bVar7 >> 2 & 1) << 1 |
                                                              bVar7 >> 3 & 1) << 1 | bVar7 >> 4 & 1)
                                                             << 1 | bVar7 >> 5 & 1) << 1 |
                                                           bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8 |
                                              (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                                << 1 | bVar1 >> 2 & 1) << 1 |
                                                              bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                             << 1 | bVar1 >> 5 & 1) << 1 |
                                                           bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3)
                              - (int)puVar34));
          }
          else {
            uVar23 = *puVar25 ^ *(uint *)((int)puVar28 + (int)pcVar33);
            bVar5 = (byte)uVar23;
            bVar6 = (byte)(uVar23 >> 8);
            bVar7 = (byte)(uVar23 >> 0x10);
            bVar1 = (byte)(uVar23 >> 0x18);
            pcVar19 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                               << 1 | bVar5 >> 2 & 1) << 1 |
                                                             bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                            << 1 | bVar5 >> 5 & 1) << 1 |
                                                          bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18
                                             | (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                 << 1 | bVar6 >> 2 & 1) << 1 |
                                                               bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1
                                                              ) << 1 | bVar6 >> 5 & 1) << 1 |
                                                            bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                               0x10 | (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                        bVar7 >> 1 & 1) << 1 |
                                                                       bVar7 >> 2 & 1) << 1 |
                                                                      bVar7 >> 3 & 1) << 1 |
                                                                     bVar7 >> 4 & 1) << 1 |
                                                                    bVar7 >> 5 & 1) << 1 |
                                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7
                                                                  ) << 8 |
                                             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                               << 1 | bVar1 >> 2 & 1) << 1 |
                                                             bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                            << 1 | bVar1 >> 5 & 1) << 1 |
                                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
          }
        }
        else {
LAB_017bf650:
          if (puVar11 < (uint *)((int)puVar35 + -1)) {
            if ((short)*puVar38 == (short)*puVar11) {
              puVar38 = (uint *)((int)puVar38 + 2);
              puVar11 = (uint *)((int)puVar11 + 2);
            }
          }
          if ((puVar11 < puVar35) && ((char)*puVar38 == (char)*puVar11)) {
            puVar11 = (uint *)((int)puVar11 + 1);
          }
          pcVar19 = (char *)((int)puVar11 - (int)puVar34);
        }
        pcVar33 = pcVar33 + (int)pcVar19;
      }
      pcVar19 = pcVar33 + 4;
      puVar11 = (uint *)param_2[3];
      if (local_50 < puVar36) {
        FUN_017b3404(puVar11,puVar36,puVar36,local_50);
      }
      else {
        uVar23 = puVar36[1];
        uVar24 = puVar36[2];
        uVar42 = puVar36[3];
        *puVar11 = *puVar36;
        puVar11[1] = uVar23;
        puVar11[2] = uVar24;
        puVar11[3] = uVar42;
      }
      puVar21 = (undefined4 *)param_2[1];
      *(undefined2 *)(puVar21 + 1) = 0;
      *puVar21 = 1;
      uVar2 = SUB42(pcVar33 + 1,0);
      if (pcVar33 + 1 < (char *)0x10000) {
        *(undefined2 *)((int)puVar21 + 6) = uVar2;
        uVar23 = puVar36[1];
        param_2[1] = (uint)(puVar21 + 2);
        lVar3 = (ulonglong)*puVar36 * 0xbb000000;
        uVar23 = uVar23 * -0x45000000 + *puVar36 * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20);
        *(int *)(iVar41 + ((uint)lVar3 >> (uVar22 & 0xff) | uVar23 << (uVar30 & 0xff) |
                          uVar23 >> ((uint)puVar12 & 0xff)) * 4) = iVar27;
        puVar11 = puVar12;
      }
      else {
        lVar3 = (ulonglong)*puVar36 * 0xbb000000;
        uVar23 = puVar36[1] * -0x45000000 + *puVar36 * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20)
        ;
        param_2[10] = (int)((int)puVar21 - *param_2) >> 3;
        puVar11 = (uint *)&SUB_00000002;
        param_2[9] = 2;
        *(undefined2 *)((int)puVar21 + 6) = uVar2;
        param_2[1] = (uint)(puVar21 + 2);
        *(int *)(iVar41 + ((uint)lVar3 >> (uVar22 & 0xff) | uVar23 << (uVar30 & 0xff) |
                          uVar23 >> ((uint)puVar12 & 0xff)) * 4) = iVar27;
      }
      if (puVar40 < (uint *)((int)puVar36 + (int)pcVar19)) goto LAB_017bef54;
      puVar36 = (uint *)((int)puVar36 + (int)pcVar19);
      local_a0 = local_90;
      local_90 = pcVar45;
    } while( true );
  }
LAB_017bd2f8:
  puVar38 = (uint *)((int)puVar36 + iVar46);
  local_88 = puVar36;
  if (puVar40 < puVar38) goto LAB_017bcdac;
  goto LAB_017bcbb8;
code_r0x017bcde0:
  puVar11 = puVar36 + 1;
  pcVar19 = (char *)((int)puVar36 - (int)puVar38);
  if (puVar11 < (uint *)((int)puVar35 + -3)) {
    if (puVar38[1] == puVar36[1]) {
      puVar17 = puVar38 + 2;
      for (puVar34 = puVar36 + 2; puVar34 < (uint *)((int)puVar35 + -3); puVar34 = puVar34 + 1) {
        if (*puVar17 != *puVar34) {
          uVar23 = *puVar17 ^ *puVar34;
          bVar5 = (byte)uVar23;
          bVar6 = (byte)(uVar23 >> 8);
          bVar7 = (byte)(uVar23 >> 0x10);
          bVar1 = (byte)(uVar23 >> 0x18);
          pcVar33 = (char *)((int)puVar34 +
                            (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) <<
                                                              1 | bVar5 >> 2 & 1) << 1 |
                                                            bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                           << 1 | bVar5 >> 5 & 1) << 1 |
                                                         bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18
                                            | (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                << 1 | bVar6 >> 2 & 1) << 1 |
                                                              bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1)
                                                             << 1 | bVar6 >> 5 & 1) << 1 |
                                                           bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                              0x10 | (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                       bVar7 >> 1 & 1) << 1 |
                                                                      bVar7 >> 2 & 1) << 1 |
                                                                     bVar7 >> 3 & 1) << 1 |
                                                                    bVar7 >> 4 & 1) << 1 |
                                                                   bVar7 >> 5 & 1) << 1 |
                                                                  bVar7 >> 6 & 1) << 1 | bVar7 >> 7)
                                                     << 8 |
                                            (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                              1 | bVar1 >> 2 & 1) << 1 |
                                                            bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                           << 1 | bVar1 >> 5 & 1) << 1 |
                                                         bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3) -
                            (int)puVar11));
          goto LAB_017bd730;
        }
        puVar17 = puVar17 + 1;
      }
      goto LAB_017bd6f0;
    }
    uVar23 = puVar38[1] ^ puVar36[1];
    bVar5 = (byte)uVar23;
    bVar6 = (byte)(uVar23 >> 8);
    bVar7 = (byte)(uVar23 >> 0x10);
    bVar1 = (byte)(uVar23 >> 0x18);
    pcVar33 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                      bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                                    bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                                  bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18 |
                                     (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                      bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1 |
                                                    bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                                                  bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x10 |
                                     (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 |
                                                      bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1) << 1 |
                                                    bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1) << 1 |
                                                  bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8 |
                                     (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                      bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                                    bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                                  bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
  }
  else {
    puVar17 = puVar38 + 1;
    puVar34 = puVar11;
LAB_017bd6f0:
    if (puVar34 < (uint *)((int)puVar35 + -1)) {
      if ((short)*puVar17 == (short)*puVar34) {
        puVar34 = (uint *)((int)puVar34 + 2);
        puVar17 = (uint *)((int)puVar17 + 2);
      }
    }
    if ((puVar34 < puVar35) && ((char)*puVar17 == (char)*puVar34)) {
      puVar34 = (uint *)((int)puVar34 + 1);
    }
    pcVar33 = (char *)((int)puVar34 - (int)puVar11);
  }
LAB_017bd730:
  pcVar33 = pcVar33 + 4;
  puVar11 = puVar36;
  if (local_88 < puVar36 && puVar25 < puVar38) {
    do {
      puVar38 = (uint *)((int)puVar38 + -1);
      puVar36 = (uint *)((int)puVar11 + -1);
      if (*(char *)puVar36 != *(char *)puVar38) {
        puVar36 = puVar11;
        break;
      }
      pcVar33 = pcVar33 + 1;
      puVar11 = puVar36;
    } while (local_88 < puVar36 && puVar25 < puVar38);
  }
  puVar38 = (uint *)param_2[3];
  uVar23 = (int)puVar36 - (int)local_88;
  if (puVar35 + -8 < puVar36) {
    FUN_017b3404(puVar38,local_88,puVar36,puVar35 + -8);
LAB_017be00c:
    param_2[3] = param_2[3] + uVar23;
    puVar21 = (undefined4 *)param_2[1];
    puVar11 = param_2;
    if (0xffff < uVar23) {
      param_2[10] = (int)((int)puVar21 - *param_2) >> 3;
      param_2[9] = 1;
    }
  }
  else {
    uVar24 = *local_88;
    puVar11 = (uint *)local_88[1];
    uVar42 = local_88[2];
    puVar38[3] = local_88[3];
    *puVar38 = uVar24;
    puVar38[1] = (uint)puVar11;
    puVar38[2] = uVar42;
    uVar24 = param_2[3];
    if (0x10 < uVar23) {
      uVar42 = local_88[5];
      uVar44 = local_88[6];
      uVar10 = local_88[7];
      *(uint *)(uVar24 + 0x10) = local_88[4];
      *(uint *)(uVar24 + 0x14) = uVar42;
      *(uint *)(uVar24 + 0x18) = uVar44;
      *(uint *)(uVar24 + 0x1c) = uVar10;
      if (0x10 < (int)(uVar23 - 0x10)) {
        puVar11 = (uint *)(uVar24 + 0x20);
        puVar38 = local_88 + 0x10;
        do {
          uVar42 = puVar38[-7];
          uVar44 = puVar38[-6];
          puVar34 = puVar11 + 8;
          uVar10 = puVar38[-5];
          *puVar11 = puVar38[-8];
          puVar11[1] = uVar42;
          puVar11[2] = uVar44;
          puVar11[3] = uVar10;
          uVar42 = puVar38[-3];
          uVar44 = puVar38[-2];
          uVar10 = puVar38[-1];
          puVar11[4] = puVar38[-4];
          puVar11[5] = uVar42;
          puVar11[6] = uVar44;
          puVar11[7] = uVar10;
          puVar11 = puVar34;
          puVar38 = puVar38 + 8;
        } while (puVar34 < (uint *)(uVar24 + uVar23));
      }
      goto LAB_017be00c;
    }
    param_2[3] = uVar24 + uVar23;
    puVar21 = (undefined4 *)param_2[1];
  }
  *(short *)(puVar21 + 1) = (short)uVar23;
  *puVar21 = pcVar19 + 3;
  goto joined_r0x017bcfc4;
LAB_017bef54:
  puVar36 = (uint *)((int)puVar36 + (int)pcVar19);
  local_a0 = local_90;
  local_90 = pcVar45;
  goto LAB_017bd2f8;
joined_r0x017bd1b0:
  if ((uint *)((int)puVar18 + -3) <= puVar28) goto LAB_017bd454;
  if (*puVar20 != *puVar28) {
    uVar23 = *puVar20 ^ *puVar28;
    bVar5 = (byte)uVar23;
    bVar6 = (byte)(uVar23 >> 8);
    bVar7 = (byte)(uVar23 >> 0x10);
    bVar1 = (byte)(uVar23 >> 0x18);
    pcVar45 = (char *)((int)puVar28 +
                      (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                       bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                                     bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18 |
                                      (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                       bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1 |
                                                     bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x10 |
                                      (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 |
                                                       bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1) << 1 |
                                                     bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1) << 1 |
                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8 |
                                      (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                       bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                                     bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3) -
                      (int)puVar34));
    goto LAB_017bd48c;
  }
  puVar28 = puVar28 + 1;
  puVar20 = puVar20 + 1;
  goto joined_r0x017bd1b0;
LAB_017bd454:
  if (puVar28 < (uint *)((int)puVar18 + -1)) {
    if ((short)*puVar20 == (short)*puVar28) {
      puVar28 = (uint *)((int)puVar28 + 2);
      puVar20 = (uint *)((int)puVar20 + 2);
    }
  }
  if ((puVar28 < puVar18) && ((char)*puVar20 == (char)*puVar28)) {
    puVar28 = (uint *)((int)puVar28 + 1);
  }
  pcVar45 = (char *)((int)puVar28 - (int)puVar34);
LAB_017bd48c:
  if (puVar40 == (uint *)((int)puVar17 + (int)pcVar45)) {
    puVar17 = (uint *)((int)puVar34 + (int)pcVar45);
    puVar40 = puVar17;
    puVar18 = puVar43;
    if (puVar17 < (uint *)((int)puVar38 + -3)) {
      if (*puVar43 == *(uint *)((int)puVar34 + (int)pcVar45)) {
        do {
          puVar40 = puVar40 + 1;
          puVar18 = puVar18 + 1;
          if ((uint *)((int)puVar38 + -3) <= puVar40) goto LAB_017bd9cc;
        } while (*puVar18 == *puVar40);
        uVar23 = *puVar18 ^ *puVar40;
        bVar5 = (byte)uVar23;
        bVar6 = (byte)(uVar23 >> 8);
        bVar7 = (byte)(uVar23 >> 0x10);
        bVar1 = (byte)(uVar23 >> 0x18);
        pcVar33 = (char *)((int)puVar40 +
                          (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                           | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                          << 1 | bVar5 >> 4 & 1) << 1 |
                                                        bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1
                                                      | bVar5 >> 7) << 0x18 |
                                          (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                           | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                          << 1 | bVar6 >> 4 & 1) << 1 |
                                                        bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1
                                                      | bVar6 >> 7) << 0x10 |
                                          (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1
                                                           | bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1)
                                                          << 1 | bVar7 >> 4 & 1) << 1 |
                                                        bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1
                                                      | bVar7 >> 7) << 8 |
                                          (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                           | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                          << 1 | bVar1 >> 4 & 1) << 1 |
                                                        bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1
                                                      | bVar1 >> 7)) >> 3) - (int)puVar17));
      }
      else {
        uVar23 = *puVar43 ^ *(uint *)((int)puVar34 + (int)pcVar45);
        bVar5 = (byte)uVar23;
        bVar6 = (byte)(uVar23 >> 8);
        bVar7 = (byte)(uVar23 >> 0x10);
        bVar1 = (byte)(uVar23 >> 0x18);
        pcVar33 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                          | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                         << 1 | bVar5 >> 4 & 1) << 1 |
                                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 |
                                                     bVar5 >> 7) << 0x18 |
                                         (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                          | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                         << 1 | bVar6 >> 4 & 1) << 1 |
                                                       bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1 |
                                                     bVar6 >> 7) << 0x10 |
                                         (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1
                                                          | bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1)
                                                         << 1 | bVar7 >> 4 & 1) << 1 |
                                                       bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1 |
                                                     bVar7 >> 7) << 8 |
                                         (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                          | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                         << 1 | bVar1 >> 4 & 1) << 1 |
                                                       bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 |
                                                     bVar1 >> 7)) >> 3);
      }
    }
    else {
LAB_017bd9cc:
      if (puVar40 < (uint *)((int)puVar38 + -1)) {
        if ((short)*puVar18 == (short)*puVar40) {
          puVar40 = (uint *)((int)puVar40 + 2);
          puVar18 = (uint *)((int)puVar18 + 2);
        }
      }
      if ((puVar40 < puVar38) && ((char)*puVar18 == (char)*puVar40)) {
        puVar40 = (uint *)((int)puVar40 + 1);
      }
      pcVar33 = (char *)((int)puVar40 - (int)puVar17);
    }
    pcVar45 = pcVar45 + (int)pcVar33;
  }
  puVar35 = (uint *)((int)puVar35 + 1);
  pcVar33 = pcVar45 + 4;
  puVar40 = (uint *)param_2[3];
  uVar23 = (int)puVar35 - (int)local_88;
  if (puVar38 + -8 < puVar35) {
    FUN_017b3404(puVar40,local_88,puVar35,puVar38 + -8);
LAB_017bdbdc:
    param_2[3] = param_2[3] + uVar23;
    puVar21 = (undefined4 *)param_2[1];
    if (0xffff < uVar23) {
      param_2[10] = (int)((int)puVar21 - *param_2) >> 3;
      param_2[9] = 1;
    }
  }
  else {
    uVar24 = *local_88;
    uVar42 = local_88[1];
    uVar44 = local_88[2];
    puVar40[3] = local_88[3];
    *puVar40 = uVar24;
    puVar40[1] = uVar42;
    puVar40[2] = uVar44;
    uVar24 = param_2[3];
    if (0x10 < uVar23) {
      uVar42 = local_88[5];
      uVar44 = local_88[6];
      uVar10 = local_88[7];
      *(uint *)(uVar24 + 0x10) = local_88[4];
      *(uint *)(uVar24 + 0x14) = uVar42;
      *(uint *)(uVar24 + 0x18) = uVar44;
      *(uint *)(uVar24 + 0x1c) = uVar10;
      if (0x10 < (int)(uVar23 - 0x10)) {
        puVar40 = (uint *)(uVar24 + 0x20);
        puVar18 = local_88 + 0x10;
        do {
          uVar42 = puVar18[-7];
          uVar44 = puVar18[-6];
          puVar34 = puVar40 + 8;
          uVar10 = puVar18[-5];
          *puVar40 = puVar18[-8];
          puVar40[1] = uVar42;
          puVar40[2] = uVar44;
          puVar40[3] = uVar10;
          uVar42 = puVar18[-3];
          uVar44 = puVar18[-2];
          uVar10 = puVar18[-1];
          puVar40[4] = puVar18[-4];
          puVar40[5] = uVar42;
          puVar40[6] = uVar44;
          puVar40[7] = uVar10;
          puVar40 = puVar34;
          puVar18 = puVar18 + 8;
        } while (puVar34 < (uint *)(uVar24 + uVar23));
      }
      goto LAB_017bdbdc;
    }
    param_2[3] = uVar24 + uVar23;
    puVar21 = (undefined4 *)param_2[1];
  }
  puVar18 = (uint *)&DAT_00000001;
  *(short *)(puVar21 + 1) = (short)uVar23;
  *puVar21 = 1;
  if ((char *)0xffff < pcVar45 + 1) {
    param_2[10] = (int)((int)puVar21 - *param_2) >> 3;
    puVar18 = (uint *)&SUB_00000002;
    param_2[9] = 2;
  }
  *(short *)((int)puVar21 + 6) = (short)(pcVar45 + 1);
  goto LAB_017bd550;
joined_r0x017bf3a8:
  if ((uint *)((int)puVar40 + -3) <= puVar17) goto LAB_017beb98;
  if (*puVar28 != *puVar17) {
    uVar23 = *puVar28 ^ *puVar17;
    bVar5 = (byte)uVar23;
    bVar6 = (byte)(uVar23 >> 8);
    bVar7 = (byte)(uVar23 >> 0x10);
    bVar1 = (byte)(uVar23 >> 0x18);
    pcVar33 = (char *)((int)puVar17 +
                      (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                       bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                                     bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18 |
                                      (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                       bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1 |
                                                     bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x10 |
                                      (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 |
                                                       bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1) << 1 |
                                                     bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1) << 1 |
                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8 |
                                      (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                       bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                                     bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3) -
                      (int)puVar18));
    goto LAB_017bc490;
  }
  puVar17 = puVar17 + 1;
  puVar28 = puVar28 + 1;
  goto joined_r0x017bf3a8;
LAB_017beb98:
  if (puVar17 < (uint *)((int)puVar40 + -1)) {
    if ((short)*puVar28 == (short)*puVar17) {
      puVar28 = (uint *)((int)puVar28 + 2);
      puVar17 = (uint *)((int)puVar17 + 2);
    }
  }
  if ((puVar17 < puVar40) && ((char)*puVar28 == (char)*puVar17)) {
    puVar17 = (uint *)((int)puVar17 + 1);
  }
  pcVar33 = (char *)((int)puVar17 - (int)puVar18);
LAB_017bc490:
  if (puVar25 == (uint *)((int)puVar34 + (int)pcVar33)) {
    puVar17 = (uint *)((int)puVar18 + (int)pcVar33);
    puVar34 = puVar43;
    puVar40 = puVar17;
    if (puVar17 < (uint *)((int)puVar38 + -3)) {
      if (*puVar43 == *(uint *)((int)puVar18 + (int)pcVar33)) {
        do {
          puVar40 = puVar40 + 1;
          puVar34 = puVar34 + 1;
          if ((uint *)((int)puVar38 + -3) <= puVar40) goto LAB_017bf5bc;
        } while (*puVar34 == *puVar40);
        uVar23 = *puVar34 ^ *puVar40;
        bVar5 = (byte)uVar23;
        bVar6 = (byte)(uVar23 >> 8);
        bVar7 = (byte)(uVar23 >> 0x10);
        bVar1 = (byte)(uVar23 >> 0x18);
        pcVar26 = (char *)((int)puVar40 +
                          (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                           | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                          << 1 | bVar5 >> 4 & 1) << 1 |
                                                        bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1
                                                      | bVar5 >> 7) << 0x18 |
                                          (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                           | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                          << 1 | bVar6 >> 4 & 1) << 1 |
                                                        bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1
                                                      | bVar6 >> 7) << 0x10 |
                                          (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1
                                                           | bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1)
                                                          << 1 | bVar7 >> 4 & 1) << 1 |
                                                        bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1
                                                      | bVar7 >> 7) << 8 |
                                          (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                           | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                          << 1 | bVar1 >> 4 & 1) << 1 |
                                                        bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1
                                                      | bVar1 >> 7)) >> 3) - (int)puVar17));
      }
      else {
        uVar23 = *puVar43 ^ *(uint *)((int)puVar18 + (int)pcVar33);
        bVar5 = (byte)uVar23;
        bVar6 = (byte)(uVar23 >> 8);
        bVar7 = (byte)(uVar23 >> 0x10);
        bVar1 = (byte)(uVar23 >> 0x18);
        pcVar26 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                          | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                         << 1 | bVar5 >> 4 & 1) << 1 |
                                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 |
                                                     bVar5 >> 7) << 0x18 |
                                         (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                          | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                         << 1 | bVar6 >> 4 & 1) << 1 |
                                                       bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1 |
                                                     bVar6 >> 7) << 0x10 |
                                         (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1
                                                          | bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1)
                                                         << 1 | bVar7 >> 4 & 1) << 1 |
                                                       bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1 |
                                                     bVar7 >> 7) << 8 |
                                         (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                          | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                         << 1 | bVar1 >> 4 & 1) << 1 |
                                                       bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 |
                                                     bVar1 >> 7)) >> 3);
      }
    }
    else {
LAB_017bf5bc:
      if (puVar40 < (uint *)((int)puVar38 + -1)) {
        if ((short)*puVar34 == (short)*puVar40) {
          puVar34 = (uint *)((int)puVar34 + 2);
          puVar40 = (uint *)((int)puVar40 + 2);
        }
      }
      if ((puVar40 < puVar38) && ((char)*puVar34 == (char)*puVar40)) {
        puVar40 = (uint *)((int)puVar40 + 1);
      }
      pcVar26 = (char *)((int)puVar40 - (int)puVar17);
    }
    pcVar33 = pcVar33 + (int)pcVar26;
  }
  pcVar33 = pcVar33 + 4;
  puVar40 = puVar35;
  if (local_88 < puVar35 && pcVar31 < pcVar45) {
    do {
      pcVar45 = pcVar45 + -1;
      puVar35 = (uint *)((int)puVar40 + -1);
      if (*(char *)puVar35 != *pcVar45) {
        puVar35 = puVar40;
        break;
      }
      pcVar33 = pcVar33 + 1;
      puVar40 = puVar35;
    } while (local_88 < puVar35 && pcVar31 < pcVar45);
  }
  puVar40 = (uint *)param_2[3];
  uVar23 = (int)puVar35 - (int)local_88;
  if (puVar38 + -8 < puVar35) {
    FUN_017b3404(puVar40,local_88,puVar35,puVar38 + -8);
LAB_017bf2d0:
    param_2[3] = param_2[3] + uVar23;
    puVar21 = (undefined4 *)param_2[1];
    puVar18 = param_2;
    if (0xffff < uVar23) {
      param_2[10] = (int)((int)puVar21 - *param_2) >> 3;
      param_2[9] = 1;
    }
  }
  else {
    uVar24 = *local_88;
    puVar18 = (uint *)local_88[1];
    uVar42 = local_88[2];
    puVar40[3] = local_88[3];
    *puVar40 = uVar24;
    puVar40[1] = (uint)puVar18;
    puVar40[2] = uVar42;
    uVar24 = param_2[3];
    if (0x10 < uVar23) {
      uVar42 = local_88[5];
      uVar44 = local_88[6];
      uVar10 = local_88[7];
      *(uint *)(uVar24 + 0x10) = local_88[4];
      *(uint *)(uVar24 + 0x14) = uVar42;
      *(uint *)(uVar24 + 0x18) = uVar44;
      *(uint *)(uVar24 + 0x1c) = uVar10;
      if (0x10 < (int)(uVar23 - 0x10)) {
        puVar40 = local_88 + 0x10;
        puVar18 = (uint *)(uVar24 + 0x20);
        do {
          uVar42 = puVar40[-7];
          uVar44 = puVar40[-6];
          puVar34 = puVar18 + 8;
          uVar10 = puVar40[-5];
          *puVar18 = puVar40[-8];
          puVar18[1] = uVar42;
          puVar18[2] = uVar44;
          puVar18[3] = uVar10;
          uVar42 = puVar40[-3];
          uVar44 = puVar40[-2];
          uVar10 = puVar40[-1];
          puVar18[4] = puVar40[-4];
          puVar18[5] = uVar42;
          puVar18[6] = uVar44;
          puVar18[7] = uVar10;
          puVar40 = puVar40 + 8;
          puVar18 = puVar34;
        } while (puVar34 < (uint *)(uVar24 + uVar23));
      }
      goto LAB_017bf2d0;
    }
    param_2[3] = uVar24 + uVar23;
    puVar21 = (undefined4 *)param_2[1];
  }
  *puVar21 = pcVar19 + 3;
  *(short *)(puVar21 + 1) = (short)uVar23;
joined_r0x017bc588:
  if ((char *)0xffff < pcVar33 + -3) {
    param_2[10] = (int)((int)puVar21 - *param_2) >> 3;
    puVar18 = (uint *)&SUB_00000002;
    param_2[9] = 2;
  }
  *(short *)((int)puVar21 + 6) = (short)(pcVar33 + -3);
  local_a4 = local_98;
  local_98 = pcVar19;
LAB_017bd550:
  local_50 = puVar38 + -8;
  puVar35 = (uint *)((int)puVar35 + (int)pcVar33);
  param_2[1] = (uint)(puVar21 + 2);
  if (puVar35 <= puVar11) {
    iVar27 = iVar27 + 2;
    lVar3 = (ulonglong)*(uint *)(iVar39 + iVar27) * 0xbfa56300;
    lVar4 = (ulonglong)*(uint *)((int)puVar35 + -2) * 0xbfa56300;
    uVar24 = *(int *)(iVar39 + iVar27 + 4) * -0x405a9d00 + *(uint *)(iVar39 + iVar27) * -0x30e44324
             + (int)((ulonglong)lVar3 >> 0x20);
    uVar23 = *(int *)((int)puVar35 + 2) * -0x405a9d00 + *(uint *)((int)puVar35 + -2) * -0x30e44324 +
             (int)((ulonglong)lVar4 >> 0x20);
    *(int *)(iVar41 + ((uint)lVar3 >> (uVar22 & 0xff) | uVar24 << (uVar30 & 0xff) |
                      uVar24 >> ((uint)puVar12 & 0xff)) * 4) = iVar27;
    *(char **)(iVar41 + ((uint)lVar4 >> (uVar22 & 0xff) | uVar23 << (uVar30 & 0xff) |
                        uVar23 >> ((uint)puVar12 & 0xff)) * 4) =
         (char *)((int)puVar35 + (-2 - iVar39));
    do {
      pcVar45 = local_a4;
      iVar27 = (int)puVar35 - iVar39;
      puVar18 = (uint *)(iVar27 - (int)pcVar45);
      iVar9 = iVar39;
      if (puVar18 < puVar36) {
        iVar9 = (int)puVar25 - (int)puVar36;
      }
      puVar40 = (uint *)(iVar9 + (int)puVar18);
      if (((char *)((int)puVar36 + (int)(pcVar45 + (-1 - iVar27))) < (char *)0x3) ||
         (*puVar40 != *puVar35)) {
        local_a4 = pcVar45;
        break;
      }
      if (puVar18 < puVar36) {
        puVar18 = puVar25;
      }
      else {
        puVar18 = puVar38;
      }
      puVar34 = puVar40 + 1;
      puVar28 = puVar35 + 1;
      puVar17 = (uint *)((int)puVar28 + ((int)puVar18 - (int)puVar34));
      if (puVar38 < puVar17) {
        puVar17 = puVar38;
      }
      if (puVar28 < (uint *)((int)puVar17 + -3)) {
        if (puVar40[1] == puVar35[1]) {
          puVar40 = puVar40 + 2;
          puVar20 = puVar35 + 2;
          while( true ) {
            if ((uint *)((int)puVar17 + -3) <= puVar20) break;
            if (*puVar40 != *puVar20) {
              uVar23 = *puVar40 ^ *puVar20;
              bVar5 = (byte)uVar23;
              bVar6 = (byte)(uVar23 >> 8);
              bVar7 = (byte)(uVar23 >> 0x10);
              bVar1 = (byte)(uVar23 >> 0x18);
              pcVar33 = (char *)((int)puVar20 +
                                (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1
                                                                  ) << 1 | bVar5 >> 2 & 1) << 1 |
                                                                bVar5 >> 3 & 1) << 1 |
                                                               bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1
                                                              ) << 1 | bVar5 >> 6 & 1) << 1 |
                                                            bVar5 >> 7) << 0x18 |
                                                (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1
                                                                  ) << 1 | bVar6 >> 2 & 1) << 1 |
                                                                bVar6 >> 3 & 1) << 1 |
                                                               bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1
                                                              ) << 1 | bVar6 >> 6 & 1) << 1 |
                                                            bVar6 >> 7) << 0x10 |
                                                (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1
                                                                  ) << 1 | bVar7 >> 2 & 1) << 1 |
                                                                bVar7 >> 3 & 1) << 1 |
                                                               bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1
                                                              ) << 1 | bVar7 >> 6 & 1) << 1 |
                                                            bVar7 >> 7) << 8 |
                                                (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1
                                                                  ) << 1 | bVar1 >> 2 & 1) << 1 |
                                                                bVar1 >> 3 & 1) << 1 |
                                                               bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1
                                                              ) << 1 | bVar1 >> 6 & 1) << 1 |
                                                            bVar1 >> 7)) >> 3) - (int)puVar28));
              goto LAB_017be644;
            }
            puVar40 = puVar40 + 1;
            puVar20 = puVar20 + 1;
          }
          goto LAB_017bede8;
        }
        uVar23 = puVar40[1] ^ puVar35[1];
        bVar5 = (byte)uVar23;
        bVar6 = (byte)(uVar23 >> 8);
        bVar7 = (byte)(uVar23 >> 0x10);
        bVar1 = (byte)(uVar23 >> 0x18);
        pcVar33 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                          | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                         << 1 | bVar5 >> 4 & 1) << 1 |
                                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 |
                                                     bVar5 >> 7) << 0x18 |
                                         (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                          | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                         << 1 | bVar6 >> 4 & 1) << 1 |
                                                       bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1 |
                                                     bVar6 >> 7) << 0x10 |
                                         (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1
                                                          | bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1)
                                                         << 1 | bVar7 >> 4 & 1) << 1 |
                                                       bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1 |
                                                     bVar7 >> 7) << 8 |
                                         (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                          | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                         << 1 | bVar1 >> 4 & 1) << 1 |
                                                       bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 |
                                                     bVar1 >> 7)) >> 3);
      }
      else {
        puVar20 = puVar28;
        puVar40 = puVar34;
LAB_017bede8:
        if (puVar20 < (uint *)((int)puVar17 + -1)) {
          if ((short)*puVar40 == (short)*puVar20) {
            puVar20 = (uint *)((int)puVar20 + 2);
            puVar40 = (uint *)((int)puVar40 + 2);
          }
        }
        if ((puVar20 < puVar17) && ((char)*puVar40 == (char)*puVar20)) {
          puVar20 = (uint *)((int)puVar20 + 1);
        }
        pcVar33 = (char *)((int)puVar20 - (int)puVar28);
      }
LAB_017be644:
      if (puVar18 == (uint *)((int)puVar34 + (int)pcVar33)) {
        puVar34 = (uint *)((int)puVar28 + (int)pcVar33);
        puVar18 = puVar43;
        puVar40 = puVar34;
        if (puVar34 < (uint *)((int)puVar38 + -3)) {
          if (*puVar43 == *(uint *)((int)puVar28 + (int)pcVar33)) {
            do {
              puVar40 = puVar40 + 1;
              puVar18 = puVar18 + 1;
              if ((uint *)((int)puVar38 + -3) <= puVar40) goto LAB_017bf708;
            } while (*puVar18 == *puVar40);
            uVar23 = *puVar18 ^ *puVar40;
            bVar5 = (byte)uVar23;
            bVar6 = (byte)(uVar23 >> 8);
            bVar7 = (byte)(uVar23 >> 0x10);
            bVar1 = (byte)(uVar23 >> 0x18);
            pcVar19 = (char *)((int)puVar40 +
                              (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                                << 1 | bVar5 >> 2 & 1) << 1 |
                                                              bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                             << 1 | bVar5 >> 5 & 1) << 1 |
                                                           bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                              0x18 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                       bVar6 >> 1 & 1) << 1 |
                                                                      bVar6 >> 2 & 1) << 1 |
                                                                     bVar6 >> 3 & 1) << 1 |
                                                                    bVar6 >> 4 & 1) << 1 |
                                                                   bVar6 >> 5 & 1) << 1 |
                                                                  bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                     << 0x10 |
                                              (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1)
                                                                << 1 | bVar7 >> 2 & 1) << 1 |
                                                              bVar7 >> 3 & 1) << 1 | bVar7 >> 4 & 1)
                                                             << 1 | bVar7 >> 5 & 1) << 1 |
                                                           bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8 |
                                              (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                                << 1 | bVar1 >> 2 & 1) << 1 |
                                                              bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                             << 1 | bVar1 >> 5 & 1) << 1 |
                                                           bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3)
                              - (int)puVar34));
          }
          else {
            uVar23 = *puVar43 ^ *(uint *)((int)puVar28 + (int)pcVar33);
            bVar5 = (byte)uVar23;
            bVar6 = (byte)(uVar23 >> 8);
            bVar7 = (byte)(uVar23 >> 0x10);
            bVar1 = (byte)(uVar23 >> 0x18);
            pcVar19 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                               << 1 | bVar5 >> 2 & 1) << 1 |
                                                             bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                            << 1 | bVar5 >> 5 & 1) << 1 |
                                                          bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18
                                             | (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                 << 1 | bVar6 >> 2 & 1) << 1 |
                                                               bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1
                                                              ) << 1 | bVar6 >> 5 & 1) << 1 |
                                                            bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                               0x10 | (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                        bVar7 >> 1 & 1) << 1 |
                                                                       bVar7 >> 2 & 1) << 1 |
                                                                      bVar7 >> 3 & 1) << 1 |
                                                                     bVar7 >> 4 & 1) << 1 |
                                                                    bVar7 >> 5 & 1) << 1 |
                                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7
                                                                  ) << 8 |
                                             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                               << 1 | bVar1 >> 2 & 1) << 1 |
                                                             bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                            << 1 | bVar1 >> 5 & 1) << 1 |
                                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
          }
        }
        else {
LAB_017bf708:
          if (puVar40 < (uint *)((int)puVar38 + -1)) {
            if ((short)*puVar18 == (short)*puVar40) {
              puVar18 = (uint *)((int)puVar18 + 2);
              puVar40 = (uint *)((int)puVar40 + 2);
            }
          }
          if ((puVar40 < puVar38) && ((char)*puVar18 == (char)*puVar40)) {
            puVar40 = (uint *)((int)puVar40 + 1);
          }
          pcVar19 = (char *)((int)puVar40 - (int)puVar34);
        }
        pcVar33 = pcVar33 + (int)pcVar19;
      }
      pcVar19 = pcVar33 + 4;
      puVar40 = (uint *)param_2[3];
      if (local_50 < puVar35) {
        FUN_017b3404(puVar40,puVar35,puVar35,local_50);
      }
      else {
        uVar23 = puVar35[1];
        uVar24 = puVar35[2];
        uVar42 = puVar35[3];
        *puVar40 = *puVar35;
        puVar40[1] = uVar23;
        puVar40[2] = uVar24;
        puVar40[3] = uVar42;
      }
      puVar21 = (undefined4 *)param_2[1];
      *(undefined2 *)(puVar21 + 1) = 0;
      *puVar21 = 1;
      uVar2 = SUB42(pcVar33 + 1,0);
      if (pcVar33 + 1 < (char *)0x10000) {
        *(undefined2 *)((int)puVar21 + 6) = uVar2;
        uVar23 = puVar35[1];
        param_2[1] = (uint)(puVar21 + 2);
        lVar3 = (ulonglong)*puVar35 * 0xbfa56300;
        uVar23 = uVar23 * -0x405a9d00 + *puVar35 * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20);
        *(int *)(iVar41 + ((uint)lVar3 >> (uVar22 & 0xff) | uVar23 << (uVar30 & 0xff) |
                          uVar23 >> ((uint)puVar12 & 0xff)) * 4) = iVar27;
        puVar18 = puVar12;
      }
      else {
        lVar3 = (ulonglong)*puVar35 * 0xbfa56300;
        uVar23 = puVar35[1] * -0x405a9d00 + *puVar35 * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20)
        ;
        param_2[10] = (int)((int)puVar21 - *param_2) >> 3;
        puVar18 = (uint *)&SUB_00000002;
        param_2[9] = 2;
        *(undefined2 *)((int)puVar21 + 6) = uVar2;
        param_2[1] = (uint)(puVar21 + 2);
        *(int *)(iVar41 + ((uint)lVar3 >> (uVar22 & 0xff) | uVar23 << (uVar30 & 0xff) |
                          uVar23 >> ((uint)puVar12 & 0xff)) * 4) = iVar27;
      }
      if (puVar11 < (uint *)((int)puVar35 + (int)pcVar19)) goto LAB_017bedd0;
      puVar35 = (uint *)((int)puVar35 + (int)pcVar19);
      local_a4 = local_98;
      local_98 = pcVar45;
    } while( true );
  }
LAB_017bd568:
  puVar40 = (uint *)((int)puVar35 + iVar46);
  if (puVar11 < puVar40) goto LAB_017be5dc;
  local_88 = puVar35;
  goto LAB_017bc154;
code_r0x017bc3b4:
  puVar18 = puVar35 + 1;
  pcVar19 = (char *)((int)puVar35 - (int)puVar40);
  if (puVar18 < (uint *)((int)puVar38 + -3)) {
    if (puVar40[1] == puVar35[1]) {
      puVar17 = puVar40 + 2;
      for (puVar34 = puVar35 + 2; puVar34 < (uint *)((int)puVar38 + -3); puVar34 = puVar34 + 1) {
        if (*puVar17 != *puVar34) {
          uVar23 = *puVar17 ^ *puVar34;
          bVar5 = (byte)uVar23;
          bVar6 = (byte)(uVar23 >> 8);
          bVar7 = (byte)(uVar23 >> 0x10);
          bVar1 = (byte)(uVar23 >> 0x18);
          pcVar33 = (char *)((int)puVar34 +
                            (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) <<
                                                              1 | bVar5 >> 2 & 1) << 1 |
                                                            bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                           << 1 | bVar5 >> 5 & 1) << 1 |
                                                         bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18
                                            | (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                << 1 | bVar6 >> 2 & 1) << 1 |
                                                              bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1)
                                                             << 1 | bVar6 >> 5 & 1) << 1 |
                                                           bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                              0x10 | (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                       bVar7 >> 1 & 1) << 1 |
                                                                      bVar7 >> 2 & 1) << 1 |
                                                                     bVar7 >> 3 & 1) << 1 |
                                                                    bVar7 >> 4 & 1) << 1 |
                                                                   bVar7 >> 5 & 1) << 1 |
                                                                  bVar7 >> 6 & 1) << 1 | bVar7 >> 7)
                                                     << 8 |
                                            (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                              1 | bVar1 >> 2 & 1) << 1 |
                                                            bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                           << 1 | bVar1 >> 5 & 1) << 1 |
                                                         bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3) -
                            (int)puVar18));
          goto LAB_017bd5cc;
        }
        puVar17 = puVar17 + 1;
      }
      goto LAB_017bd58c;
    }
    uVar23 = puVar40[1] ^ puVar35[1];
    bVar5 = (byte)uVar23;
    bVar6 = (byte)(uVar23 >> 8);
    bVar7 = (byte)(uVar23 >> 0x10);
    bVar1 = (byte)(uVar23 >> 0x18);
    pcVar33 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                      bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                                    bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                                  bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18 |
                                     (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                      bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1 |
                                                    bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                                                  bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x10 |
                                     (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 |
                                                      bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1) << 1 |
                                                    bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1) << 1 |
                                                  bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8 |
                                     (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                      bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                                    bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                                  bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
  }
  else {
    puVar17 = puVar40 + 1;
    puVar34 = puVar18;
LAB_017bd58c:
    if (puVar34 < (uint *)((int)puVar38 + -1)) {
      if ((short)*puVar17 == (short)*puVar34) {
        puVar34 = (uint *)((int)puVar34 + 2);
        puVar17 = (uint *)((int)puVar17 + 2);
      }
    }
    if ((puVar34 < puVar38) && ((char)*puVar17 == (char)*puVar34)) {
      puVar34 = (uint *)((int)puVar34 + 1);
    }
    pcVar33 = (char *)((int)puVar34 - (int)puVar18);
  }
LAB_017bd5cc:
  pcVar33 = pcVar33 + 4;
  puVar18 = puVar35;
  if (local_88 < puVar35 && puVar43 < puVar40) {
    do {
      puVar40 = (uint *)((int)puVar40 + -1);
      puVar35 = (uint *)((int)puVar18 + -1);
      if (*(char *)puVar35 != *(char *)puVar40) {
        puVar35 = puVar18;
        break;
      }
      pcVar33 = pcVar33 + 1;
      puVar18 = puVar35;
    } while (local_88 < puVar35 && puVar43 < puVar40);
  }
  puVar40 = (uint *)param_2[3];
  uVar23 = (int)puVar35 - (int)local_88;
  if (puVar38 + -8 < puVar35) {
    FUN_017b3404(puVar40,local_88,puVar35,puVar38 + -8);
LAB_017bdf00:
    param_2[3] = param_2[3] + uVar23;
    puVar21 = (undefined4 *)param_2[1];
    puVar18 = param_2;
    if (0xffff < uVar23) {
      param_2[10] = (int)((int)puVar21 - *param_2) >> 3;
      param_2[9] = 1;
    }
  }
  else {
    uVar24 = *local_88;
    puVar18 = (uint *)local_88[1];
    uVar42 = local_88[2];
    puVar40[3] = local_88[3];
    *puVar40 = uVar24;
    puVar40[1] = (uint)puVar18;
    puVar40[2] = uVar42;
    uVar24 = param_2[3];
    if (0x10 < uVar23) {
      uVar42 = local_88[5];
      uVar44 = local_88[6];
      uVar10 = local_88[7];
      *(uint *)(uVar24 + 0x10) = local_88[4];
      *(uint *)(uVar24 + 0x14) = uVar42;
      *(uint *)(uVar24 + 0x18) = uVar44;
      *(uint *)(uVar24 + 0x1c) = uVar10;
      if (0x10 < (int)(uVar23 - 0x10)) {
        puVar40 = (uint *)(uVar24 + 0x20);
        puVar18 = local_88 + 0x10;
        do {
          uVar42 = puVar18[-7];
          uVar44 = puVar18[-6];
          puVar34 = puVar40 + 8;
          uVar10 = puVar18[-5];
          *puVar40 = puVar18[-8];
          puVar40[1] = uVar42;
          puVar40[2] = uVar44;
          puVar40[3] = uVar10;
          uVar42 = puVar18[-3];
          uVar44 = puVar18[-2];
          uVar10 = puVar18[-1];
          puVar40[4] = puVar18[-4];
          puVar40[5] = uVar42;
          puVar40[6] = uVar44;
          puVar40[7] = uVar10;
          puVar40 = puVar34;
          puVar18 = puVar18 + 8;
        } while (puVar34 < (uint *)(uVar24 + uVar23));
      }
      goto LAB_017bdf00;
    }
    param_2[3] = uVar24 + uVar23;
    puVar21 = (undefined4 *)param_2[1];
  }
  *(short *)(puVar21 + 1) = (short)uVar23;
  *puVar21 = pcVar19 + 3;
  goto joined_r0x017bc588;
LAB_017bedd0:
  puVar35 = (uint *)((int)puVar35 + (int)pcVar19);
  local_a4 = local_98;
  local_98 = pcVar45;
  goto LAB_017bd568;
LAB_017be5dc:
  puVar11 = puVar18;
  local_88 = puVar35;
  goto LAB_017bc348;
LAB_017bc344:
LAB_017bc348:
  pcVar31 = (char *)((int)param_4 + (param_5 - (int)local_88));
  *param_3 = local_98;
  param_3[1] = local_a4;
LAB_017bc364:
  uVar16 = uVar16 ^ DAT_018ddaf8;
  if (uVar16 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(pcVar31,puVar11,uVar16,0);
  }
  return;
}

