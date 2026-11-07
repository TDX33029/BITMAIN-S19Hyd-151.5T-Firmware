// FUN_019e1c0c @ 019e1c0c size=508 calls_out=3 calls_in=2
// strings: assertion failed: self.tail.is_none()

void FUN_019e1c0c(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  
  if ((param_2[2] == 0) && (param_2[3] != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: self.tail.is_none()",0x25,&DAT_01d2900c);
  }
  if (param_2[2] != 0) {
    uVar18 = 0;
    uVar7 = 0;
    lVar6 = *(longlong *)param_2;
LAB_019e1dc4:
    param_1[5] = uVar7;
    *(longlong *)(param_1 + 2) = lVar6;
    param_1[4] = uVar18;
    uVar9 = 1;
LAB_019e1dd8:
    *param_1 = uVar9;
    param_1[1] = 0;
    return;
  }
  uVar15 = *param_2;
  uVar16 = param_2[1];
  uVar9 = 0;
  iVar10 = 0;
LAB_019e1c58:
  if (iVar10 != 0xc60) {
    iVar11 = param_2[4] + iVar10;
    uVar12 = *(uint *)(iVar11 + 0x200);
    uVar7 = *(uint *)(iVar11 + 0x204);
    if (uVar12 == 0 && uVar7 == 0) goto code_r0x019e1c74;
    uVar18 = *(uint *)(iVar11 + 0x208);
    uVar14 = 1;
    iVar10 = 1;
    if (uVar18 != 0) {
      iVar11 = 0x40;
      for (uVar17 = uVar18; ((uVar17 & 1) == 0 || (iVar10 = iVar11 * iVar10, uVar17 != 1));
          uVar17 = uVar17 >> 1) {
        iVar11 = iVar11 * iVar11;
      }
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012ffdf4(&DAT_01d29908);
      }
    }
    uVar17 = 0;
    uVar8 = FUN_01bf0ff0(uVar15,uVar16,iVar10,0);
    uVar13 = uVar12;
    if ((uVar8 & 0x20) == 0) {
      uVar13 = uVar7;
      uVar7 = uVar12;
    }
    uVar12 = (uVar7 << 1) << (~uVar8 & 0x1f) | uVar13 >> (uVar8 & 0x1f);
    bVar3 = (byte)uVar12;
    bVar4 = (byte)(uVar12 >> 8);
    bVar5 = (byte)(uVar12 >> 0x10);
    bVar1 = (byte)(uVar12 >> 0x18);
    uVar7 = (uVar13 << 1) << (~uVar8 & 0x1f) | uVar7 >> (uVar8 & 0x1f);
    iVar10 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1) <<
                                      1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                   bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x18
                     | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1)
                                        << 1 | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                     bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                       0x10 | (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                               bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                             bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                           bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 8 |
                     (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) <<
                                      1 | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 |
                                   bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) + 0x20
    ;
    bVar3 = (byte)uVar7;
    bVar4 = (byte)(uVar7 >> 8);
    bVar5 = (byte)(uVar7 >> 0x10);
    bVar1 = (byte)(uVar7 >> 0x18);
    if (uVar7 != 0) {
      iVar10 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1)
                                        << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                     bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                       0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                               bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                             bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                           bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10 |
                       (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1)
                                        << 1 | bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) << 1 |
                                     bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 8
                       | (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1
                                          ) << 1 | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 |
                                       bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
    }
    uVar7 = iVar10 + uVar8 & 0x3f;
    if (uVar18 == 0) {
      iVar10 = 0x40;
    }
    else {
      iVar10 = 0x40;
      uVar14 = 1;
      for (uVar12 = uVar18; ((uVar12 & 1) == 0 || (uVar14 = iVar10 * uVar14, uVar12 != 1));
          uVar12 = uVar12 >> 1) {
        iVar10 = iVar10 * iVar10;
      }
      uVar17 = uVar14 >> 0x1a;
      iVar10 = uVar14 * 0x40;
      iVar11 = 0x40;
      uVar14 = 1;
      for (uVar12 = uVar18; ((uVar12 & 1) == 0 || (uVar14 = iVar11 * uVar14, uVar12 != 1));
          uVar12 = uVar12 >> 1) {
        iVar11 = iVar11 * iVar11;
      }
    }
    lVar2 = (ulonglong)uVar7 * (ulonglong)uVar14 +
            CONCAT44(uVar16 & -(uVar17 + (iVar10 != 0)),uVar15 & -iVar10);
    uVar12 = (uint)((ulonglong)lVar2 >> 0x20);
    lVar6 = lVar2 + CONCAT44(uVar17,iVar10);
    if (uVar16 <= uVar12 && (uint)((uint)lVar2 <= uVar15) <= uVar16 - uVar12) {
      lVar6 = lVar2;
    }
    goto LAB_019e1dc4;
  }
  goto LAB_019e1dd8;
code_r0x019e1c74:
  iVar10 = iVar10 + 0x210;
  goto LAB_019e1c58;
}

