// FUN_017c03ac @ 017c03ac size=1032 calls_out=0 calls_in=3
// strings: 

char * FUN_017c03ac(int param_1,uint *param_2,uint *param_3,int *param_4)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char *pcVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  char *pcVar24;
  bool bVar25;
  uint local_30;
  uint *local_2c;
  
  iVar22 = *(int *)(param_1 + 4);
  uVar17 = (int)param_2 - iVar22;
  iVar14 = -*(int *)(param_1 + 0xc0);
  uVar18 = iVar14 + 0x40;
  iVar20 = *(int *)(param_1 + 100);
  uVar16 = 1 << (*(uint *)(param_1 + 0xbc) & 0xff);
  uVar13 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  puVar12 = *(uint **)(param_1 + 0x10);
  uVar21 = uVar16 - 1;
  bVar25 = uVar13 < uVar17 - (int)puVar12;
  puVar15 = param_2;
  if (bVar25) {
    puVar15 = (uint *)(uVar17 - uVar13);
  }
  puVar7 = puVar12;
  if (bVar25) {
    puVar7 = puVar15;
  }
  iVar23 = *(int *)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar7 = puVar12;
  }
  uVar13 = *(uint *)(param_1 + 0x1c);
  if (uVar16 < uVar17) {
    puVar15 = (uint *)(uVar17 - uVar16);
  }
  else {
    puVar15 = (uint *)0x0;
  }
  uVar16 = *(uint *)(param_1 + 0xc4);
  if (uVar13 < uVar17) {
    local_30 = 0x20 - uVar18;
    lVar2 = (ulonglong)*(uint *)(iVar22 + uVar13) * 0xbb000000;
    uVar8 = *(int *)(iVar22 + uVar13 + 4) * -0x45000000 + *(uint *)(iVar22 + uVar13) * -0x30e44324 +
            (int)((ulonglong)lVar2 >> 0x20);
    uVar8 = (uint)lVar2 >> (uVar18 & 0xff) | uVar8 << (local_30 & 0xff) |
            uVar8 >> (iVar14 + 0x20U & 0xff);
    iVar9 = *(int *)(param_1 + 0xdc);
    *(undefined4 *)(iVar20 + (uVar21 & uVar13) * 4) = *(undefined4 *)(iVar23 + uVar8 * 4);
    *(uint *)(iVar23 + uVar8 * 4) = uVar13;
    if ((iVar9 == 0) && (uVar13 = uVar13 + 1, uVar13 < uVar17)) {
      do {
        lVar2 = (ulonglong)*(uint *)(iVar22 + uVar13) * 0xbb000000;
        uVar8 = *(int *)(iVar22 + uVar13 + 4) * -0x45000000 +
                *(uint *)(iVar22 + uVar13) * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20);
        uVar8 = (uint)lVar2 >> (uVar18 & 0xff) | uVar8 << (local_30 & 0xff) |
                uVar8 >> (iVar14 + 0x20U & 0xff);
        *(undefined4 *)(iVar20 + (uVar21 & uVar13) * 4) = *(undefined4 *)(iVar23 + uVar8 * 4);
        *(uint *)(iVar23 + uVar8 * 4) = uVar13;
        uVar13 = uVar13 + 1;
      } while (uVar17 != uVar13);
    }
  }
  else {
    local_30 = 0x20 - uVar18;
  }
  local_2c = (uint *)(iVar14 + 0x20);
  *(uint *)(param_1 + 0x1c) = uVar17;
  lVar2 = (ulonglong)*param_2 * 0xbb000000;
  uVar13 = param_2[1] * -0x45000000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20);
  puVar12 = *(uint **)(iVar23 + ((uint)lVar2 >> (uVar18 & 0xff) | uVar13 << (local_30 & 0xff) |
                                uVar13 >> ((uint)local_2c & 0xff)) * 4);
  if (puVar12 < puVar7) {
    pcVar6 = (char *)0x3;
  }
  else {
    pcVar6 = (char *)0x3;
    iVar14 = 1 << (uVar16 & 0xff);
    puVar19 = (uint *)((int)param_3 + -3);
    puVar10 = param_2 + 1;
    do {
      puVar11 = (uint *)(iVar22 + (int)puVar12);
      if (*(int *)((int)puVar11 + (int)(pcVar6 + -3)) == *(int *)((int)param_2 + (int)(pcVar6 + -3))
         ) {
        if (param_2 < puVar19) {
          if (*puVar11 == *param_2) {
            puVar11 = puVar11 + 1;
            local_2c = puVar10;
            if (puVar10 < puVar19) {
              do {
                if (*puVar11 != *local_2c) {
                  uVar16 = *puVar11 ^ *local_2c;
                  bVar3 = (byte)uVar16;
                  bVar4 = (byte)(uVar16 >> 8);
                  bVar5 = (byte)(uVar16 >> 0x10);
                  bVar1 = (byte)(uVar16 >> 0x18);
                  pcVar24 = (char *)((int)local_2c +
                                    (((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                      bVar3 >> 1 & 1) << 1 |
                                                                     bVar3 >> 2 & 1) << 1 |
                                                                    bVar3 >> 3 & 1) << 1 |
                                                                   bVar3 >> 4 & 1) << 1 |
                                                                  bVar3 >> 5 & 1) << 1 |
                                                                 bVar3 >> 6 & 1) << 1 | bVar3 >> 7)
                                                    << 0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                                bVar4 >> 1 & 1) << 1
                                                                               | bVar4 >> 2 & 1) <<
                                                                               1 | bVar4 >> 3 & 1)
                                                                              << 1 | bVar4 >> 4 & 1)
                                                                             << 1 | bVar4 >> 5 & 1)
                                                                            << 1 | bVar4 >> 6 & 1)
                                                                           << 1 | bVar4 >> 7) <<
                                                              0x10 |
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
                                                                       bVar1 >> 7)) >> 3) -
                                    (int)param_2));
                  goto LAB_017c0608;
                }
                local_2c = local_2c + 1;
                puVar11 = puVar11 + 1;
              } while (local_2c < puVar19);
            }
            if ((local_2c < (uint *)((int)param_3 + -1)) && ((short)*puVar11 == (short)*local_2c))
            goto LAB_017c0750;
