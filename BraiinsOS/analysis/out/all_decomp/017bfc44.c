// FUN_017bfc44 @ 017bfc44 size=856 calls_out=0 calls_in=3
// strings: 

char * FUN_017bfc44(int param_1,uint *param_2,uint *param_3,int *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  uint unaff_r9;
  int iVar18;
  int iVar19;
  uint uVar20;
  bool bVar21;
  uint *local_30;
  
  uVar14 = *(uint *)(param_1 + 0x10);
  iVar9 = *(int *)(param_1 + 4);
  uVar11 = (int)param_2 - iVar9;
  iVar19 = *(int *)(param_1 + 100);
  uVar10 = 1 << (*(uint *)(param_1 + 0xbc) & 0xff);
  uVar5 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  uVar20 = uVar10 - 1;
  bVar21 = uVar5 < uVar11 - uVar14;
  if (bVar21) {
    unaff_r9 = uVar11 - uVar5;
  }
  if (!bVar21) {
    unaff_r9 = uVar14;
  }
  uVar5 = *(uint *)(param_1 + 0xc4);
  if (*(int *)(param_1 + 0x18) != 0) {
    unaff_r9 = uVar14;
  }
  if (uVar10 < uVar11) {
    uVar10 = uVar11 - uVar10;
  }
  else {
    uVar10 = 0;
  }
  uVar14 = *(uint *)(param_1 + 0x1c);
  uVar15 = 0x20 - *(int *)(param_1 + 0xc0);
  iVar6 = *(int *)(param_1 + 0x5c);
  if (uVar14 < uVar11) {
    iVar18 = *(int *)(param_1 + 0xdc);
    uVar12 = (uint)(*(int *)(iVar9 + uVar14) * -0x61c8864f) >> (uVar15 & 0xff);
    *(undefined4 *)(iVar19 + (uVar20 & uVar14) * 4) = *(undefined4 *)(iVar6 + uVar12 * 4);
    *(uint *)(iVar6 + uVar12 * 4) = uVar14;
    if ((iVar18 == 0) && (uVar14 = uVar14 + 1, uVar14 < uVar11)) {
      do {
        uVar12 = (uint)(*(int *)(iVar9 + uVar14) * -0x61c8864f) >> (uVar15 & 0xff);
        *(undefined4 *)(iVar19 + (uVar20 & uVar14) * 4) = *(undefined4 *)(iVar6 + uVar12 * 4);
        *(uint *)(iVar6 + uVar12 * 4) = uVar14;
        uVar14 = uVar14 + 1;
      } while (uVar11 != uVar14);
    }
  }
  *(uint *)(param_1 + 0x1c) = uVar11;
  uVar12 = *param_2;
  uVar14 = *(uint *)(iVar6 + (uVar12 * -0x61c8864f >> (uVar15 & 0xff)) * 4);
  if (uVar14 < unaff_r9) {
    return (char *)0x3;
  }
  iVar6 = 1 << (uVar5 & 0xff);
  puVar17 = (uint *)((int)param_3 + -3);
  puVar7 = param_2 + 1;
  pcVar8 = (char *)0x3;
  do {
    puVar16 = (uint *)(iVar9 + uVar14);
    if (*(uint *)((int)puVar16 + (int)(pcVar8 + -3)) == uVar12) {
      if (param_2 < puVar17) {
        if (*puVar16 == *param_2) {
          puVar16 = puVar16 + 1;
          local_30 = puVar7;
          if (puVar7 < puVar17) {
            do {
              if (*puVar16 != *local_30) {
                uVar5 = *puVar16 ^ *local_30;
                bVar2 = (byte)uVar5;
                bVar3 = (byte)(uVar5 >> 8);
                bVar4 = (byte)(uVar5 >> 0x10);
                bVar1 = (byte)(uVar5 >> 0x18);
                pcVar13 = (char *)((int)local_30 +
                                  (((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                    bVar2 >> 1 & 1) << 1 |
                                                                   bVar2 >> 2 & 1) << 1 |
                                                                  bVar2 >> 3 & 1) << 1 |
                                                                 bVar2 >> 4 & 1) << 1 |
                                                                bVar2 >> 5 & 1) << 1 |
                                                               bVar2 >> 6 & 1) << 1 | bVar2 >> 7) <<
                                                  0x18 | (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                           bVar3 >> 1 & 1) << 1 |
                                                                          bVar3 >> 2 & 1) << 1 |
                                                                         bVar3 >> 3 & 1) << 1 |
                                                                        bVar3 >> 4 & 1) << 1 |
                                                                       bVar3 >> 5 & 1) << 1 |
                                                                      bVar3 >> 6 & 1) << 1 |
                                                                     bVar3 >> 7) << 0x10 |
                                                  (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                    bVar4 >> 1 & 1) << 1 |
                                                                   bVar4 >> 2 & 1) << 1 |
                                                                  bVar4 >> 3 & 1) << 1 |
                                                                 bVar4 >> 4 & 1) << 1 |
                                                                bVar4 >> 5 & 1) << 1 |
                                                               bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                                  8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3) - (int)param_2));
                goto LAB_017bfe24;
              }
              local_30 = local_30 + 1;
              puVar16 = puVar16 + 1;
            } while (local_30 < puVar17);
          }
          if ((local_30 < (uint *)((int)param_3 + -1)) && ((short)*puVar16 == (short)*local_30))
          goto LAB_017bff48;
