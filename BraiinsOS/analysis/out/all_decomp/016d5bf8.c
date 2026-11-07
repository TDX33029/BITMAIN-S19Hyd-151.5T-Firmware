// FUN_016d5bf8 @ 016d5bf8 size=1360 calls_out=1 calls_in=5
// strings: 

undefined4 FUN_016d5bf8(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint in_fpscr;
  ulonglong in_d0;
  undefined4 extraout_s1;
  uint uVar12;
  double in_d1;
  uint uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  uVar10 = (uint)(in_d0 >> 0x20);
  uVar3 = (uint)in_d0;
  uVar13 = (uint)((ulonglong)in_d1 >> 0x20);
  uVar12 = SUB84(in_d1,0);
  uVar11 = uVar10 >> 0x14;
  uVar4 = uVar13 >> 0x14;
  uVar6 = uVar10;
  if ((0x7fd < uVar11 - 1) || (0x7f < (uVar4 & 0x7ff) - 0x3be)) {
    iVar2 = uVar12 * 2;
    iVar1 = uVar13 * 2 + (uint)CARRY4(uVar12,uVar12);
    uVar8 = iVar1 + -1 + (uint)(iVar2 != 0);
    if (0xffdffffe < uVar8 && (uint)(iVar2 != 0) <= -uVar8 - 0x200001) {
      if ((iVar2 != 0 || iVar1 != 0) && (uVar10 != 0x3ff00000 || uVar3 != 0)) {
        uVar6 = uVar10 * 2 + (uint)CARRY4(uVar3,uVar3);
        if ((iVar2 != 0 || iVar1 != -0x200000) ||
            (0xffe00000 < uVar6 || uVar6 + 0x200000 < (uint)(uVar3 * 2 != 0))) {
          dVar16 = (double)(((ulonglong)uVar10 << 0x20) + (in_d0 & 0xffffffff)) + in_d1;
          goto LAB_016d5e04;
        }
        if (uVar6 != 0x7fe00000 || uVar3 * 2 != 0) {
          if ((uint)(0x7fdfffff < uVar6) == -((int)~uVar13 >> 0x1f)) {
            dVar16 = in_d1 * in_d1;
          }
          else {
            dVar16 = 0.0;
          }
          goto LAB_016d5e04;
        }
      }
LAB_016d6138:
      dVar16 = 0.0;
      goto LAB_016d5e04;
    }
    uVar8 = uVar10 * 2 + (uint)CARRY4(uVar3,uVar3) + -1 + (uint)(uVar3 * 2 != 0);
    if (0xffdffffe < uVar8 && (uint)(uVar3 * 2 != 0) <= -uVar8 - 0x200001) {
      dVar16 = (double)(((ulonglong)uVar10 << 0x20) + (in_d0 & 0xffffffff));
      dVar16 = dVar16 * dVar16;
      if (((longlong)in_d0 < 0) && ((uVar4 & 0x7ff) - 0x3ff < 0x35)) {
        iVar1 = -(uVar4 & 0x7ff);
        uVar4 = iVar1 + 0x413;
        uVar3 = iVar1 + 0x433;
        uVar6 = -1 << (uVar3 & 0xff);
        if (((uVar12 & ~uVar6) == 0 &&
             (uVar13 & ~(uVar6 | -1 << (uVar4 & 0xff) | 0xffffffffU >> (0x20 - uVar3 & 0xff))) == 0)
           && ((int)((uVar12 >> (uVar3 & 0xff) | uVar13 << (0x20 - uVar3 & 0xff) |
                     uVar13 >> (uVar4 & 0xff)) << 0x1f) < 0)) {
          dVar16 = -dVar16;
        }
      }
      if ((longlong)in_d1 < 0) {
        dVar16 = 1.0 / dVar16;
      }
      goto LAB_016d5e04;
    }
    if ((longlong)in_d0 < 0) {
      uVar6 = uVar4 & 0x7ff;
      if (uVar6 < 0x3ff) {
LAB_016d5ff6:
        dVar16 = (double)(((ulonglong)uVar10 << 0x20) + (in_d0 & 0xffffffff));
        dVar16 = dVar16 - dVar16;
        return SUB84(dVar16 / dVar16,0);
      }
      if (uVar6 < 0x434) {
        uVar8 = -uVar6 + 0x433;
        uVar6 = -uVar6 + 0x413;
        uVar9 = -1 << (uVar8 & 0xff);
        if ((uVar12 & ~uVar9) != 0 ||
            (uVar13 & ~(uVar9 | -1 << (uVar6 & 0xff) | 0xffffffffU >> (0x20 - uVar8 & 0xff))) != 0)
        goto LAB_016d5ff6;
        iVar1 = ((uVar12 >> (uVar8 & 0xff) | uVar13 << (0x20 - uVar8 & 0xff) |
                 uVar13 >> (uVar6 & 0xff)) & 1) << 0x12;
      }
      else {
        iVar1 = 0;
      }
      uVar6 = uVar10 & 0x7fffffff;
      uVar11 = uVar11 & 0x7ff;
    }
    else {
      iVar1 = 0;
    }
    if ((uVar4 & 0x7ff) - 0x3be < 0x80) {
      if (uVar11 == 0) {
        dVar16 = (double)(((ulonglong)uVar10 << 0x20) + (in_d0 & 0xffffffff)) * 4503599627370496.0;
        uVar3 = SUB84(dVar16,0);
        uVar6 = ((uint)((ulonglong)dVar16 >> 0x20) & 0x7fffffff) + 0xfcc00000;
      }
      goto LAB_016d5c3c;
    }
    iVar1 = 0;
    if (uVar6 == 0x3ff00000 && uVar3 == 0) goto LAB_016d6138;
    if ((uVar4 & 0x7ff) < 0x3be) {
      if (uVar6 < 0x3ff00000 || 0x3ff00000 - uVar6 < (uint)(uVar3 == 0)) {
        dVar16 = 1.0 - in_d1;
      }
      else {
        dVar16 = in_d1 + 1.0;
      }
      goto LAB_016d5e04;
    }
    if ((uVar6 < 0x3ff00001 && (uint)(uVar3 != 0) <= uVar6 + 0xc0100000) == uVar4 < 0x800)
    goto LAB_016d6024;
LAB_016d6064:
    dVar16 = 3.105036184601418e+231;
LAB_016d5270:
    dVar14 = -dVar16;
    if (iVar1 == 0) {
      dVar14 = dVar16;
    }
    return SUB84(dVar16 * dVar14,0);
  }
  iVar1 = 0;
LAB_016d5c3c:
  uVar4 = uVar6 + 0xc0196aab;
  iVar2 = ((uVar4 & 0xfffff) >> 0xd) * 0x20;
  dVar15 = (double)VectorSignedToFloat((int)uVar4 >> 0x14,(byte)(in_fpscr >> 0x16) & 3);
  iVar7 = uVar6 - (uVar4 & 0xfff00000);
  dVar14 = *(double *)(&DAT_00426978 + iVar2) + dVar15 * 0.6931471805598903;
  dVar16 = (double)((ulonglong)(iVar7 + (uint)(0x7fffffff < uVar3)) << 0x20);
  dVar21 = *(double *)(&DAT_00426968 + iVar2) * dVar16 - 1.0;
  dVar19 = ((double)CONCAT44(iVar7,uVar3) - dVar16) * *(double *)(&DAT_00426968 + iVar2);
  dVar17 = dVar21 + dVar19;
  dVar22 = dVar21 * dVar21 * -0.5;
  dVar16 = dVar17 * dVar17 * -0.5;
  dVar18 = dVar17 + dVar14;
  dVar20 = dVar18 + dVar22;
  dVar14 = *(double *)(&DAT_00426980 + iVar2) + dVar15 * 5.497923018708371e-14 +
           (dVar14 - dVar18) + dVar17 + (dVar17 * -0.5 + dVar21 * -0.5) * dVar19 +
           (dVar18 - dVar20) + dVar22 +
           (dVar17 * 0.5000000000000007 + -0.6666666666666679 +
           (dVar17 * -0.6666666663487739 + 0.7999999995323976 +
           (dVar17 * 1.0000415263675542 + -1.142909628459501) * dVar16) * dVar16) * dVar17 * dVar16;
  dVar15 = dVar20 + dVar14;
  dVar17 = (double)((ulonglong)dVar15 & 0xfffffffff8000000);
  dVar16 = (double)((ulonglong)in_d1 & 0xfffffffff8000000) * dVar17;
  uVar6 = ((uint)((ulonglong)dVar16 >> 0x20) & 0x7fffffff) >> 0x14;
  if (0x3e < uVar6 - 0x3c9) {
    if ((int)(uVar6 - 0x3c9) < 0) {
      dVar16 = dVar16 + 1.0;
      if (iVar1 != 0) {
        dVar16 = -dVar16;
      }
      goto LAB_016d5e04;
    }
    if (0x408 < uVar6) {
      if ((longlong)dVar16 < 0) {
LAB_016d6024:
        dVar16 = 1.2882297539194267e-231;
        goto LAB_016d5270;
      }
      goto LAB_016d6064;
    }
    uVar6 = 0;
  }
  dVar18 = dVar16 * 184.6649652337873 + 6755399441055744.0;
  dVar19 = dVar18 - 6755399441055744.0;
  uVar3 = SUB84(dVar18,0);
  iVar2 = (uVar3 & 0x7f) * 2 + 0xf;
  uVar5 = *(undefined4 *)(&DAT_00425700 + iVar2);
  dVar14 = (in_d1 - (double)((ulonglong)in_d1 & 0xfffffffff8000000)) * dVar17 +
           ((dVar20 - dVar15) + dVar14 + (dVar15 - dVar17)) * in_d1 +
           dVar16 + dVar19 * -0.005415212348111709 + dVar19 * -1.2864023111638346e-14;
  dVar16 = dVar14 * dVar14;
  iVar1 = *(int *)((int)&DAT_00425700 + iVar2 * 8 + 4) + (iVar1 + uVar3) * 0x2000;
  dVar14 = dVar14 + *(double *)(&DAT_00425770 + (uVar3 & 0x7f) * 0x10) +
           (dVar14 * 0.16666666666665886 + 0.49999999999996786) * dVar16 +
           (dVar14 * 0.008333335853059549 + 0.0416666808410674) * dVar16 * dVar16;
  if (uVar6 == 0) {
    if ((int)uVar3 < 0) {
      dVar15 = (double)CONCAT44(iVar1 + 0x3fe00000U,uVar5);
      dVar16 = dVar15 + dVar14 * dVar15;
      uVar5 = FUN_016d528c(SUB84(dVar16,0));
      if ((double)CONCAT44(extraout_s1,uVar5) < 1.0) {
        dVar17 = -1.0;
        if (0.0 <= dVar16) {
          dVar17 = 1.0;
        }
        dVar16 = ((dVar17 - (dVar16 + dVar17)) + dVar16 + (dVar15 - dVar16) + dVar14 * dVar15 +
                 dVar16 + dVar17) - dVar17;
        if (dVar16 == 0.0) {
          dVar16 = (double)(((ulonglong)(iVar1 + 0x3fe00000U) & 0x80000000) << 0x20);
        }
      }
      dVar16 = dVar16 * 2.2250738585072014e-308;
    }
    else {
      dVar16 = (double)CONCAT44(iVar1 + -0x3f100000,uVar5);
      dVar16 = (dVar16 + dVar14 * dVar16) * 5.486124068793689e+303;
    }
  }
  else {
    dVar16 = (double)CONCAT44(iVar1,uVar5) + dVar14 * (double)CONCAT44(iVar1,uVar5);
  }
LAB_016d5e04:
  return SUB84(dVar16,0);
}