LAB_017c075c:
            if (local_2c < param_3) goto LAB_017c05c8;
            goto LAB_017c05dc;
          }
          uVar16 = *param_2 ^ *puVar11;
          bVar3 = (byte)uVar16;
          bVar4 = (byte)(uVar16 >> 8);
          bVar5 = (byte)(uVar16 >> 0x10);
          bVar1 = (byte)(uVar16 >> 0x18);
          pcVar24 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) <<
                                                             1 | bVar3 >> 2 & 1) << 1 |
                                                           bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) <<
                                                          1 | bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1)
                                                        << 1 | bVar3 >> 7) << 0x18 |
                                           (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
                                                             1 | bVar4 >> 2 & 1) << 1 |
                                                           bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) <<
                                                          1 | bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1)
                                                        << 1 | bVar4 >> 7) << 0x10 |
                                           (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) <<
                                                             1 | bVar5 >> 2 & 1) << 1 |
                                                           bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) <<
                                                          1 | bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1)
                                                        << 1 | bVar5 >> 7) << 8 |
                                           (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                             1 | bVar1 >> 2 & 1) << 1 |
                                                           bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) <<
                                                          1 | bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1)
                                                        << 1 | bVar1 >> 7)) >> 3);
        }
        else {
          local_2c = param_2;
          if (param_2 < (uint *)((int)param_3 + -1)) {
            if (*(short *)(iVar22 + (int)puVar12) == (short)*param_2) {
LAB_017c0750:
              puVar11 = (uint *)((int)puVar11 + 2);
              local_2c = (uint *)((int)local_2c + 2);
              goto LAB_017c075c;
            }
            if (param_3 <= param_2) goto LAB_017c054c;
LAB_017c05c8:
            if ((char)*puVar11 != (char)*local_2c) goto LAB_017c05dc;
          }
          else if ((param_3 <= param_2) || ((char)*puVar11 != (char)*param_2)) goto LAB_017c054c;
          local_2c = (uint *)((int)local_2c + 1);
LAB_017c05dc:
          pcVar24 = (char *)((int)local_2c - (int)param_2);
        }
LAB_017c0608:
        if (pcVar6 < pcVar24) {
          *param_4 = (uVar17 + 3) - (int)puVar12;
          pcVar6 = pcVar24;
          if (param_3 == (uint *)((int)param_2 + (int)pcVar24)) {
            return pcVar24;
          }
        }
      }
LAB_017c054c:
      if (puVar12 <= puVar15) {
        return pcVar6;
      }
      iVar14 = iVar14 + -1;
      puVar12 = *(uint **)(iVar20 + ((uint)puVar12 & uVar21) * 4);
    } while (puVar7 <= puVar12 && iVar14 != 0);
  }
  return pcVar6;
}

