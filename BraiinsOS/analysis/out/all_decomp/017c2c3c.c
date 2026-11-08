// FUN_017c2c3c @ 017c2c3c size=2208 calls_out=1 calls_in=3
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_017c2c3c(int param_1,uint *param_2,uint *param_3,int *param_4)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  byte *pbVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  int *piVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  uint *puVar31;
  uint uVar32;
  uint *puVar33;
  int iVar34;
  bool bVar35;
  uint local_16c;
  uint local_168;
  uint local_138;
  int iStack_130;
  int local_12c [64];
  uint local_2c;
  
  iVar28 = *(int *)(param_1 + 4);
  iVar26 = *(int *)(param_1 + 0x24);
  uVar32 = (int)param_2 - iVar28;
  local_2c = DAT_018ddaf8;
  iVar12 = *(int *)(param_1 + 0x5c);
  iVar13 = *(int *)(param_1 + 0x28);
  puVar9 = *(uint **)(param_1 + 0x10);
  uVar22 = *(uint *)(param_1 + 0x50);
  puVar7 = (uint *)(1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  puVar6 = (uint *)(uVar32 - (int)puVar9);
  bVar35 = puVar6 <= puVar7;
  if (!bVar35) {
    puVar6 = (uint *)(uVar32 - (int)puVar7);
  }
  if (bVar35) {
    puVar6 = puVar9;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar6 = puVar9;
  }
  uVar14 = *(uint *)(param_1 + 0xc4);
  uVar15 = *(uint *)(param_1 + 0x54);
  iVar34 = -iVar26;
  uVar16 = iVar34 + 0x38;
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar10 = *(uint *)(param_1 + 0x1c);
    iVar30 = param_1 + 0x2c;
    iVar24 = iVar13;
    iVar8 = iVar28;
    iVar29 = iVar12;
    if (uVar32 - uVar10 < 0x181) {
      local_168 = iVar26 - 0x18;
      local_16c = 0x18 - iVar26;
    }
    else {
      uVar17 = uVar10 + 0x60;
      if (uVar10 < uVar17) {
        local_168 = 0x20 - uVar16;
        local_16c = iVar34 + 0x18;
        uVar19 = uVar22;
        uVar18 = uVar15;
        while( true ) {
          uVar25 = *(uint *)(iVar30 + (uVar10 & 7) * 4);
          uVar23 = *(uint *)(uVar10 + iVar28 + 8);
          lVar2 = (ulonglong)uVar23 * 0xbf9b0000;
          uVar18 = *(int *)(uVar10 + iVar28 + 0xc) * -0x40650000 + uVar23 * -0x30e44324 +
                   (int)((ulonglong)lVar2 >> 0x20) ^ uVar18;
          uVar23 = ((uint)lVar2 ^ uVar19) >> (uVar16 & 0xff) | uVar18 << (local_168 & 0xff) |
                   uVar18 >> (local_16c & 0xff);
          uVar19 = uVar25 >> 8;
          uVar18 = uVar23 >> 8;
          HintPreloadData(iVar12 + uVar18 * 0x40);
          HintPreloadData(iVar13 + uVar18 * 0x10);
          *(uint *)(iVar30 + (uVar10 & 7) * 4) = uVar23;
          uVar18 = *(byte *)(iVar13 + uVar19 * 0x10) - 1 & 0xf;
          if (uVar18 == 0) {
            uVar18 = 0xf;
          }
          *(char *)(iVar13 + uVar19 * 0x10) = (char)uVar18;
          *(char *)(iVar13 + uVar19 * 0x10 + uVar18) = (char)uVar25;
          *(uint *)(iVar12 + (uVar19 * 0x10 + uVar18) * 4) = uVar10;
          uVar10 = uVar10 + 1;
          if (uVar17 == uVar10) break;
          uVar19 = *(uint *)(param_1 + 0x50);
          uVar18 = *(uint *)(param_1 + 0x54);
        }
        iVar26 = *(int *)(param_1 + 0x24);
        iVar24 = *(int *)(param_1 + 0x28);
        iVar8 = *(int *)(param_1 + 4);
        iVar29 = *(int *)(param_1 + 0x5c);
      }
      else {
        local_168 = iVar26 - 0x18;
        local_16c = 0x18 - iVar26;
      }
      uVar10 = uVar32 + -0x20;
      if ((byte *)(uVar10 + iVar28) <= (byte *)((int)param_2 + 1)) {
        pbVar20 = (byte *)((int)param_2 + 1) + (1 - (int)(uVar10 + iVar28));
        if (pbVar20 < (byte *)0x9) {
          uVar17 = uVar10 + (int)pbVar20;
        }
        else {
          uVar17 = uVar32 + -0x18;
        }
        if (uVar10 < uVar17) {
          uVar18 = *(uint *)(param_1 + 0x50);
          uVar23 = *(uint *)(param_1 + 0x54);
          uVar19 = uVar10;
          do {
            uVar11 = uVar19 & 7;
            piVar27 = (int *)(uVar19 + iVar28 + 4);
            puVar7 = (uint *)(uVar19 + iVar28);
            uVar19 = uVar19 + 1;
            lVar2 = (ulonglong)*puVar7 * 0xbf9b0000;
            uVar25 = *piVar27 * -0x40650000 + *puVar7 * -0x30e44324 +
                     (int)((ulonglong)lVar2 >> 0x20) ^ uVar23;
            uVar21 = ((uint)lVar2 ^ uVar18) >> (0x38U - iVar26 & 0xff) |
                     uVar25 << (iVar26 - 0x18U & 0xff) | uVar25 >> (0x18U - iVar26 & 0xff);
            uVar25 = uVar21 >> 8;
            HintPreloadData(iVar29 + uVar25 * 0x40);
            HintPreloadData(iVar24 + uVar25 * 0x10);
            *(uint *)(param_1 + uVar11 * 4 + 0x2c) = uVar21;
          } while (uVar19 < uVar17);
        }
      }
    }
    if (uVar10 < uVar32) {
      do {
        uVar17 = *(uint *)(uVar10 + iVar8 + 8);
        uVar23 = *(uint *)(iVar30 + (uVar10 & 7) * 4);
        lVar2 = (ulonglong)uVar17 * 0xbf9b0000;
        uVar17 = *(int *)(uVar10 + iVar8 + 0xc) * -0x40650000 + uVar17 * -0x30e44324 +
                 (int)((ulonglong)lVar2 >> 0x20) ^ *(uint *)(param_1 + 0x54);
        uVar18 = ((uint)lVar2 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar26 & 0xff) |
                 uVar17 << (iVar26 - 0x18U & 0xff) | uVar17 >> (0x18U - iVar26 & 0xff);
        uVar17 = uVar23 >> 8;
        uVar19 = uVar18 >> 8;
        HintPreloadData(iVar29 + uVar19 * 0x40);
        HintPreloadData(iVar24 + uVar19 * 0x10);
        *(uint *)(iVar30 + (uVar10 & 7) * 4) = uVar18;
        uVar19 = *(byte *)(iVar24 + uVar17 * 0x10) - 1 & 0xf;
        if (uVar19 == 0) {
          uVar19 = 0xf;
        }
        *(char *)(iVar24 + uVar17 * 0x10) = (char)uVar19;
        *(char *)(iVar24 + uVar17 * 0x10 + uVar19) = (char)uVar23;
        *(uint *)(iVar29 + (uVar19 + uVar17 * 0x10) * 4) = uVar10;
        uVar10 = uVar10 + 1;
      } while (uVar32 != uVar10);
    }
    *(uint *)(param_1 + 0x1c) = uVar32;
    lVar2 = (ulonglong)param_2[2] * 0xbf9b0000;
    uVar15 = param_2[3] * -0x40650000 + param_2[2] * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20) ^
             uVar15;
    uVar15 = ((uint)lVar2 ^ uVar22) >> (uVar16 & 0xff) | uVar15 << (local_168 & 0xff) |
             uVar15 >> (local_16c & 0xff);
    uVar22 = uVar15 >> 8;
    HintPreloadData(iVar12 + uVar22 * 0x40);
    HintPreloadData(iVar13 + uVar22 * 0x10);
    local_138 = *(uint *)(iVar30 + (uVar32 & 7) * 4);
    *(uint *)(iVar30 + (uVar32 & 7) * 4) = uVar15;
  }
  else {
    uVar10 = *param_2;
    uVar17 = param_2[1];
    *(uint *)(param_1 + 0x1c) = uVar32;
    lVar2 = (ulonglong)uVar10 * 0xbf9b0000;
    uVar15 = uVar17 * -0x40650000 + uVar10 * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20) ^ uVar15;
    local_138 = ((uint)lVar2 ^ uVar22) >> (uVar16 & 0xff) | uVar15 << (0x20 - uVar16 & 0xff) |
                uVar15 >> (iVar34 + 0x18U & 0xff);
  }
  uVar22 = local_138 >> 8;
  iVar12 = iVar12 + uVar22 * 0x40;
  iVar26 = iVar13 + uVar22 * 0x10;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_138;
  uVar16 = (local_138 & 0xff) * 0x1010101;
  uVar15 = *(uint *)(iVar26 + 0xc) ^ uVar16;
  uVar19 = *(uint *)(iVar26 + 8) ^ uVar16;
  uVar10 = *(uint *)(iVar26 + 4) ^ uVar16;
  uVar16 = *(uint *)(iVar13 + uVar22 * 0x10) ^ uVar16;
  uVar18 = (uint)*(byte *)(iVar13 + uVar22 * 0x10);
  uVar17 = uVar18 & 0xf;
  puVar7 = (uint *)(-uVar17 & 0xf);
  uVar15 = (((uVar16 | 0x80808080) + 0xfefefeff | uVar16) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar10 | 0x80808080) + 0xfefefeff | uVar10) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar19 | 0x80808080) + 0xfefefeff | uVar19) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar15 | 0x80808080) + 0xfefefeff | uVar15) & 0x80808080) * 0x204081 >> 0x1c) << 4)
           << 4) << 4;
  uVar15 = (~uVar15 << (int)puVar7 | (uVar15 ^ 0xffff) >> uVar17) & 0xffff;
  if (uVar15 == 0) {
    iVar34 = 0;
  }
  else {
    if (3 < uVar14) {
      uVar14 = 4;
    }
    iVar24 = 1 << (uVar14 & 0xff);
    iVar34 = 0;
    do {
      if (uVar15 == 0) {
        iVar8 = 0;
      }
      else {
        bVar3 = (byte)uVar15;
        bVar1 = (byte)(uVar15 >> 8);
        iVar8 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1)
                                         << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                      bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                        0x18 | (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                              bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                            bVar1 >> 6 & 1) << 1 | bVar1 >> 7) << 0x10);
      }
      uVar14 = iVar8 + uVar17 & 0xf;
      if (uVar14 == 0) {
        bVar35 = true;
        iVar8 = iVar34;
      }
      else {
        puVar7 = *(uint **)(iVar12 + uVar14 * 4);
        if (puVar7 < puVar6) break;
        HintPreloadData((byte *)(iVar28 + (int)puVar7));
        iVar8 = iVar34 + 1;
        local_12c[iVar34] = (int)puVar7;
        bVar35 = iVar24 != 1;
        iVar24 = iVar24 + -1;
      }
      uVar15 = uVar15 & uVar15 - 1;
      if (uVar15 == 0) {
        bVar35 = false;
      }
      puVar7 = (uint *)0x0;
      iVar34 = iVar8;
    } while (bVar35);
  }
  uVar14 = uVar18 - 1 & 0xf;
  if (uVar14 == 0) {
    uVar14 = 0xf;
  }
  *(char *)(iVar13 + uVar22 * 0x10) = (char)uVar14;
  *(char *)(iVar26 + uVar14) = (char)local_138;
  iVar13 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar13 + 1;
  *(int *)(iVar12 + uVar14 * 4) = iVar13;
  if (iVar34 == 0) {
    puVar6 = (uint *)0x3;
  }
  else {
    piVar27 = &iStack_130;
    puVar31 = (uint *)((int)param_3 + -1);
    iVar12 = 0;
    puVar9 = (uint *)0x3;
    do {
      piVar27 = piVar27 + 1;
      iVar13 = *piVar27;
      puVar33 = (uint *)(iVar28 + iVar13);
      puVar7 = *(uint **)((int)puVar33 + (int)((int)puVar9 + -3));
      if (puVar7 != *(uint **)((int)param_2 + (int)puVar9 + -3)) goto LAB_017c30fc;
      puVar6 = param_2;
      if (param_2 < (uint *)((int)param_3 + -3)) {
        if (*(uint *)(iVar28 + iVar13) == *param_2) {
          do {
            puVar6 = puVar6 + 1;
            puVar33 = puVar33 + 1;
            if ((uint *)((int)param_3 + -3) <= puVar6) {
              if ((puVar31 <= puVar6) || ((ushort)*puVar33 != (ushort)*puVar6)) goto LAB_017c3288;
              goto LAB_017c3280;
            }
          } while (*puVar33 == *puVar6);
          uVar22 = *puVar33 ^ *puVar6;
          bVar3 = (byte)uVar22;
          bVar4 = (byte)(uVar22 >> 8);
          bVar5 = (byte)(uVar22 >> 0x10);
          bVar1 = (byte)(uVar22 >> 0x18);
          puVar6 = (uint *)((int)puVar6 +
                           (((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) <<
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
                                                        << 1 | bVar1 >> 7)) >> 3) - (int)param_2));
        }
        else {
          uVar22 = *(uint *)(iVar28 + iVar13) ^ *param_2;
          bVar3 = (byte)uVar22;
          bVar4 = (byte)(uVar22 >> 8);
          bVar5 = (byte)(uVar22 >> 0x10);
          bVar1 = (byte)(uVar22 >> 0x18);
          puVar6 = (uint *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1
                                                           | bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1)
                                                          << 1 | bVar3 >> 4 & 1) << 1 |
                                                        bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1
                                                      | bVar3 >> 7) << 0x18 |
                                          (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1
                                                           | bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1)
                                                          << 1 | bVar4 >> 4 & 1) << 1 |
                                                        bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1
                                                      | bVar4 >> 7) << 0x10 |
                                          (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                           | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                          << 1 | bVar5 >> 4 & 1) << 1 |
                                                        bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1
                                                      | bVar5 >> 7) << 8 |
                                          (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                           | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                          << 1 | bVar1 >> 4 & 1) << 1 |
                                                        bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1
                                                      | bVar1 >> 7)) >> 3);
        }
