// FUN_017bff9c @ 017bff9c size=1040 calls_out=0 calls_in=3
// strings: 

char * FUN_017bff9c(int param_1,uint *param_2,uint *param_3,int *param_4)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char *pcVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
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
  uVar16 = (int)param_2 - iVar22;
  iVar13 = -*(int *)(param_1 + 0xc0);
  uVar17 = iVar13 + 0x40;
  iVar20 = *(int *)(param_1 + 100);
  uVar15 = 1 << (*(uint *)(param_1 + 0xbc) & 0xff);
  uVar12 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  puVar11 = *(uint **)(param_1 + 0x10);
  uVar21 = uVar15 - 1;
  bVar25 = uVar12 < uVar16 - (int)puVar11;
  puVar14 = param_2;
  if (bVar25) {
    puVar14 = (uint *)(uVar16 - uVar12);
  }
  puVar7 = puVar11;
  if (bVar25) {
    puVar7 = puVar14;
  }
  iVar23 = *(int *)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar7 = puVar11;
  }
  uVar12 = *(uint *)(param_1 + 0x1c);
  if (uVar15 < uVar16) {
    puVar14 = (uint *)(uVar16 - uVar15);
  }
  else {
    puVar14 = (uint *)0x0;
  }
  uVar15 = *(uint *)(param_1 + 0xc4);
  if (uVar12 < uVar16) {
    local_30 = 0x20 - uVar17;
    lVar2 = (ulonglong)*(uint *)(iVar22 + uVar12) * 0xbf9b0000;
    uVar8 = *(int *)(iVar22 + uVar12 + 4) * -0x40650000 + *(uint *)(iVar22 + uVar12) * -0x30e44324 +
            (int)((ulonglong)lVar2 >> 0x20);
    iVar18 = *(int *)(param_1 + 0xdc);
    uVar8 = (uint)lVar2 >> (uVar17 & 0xff) | uVar8 << (local_30 & 0xff) |
            uVar8 >> (iVar13 + 0x20U & 0xff);
    *(undefined4 *)(iVar20 + (uVar21 & uVar12) * 4) = *(undefined4 *)(iVar23 + uVar8 * 4);
    *(uint *)(iVar23 + uVar8 * 4) = uVar12;
    if ((iVar18 == 0) && (uVar12 = uVar12 + 1, uVar12 < uVar16)) {
      do {
        lVar2 = (ulonglong)*(uint *)(iVar22 + uVar12) * 0xbf9b0000;
        uVar8 = *(int *)(iVar22 + uVar12 + 4) * -0x40650000 +
                *(uint *)(iVar22 + uVar12) * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20);
        uVar8 = (uint)lVar2 >> (uVar17 & 0xff) | uVar8 << (local_30 & 0xff) |
                uVar8 >> (iVar13 + 0x20U & 0xff);
        *(undefined4 *)(iVar20 + (uVar21 & uVar12) * 4) = *(undefined4 *)(iVar23 + uVar8 * 4);
        *(uint *)(iVar23 + uVar8 * 4) = uVar12;
        uVar12 = uVar12 + 1;
      } while (uVar16 != uVar12);
    }
  }
  else {
    local_30 = 0x20 - uVar17;
  }
  local_2c = (uint *)(iVar13 + 0x20);
  *(uint *)(param_1 + 0x1c) = uVar16;
  lVar2 = (ulonglong)*param_2 * 0xbf9b0000;
  uVar12 = param_2[1] * -0x40650000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20);
  puVar11 = *(uint **)(iVar23 + ((uint)lVar2 >> (uVar17 & 0xff) | uVar12 << (local_30 & 0xff) |
                                uVar12 >> ((uint)local_2c & 0xff)) * 4);
  if (puVar11 < puVar7) {
    pcVar6 = (char *)0x3;
  }
  else {
    pcVar6 = (char *)0x3;
    iVar13 = 1 << (uVar15 & 0xff);
    puVar19 = (uint *)((int)param_3 + -3);
    puVar9 = param_2 + 1;
    do {
      puVar10 = (uint *)(iVar22 + (int)puVar11);
      if (*(int *)((int)puVar10 + (int)(pcVar6 + -3)) == *(int *)((int)param_2 + (int)(pcVar6 + -3))
         ) {
        if (param_2 < puVar19) {
          if (*puVar10 == *param_2) {
            puVar10 = puVar10 + 1;
            local_2c = puVar9;
            if (puVar9 < puVar19) {
              do {
                if (*puVar10 != *local_2c) {
                  uVar15 = *puVar10 ^ *local_2c;
                  bVar3 = (byte)uVar15;
                  bVar4 = (byte)(uVar15 >> 8);
                  bVar5 = (byte)(uVar15 >> 0x10);
                  bVar1 = (byte)(uVar15 >> 0x18);
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
                  goto LAB_017c0200;
                }
                local_2c = local_2c + 1;
                puVar10 = puVar10 + 1;
              } while (local_2c < puVar19);
            }
            if ((local_2c < (uint *)((int)param_3 + -1)) && ((short)*puVar10 == (short)*local_2c))
            goto LAB_017c0348;
LAB_017c0354:
            if (local_2c < param_3) goto LAB_017c01c0;
            goto LAB_017c01d4;
          }
          uVar15 = *param_2 ^ *puVar10;
          bVar3 = (byte)uVar15;
          bVar4 = (byte)(uVar15 >> 8);
          bVar5 = (byte)(uVar15 >> 0x10);
          bVar1 = (byte)(uVar15 >> 0x18);
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
            if (*(short *)(iVar22 + (int)puVar11) == (short)*param_2) {
LAB_017c0348:
              puVar10 = (uint *)((int)puVar10 + 2);
              local_2c = (uint *)((int)local_2c + 2);
              goto LAB_017c0354;
            }
            if (param_3 <= param_2) goto LAB_017c0144;
LAB_017c01c0:
            if ((char)*puVar10 != (char)*local_2c) goto LAB_017c01d4;
          }
          else if ((param_3 <= param_2) || ((char)*puVar10 != (char)*param_2)) goto LAB_017c0144;
          local_2c = (uint *)((int)local_2c + 1);
LAB_017c01d4:
          pcVar24 = (char *)((int)local_2c - (int)param_2);
        }
LAB_017c0200:
        if (pcVar6 < pcVar24) {
          *param_4 = (uVar16 + 3) - (int)puVar11;
          pcVar6 = pcVar24;
          if (param_3 == (uint *)((int)param_2 + (int)pcVar24)) {
            return pcVar24;
          }
        }
      }
LAB_017c0144:
      if (puVar11 <= puVar14) {
        return pcVar6;
      }
      iVar13 = iVar13 + -1;
      puVar11 = *(uint **)(iVar20 + ((uint)puVar11 & uVar21) * 4);
    } while (puVar7 <= puVar11 && iVar13 != 0);
  }
  return pcVar6;
}