LAB_017bff54:
          if (local_30 < param_3) goto LAB_017bfde8;
          goto LAB_017bfdf8;
        }
        uVar5 = *puVar16 ^ *param_2;
        bVar2 = (byte)uVar5;
        bVar3 = (byte)(uVar5 >> 8);
        bVar4 = (byte)(uVar5 >> 0x10);
        bVar1 = (byte)(uVar5 >> 0x18);
        pcVar13 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1
                                                          | bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1)
                                                         << 1 | bVar2 >> 4 & 1) << 1 |
                                                       bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 |
                                                     bVar2 >> 7) << 0x18 |
                                         (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1
                                                          | bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1)
                                                         << 1 | bVar3 >> 4 & 1) << 1 |
                                                       bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 |
                                                     bVar3 >> 7) << 0x10 |
                                         (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1
                                                          | bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1)
                                                         << 1 | bVar4 >> 4 & 1) << 1 |
                                                       bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 |
                                                     bVar4 >> 7) << 8 |
                                         (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                          | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                         << 1 | bVar1 >> 4 & 1) << 1 |
                                                       bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 |
                                                     bVar1 >> 7)) >> 3);
      }
      else {
        local_30 = param_2;
        if (param_2 < (uint *)((int)param_3 + -1)) {
          if (*(short *)(iVar9 + uVar14) == (short)*param_2) {
LAB_017bff48:
            puVar16 = (uint *)((int)puVar16 + 2);
            local_30 = (uint *)((int)local_30 + 2);
            goto LAB_017bff54;
          }
          if (param_3 <= param_2) goto LAB_017bfd64;
LAB_017bfde8:
          if ((char)*puVar16 != (char)*local_30) goto LAB_017bfdf8;
        }
        else if ((param_3 <= param_2) || ((char)*puVar16 != (char)*param_2)) goto LAB_017bfd64;
        local_30 = (uint *)((int)local_30 + 1);
LAB_017bfdf8:
        pcVar13 = (char *)((int)local_30 - (int)param_2);
      }
LAB_017bfe24:
      if (pcVar8 < pcVar13) {
        *param_4 = (uVar11 + 3) - uVar14;
        pcVar8 = pcVar13;
        if (param_3 == (uint *)((int)param_2 + (int)pcVar13)) {
          return pcVar13;
        }
      }
    }
LAB_017bfd64:
    if (uVar14 <= uVar10) {
      return pcVar8;
    }
    iVar6 = iVar6 + -1;
    uVar14 = *(uint *)(iVar19 + (uVar14 & uVar20) * 4);
    if (uVar14 < unaff_r9 || iVar6 == 0) {
      return pcVar8;
    }
    uVar12 = *(uint *)((int)param_2 + (int)(pcVar8 + -3));
  } while( true );
}

