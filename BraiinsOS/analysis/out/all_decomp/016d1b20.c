// FUN_016d1b20 @ 016d1b20 size=2172 calls_out=3 calls_in=16
// strings: 

undefined1 * FUN_016d1b20(uint param_1,uint param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int *piVar22;
  undefined1 *puVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  bool bVar29;
  bool bVar30;
  byte in_Q;
  ulonglong uVar31;
  uint local_30;
  
  puVar7 = (undefined2 *)(param_3 + -((int)param_2 >> 0x1f));
  *param_3 = 0x2d;
  uVar20 = (param_2 & 0x7fffffff) >> 0x14;
  param_2 = param_2 & 0xfffff;
  if (uVar20 == 0) {
    if (param_1 == 0 && param_2 == 0) {
      *(undefined1 *)(puVar7 + 1) = 0x30;
      *puVar7 = 0x2e30;
      return (undefined1 *)((int)puVar7 + 3);
    }
    uVar20 = param_1 << 5;
    uVar25 = (uint)((ulonglong)uVar20 * 0xee382c42);
    uVar8 = param_2 << 5 | param_1 >> 0x1b;
    lVar2 = (ulonglong)uVar8 * 0xee382c42 + ((ulonglong)uVar20 * 0xee382c42 >> 0x20);
    uVar21 = (uint)((ulonglong)lVar2 >> 0x20);
    lVar3 = (ulonglong)uVar8 * 0xdd9ed7b5 + ((ulonglong)uVar20 * 0xdd9ed7b5 >> 0x20);
    uVar12 = (uint)((ulonglong)lVar3 >> 0x20);
    lVar5 = (ulonglong)uVar20 * 0xfcf62c1d;
    uVar16 = (uint)((ulonglong)lVar5 >> 0x20);
    uVar9 = (uint)((ulonglong)uVar20 * 0x46729e03 >> 0x20);
    bVar29 = CARRY4((uint)((ulonglong)uVar20 * 0x46729e03),(uint)lVar3);
    uVar20 = (uint)(lVar2 + lVar5);
    lVar3 = (ulonglong)uVar8 * 0x46729e03 +
            (ulonglong)
            CONCAT14(CARRY4(uVar12,uVar9) || CARRY4(uVar12 + uVar9,(uint)bVar29),
                     uVar12 + uVar9 + (uint)bVar29);
    uVar9 = (uint)((ulonglong)lVar3 >> 0x20);
    lVar2 = (ulonglong)uVar8 * 0xfcf62c1d +
            (ulonglong)
            CONCAT14(CARRY4(uVar21,uVar16) ||
                     CARRY4(uVar21 + uVar16,(uint)CARRY4((uint)lVar5,(uint)lVar2)),
                     (int)((ulonglong)(lVar2 + lVar5) >> 0x20));
    uVar21 = (uint)lVar2;
    lVar5 = lVar3 + CONCAT44(uVar20,uVar25);
    bVar29 = CARRY4(uVar9,uVar20) || CARRY4(uVar9 + uVar20,(uint)CARRY4((uint)lVar3,uVar25));
    uVar20 = (uint)((ulonglong)lVar5 >> 0x20);
    uVar8 = uVar21 + bVar29;
    uVar9 = (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4(uVar21,(uint)bVar29);
    uVar16 = uVar8 * 0x4000000 | uVar20 >> 6;
    uVar25 = uVar20 * 0x4000000 | (uint)lVar5 >> 6;
    uVar13 = param_1 & 1 ^ 0x7b8e0b11;
    bVar29 = CARRY4(uVar16 + 0x3f3d8b07,(uint)CARRY4(uVar25,uVar13));
    bVar30 = 0xc0c274f8 < uVar16 || bVar29;
    uVar20 = uVar8 >> 6 | uVar9 * 0x4000000;
    lVar3 = (ulonglong)(uVar20 + bVar30) * 10;
    uVar12 = (uint)lVar3;
    lVar2 = (ulonglong)uVar16 * 10 + ((ulonglong)uVar25 * 10 >> 0x20);
    uVar8 = (uint)lVar2;
    uVar21 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar9 = (int)((ulonglong)lVar3 >> 0x20) +
            ((uVar9 >> 6) + (uint)CARRY4(uVar20,(uint)bVar30)) * 10;
    bVar30 = 0x7fffffff < uVar8 ||
             CARRY4(uVar8 + 0x80000000,(uint)(0xfffffff9 < (uint)((ulonglong)uVar25 * 10)));
    uVar8 = uVar21 + bVar30;
    uVar20 = (uint)CARRY4(uVar21,(uint)bVar30);
    if (uVar25 == 0 && uVar16 == 0x40000000) {
      uVar8 = 2;
      uVar20 = 0;
    }
    uVar21 = uVar12 + uVar8;
    uVar20 = uVar9 + uVar20 + (uint)CARRY4(uVar12,uVar8);
    if ((0xc0c274f8 < uVar16 || bVar29) ||
        uVar16 < 0x3f3d8b08 && (uint)(uVar13 <= uVar25) <= uVar16 + 0xc0c274f9) {
      uVar21 = uVar12;
      uVar20 = uVar9;
    }
    uVar8 = 0xfffffebc;
    if (uVar20 < 0x38d7f && (uint)(0xa4c67fff < uVar21) <= uVar20 - 0x38d7e) {
      do {
        uVar4 = (ulonglong)uVar21;
        uVar21 = (uint)(uVar4 * 10);
        uVar8 = uVar8 - 1;
        uVar20 = (int)(uVar4 * 10 >> 0x20) + uVar20 * 10;
      } while ((int)(uVar20 - ((uVar21 < 0xa4c68000) + 0x38d7e)) < 0 !=
               (SBORROW4(uVar20,0x38d7e) != SBORROW4(uVar20 - 0x38d7e,(uint)(uVar21 < 0xa4c68000))))
      ;
    }
    uVar12 = (uint)((ulonglong)uVar21 * 0x19999999 >> 0x20);
    lVar2 = (ulonglong)uVar20 * 0x9999999a + ((ulonglong)uVar21 * 0x9999999a >> 0x20);
    uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
    bVar29 = CARRY4((uint)((ulonglong)uVar21 * 0x19999999),(uint)lVar2);
    uVar4 = (ulonglong)uVar20 * 0x19999999 +
            (ulonglong)
            CONCAT14(CARRY4(uVar9,uVar12) || CARRY4(uVar9 + uVar12,(uint)bVar29),
                     uVar9 + uVar12 + (uint)bVar29);
    lVar2 = (uVar4 & 0xffffffff) * 0xfffffff6;
    uVar9 = (uint)lVar2;
    local_30 = uVar9 + uVar21;
    bVar29 = local_30 != 0 ||
             ((int)((ulonglong)lVar2 >> 0x20) - (int)uVar4) + (int)(uVar4 >> 0x20) * -10 + uVar20 +
             (uint)CARRY4(uVar9,uVar21) != 0;
  }
  else {
    iVar17 = (uVar20 - 0x433) * 0x4d105;
    if (param_1 == 0 && param_2 == 0) {
      uVar8 = iVar17 + -0x20000 >> 0x14;
      iVar17 = (uVar8 * -2 + 0x248) * 8;
      uVar25 = *(uint *)(&DAT_0041b240 + iVar17);
      iVar15 = (uVar20 - 0x433) + (~uVar8 * 0x3526b >> 0x10);
      uVar12 = iVar15 + 7U & 0x3f;
      uVar9 = uVar12 - 0x20;
      uVar20 = param_1 << uVar12;
      uVar21 = *(uint *)(&DAT_0041b244 + iVar17);
      if (-1 < (int)uVar9) {
        uVar20 = 0;
      }
      uVar16 = (uint)((ulonglong)uVar20 * (ulonglong)uVar25);
      lVar2 = (ulonglong)uVar20 * (ulonglong)uVar21 +
              ((ulonglong)uVar20 * (ulonglong)uVar25 >> 0x20);
      uVar18 = (uint)((ulonglong)lVar2 >> 0x20);
      lVar3 = (ulonglong)uVar20 * (ulonglong)*(uint *)(&DAT_0041b24c + iVar17) +
              ((ulonglong)uVar20 * (ulonglong)*(uint *)(&DAT_0041b248 + iVar17) >> 0x20);
      uVar13 = (uint)((ulonglong)lVar3 >> 0x20);
      uVar20 = param_1 >> (0x20 - uVar12 & 0xff) | (param_2 | 0x100000) << uVar12;
      if (-1 < (int)uVar9) {
        uVar20 = param_1 << (uVar9 & 0xff);
      }
      lVar5 = (ulonglong)uVar20 * (ulonglong)*(uint *)(&DAT_0041b248 + iVar17);
      uVar9 = (uint)((ulonglong)lVar5 >> 0x20);
      lVar6 = (ulonglong)uVar20 * (ulonglong)uVar25;
      uVar12 = (uint)((ulonglong)lVar6 >> 0x20);
      bVar29 = CARRY4((uint)lVar5,(uint)lVar3);
      uVar24 = (uint)(lVar2 + lVar6);
      lVar3 = (ulonglong)uVar20 * (ulonglong)*(uint *)(&DAT_0041b24c + iVar17) +
              (ulonglong)
              CONCAT14(CARRY4(uVar13,uVar9) || CARRY4(uVar13 + uVar9,(uint)bVar29),
                       uVar13 + uVar9 + (uint)bVar29);
      uVar9 = (uint)((ulonglong)lVar3 >> 0x20);
      lVar2 = (ulonglong)uVar20 * (ulonglong)uVar21 +
              (ulonglong)
              CONCAT14(CARRY4(uVar18,uVar12) ||
                       CARRY4(uVar18 + uVar12,(uint)CARRY4((uint)lVar6,(uint)lVar2)),
                       (int)((ulonglong)(lVar2 + lVar6) >> 0x20));
      uVar12 = (uint)lVar2;
      lVar5 = lVar3 + CONCAT44(uVar24,uVar16);
      bVar29 = CARRY4(uVar9,uVar24) || CARRY4(uVar9 + uVar24,(uint)CARRY4((uint)lVar3,uVar16));
      uVar20 = (uint)((ulonglong)lVar5 >> 0x20);
      uVar24 = uVar12 + bVar29;
      uVar16 = uVar24 * 0x4000000 | uVar20 >> 6;
      uVar18 = uVar20 * 0x4000000 | (uint)lVar5 >> 6;
      uVar13 = -iVar15 & 0x3f;
      uVar20 = uVar25 >> uVar13 | uVar21 << (0x20 - uVar13 & 0xff);
      uVar9 = uVar13 - 0x20;
      if (-1 < (int)uVar9) {
        uVar20 = uVar21 >> (uVar9 & 0xff);
      }
      uVar21 = uVar21 >> uVar13;
      if (-1 < (int)uVar9) {
        uVar21 = 0;
      }
      uVar9 = uVar21 >> 1;
      uVar25 = (uint)((byte)uVar21 & 1) << 0x1f | uVar20 >> 1;
      bVar30 = CARRY4(uVar16 + uVar21,(uint)CARRY4(uVar18,uVar20));
      uVar12 = (int)((ulonglong)lVar2 >> 0x20) +
               (uint)((((byte)(CARRY4(uVar12,(uint)bVar29) << 2 | in_Q) & 0x1f) >> 2 & 1) != 0);
      bVar29 = (((byte)((CARRY4(uVar16,uVar21) || bVar30) << 2 | in_Q) & 0x1f) >> 2 & 1) != 0;
      uVar31 = (ulonglong)(uVar18 - uVar25) * 10;
      lVar2 = (ulonglong)uVar16 * 10 + ((ulonglong)uVar18 * 10 >> 0x20);
      uVar27 = (uint)lVar2;
      lVar3 = (ulonglong)(uVar16 - (uVar9 + (uVar25 > uVar18))) * 10 + (uVar31 >> 0x20);
      uVar13 = (uint)lVar3;
      uVar20 = uVar24 >> 6 | uVar12 * 0x4000000;
      uVar4 = CONCAT44((uVar12 >> 6) + (uint)CARRY4(uVar20,(uint)bVar29),uVar20 + bVar29);
      uVar20 = (int)((ulonglong)lVar2 >> 0x20) +
               (uint)(0x80000000 < uVar27 ||
                     uVar27 + 0x80000000 < (uint)((int)((ulonglong)uVar18 * 10) != 0));
      local_30 = (int)((ulonglong)lVar3 >> 0x20) +
                 (uint)(uVar13 != 0 || uVar13 < ((int)uVar31 != 0));
      if (local_30 < uVar20) {
        local_30 = uVar20;
      }
      bVar29 = (!CARRY4(uVar16,uVar21) && !bVar30) &&
               (uVar9 < uVar16 || uVar16 - uVar9 < (uint)(uVar25 <= uVar18));
    }
    else {
      uVar8 = iVar17 >> 0x14;
      iVar17 = (uVar8 * -2 + 0x248) * 8;
      uVar25 = *(uint *)(&DAT_0041b240 + iVar17);
      uVar9 = (byte)(&DAT_00419640)[uVar20] & 0x3f;
      uVar12 = uVar9 - 0x20;
      uVar21 = param_1 << uVar9;
      if (-1 < (int)uVar12) {
        uVar21 = 0;
      }
      uVar16 = (uint)((ulonglong)uVar25 * (ulonglong)uVar21);
      uVar9 = param_1 >> (0x20 - uVar9 & 0xff) | (param_2 | 0x100000) << uVar9;
      if (-1 < (int)uVar12) {
        uVar9 = param_1 << (uVar12 & 0xff);
      }
      uVar18 = *(uint *)(&DAT_0041b244 + iVar17);
      lVar2 = (ulonglong)uVar25 * (ulonglong)uVar9 + ((ulonglong)uVar25 * (ulonglong)uVar21 >> 0x20)
      ;
      uVar13 = (uint)((ulonglong)lVar2 >> 0x20);
      lVar5 = (ulonglong)uVar18 * (ulonglong)uVar21;
      uVar27 = (uint)((ulonglong)lVar5 >> 0x20);
      uVar24 = (uint)(lVar2 + lVar5);
      lVar3 = (ulonglong)*(uint *)(&DAT_0041b248 + iVar17) * (ulonglong)uVar9 +
              ((ulonglong)*(uint *)(&DAT_0041b248 + iVar17) * (ulonglong)uVar21 >> 0x20);
      uVar12 = (uint)((ulonglong)lVar3 >> 0x20);
      lVar6 = (ulonglong)*(uint *)(&DAT_0041b24c + iVar17) * (ulonglong)uVar21;
      uVar21 = (uint)((ulonglong)lVar6 >> 0x20);
      lVar2 = (ulonglong)uVar18 * (ulonglong)uVar9 +
              (ulonglong)
              CONCAT14(CARRY4(uVar13,uVar27) ||
                       CARRY4(uVar13 + uVar27,(uint)CARRY4((uint)lVar5,(uint)lVar2)),
                       (int)((ulonglong)(lVar2 + lVar5) >> 0x20));
      uVar13 = (uint)lVar2;
      bVar29 = CARRY4((uint)lVar6,(uint)lVar3);
      lVar3 = (ulonglong)*(uint *)(&DAT_0041b24c + iVar17) * (ulonglong)uVar9 +
              (ulonglong)
              CONCAT14(CARRY4(uVar12,uVar21) || CARRY4(uVar12 + uVar21,(uint)bVar29),
                       uVar12 + uVar21 + (uint)bVar29);
      uVar21 = (uint)((ulonglong)lVar3 >> 0x20);
      lVar5 = lVar3 + CONCAT44(uVar24,uVar16);
      bVar29 = CARRY4(uVar21,uVar24) || CARRY4(uVar21 + uVar24,(uint)CARRY4((uint)lVar3,uVar16));
      uVar21 = (uint)((ulonglong)lVar5 >> 0x20);
      uVar24 = uVar13 + bVar29;
      uVar16 = uVar24 * 0x4000000 | uVar21 >> 6;
      uVar9 = uVar21 * 0x4000000 | (uint)lVar5 >> 6;
      uVar21 = 7 - (byte)(&DAT_00419640)[uVar20] & 0x3f;
      uVar12 = uVar21 - 0x20;
      uVar20 = uVar18 >> uVar21;
      if (-1 < (int)uVar12) {
        uVar20 = 0;
      }
      uVar21 = uVar25 >> uVar21 | uVar18 << (0x20 - uVar21 & 0xff);
      if (-1 < (int)uVar12) {
        uVar21 = uVar18 >> (uVar12 & 0xff);
      }
      uVar12 = uVar21 + (~param_1 & 1);
      uVar20 = uVar20 + CARRY4(uVar21,~param_1 & 1);
      bVar30 = CARRY4(uVar16 + uVar20,(uint)CARRY4(uVar9,uVar12));
      uVar25 = (int)((ulonglong)lVar2 >> 0x20) +
               (uint)((((byte)(CARRY4(uVar13,(uint)bVar29) << 2 | in_Q) & 0x1f) >> 2 & 1) != 0);
      bVar29 = (((byte)((CARRY4(uVar16,uVar20) || bVar30) << 2 | in_Q) & 0x1f) >> 2 & 1) != 0;
      uVar21 = uVar24 >> 6 | uVar25 * 0x4000000;
      uVar4 = CONCAT44((uVar25 >> 6) + (uint)CARRY4(uVar21,(uint)bVar29),uVar21 + bVar29);
      lVar2 = (ulonglong)uVar16 * 10 + ((ulonglong)uVar9 * 10 >> 0x20);
      uVar21 = (uint)lVar2;
      bVar29 = (!CARRY4(uVar16,uVar20) && !bVar30) &&
               (uVar20 < uVar16 || uVar16 - uVar20 < (uint)(uVar12 <= uVar9));
      local_30 = (int)((ulonglong)lVar2 >> 0x20) +
                 (uint)(0x7fffffff < uVar21 ||
                       CARRY4(uVar21 + 0x80000000,(uint)(0xfffffff9 < (uint)((ulonglong)uVar9 * 10))
                             ));
      if (uVar9 == 0 && uVar16 == 0x40000000) {
        local_30 = 2;
      }
    }
  }
  uVar16 = (uint)(uVar4 >> 0x20);
  uVar13 = (uint)uVar4;
  uVar31 = FUN_01846088(uVar13,uVar16,100000000,0);
  lVar2 = ((uVar31 & 0xffffffff) * 0x68db8bb >> 0x28) * 0xffffd8f0 + (uVar31 & 0xffffffff);
  uVar4 = lVar2 * 0x147b & 0x3ffffff03ffffff;
  lVar2 = lVar2 + CONCAT44((uint)(uVar4 >> 0x33) * 0xff9c,((uint)uVar4 >> 0x13) * 0xff9c);
  lVar3 = lVar2 * 0x67;
  lVar2 = lVar2 + CONCAT44(((uint)((ulonglong)lVar3 >> 0x2a) & 0xf000f) * 0xf6,
                           ((uint)lVar3 >> 10 & 0xf000f) * 0xf6);
  uVar20 = (uint)lVar2;
  uVar9 = uVar20 * 0x1000000 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
          uVar20 >> 0x18;
  lVar3 = (uVar31 & 0xffffffff) * 100000000;
  uVar20 = (uint)lVar3;
  uVar12 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar25 = uVar12 * 0x1000000 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
           uVar12 >> 0x18;
  uVar21 = uVar13 - uVar20;
  iVar17 = uVar16 - ((int)(uVar31 >> 0x20) * 100000000 + (int)((ulonglong)lVar3 >> 0x20) +
                    (uint)(uVar13 < uVar20));
  uVar20 = (uint)(0x38d7d < uVar16 && (uint)(uVar13 < 0xa4c68000) <= 0x38d7e - uVar16);
  iVar15 = uVar8 + uVar20;
  iVar26 = iVar15 + 0xf;
  if (uVar21 == 0 && iVar17 == 0) {
    iVar28 = 0x30303030;
    iVar17 = 0x30303030;
    uVar8 = LZCOUNT(uVar25 << 1 | 1) | 0x20;
    uVar21 = uVar9 << 1 | (uVar12 & 0xff) >> 7;
    if (uVar21 != 0) {
      uVar8 = LZCOUNT(uVar21);
    }
    uVar8 = 0x46 - uVar8 >> 3;
  }
  else {
    lVar2 = (ulonglong)
            ((uint)(iVar17 * 0x68db8bb + (int)((ulonglong)uVar21 * 0x68db8bb >> 0x20)) >> 8) *
            0xffffd8f0 + CONCAT44(iVar17,uVar21);
    uVar4 = lVar2 * 0x147b & 0x3ffffff03ffffff;
    lVar2 = lVar2 + CONCAT44((uint)(uVar4 >> 0x33) * 0xff9c,((uint)uVar4 >> 0x13) * 0xff9c);
    lVar3 = lVar2 * 0x67;
    lVar2 = lVar2 + CONCAT44(((uint)((ulonglong)lVar3 >> 0x2a) & 0xf000f) * 0xf6,
                             ((uint)lVar3 >> 10 & 0xf000f) * 0xf6);
    uVar8 = (uint)lVar2;
    uVar21 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar18 = uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
             uVar8 >> 0x18;
    uVar12 = uVar21 * 0x1000000 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
             uVar21 >> 0x18;
    uVar8 = uVar18 << 1 | (uVar21 & 0xff) >> 7;
    uVar21 = LZCOUNT(uVar12 << 1 | 1) | 0x20;
    if (uVar8 != 0) {
      uVar21 = LZCOUNT(uVar8);
    }
    iVar28 = uVar12 + 0x30303030;
    iVar17 = uVar18 + 0x30303030 + (uint)(0xcfcfcfcf < uVar12);
    uVar8 = (0x46 - uVar21 >> 3) + 8;
  }
  iVar19 = 0x10;
  if (0x38d7d < uVar16 && (uint)(uVar13 < 0xa4c68000) <= 0x38d7e - uVar16) {
    iVar19 = 0x11;
  }
  piVar22 = (int *)((int)puVar7 + uVar20);
  *piVar22 = uVar25 + 0x30303030;
  piVar22[3] = iVar17;
  *(char *)((int)puVar7 + iVar19) = (char)local_30 + '0';
  piVar22[1] = uVar9 + 0x30303030 + (uint)(0xcfcfcfcf < uVar25);
  if (bVar29) {
    uVar8 = 0x11;
  }
  iVar17 = uVar8 + uVar20;
  uVar20 = iVar17 - 1;
  piVar22[2] = iVar28;
  if (0x14 < iVar15 + 0x14U) {
    uVar1 = *(undefined1 *)((int)puVar7 + 1);
    *(undefined1 *)((int)puVar7 + 1) = 0x2e;
    *(undefined1 *)puVar7 = uVar1;
    puVar11 = (undefined4 *)((int)puVar7 + uVar20);
    uVar14 = *(undefined4 *)(&DAT_0041a860 + iVar26 * 8);
    if (1 < uVar20) {
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    uVar20 = *(uint *)(&DAT_0041a864 + iVar26 * 8);
    *(char *)(puVar11 + 1) = (char)uVar20;
    *puVar11 = uVar14;
    return (undefined1 *)((int)puVar11 + (uVar20 >> 0x10));
  }
  puVar10 = (undefined1 *)((int)puVar7 + 1);
  if (iVar17 + -2 <= iVar26) {
    FUN_016dd52c(puVar7,puVar10,uVar20);
    FUN_016dd606((undefined1 *)((int)puVar7 + uVar20),0x30,(iVar15 + 0x12) - uVar20);
    *(undefined1 *)((int)puVar7 + iVar15 + 0x10) = 0x2e;
    return (undefined1 *)((int)puVar7 + iVar15 + 0x12);
  }
  if (iVar15 == -0x10 || iVar26 < -1) {
    puVar23 = (undefined1 *)((int)puVar7 + (1 - iVar26));
    FUN_016dd52c(puVar23,puVar10,uVar20);
    FUN_016dd606(puVar7,0x30,1 - iVar26);
    *(undefined1 *)((int)puVar7 + 1) = 0x2e;
    return puVar23 + uVar20;
  }
  FUN_016dd52c(puVar7,puVar10,iVar15 + 0x10);
  *(undefined1 *)((int)puVar7 + iVar15 + 0x10) = 0x2e;
  return (undefined1 *)((int)puVar7 + iVar17);
}

