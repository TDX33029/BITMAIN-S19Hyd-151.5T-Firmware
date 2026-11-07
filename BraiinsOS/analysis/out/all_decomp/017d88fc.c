// FUN_017d88fc @ 017d88fc size=1488 calls_out=1 calls_in=1
// strings: 

void FUN_017d88fc(int param_1,int param_2,int param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  uint *puVar9;
  int iVar10;
  int unaff_r4;
  int iVar11;
  uint *puVar12;
  undefined4 uVar13;
  uint unaff_r5;
  uint uVar14;
  uint *puVar15;
  int unaff_r6;
  uint *puVar16;
  int unaff_r7;
  uint *puVar17;
  int unaff_r8;
  char *pcVar18;
  undefined4 unaff_r9;
  int unaff_r10;
  int unaff_r11;
  int in_r12;
  int iVar19;
  uint *puVar20;
  uint unaff_lr;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  
  uVar21 = unaff_lr ^ *(uint *)(unaff_r8 + unaff_r10 * 0x20);
  uVar14 = (uint)*(byte *)(unaff_r8 + unaff_r10 * 0x20);
  uVar22 = uVar14 & 0x1f;
  uVar21 = ~(unaff_r4 * (((uVar21 | param_4) - in_r12 | uVar21) & param_4) >> 0x1c |
            (unaff_r4 * (((unaff_r5 | param_4) - in_r12 | unaff_r5) & param_4) >> 0x1c |
            ((uint)(unaff_r4 * param_3) >> 0x1c | param_2 << 4) << 4) << 4);
  uVar21 = uVar21 >> uVar22 | uVar21 << 0x20 - uVar22;
  if (uVar21 == 0) {
    pcVar8 = (char *)0x0;
    iVar11 = 0;
  }
  else {
    uVar6 = *(uint *)(unaff_r11 + -0x16c);
    *(int *)(unaff_r11 + -0x148) = param_1;
    iVar11 = 0;
    pcVar18 = *(char **)(unaff_r11 + -0x150);
    if (4 < uVar6) {
      uVar6 = 5;
    }
    pcVar5 = *(char **)(unaff_r11 + -0x160);
    *(undefined4 *)(unaff_r11 + -0x144) = unaff_r9;
    iVar10 = 1 << (uVar6 & 0xff);
    do {
      if (uVar21 == 0) {
        iVar7 = 0;
      }
      else {
        bVar2 = (byte)uVar21;
        bVar3 = (byte)(uVar21 >> 8);
        bVar4 = (byte)(uVar21 >> 0x10);
        bVar1 = (byte)(uVar21 >> 0x18);
        iVar7 = LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1)
                                         << 1 | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 |
                                      bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) <<
                        0x18 | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                                bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                              bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                            bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
                        (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1)
                                         << 1 | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                      bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8
                        | (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                           bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                         bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                       bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
      }
      uVar6 = iVar7 + uVar22 & 0x1f;
      if (uVar6 == 0) {
        bVar23 = true;
      }
      else {
        pcVar8 = *(char **)(unaff_r6 + uVar6 * 4);
        if (pcVar8 < pcVar18) break;
        if (pcVar8 < pcVar5) {
          iVar7 = *(int *)(unaff_r11 + -0x13c);
        }
        else {
          iVar7 = *(int *)(unaff_r11 + -0x130);
        }
        HintPreloadData(pcVar8 + iVar7);
        iVar7 = iVar11 * 4;
        iVar11 = iVar11 + 1;
        *(char **)(unaff_r11 + iVar7 + -0x128) = pcVar8;
        bVar23 = iVar10 != 1;
        iVar10 = iVar10 + -1;
      }
      uVar21 = uVar21 & uVar21 - 1;
      if (uVar21 == 0) {
        bVar23 = false;
      }
      pcVar8 = (char *)0x0;
    } while (bVar23);
    unaff_r9 = *(undefined4 *)(unaff_r11 + -0x144);
    param_1 = *(int *)(unaff_r11 + -0x148);
  }
  uVar21 = uVar14 - 1 & 0x1f;
  if (uVar21 == 0) {
    uVar21 = 0x1f;
  }
  *(char *)(*(int *)(unaff_r11 + -0x140) + unaff_r10 * 0x20) = (char)uVar21;
  *(char *)(unaff_r7 + uVar21) = (char)unaff_r9;
  iVar10 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar10 + 1;
  *(int *)(unaff_r6 + uVar21 * 4) = iVar10;
  if (iVar11 == 0) {
    pcVar18 = (char *)0x3;
  }
  else {
    puVar15 = (uint *)(unaff_r11 + -300);
    uVar21 = *(uint *)(unaff_r11 + -0x160);
    iVar10 = *(int *)(unaff_r11 + -0x13c);
    *(int *)(unaff_r11 + -0x148) = *(int *)(unaff_r11 + -0x138) + 3;
    iVar7 = 0;
    *(uint *)(unaff_r11 + -0x14c) = *(int *)(unaff_r11 + -0x130) + uVar21;
    *(uint *)(unaff_r11 + -0x13c) = iVar10 + uVar21;
    *(int *)(unaff_r11 + -0x140) = *(int *)(unaff_r11 + -0x134) + -3;
    puVar9 = *(uint **)(unaff_r11 + -0x15c);
    *(int *)(unaff_r11 + -0x150) = *(int *)(unaff_r11 + -0x134) + -1;
    *(uint **)(unaff_r11 + -0x138) = puVar9 + 1;
    pcVar5 = (char *)0x3;
    do {
      puVar15 = puVar15 + 1;
      uVar14 = *puVar15;
      if (uVar14 < uVar21) {
        iVar19 = iVar10 + uVar14;
        pcVar8 = (char *)*puVar9;
        if (*(char **)(iVar10 + uVar14) == (char *)*puVar9) {
          puVar12 = (uint *)(iVar19 + 4);
          puVar16 = *(uint **)(unaff_r11 + -0x138);
          pcVar8 = (char *)((int)puVar16 + (*(int *)(unaff_r11 + -0x13c) - (int)puVar12));
          if (*(char **)(unaff_r11 + -0x134) < pcVar8) {
            pcVar8 = *(char **)(unaff_r11 + -0x134);
          }
          *(char **)(unaff_r11 + -0x144) = pcVar8;
          puVar17 = (uint *)(pcVar8 + -3);
          if (puVar16 < puVar17) {
            if (*(uint *)(iVar19 + 4) == puVar9[1]) {
              puVar16 = puVar9 + 2;
              puVar20 = (uint *)(iVar19 + 8);
              if (puVar16 < puVar17) {
                *(uint **)(unaff_r11 + -0x158) = puVar17;
                do {
                  if (*puVar20 != *puVar16) {
                    uVar22 = *puVar20 ^ *puVar16;
                    bVar2 = (byte)uVar22;
                    bVar3 = (byte)(uVar22 >> 8);
                    bVar4 = (byte)(uVar22 >> 0x10);
                    bVar1 = (byte)(uVar22 >> 0x18);
                    pcVar18 = (char *)((int)puVar16 +
                                      (((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                        bVar2 >> 1 & 1) << 1 |
                                                                       bVar2 >> 2 & 1) << 1 |
                                                                      bVar2 >> 3 & 1) << 1 |
                                                                     bVar2 >> 4 & 1) << 1 |
                                                                    bVar2 >> 5 & 1) << 1 |
                                                                   bVar2 >> 6 & 1) << 1 | bVar2 >> 7
                                                                  ) << 0x18 |
                                                      (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                        bVar3 >> 1 & 1) << 1 |
                                                                       bVar3 >> 2 & 1) << 1 |
                                                                      bVar3 >> 3 & 1) << 1 |
                                                                     bVar3 >> 4 & 1) << 1 |
                                                                    bVar3 >> 5 & 1) << 1 |
                                                                   bVar3 >> 6 & 1) << 1 | bVar3 >> 7
                                                                  ) << 0x10 |
                                                      (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                        bVar4 >> 1 & 1) << 1 |
                                                                       bVar4 >> 2 & 1) << 1 |
                                                                      bVar4 >> 3 & 1) << 1 |
                                                                     bVar4 >> 4 & 1) << 1 |
                                                                    bVar4 >> 5 & 1) << 1 |
                                                                   bVar4 >> 6 & 1) << 1 | bVar4 >> 7
                                                                  ) << 8 |
                                                      (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3) -
                                      *(int *)(unaff_r11 + -0x138)));
                    goto LAB_017d8b38;
                  }
                  puVar16 = puVar16 + 1;
                  puVar20 = puVar20 + 1;
                } while (puVar16 < *(uint **)(unaff_r11 + -0x158));
              }
              goto LAB_017d8bec;
            }
            uVar22 = puVar9[1] ^ *(uint *)(iVar19 + 4);
            bVar2 = (byte)uVar22;
            bVar3 = (byte)(uVar22 >> 8);
            bVar4 = (byte)(uVar22 >> 0x10);
            bVar1 = (byte)(uVar22 >> 0x18);
            pcVar18 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
                                                               << 1 | bVar2 >> 2 & 1) << 1 |
                                                             bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1)
                                                            << 1 | bVar2 >> 5 & 1) << 1 |
                                                          bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18
                                             | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
                                                                 << 1 | bVar3 >> 2 & 1) << 1 |
                                                               bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1
                                                              ) << 1 | bVar3 >> 5 & 1) << 1 |
                                                            bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                                               0x10 | (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                        bVar4 >> 1 & 1) << 1 |
                                                                       bVar4 >> 2 & 1) << 1 |
                                                                      bVar4 >> 3 & 1) << 1 |
                                                                     bVar4 >> 4 & 1) << 1 |
                                                                    bVar4 >> 5 & 1) << 1 |
                                                                   bVar4 >> 6 & 1) << 1 | bVar4 >> 7
                                                                  ) << 8 |
                                             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                               << 1 | bVar1 >> 2 & 1) << 1 |
                                                             bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                            << 1 | bVar1 >> 5 & 1) << 1 |
                                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
