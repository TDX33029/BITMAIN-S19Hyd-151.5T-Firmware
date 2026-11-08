// FUN_0181352c @ 0181352c size=1356 calls_out=1 calls_in=1
// strings: 

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0181352c(int param_1,int param_2,uint *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  char *pcVar20;
  uint uVar21;
  uint *puVar22;
  int iVar23;
  undefined4 *puVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  undefined4 *puVar30;
  bool bVar31;
  uint local_8c;
  uint local_88;
  uint local_84;
  int local_5c;
  undefined4 *local_54;
  undefined4 *local_44;
  int local_34;
  undefined4 local_30;
  int local_2c;
  
  uVar21 = *(uint *)(param_1 + 0x1c);
  local_2c = DAT_018ddaf8;
  iVar14 = *(int *)(param_1 + 4);
  uVar28 = param_2 - iVar14;
  if (uVar21 < uVar28) {
    uVar15 = *(undefined4 *)(param_1 + 200);
    iVar16 = *(int *)(param_1 + 0x5c);
    iVar17 = *(int *)(param_1 + 100);
    local_88 = 0xbfa56300;
    local_8c = 0xbf9b0000;
    local_84 = 0xb7a56463;
    do {
      iVar29 = uVar21 + iVar14;
      iVar12 = *(int *)(param_1 + 0xc0);
      switch(uVar15) {
      case 5:
        uVar26 = 0x40 - iVar12;
        iVar23 = *(int *)(iVar29 + 4);
        uVar7 = 0x20 - iVar12;
        uVar10 = *(uint *)(uVar21 + iVar14);
        uVar25 = 0xbb000000;
        iVar6 = uVar10 * -0x30e44324;
        break;
      case 6:
        uVar26 = 0x40 - iVar12;
        iVar23 = *(int *)(iVar29 + 4);
        uVar7 = 0x20 - iVar12;
        uVar10 = *(uint *)(uVar21 + iVar14);
        iVar6 = uVar10 * -0x30e44324;
        uVar25 = local_8c;
        break;
      case 7:
        uVar26 = 0x40 - iVar12;
        iVar23 = *(int *)(iVar29 + 4);
        uVar7 = 0x20 - iVar12;
        uVar10 = *(uint *)(uVar21 + iVar14);
        iVar6 = uVar10 * -0x30e44324;
        uVar25 = local_88;
        break;
      case 8:
        uVar26 = 0x40 - iVar12;
        iVar23 = *(int *)(iVar29 + 4);
        uVar7 = 0x20 - iVar12;
        uVar10 = *(uint *)(uVar21 + iVar14);
        iVar6 = uVar10 * -0x30e44324;
        uVar25 = local_84;
        break;
      default:
        uVar25 = (uint)(*(int *)(uVar21 + iVar14) * -0x61c8864f) >> (0x20U - iVar12 & 0xff);
        goto LAB_0181363c;
      }
      uVar18 = uVar25 * iVar23 + iVar6 + (int)((ulonglong)uVar25 * (ulonglong)uVar10 >> 0x20);
      uVar25 = (uint)((ulonglong)uVar25 * (ulonglong)uVar10) >> (uVar26 & 0xff) |
               uVar18 << (iVar12 - 0x20U & 0xff) | uVar18 >> (uVar7 & 0xff);
LAB_0181363c:
      uVar7 = (1 << (*(int *)(param_1 + 0xbc) - 1U & 0xff)) - 1;
      if (uVar7 < uVar21) {
        puVar8 = (undefined4 *)(uVar21 - uVar7);
      }
      else {
        puVar8 = (undefined4 *)0x0;
      }
      puVar30 = (undefined4 *)(1 << (*(uint *)(param_1 + 0xb8) & 0xff));
      puVar9 = *(undefined4 **)(param_1 + 0x10);
      puVar13 = *(undefined4 **)(iVar16 + uVar25 * 4);
      bVar31 = puVar30 < (undefined4 *)(uVar28 - (int)puVar9);
      if (bVar31) {
        puVar30 = (undefined4 *)(uVar28 - (int)puVar30);
      }
      local_44 = (undefined4 *)(iVar17 + (uVar7 & uVar21) * 8);
      puVar24 = local_44;
      if (bVar31) {
        puVar24 = puVar30;
      }
      if (!bVar31) {
        puVar24 = puVar9;
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        puVar24 = puVar9;
      }
      uVar10 = *(uint *)(param_1 + 0xc4);
      *(uint *)(iVar16 + uVar25 * 4) = uVar21;
      local_5c = uVar21 + 9;
      if (puVar13 < puVar24) {
        uVar25 = 0;
        *(undefined4 *)(iVar17 + (uVar7 & uVar21) * 8) = 0;
        local_44[1] = 0;
      }
      else {
        uVar25 = 0;
        uVar26 = 0;
        local_34 = 1 << (uVar10 & 0xff);
        uVar10 = 8;
        local_54 = local_44 + 1;
        puVar11 = (uint *)((int)param_3 + -3);
        do {
          if (uVar26 < uVar25) {
            uVar18 = uVar26;
          }
          else {
            uVar18 = uVar25;
          }
          puVar19 = (uint *)(iVar29 + uVar18);
          puVar22 = (uint *)((int)puVar13 + uVar18 + iVar14);
          if (puVar19 < puVar11) {
            uVar27 = *(uint *)((int)puVar13 + uVar18 + iVar14);
            if (uVar27 == *(uint *)(iVar29 + uVar18)) {
              puVar5 = puVar19 + 1;
              puVar22 = puVar22 + 1;
              if (puVar5 < puVar11) {
                do {
                  if (*puVar22 != *puVar5) {
                    uVar27 = *puVar22 ^ *puVar5;
                    bVar2 = (byte)uVar27;
                    bVar3 = (byte)(uVar27 >> 8);
                    bVar4 = (byte)(uVar27 >> 0x10);
                    bVar1 = (byte)(uVar27 >> 0x18);
                    pcVar20 = (char *)((int)puVar5 +
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
                                                                  )) >> 3) - (int)puVar19));
                    goto LAB_01813744;
                  }
                  puVar5 = puVar5 + 1;
                  puVar22 = puVar22 + 1;
                } while (puVar5 < puVar11);
              }
              goto LAB_01813814;
            }
            uVar27 = uVar27 ^ *(uint *)(iVar29 + uVar18);
            bVar2 = (byte)uVar27;
            bVar3 = (byte)(uVar27 >> 8);
            bVar4 = (byte)(uVar27 >> 0x10);
            bVar1 = (byte)(uVar27 >> 0x18);
            pcVar20 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
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
          }
          else {
            puVar5 = puVar19;
LAB_01813814:
            if (puVar5 < (uint *)((int)param_3 + -1)) {
              if ((short)*puVar22 == (short)*puVar5) {
                puVar5 = (uint *)((int)puVar5 + 2);
                puVar22 = (uint *)((int)puVar22 + 2);
              }
            }
            if ((puVar5 < param_3) && ((char)*puVar22 == (char)*puVar5)) {
              puVar5 = (uint *)((int)puVar5 + 1);
            }
            pcVar20 = (char *)((int)puVar5 - (int)puVar19);
          }
LAB_01813744:
          uVar18 = uVar18 + (int)pcVar20;
          if ((uVar10 < uVar18) && (uVar10 = uVar18, (uint)(local_5c - (int)puVar13) < uVar18)) {
            local_5c = uVar18 + (int)puVar13;
          }
          if (param_3 == (uint *)(iVar29 + uVar18)) break;
          puVar30 = (undefined4 *)(iVar17 + (uVar7 & (uint)puVar13) * 8);
          if (*(byte *)((int)puVar13 + uVar18 + iVar14) < *(byte *)(iVar29 + uVar18)) {
            *local_44 = puVar13;
            if (puVar13 <= puVar8) {
              local_44 = &local_30;
              break;
            }
            puVar13 = (undefined4 *)puVar30[1];
            local_44 = puVar30 + 1;
            uVar26 = uVar18;
          }
          else {
            *local_54 = puVar13;
            if (puVar13 <= puVar8) {
              local_54 = &local_30;
              break;
            }
            puVar13 = *(undefined4 **)(iVar17 + (uVar7 & (uint)puVar13) * 8);
            uVar25 = uVar18;
            local_54 = puVar30;
          }
          local_34 = local_34 + -1;
        } while (puVar24 <= puVar13 && local_34 != 0);
        *local_54 = 0;
        *local_44 = 0;
        uVar25 = 0;
        if ((0x180 < uVar10) && (uVar25 = uVar10 + -0x180, 0xbf < uVar25)) {
          uVar25 = 0xc0;
        }
      }
      uVar7 = local_5c + (-8 - uVar21);
      if (uVar7 < uVar25) {
        uVar7 = uVar25;
      }
      uVar21 = uVar21 + uVar7;
    } while (uVar21 < uVar28);
  }
  *(uint *)(param_1 + 0x1c) = uVar28;
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

