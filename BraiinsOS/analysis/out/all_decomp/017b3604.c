// FUN_017b3604 @ 017b3604 size=2768 calls_out=2 calls_in=1
// strings: 

void FUN_017b3604(int param_1,uint *param_2,undefined4 *param_3,uint *param_4,int param_5)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint *puVar17;
  char *pcVar18;
  char *pcVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  undefined4 *puVar23;
  uint uVar24;
  uint uVar25;
  char *pcVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  uint *puVar30;
  uint *puVar31;
  uint *puVar32;
  bool bVar33;
  bool bVar34;
  char *local_90;
  uint local_8c;
  uint *local_80;
  char *local_78;
  char *local_68;
  uint *local_64;
  int local_5c;
  uint *local_54;
  uint *local_50;
  char *local_4c;
  
  uVar9 = DAT_018ddaf8;
  iVar29 = *(int *)(param_1 + 4);
  pcVar26 = (char *)(1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  pcVar18 = *(char **)(param_1 + 0xc);
  uVar25 = *(int *)(param_1 + 0xcc) + 1;
  if (*(int *)(param_1 + 0xcc) == 0) {
    uVar25 = 2;
  }
  if (pcVar26 < (char *)((int)param_4 + ((param_5 - iVar29) - (int)pcVar18))) {
    local_4c = (char *)((int)param_4 + ((param_5 - iVar29) - (int)pcVar26));
  }
  else {
    local_4c = pcVar18;
  }
  puVar30 = (uint *)((int)param_4 + param_5);
  pcVar12 = (char *)*param_3;
  local_90 = (char *)param_3[1];
  puVar13 = puVar30 + -2;
  local_54 = param_4;
  local_68 = pcVar12;
  local_64 = param_4;
  if (*(int *)(param_1 + 0x18) == 0) {
    local_80 = (uint *)(local_4c + iVar29);
    if (param_4 == local_80) {
      local_54 = (uint *)((int)param_4 + 1);
    }
    local_5c = (int)local_54 - iVar29;
    pcVar19 = (char *)(local_5c - (int)pcVar18);
    if (pcVar26 <= (char *)(local_5c - (int)pcVar18)) {
      pcVar19 = pcVar26;
    }
    if (local_90 <= pcVar19) goto LAB_017b3768;
LAB_017b36f4:
    puVar31 = (uint *)((int)local_54 + uVar25);
    puVar32 = (uint *)((int)puVar31 + 1);
    if (pcVar12 <= pcVar19) {
      if (puVar32 < puVar13) {
        pcVar12 = (char *)0x0;
        local_78 = (char *)0x0;
        local_8c = 0;
        goto LAB_017b3794;
      }
      *param_3 = pcVar12;
      goto LAB_017b3ee0;
    }
    if (puVar13 <= puVar32) goto LAB_017b3ee0;
    local_78 = (char *)0x0;
  }
  else {
    local_80 = (uint *)(pcVar18 + iVar29);
    if (param_4 == local_80) {
      local_54 = (uint *)((int)param_4 + 1);
    }
    local_5c = (int)local_54 - iVar29;
    pcVar19 = (char *)(local_5c - (int)pcVar18);
    param_4 = local_80;
    local_4c = pcVar18;
    if (pcVar19 < local_90) goto LAB_017b36f4;
LAB_017b3768:
    puVar31 = (uint *)((int)local_54 + uVar25);
    puVar32 = (uint *)((int)puVar31 + 1);
    local_78 = local_90;
    if (pcVar12 <= pcVar19) {
      if (puVar32 < puVar13) {
        pcVar12 = (char *)0x0;
        local_90 = (char *)0x0;
        local_8c = 0;
        goto LAB_017b3794;
      }
      local_54 = (uint *)pcVar12;
      if (pcVar12 != (char *)0x0) {
        local_54 = (uint *)0x1;
      }
      local_90 = (char *)0x0;
      pcVar12 = (char *)0x0;
      goto LAB_017b3fa0;
    }
    if (puVar13 <= puVar32) {
      pcVar12 = (char *)0x0;
      goto LAB_017b3ecc;
    }
    local_90 = (char *)0x0;
  }
  local_8c = (uint)(pcVar12 != (char *)0x0);
  local_68 = (char *)0x0;
LAB_017b3794:
  iVar28 = *(int *)(param_1 + 0x5c);
  puVar20 = (uint *)(0x20 - *(int *)(param_1 + 0xc0));
  puVar21 = (uint *)((int)puVar30 + -3);
  do {
    local_50 = local_54 + 0x20;
    uVar27 = *local_54 * -0x61c8864f >> ((uint)puVar20 & 0xff);
    uVar11 = (uint)(*(int *)((int)local_54 + 1) * -0x61c8864f) >> ((uint)puVar20 & 0xff);
    pcVar18 = *(char **)(iVar28 + uVar27 * 4);
    pcVar26 = local_68;
    if (local_68 != (char *)0x0) {
      pcVar26 = (char *)0x1;
    }
    iVar5 = -(int)local_68;
    puVar15 = (uint *)((int)local_54 + 1);
    uVar16 = uVar25;
    while( true ) {
      uVar14 = *(uint *)((int)puVar31 + iVar5);
      *(int *)(iVar28 + uVar27 * 4) = local_5c;
      if (uVar14 == *puVar31) {
        uVar27 = (uint)pcVar26 & 1;
      }
      else {
        uVar27 = 0;
      }
      if (uVar27 != 0) {
        cVar1 = *(char *)((int)puVar31 - 1);
        pcVar26 = (char *)0x1;
        cVar2 = *(char *)((int)puVar31 + iVar5 + -1);
        *(int *)(iVar28 + uVar11 * 4) = (int)puVar15 - iVar29;
        uVar27 = (uint)(cVar1 == cVar2);
        iVar10 = uVar27 + 4;
        puVar32 = (uint *)((int)puVar31 + (iVar5 - uVar27));
        local_54 = (uint *)((int)puVar31 - uVar27);
        goto LAB_017b3944;
      }
      if (pcVar18 < local_4c) {
        uVar27 = *local_54 ^ 1;
      }
      else {
        uVar27 = *(uint *)(pcVar18 + iVar29);
      }
      iVar10 = (int)puVar15 - iVar29;
      if (uVar27 == *local_54) {
        *(int *)(iVar28 + uVar11 * 4) = iVar10;
        goto LAB_017b3df4;
      }
      uVar27 = *puVar31 * -0x61c8864f >> ((uint)puVar20 & 0xff);
      pcVar18 = *(char **)(iVar28 + uVar11 * 4);
      *(int *)(iVar28 + uVar11 * 4) = iVar10;
      if (pcVar18 < local_4c) {
        uVar11 = *puVar15 ^ 1;
      }
      else {
        uVar11 = *(uint *)(pcVar18 + iVar29);
      }
      if (uVar11 == *puVar15) break;
      puVar22 = (uint *)((int)puVar31 + uVar16);
      param_4 = (uint *)((int)puVar32 + uVar16);
      uVar11 = *puVar32 * -0x61c8864f >> ((uint)puVar20 & 0xff);
      pcVar18 = *(char **)(iVar28 + uVar27 * 4);
      if (local_50 <= puVar22) {
        uVar16 = uVar16 + 1;
        HintPreloadData(puVar32 + 0x10);
        HintPreloadData(puVar32 + 0x20);
        local_50 = local_50 + 0x20;
      }
      if (puVar13 <= param_4) {
        local_54 = (uint *)pcVar26;
        goto LAB_017b3ebc;
      }
      local_5c = (int)puVar31 - iVar29;
      puVar15 = puVar32;
      local_54 = puVar31;
      puVar31 = puVar22;
      puVar32 = param_4;
    }
    if (uVar16 < 5) {
      *(int *)(iVar28 + uVar27 * 4) = (int)puVar31 - iVar29;
    }
    local_5c = iVar10;
    local_54 = puVar15;
LAB_017b3df4:
    puVar32 = (uint *)(pcVar18 + iVar29);
    pcVar18 = (char *)((int)local_54 - (int)puVar32);
    pcVar26 = pcVar18 + 3;
    bVar34 = local_80 <= puVar32;
    bVar33 = puVar32 == local_80;
    if (bVar34 && !bVar33) {
      bVar34 = local_64 <= local_54;
      bVar33 = local_54 == local_64;
    }
    if (!bVar34 || bVar33) {
      iVar10 = 4;
      local_78 = local_68;
      local_68 = pcVar18;
    }
    else {
      iVar10 = 4;
      puVar31 = local_54;
      puVar15 = puVar32;
      do {
        puVar32 = (uint *)((int)puVar15 + -1);
        local_54 = (uint *)((int)puVar31 + -1);
        if (*(char *)local_54 != *(char *)puVar32) {
          local_78 = local_68;
          puVar32 = puVar15;
          local_68 = pcVar18;
          local_54 = puVar31;
          goto LAB_017b3944;
        }
        iVar10 = iVar10 + 1;
        puVar31 = local_54;
        puVar15 = puVar32;
      } while (local_64 < local_54 && local_80 < puVar32);
      local_78 = local_68;
      local_68 = pcVar18;
    }
LAB_017b3944:
    puVar22 = (uint *)((int)local_54 + iVar10);
    puVar15 = (uint *)((int)puVar32 + iVar10);
    puVar31 = puVar22;
    if (puVar22 < puVar21) {
      if (*(uint *)((int)puVar32 + iVar10) == *(uint *)((int)local_54 + iVar10)) {
        do {
          puVar31 = puVar31 + 1;
          puVar15 = puVar15 + 1;
          if (puVar21 <= puVar31) goto LAB_017b3c84;
        } while (*puVar15 == *puVar31);
        uVar27 = *puVar15 ^ *puVar31;
        bVar6 = (byte)uVar27;
        bVar7 = (byte)(uVar27 >> 8);
        bVar8 = (byte)(uVar27 >> 0x10);
        bVar3 = (byte)(uVar27 >> 0x18);
        pcVar18 = (char *)((int)puVar31 +
                          (((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                           | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                          << 1 | bVar6 >> 4 & 1) << 1 |
                                                        bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1
                                                      | bVar6 >> 7) << 0x18 |
                                          (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1
                                                           | bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1)
                                                          << 1 | bVar7 >> 4 & 1) << 1 |
                                                        bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1
                                                      | bVar7 >> 7) << 0x10 |
                                          (uint)(byte)((((((((bVar8 & 1) << 1 | bVar8 >> 1 & 1) << 1
                                                           | bVar8 >> 2 & 1) << 1 | bVar8 >> 3 & 1)
                                                          << 1 | bVar8 >> 4 & 1) << 1 |
                                                        bVar8 >> 5 & 1) << 1 | bVar8 >> 6 & 1) << 1
                                                      | bVar8 >> 7) << 8 |
                                          (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1
                                                           | bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1)
                                                          << 1 | bVar3 >> 4 & 1) << 1 |
                                                        bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1
                                                      | bVar3 >> 7)) >> 3) - (int)puVar22));
      }
      else {
        uVar27 = *(uint *)((int)puVar32 + iVar10) ^ *(uint *)((int)local_54 + iVar10);
        bVar6 = (byte)uVar27;
        bVar7 = (byte)(uVar27 >> 8);
        bVar8 = (byte)(uVar27 >> 0x10);
        bVar3 = (byte)(uVar27 >> 0x18);
        pcVar18 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
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
    }
    else {
LAB_017b3c84:
      if (puVar31 < (uint *)((int)puVar30 + -1)) {
        if ((short)*puVar15 == (short)*puVar31) {
          puVar15 = (uint *)((int)puVar15 + 2);
          puVar31 = (uint *)((int)puVar31 + 2);
        }
      }
      if ((puVar31 < puVar30) && ((char)*puVar15 == (char)*puVar31)) {
        puVar31 = (uint *)((int)puVar31 + 1);
      }
      pcVar18 = (char *)((int)puVar31 - (int)puVar22);
    }
    pcVar18 = pcVar18 + iVar10;
    puVar31 = puVar30 + -8;
    puVar32 = (uint *)param_2[3];
    uVar27 = (int)local_54 - (int)local_64;
    if (puVar31 < local_54) {
      FUN_017b3404(puVar32,local_64,local_54,puVar31);
LAB_017b3dac:
      param_2[3] = param_2[3] + uVar27;
      puVar23 = (undefined4 *)param_2[1];
      if (0xffff < uVar27) {
        param_2[10] = (int)((int)puVar23 - *param_2) >> 3;
        param_2[9] = 1;
      }
    }
    else {
      uVar11 = *local_64;
      uVar16 = local_64[1];
      uVar14 = local_64[2];
      puVar32[3] = local_64[3];
      *puVar32 = uVar11;
      puVar32[1] = uVar16;
      puVar32[2] = uVar14;
      uVar11 = param_2[3];
      if (0x10 < uVar27) {
        uVar16 = local_64[5];
        uVar14 = local_64[6];
        uVar24 = local_64[7];
        *(uint *)(uVar11 + 0x10) = local_64[4];
        *(uint *)(uVar11 + 0x14) = uVar16;
        *(uint *)(uVar11 + 0x18) = uVar14;
        *(uint *)(uVar11 + 0x1c) = uVar24;
        if (0x10 < (int)(uVar27 - 0x10)) {
          puVar32 = (uint *)(uVar11 + 0x20);
          puVar15 = local_64 + 0x10;
          do {
            uVar16 = puVar15[-7];
            uVar14 = puVar15[-6];
            puVar22 = puVar32 + 8;
            uVar24 = puVar15[-5];
            *puVar32 = puVar15[-8];
            puVar32[1] = uVar16;
            puVar32[2] = uVar14;
            puVar32[3] = uVar24;
            uVar16 = puVar15[-3];
            uVar14 = puVar15[-2];
            uVar24 = puVar15[-1];
            puVar32[4] = puVar15[-4];
            puVar32[5] = uVar16;
            puVar32[6] = uVar14;
            puVar32[7] = uVar24;
            puVar32 = puVar22;
            puVar15 = puVar15 + 8;
          } while (puVar22 < (uint *)(uVar11 + uVar27));
        }
        goto LAB_017b3dac;
      }
      param_2[3] = uVar11 + uVar27;
      puVar23 = (undefined4 *)param_2[1];
    }
    *(short *)(puVar23 + 1) = (short)uVar27;
    *puVar23 = pcVar26;
    if ((char *)0xffff < pcVar18 + -3) {
      param_2[10] = (int)((int)puVar23 - *param_2) >> 3;
      param_2[9] = 2;
    }
    *(short *)((int)puVar23 + 6) = (short)(pcVar18 + -3);
    param_2[1] = (uint)(puVar23 + 2);
    local_54 = (uint *)((int)local_54 + (int)pcVar18);
    param_4 = local_54;
    if (local_54 <= puVar13) {
      param_4 = (uint *)((uint)(*(int *)(iVar29 + local_5c + 2) * -0x61c8864f) >>
                        ((uint)puVar20 & 0xff));
      *(int *)(iVar28 + (int)param_4 * 4) = local_5c + 2;
      puVar32 = puVar20;
      if (local_78 != (char *)0x0) {
        puVar32 = local_54;
      }
      *(int *)(iVar28 + ((uint)(*(int *)((int)local_54 + -2) * -0x61c8864f) >>
                        ((uint)puVar20 & 0xff)) * 4) = ((int)local_54 + -2) - iVar29;
      if (local_78 != (char *)0x0) {
        while( true ) {
          pcVar18 = local_68;
          pcVar26 = local_78;
          if (*puVar32 != *(uint *)((int)puVar32 - (int)local_78)) break;
          puVar22 = puVar32 + 1;
          puVar15 = (uint *)((int)puVar32 + (4 - (int)local_78));
          if (puVar22 < puVar21) {
            uVar27 = *(uint *)((int)puVar32 + (4 - (int)local_78));
            if (uVar27 == puVar32[1]) {
              for (puVar17 = puVar32 + 2; puVar15 = puVar15 + 1, puVar17 < puVar21;
                  puVar17 = puVar17 + 1) {
                if (*puVar15 != *puVar17) {
                  uVar27 = *puVar15 ^ *puVar17;
                  bVar6 = (byte)uVar27;
                  bVar7 = (byte)(uVar27 >> 8);
                  bVar8 = (byte)(uVar27 >> 0x10);
                  bVar3 = (byte)(uVar27 >> 0x18);
                  pcVar19 = (char *)((int)puVar17 +
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
                                    (int)puVar22));
                  goto LAB_017b3b90;
                }
              }
              goto LAB_017b3b40;
            }
            uVar27 = uVar27 ^ puVar32[1];
            bVar6 = (byte)uVar27;
            bVar7 = (byte)(uVar27 >> 8);
            bVar8 = (byte)(uVar27 >> 0x10);
            bVar3 = (byte)(uVar27 >> 0x18);
            pcVar19 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
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
          else {
            puVar17 = puVar22;
LAB_017b3b40:
            if (puVar17 < (uint *)((int)puVar30 + -1)) {
              if ((short)*puVar15 == (short)*puVar17) {
                puVar15 = (uint *)((int)puVar15 + 2);
                puVar17 = (uint *)((int)puVar17 + 2);
              }
            }
            if ((puVar17 < puVar30) && ((char)*puVar15 == (char)*puVar17)) {
              puVar17 = (uint *)((int)puVar17 + 1);
            }
            pcVar19 = (char *)((int)puVar17 - (int)puVar22);
          }
LAB_017b3b90:
          local_54 = (uint *)((int)puVar32 + (int)(pcVar19 + 4));
          *(int *)(iVar28 + (*puVar32 * -0x61c8864f >> ((uint)puVar20 & 0xff)) * 4) =
               (int)puVar32 - iVar29;
          puVar15 = (uint *)param_2[3];
          if (puVar31 < puVar32) {
            FUN_017b3404(puVar15,puVar32,puVar32,puVar31);
          }
          else {
            uVar27 = puVar32[1];
            uVar11 = puVar32[2];
            uVar16 = puVar32[3];
            *puVar15 = *puVar32;
            puVar15[1] = uVar27;
            puVar15[2] = uVar11;
            puVar15[3] = uVar16;
          }
          puVar23 = (undefined4 *)param_2[1];
          *(undefined2 *)(puVar23 + 1) = 0;
          *puVar23 = 1;
          uVar4 = SUB42(pcVar19 + 1,0);
          if (pcVar19 + 1 < (char *)0x10000) {
            *(undefined2 *)((int)puVar23 + 6) = uVar4;
            param_2[1] = (uint)(puVar23 + 2);
          }
          else {
            param_2[10] = (int)((int)puVar23 - *param_2) >> 3;
            param_2[9] = 2;
            *(undefined2 *)((int)puVar23 + 6) = uVar4;
            param_2[1] = (uint)(puVar23 + 2);
          }
          param_4 = param_2;
          if (puVar13 < local_54) {
            local_68 = local_78;
            local_78 = pcVar18;
            goto LAB_017b3a94;
          }
          local_78 = local_68;
          local_68 = pcVar26;
          puVar32 = local_54;
        }
        local_54 = puVar32;
      }
    }
LAB_017b3a94:
    puVar31 = (uint *)((int)local_54 + uVar25);
    puVar32 = (uint *)((int)puVar31 + 1);
    if (puVar13 <= puVar32) break;
    local_5c = (int)local_54 - iVar29;
    local_64 = local_54;
  } while( true );
  local_64 = local_54;
  local_54 = (uint *)local_68;
  if (local_68 != (char *)0x0) {
    local_54 = (uint *)0x1;
  }
LAB_017b3ebc:
  if ((local_8c & (uint)local_54) == 0) {
LAB_017b3fa0:
    if (local_54 == (uint *)0x0) {
      local_68 = pcVar12;
    }
    pcVar12 = local_90;
  }
LAB_017b3ecc:
  local_90 = pcVar12;
  if (local_78 != (char *)0x0) {
    local_90 = local_78;
  }
  *param_3 = local_68;
LAB_017b3ee0:
  param_3[1] = local_90;
  if ((uVar9 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)puVar30 - (int)local_64,param_4,uVar9 ^ DAT_018ddaf8,0);
  }
  return;
}