LAB_017c318c:
        puVar7 = puVar6;
        if (puVar9 < puVar6) {
          *param_4 = uVar32 + (3 - iVar13);
          puVar9 = puVar6;
          if (param_3 == (uint *)((int)param_2 + (int)puVar6)) break;
        }
      }
      else {
        if (param_2 < puVar31) {
          if ((uint *)(uint)(ushort)*param_2 == (uint *)(uint)*(ushort *)(iVar28 + iVar13)) {
LAB_017c3280:
            puVar6 = (uint *)((int)puVar6 + 2);
            puVar33 = (uint *)((int)puVar33 + 2);
LAB_017c3288:
            if (puVar6 < param_3) goto LAB_017c3154;
          }
          else {
            puVar7 = (uint *)(uint)*(ushort *)(iVar28 + iVar13);
            if (param_3 <= param_2) goto LAB_017c30fc;
LAB_017c3154:
            if ((byte)*puVar33 == (byte)*puVar6) goto LAB_017c3244;
          }
LAB_017c3164:
          puVar6 = (uint *)((int)puVar6 - (int)param_2);
          goto LAB_017c318c;
        }
        puVar7 = puVar31;
        if (param_2 < param_3) {
          puVar7 = (uint *)(uint)(byte)*param_2;
          if ((uint *)(uint)*(byte *)(iVar28 + iVar13) == puVar7) {
LAB_017c3244:
            puVar6 = (uint *)((int)puVar6 + 1);
            goto LAB_017c3164;
          }
        }
      }
LAB_017c30fc:
      puVar6 = puVar9;
      iVar12 = iVar12 + 1;
      puVar9 = puVar6;
    } while (iVar12 != iVar34);
  }
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(puVar6,puVar7,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

