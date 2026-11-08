// FUN_019d0404 @ 019d0404 size=544 calls_out=4 calls_in=2
// strings: 

void FUN_019d0404(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  longlong lVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  uint extraout_r2;
  uint uVar17;
  int extraout_r3;
  undefined4 uVar18;
  undefined4 uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  bool bVar27;
  
  uVar24 = param_2[3];
  iVar12 = param_2[1];
  uVar26 = param_2[2];
  iVar15 = -1;
  uVar14 = *param_1;
  uVar11 = param_1[1];
  iVar16 = *param_2 + -0x210;
  do {
    iVar20 = iVar16;
    uVar19 = uVar11;
    uVar18 = uVar14;
    if (iVar15 == 5) {
      uVar14 = 0;
      goto LAB_019d05f0;
    }
    iVar15 = iVar15 + 1;
    if (iVar12 == iVar15) {
      *param_1 = uVar18;
      param_1[1] = uVar19;
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(iVar12,iVar12,&DAT_01d28694);
    }
    uVar23 = *(uint *)(iVar20 + 0x410);
    uVar22 = *(uint *)(iVar20 + 0x414);
    uVar14 = 0;
    uVar11 = 0;
    iVar16 = iVar20 + 0x210;
  } while (uVar23 == 0 && uVar22 == 0);
  uVar25 = *(uint *)(iVar20 + 0x418);
  uVar21 = 1;
  iVar16 = 1;
  if (uVar25 != 0) {
    iVar12 = 0x40;
    for (uVar17 = uVar25; ((uVar17 & 1) == 0 || (iVar16 = iVar12 * iVar16, uVar17 != 1));
        uVar17 = uVar17 >> 1) {
      iVar12 = iVar12 * iVar12;
    }
    if (iVar16 == 0) {
      *param_1 = uVar18;
      param_1[1] = uVar19;
                    /* WARNING: Subroutine does not return */
      FUN_012ffdf4(&DAT_01d287cc);
    }
  }
  uVar13 = FUN_01bf0ff0(uVar26,uVar24,iVar16,0);
  bVar27 = (uVar13 & 0x20) == 0;
  uVar17 = uVar22;
  if (bVar27) {
    uVar17 = uVar23;
  }
  if (bVar27) {
    uVar23 = uVar22;
  }
  uVar22 = (uVar17 << 1) << (~uVar13 & 0x1f) | uVar23 >> (uVar13 & 0x1f);
  bVar4 = (byte)uVar22;
  bVar5 = (byte)(uVar22 >> 8);
  bVar6 = (byte)(uVar22 >> 0x10);
  bVar1 = (byte)(uVar22 >> 0x18);
  uVar23 = (uVar23 << 1) << (~uVar13 & 0x1f) | uVar17 >> (uVar13 & 0x1f);
  bVar7 = (byte)uVar23;
  bVar8 = (byte)(uVar23 >> 8);
  bVar9 = (byte)(uVar23 >> 0x10);
  bVar2 = (byte)(uVar23 >> 0x18);
  iVar16 = LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1) << 1
                                   | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1)
                                 << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18 |
                   (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1) << 1
                                   | bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1)
                                 << 1 | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x10 |
                   (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 | bVar6 >> 2 & 1) << 1
                                   | bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1)
                                 << 1 | bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8 |
                   (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) << 1
                                   | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1)
                                 << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) + 0x20;
  if (uVar23 != 0) {
    iVar16 = LZCOUNT((uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 | bVar7 >> 2 & 1) <<
                                      1 | bVar7 >> 3 & 1) << 1 | bVar7 >> 4 & 1) << 1 |
                                   bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 0x18
                     | (uint)(byte)((((((((bVar8 & 1) << 1 | bVar8 >> 1 & 1) << 1 | bVar8 >> 2 & 1)
                                        << 1 | bVar8 >> 3 & 1) << 1 | bVar8 >> 4 & 1) << 1 |
                                     bVar8 >> 5 & 1) << 1 | bVar8 >> 6 & 1) << 1 | bVar8 >> 7) <<
                       0x10 | (uint)(byte)((((((((bVar9 & 1) << 1 | bVar9 >> 1 & 1) << 1 |
                                               bVar9 >> 2 & 1) << 1 | bVar9 >> 3 & 1) << 1 |
                                             bVar9 >> 4 & 1) << 1 | bVar9 >> 5 & 1) << 1 |
                                           bVar9 >> 6 & 1) << 1 | bVar9 >> 7) << 8 |
                     (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) <<
                                      1 | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 |
                                   bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 | bVar2 >> 7));
  }
  if (uVar25 == 0) {
    iVar12 = 0x40;
    uVar25 = 0;
    uVar23 = 0;
  }
  else {
    iVar12 = 0x40;
    uVar22 = 1;
    for (uVar23 = uVar25; ((uVar23 & 1) == 0 || (uVar22 = iVar12 * uVar22, uVar23 != 1));
        uVar23 = uVar23 >> 1) {
      iVar12 = iVar12 * iVar12;
    }
    uVar23 = uVar22 >> 0x1a;
    iVar12 = uVar22 * 0x40;
    iVar15 = 0x40;
    uVar21 = 1;
    for (uVar17 = uVar25; ((uVar17 & 1) == 0 || (uVar21 = iVar15 * uVar21, uVar17 != 1));
        uVar17 = uVar17 >> 1) {
      iVar15 = iVar15 * iVar15;
    }
    if (uVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013079d0(&DAT_01d287bc);
    }
  }
  uVar22 = iVar16 + uVar13 & 0x3f;
  FUN_01bf0ff0(uVar26,uVar24,iVar12,uVar23);
  param_1[5] = uVar22;
  lVar3 = (ulonglong)uVar22 * (ulonglong)uVar21 +
          CONCAT44(uVar24 - (extraout_r3 + (uint)(uVar26 < extraout_r2)),uVar26 - extraout_r2);
  uVar22 = (uint)((ulonglong)lVar3 >> 0x20);
  lVar10 = lVar3 + CONCAT44(uVar23,iVar12);
  if (uVar24 < uVar22 || uVar22 - uVar24 < (uint)(uVar26 <= (uint)lVar3)) {
    lVar10 = lVar3;
  }
  *(longlong *)(param_1 + 2) = lVar10;
  param_1[4] = uVar25;
  uVar14 = 1;
LAB_019d05f0:
  *param_1 = uVar14;
  param_1[1] = 0;
  return;
}