LAB_017d8b38:
            if (*(char **)(unaff_r11 + -0x13c) == (char *)((int)puVar12 + (int)pcVar18))
            goto LAB_017d8c6c;
          }
          else {
            puVar20 = puVar12;
LAB_017d8bec:
            if (puVar16 < (uint *)(*(int *)(unaff_r11 + -0x144) + -1)) {
              uVar22 = *puVar20;
              *(ushort **)(unaff_r11 + -0x164) = (ushort *)((int)puVar20 + 2);
              *(uint *)(unaff_r11 + -0x158) = (uint)(ushort)uVar22;
              *(uint *)(unaff_r11 + -0x15c) = (uint)(ushort)*puVar16;
              *(ushort **)(unaff_r11 + -0x160) = (ushort *)((int)puVar16 + 2);
              bVar23 = *(int *)(unaff_r11 + -0x158) == *(int *)(unaff_r11 + -0x15c);
              if (bVar23) {
                puVar16 = *(uint **)(unaff_r11 + -0x160);
              }
              if (bVar23) {
                puVar20 = *(uint **)(unaff_r11 + -0x164);
              }
            }
            if ((puVar16 < *(uint **)(unaff_r11 + -0x144)) && ((char)*puVar20 == (char)*puVar16)) {
              puVar16 = (uint *)((int)puVar16 + 1);
            }
            pcVar18 = (char *)((int)puVar16 - *(int *)(unaff_r11 + -0x138));
            if (*(char **)(unaff_r11 + -0x13c) == (char *)((int)puVar12 + (int)pcVar18)) {
LAB_017d8c6c:
              puVar16 = (uint *)(pcVar18 + *(int *)(unaff_r11 + -0x138));
              if (puVar16 < *(uint **)(unaff_r11 + -0x140)) {
                if (**(uint **)(unaff_r11 + -0x14c) ==
                    *(uint *)(pcVar18 + *(int *)(unaff_r11 + -0x138))) {
                  puVar12 = puVar16 + 1;
                  puVar17 = (uint *)(*(int *)(unaff_r11 + -0x14c) + 4);
                  *(uint **)(unaff_r11 + -0x144) = puVar17;
                  if (puVar12 < *(uint **)(unaff_r11 + -0x140)) {
                    *(uint *)(unaff_r11 + -0x158) = uVar14;
                    do {
                      uVar22 = *puVar12;
                      uVar6 = *puVar17;
                      *(uint *)(unaff_r11 + -0x144) = uVar22;
                      if (uVar6 != uVar22) {
                        uVar14 = *(uint *)(unaff_r11 + -0x158);
                        uVar6 = uVar6 ^ uVar22;
                        bVar2 = (byte)uVar6;
                        bVar3 = (byte)(uVar6 >> 8);
                        bVar4 = (byte)(uVar6 >> 0x10);
                        bVar1 = (byte)(uVar6 >> 0x18);
                        pcVar8 = (char *)((int)puVar12 +
                                         (((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                           bVar2 >> 1 & 1) << 1 |
                                                                          bVar2 >> 2 & 1) << 1 |
                                                                         bVar2 >> 3 & 1) << 1 |
                                                                        bVar2 >> 4 & 1) << 1 |
                                                                       bVar2 >> 5 & 1) << 1 |
                                                                      bVar2 >> 6 & 1) << 1 |
                                                                     bVar2 >> 7) << 0x18 |
                                                         (uint)(byte)((((((((bVar3 & 1) << 1 |
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
                                                                      bVar4 >> 6 & 1) << 1 |
                                                                     bVar4 >> 7) << 8 |
                                                         (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                           bVar1 >> 1 & 1) << 1 |
                                                                          bVar1 >> 2 & 1) << 1 |
                                                                         bVar1 >> 3 & 1) << 1 |
                                                                        bVar1 >> 4 & 1) << 1 |
                                                                       bVar1 >> 5 & 1) << 1 |
                                                                      bVar1 >> 6 & 1) << 1 |
                                                                     bVar1 >> 7)) >> 3) -
                                         (int)puVar16));
                        goto LAB_017d8e30;
                      }
                      puVar12 = puVar12 + 1;
                      puVar17 = puVar17 + 1;
                    } while (puVar12 < *(uint **)(unaff_r11 + -0x140));
                    uVar14 = *(uint *)(unaff_r11 + -0x158);
                    *(uint **)(unaff_r11 + -0x144) = puVar17;
                  }
                  goto LAB_017d8dd4;
                }
                uVar22 = *(uint *)(pcVar18 + *(int *)(unaff_r11 + -0x138)) ^
                         **(uint **)(unaff_r11 + -0x14c);
                bVar2 = (byte)uVar22;
                bVar3 = (byte)(uVar22 >> 8);
                bVar4 = (byte)(uVar22 >> 0x10);
                bVar1 = (byte)(uVar22 >> 0x18);
                pcVar8 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1
                                                                  ) << 1 | bVar2 >> 2 & 1) << 1 |
                                                                bVar2 >> 3 & 1) << 1 |
                                                               bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1
                                                              ) << 1 | bVar2 >> 6 & 1) << 1 |
                                                            bVar2 >> 7) << 0x18 |
                                                (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1
                                                                  ) << 1 | bVar3 >> 2 & 1) << 1 |
                                                                bVar3 >> 3 & 1) << 1 |
                                                               bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1
                                                              ) << 1 | bVar3 >> 6 & 1) << 1 |
                                                            bVar3 >> 7) << 0x10 |
                                                (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1
                                                                  ) << 1 | bVar4 >> 2 & 1) << 1 |
                                                                bVar4 >> 3 & 1) << 1 |
                                                               bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1
                                                              ) << 1 | bVar4 >> 6 & 1) << 1 |
                                                            bVar4 >> 7) << 8 |
                                                (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1
                                                                  ) << 1 | bVar1 >> 2 & 1) << 1 |
                                                                bVar1 >> 3 & 1) << 1 |
                                                               bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1
                                                              ) << 1 | bVar1 >> 6 & 1) << 1 |
                                                            bVar1 >> 7)) >> 3);
              }
              else {
                *(undefined4 *)(unaff_r11 + -0x144) = *(undefined4 *)(unaff_r11 + -0x14c);
                puVar12 = puVar16;
LAB_017d8dd4:
                if (puVar12 < (uint *)(*(int *)(unaff_r11 + -0x134) + -1)) {
                  *(uint *)(unaff_r11 + -0x158) = (uint)**(ushort **)(unaff_r11 + -0x144);
                  *(ushort **)(unaff_r11 + -0x160) = *(ushort **)(unaff_r11 + -0x144) + 1;
                  uVar22 = *puVar12;
                  *(ushort **)(unaff_r11 + -0x15c) = (ushort *)((int)puVar12 + 2);
                  bVar23 = *(uint *)(unaff_r11 + -0x158) == (uint)(ushort)uVar22;
                  if (bVar23) {
                    puVar12 = *(uint **)(unaff_r11 + -0x15c);
                  }
                  uVar13 = *(undefined4 *)(unaff_r11 + -0x160);
                  if (!bVar23) {
                    uVar13 = *(undefined4 *)(unaff_r11 + -0x144);
                  }
                  *(undefined4 *)(unaff_r11 + -0x144) = uVar13;
                }
                if ((puVar12 < *(uint **)(unaff_r11 + -0x134)) &&
                   (**(char **)(unaff_r11 + -0x144) == (char)*puVar12)) {
                  puVar12 = (uint *)((int)puVar12 + 1);
                }
                pcVar8 = (char *)((int)puVar12 - (int)puVar16);
              }
LAB_017d8e30:
              pcVar18 = pcVar18 + (int)pcVar8;
            }
          }
          pcVar18 = pcVar18 + 4;
          goto LAB_017d8b4c;
        }
      }
      else {
        puVar16 = (uint *)(*(int *)(unaff_r11 + -0x130) + uVar14);
        pcVar8 = *(char **)((int)puVar16 + (int)(pcVar5 + -3));
        if (pcVar8 != *(char **)((int)puVar9 + (int)(pcVar5 + -3))) goto LAB_017d8abc;
        if (puVar9 < *(uint **)(unaff_r11 + -0x140)) {
          uVar22 = *(uint *)(*(int *)(unaff_r11 + -0x130) + uVar14);
          if (uVar22 == *puVar9) {
            puVar12 = puVar9 + 1;
            puVar16 = puVar16 + 1;
            if (puVar12 < *(uint **)(unaff_r11 + -0x140)) {
              do {
                if (*puVar16 != *puVar12) {
                  uVar22 = *puVar16 ^ *puVar12;
                  bVar2 = (byte)uVar22;
                  bVar3 = (byte)(uVar22 >> 8);
                  bVar4 = (byte)(uVar22 >> 0x10);
                  bVar1 = (byte)(uVar22 >> 0x18);
                  pcVar18 = (char *)((int)puVar12 +
                                    (((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                      bVar2 >> 1 & 1) << 1 |
                                                                     bVar2 >> 2 & 1) << 1 |
                                                                    bVar2 >> 3 & 1) << 1 |
                                                                   bVar2 >> 4 & 1) << 1 |
                                                                  bVar2 >> 5 & 1) << 1 |
                                                                 bVar2 >> 6 & 1) << 1 | bVar2 >> 7)
                                                    << 0x18 | (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                                bVar3 >> 1 & 1) << 1
                                                                               | bVar3 >> 2 & 1) <<
                                                                               1 | bVar3 >> 3 & 1)
                                                                              << 1 | bVar3 >> 4 & 1)
                                                                             << 1 | bVar3 >> 5 & 1)
                                                                            << 1 | bVar3 >> 6 & 1)
                                                                           << 1 | bVar3 >> 7) <<
                                                              0x10 |
                                                    (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                      bVar4 >> 1 & 1) << 1 |
                                                                     bVar4 >> 2 & 1) << 1 |
                                                                    bVar4 >> 3 & 1) << 1 |
                                                                   bVar4 >> 4 & 1) << 1 |
                                                                  bVar4 >> 5 & 1) << 1 |
                                                                 bVar4 >> 6 & 1) << 1 | bVar4 >> 7)
                                                    << 8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                             bVar1 >> 1 & 1) << 1 |
                                                                            bVar1 >> 2 & 1) << 1 |
                                                                           bVar1 >> 3 & 1) << 1 |
                                                                          bVar1 >> 4 & 1) << 1 |
                                                                         bVar1 >> 5 & 1) << 1 |
                                                                        bVar1 >> 6 & 1) << 1 |
                                                                       bVar1 >> 7)) >> 3) -
                                    (int)puVar9));
                  goto LAB_017d8b4c;
                }
                puVar12 = puVar12 + 1;
                puVar16 = puVar16 + 1;
              } while (puVar12 < *(uint **)(unaff_r11 + -0x140));
            }
            goto LAB_017d8cec;
          }
          uVar22 = uVar22 ^ *puVar9;
          bVar2 = (byte)uVar22;
          bVar3 = (byte)(uVar22 >> 8);
          bVar4 = (byte)(uVar22 >> 0x10);
          bVar1 = (byte)(uVar22 >> 0x18);
          pcVar18 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) <<
                                                             1 | bVar2 >> 2 & 1) << 1 |
                                                           bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) <<
                                                          1 | bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1)
                                                        << 1 | bVar2 >> 7) << 0x18 |
                                           (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) <<
                                                             1 | bVar3 >> 2 & 1) << 1 |
                                                           bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) <<
                                                          1 | bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1)
                                                        << 1 | bVar3 >> 7) << 0x10 |
                                           (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
                                                             1 | bVar4 >> 2 & 1) << 1 |
                                                           bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) <<
                                                          1 | bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1)
                                                        << 1 | bVar4 >> 7) << 8 |
                                           (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                             1 | bVar1 >> 2 & 1) << 1 |
                                                           bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) <<
                                                          1 | bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1)
                                                        << 1 | bVar1 >> 7)) >> 3);
        }
        else {
          puVar12 = puVar9;
LAB_017d8cec:
          if (puVar12 < *(uint **)(unaff_r11 + -0x150)) {
            uVar22 = *puVar16;
            *(short **)(unaff_r11 + -0x144) = (short *)((int)puVar16 + 2);
            if ((short)uVar22 == (short)*puVar12) {
              puVar12 = (uint *)((int)puVar12 + 2);
              puVar16 = *(uint **)(unaff_r11 + -0x144);
            }
          }
          if ((puVar12 < *(uint **)(unaff_r11 + -0x134)) && ((char)*puVar16 == (char)*puVar12)) {
            puVar12 = (uint *)((int)puVar12 + 1);
          }
          pcVar18 = (char *)((int)puVar12 - (int)puVar9);
        }
LAB_017d8b4c:
        pcVar8 = pcVar18;
        if ((pcVar5 < pcVar18) &&
           (**(int **)(unaff_r11 + -0x154) = *(int *)(unaff_r11 + -0x148) - uVar14, pcVar5 = pcVar18
           , *(char **)(unaff_r11 + -0x134) == (char *)((int)puVar9 + (int)pcVar18))) break;
      }
LAB_017d8abc:
      pcVar18 = pcVar5;
      iVar7 = iVar7 + 1;
      pcVar5 = pcVar18;
    } while (iVar7 != iVar11);
  }
  uVar21 = *(uint *)(unaff_r11 + -0x28) ^ DAT_018ddaf8;
  if (uVar21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(pcVar18,pcVar8,uVar21,0);
  }
  return;
}

