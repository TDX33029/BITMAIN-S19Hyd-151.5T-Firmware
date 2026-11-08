// FUN_016d14cc @ 016d14cc size=1608 calls_out=2 calls_in=7
// strings: 

undefined1 * FUN_016d14cc(uint param_1,undefined1 *param_2)

{
  bool bVar1;
  ushort uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  char cVar19;
  uint uVar20;
  undefined1 *puVar21;
  uint uVar22;
  uint uVar23;
  bool bVar24;
  bool bVar25;
  byte in_Q;
  
  puVar6 = (undefined2 *)(param_2 + -((int)param_1 >> 0x1f));
  *param_2 = 0x2d;
  uVar16 = (param_1 & 0x7fffffff) >> 0x17;
  uVar11 = param_1 & 0x7fffff;
  if (uVar16 == 0) {
    if (uVar11 == 0) {
      *(undefined1 *)(puVar6 + 1) = 0x30;
      *puVar6 = 0x2e30;
      return (undefined1 *)((int)puVar6 + 3);
    }
    iVar14 = -0x26;
    uVar4 = (ulonglong)uVar11 * 0x8f7e32ce + ((ulonglong)uVar11 * 0x7bea5c70 >> 0x20);
    uVar13 = (uint)uVar4;
    uVar8 = (uint)(uVar4 >> 0x20);
    uVar9 = uVar8 & 3;
    uVar16 = 0x47bf1968 - (param_1 & 1);
    uVar11 = (int)((uVar4 & 0xffffffff) * 10 >> 0x20) + (uVar9 | uVar9 << 2) * 2 + 2 >> 2;
    if (uVar13 == 0 && uVar9 == 1) {
      uVar11 = 2;
    }
    uVar18 = uVar9 + CARRY4(uVar13,uVar16);
    uVar17 = uVar8 >> 2;
    if (3 < uVar18) {
      uVar17 = (uVar8 >> 2) + 1;
    }
    puVar15 = (undefined1 *)(uVar17 * 10);
    if (((uVar4 & 0x300000000) != 0 || uVar9 < (uVar16 <= uVar13)) && uVar18 < 4) {
      puVar15 = (undefined1 *)(uVar17 * 10 + uVar11);
    }
    uVar11 = 0;
    if (puVar15 < &LAB_00989680) {
      iVar10 = -0x2c;
      do {
        iVar14 = iVar10;
        uVar4 = ZEXT48(puVar15);
        puVar15 = (undefined1 *)(uVar4 * 10);
        uVar11 = (int)(uVar4 * 10 >> 0x20) + uVar11 * 10;
        iVar10 = iVar14 + -1;
      } while ((int)uVar11 < (int)(uint)(puVar15 < &LAB_00989680));
      iVar14 = iVar14 + 5;
    }
    uVar16 = (uint)(ZEXT48(puVar15) * 0x19999999 >> 0x20);
    lVar3 = (ulonglong)uVar11 * 0x9999999a + (ZEXT48(puVar15) * 0x9999999a >> 0x20);
    uVar9 = (uint)((ulonglong)lVar3 >> 0x20);
    bVar24 = CARRY4((uint)(ZEXT48(puVar15) * 0x19999999),(uint)lVar3);
    uVar4 = (ulonglong)uVar11 * 0x19999999 +
            (ulonglong)
            CONCAT14(CARRY4(uVar9,uVar16) || CARRY4(uVar9 + uVar16,(uint)bVar24),
                     uVar9 + uVar16 + (uint)bVar24);
    iVar10 = (int)(uVar4 >> 0x20);
    lVar3 = (uVar4 & 0xffffffff) * 0xfffffff6;
    uVar16 = (uint)lVar3;
    puVar21 = puVar15 + uVar16;
    bVar24 = puVar21 != (undefined1 *)0x0 ||
             ((int)((ulonglong)lVar3 >> 0x20) - (int)(undefined1 *)uVar4) + iVar10 * -10 + uVar11 +
             (uint)CARRY4(uVar16,(uint)puVar15) != 0;
    uVar11 = (uint)((uint)((undefined1 *)uVar4 < &LAB_00989680) <= (uint)-iVar10);
    iVar14 = iVar14 + uVar11;
  }
  else {
    iVar14 = (uVar16 - 0x96) * 0x4d105;
    uVar9 = uVar11 | 0x800000;
    if (uVar11 == 0) {
      uVar8 = iVar14 + -0x20000 >> 0x14;
      iVar14 = (uVar8 * -2 + 0x248) * 8;
      iVar10 = (uVar16 - 0x96) + (~uVar8 * 0x3526b >> 0x10);
      uVar13 = *(uint *)(&DAT_0041b244 + iVar14);
      uVar11 = 0x800000 << (iVar10 + 7U & 0x1f);
      uVar4 = (ulonglong)uVar11 * (ulonglong)*(uint *)(&DAT_0041b240 + iVar14);
      uVar18 = (uint)uVar4;
      uVar17 = (uint)((ulonglong)uVar11 * (ulonglong)*(uint *)(&DAT_0041b24c + iVar14) >> 0x20);
      lVar3 = (ulonglong)uVar11 * (ulonglong)uVar13 + (uVar4 >> 0x20);
      uVar16 = (uint)lVar3;
      uVar9 = (uint)((ulonglong)lVar3 >> 0x20);
      bVar24 = CARRY4((uint)((ulonglong)uVar11 * (ulonglong)*(uint *)(&DAT_0041b24c + iVar14)),
                      (uint)((ulonglong)uVar11 * (ulonglong)*(uint *)(&DAT_0041b248 + iVar14) >>
                            0x20));
      bVar25 = CARRY4(uVar18,uVar17) || CARRY4(uVar18 + uVar17,(uint)bVar24);
      bVar1 = CARRY4(uVar16,(uint)bVar25);
      uVar16 = uVar16 + bVar25;
      uVar23 = uVar9 + bVar1;
      uVar20 = uVar23 * 0x4000000 | uVar16 >> 6;
      uVar18 = uVar16 * 0x4000000 | uVar18 + uVar17 + (uint)bVar24 >> 6;
      uVar17 = -iVar10 & 0x3f;
      uVar16 = uVar17 - 0x20;
      uVar11 = uVar13 >> uVar17;
      if (-1 < (int)uVar16) {
        uVar11 = 0;
      }
      uVar17 = *(uint *)(&DAT_0041b240 + iVar14) >> uVar17 | uVar13 << (0x20 - uVar17 & 0xff);
      if (-1 < (int)uVar16) {
        uVar17 = uVar13 >> (uVar16 & 0xff);
      }
      bVar24 = CARRY4(uVar20,uVar11) || CARRY4(uVar20 + uVar11,(uint)CARRY4(uVar18,uVar17));
      bVar25 = (((byte)(bVar24 << 2 | in_Q) & 0x1f) >> 2 & 1) != 0;
      uVar16 = uVar23 >> 6 |
               (uint)((((byte)(CARRY4(uVar9,(uint)bVar1) << 2 | in_Q) & 0x1f) >> 2 & 1) != 0) <<
               0x1a;
      lVar3 = (ulonglong)uVar20 * 10 + ((ulonglong)uVar18 * 10 >> 0x20);
      uVar9 = (uint)lVar3;
      puVar15 = (undefined1 *)(uVar16 + bVar25);
      uVar13 = (uint)CARRY4(uVar16,(uint)bVar25);
      puVar12 = (undefined1 *)
                ((int)((ulonglong)lVar3 >> 0x20) +
                (uint)(0x80000000 < uVar9 ||
                      uVar9 + 0x80000000 < (uint)((int)((ulonglong)uVar18 * 10) != 0)));
      uVar16 = uVar11 >> 1;
      uVar11 = (uint)((byte)uVar11 & 1) << 0x1f | uVar17 >> 1;
      uVar4 = (ulonglong)(uVar18 - uVar11) * 10;
      lVar3 = (ulonglong)(uVar20 - (uVar16 + (uVar11 > uVar18))) * 10 + (uVar4 >> 0x20);
      uVar9 = (uint)lVar3;
      puVar21 = (undefined1 *)
                ((int)((ulonglong)lVar3 >> 0x20) + (uint)(uVar9 != 0 || uVar9 < ((int)uVar4 != 0)));
      if (puVar21 < puVar12) {
        puVar21 = puVar12;
      }
      bVar24 = bVar24 || uVar20 <= uVar16 && (uint)(uVar11 <= uVar18) <= uVar20 - uVar16;
    }
    else {
      uVar8 = iVar14 >> 0x14;
      iVar14 = (uVar8 * -2 + 0x248) * 8;
      uVar23 = *(uint *)(&DAT_0041b240 + iVar14);
      uVar17 = (byte)(&DAT_004199dd)[uVar16] + 0x1c & 0x3f;
      uVar18 = *(uint *)(&DAT_0041b244 + iVar14);
      uVar13 = uVar17 - 0x20;
      uVar11 = uVar9 >> (0x20 - uVar17 & 0xff);
      if (-1 < (int)uVar13) {
        uVar11 = uVar9 << (uVar13 & 0xff);
      }
      uVar9 = uVar9 << uVar17;
      if (-1 < (int)uVar13) {
        uVar9 = 0;
      }
      uVar20 = uVar18 + (0xfffffffe < uVar23);
      uVar13 = 0;
      lVar3 = (ulonglong)(uVar23 + 1) * (ulonglong)uVar11 +
              ((ulonglong)(uVar23 + 1) * (ulonglong)uVar9 >> 0x20);
      uVar17 = (uint)((ulonglong)lVar3 >> 0x20);
      lVar5 = (ulonglong)uVar20 * (ulonglong)uVar9;
      uVar9 = (uint)((ulonglong)lVar5 >> 0x20);
      bVar24 = CARRY4((uint)lVar5,(uint)lVar3);
      uVar4 = (ulonglong)uVar20 * (ulonglong)uVar11 +
              (ulonglong)
              CONCAT14(CARRY4(uVar17,uVar9) || CARRY4(uVar17 + uVar9,(uint)bVar24),
                       uVar17 + uVar9 + (uint)bVar24);
      uVar17 = (uint)uVar4;
      uVar9 = (uint)(uVar4 >> 0x20);
      uVar11 = uVar9 & 3;
      puVar21 = (undefined1 *)
                ((int)((uVar4 & 0xffffffff) * 10 >> 0x20) + (uVar11 | uVar11 << 2) * 2 + 2 >> 2);
      if (uVar17 == 0 && uVar11 == 1) {
        puVar21 = (undefined1 *)0x2;
      }
      uVar20 = 0x25 - (byte)(&DAT_004199dd)[uVar16] & 0x3f;
      uVar22 = uVar20 - 0x20;
      uVar16 = uVar18 >> uVar20;
      if (-1 < (int)uVar22) {
        uVar16 = 0;
      }
      uVar23 = uVar23 >> uVar20 | uVar18 << (0x20 - uVar20 & 0xff);
      if (-1 < (int)uVar22) {
        uVar23 = uVar18 >> (uVar22 & 0xff);
      }
      uVar18 = uVar23 + (~param_1 & 1);
      uVar16 = uVar16 + CARRY4(uVar23,~param_1 & 1);
      puVar15 = (undefined1 *)(uVar9 >> 2);
      bVar24 = 3 < uVar11 + uVar16 + (uint)CARRY4(uVar17,uVar18);
      if (bVar24) {
        puVar15 = (undefined1 *)((uVar9 >> 2) + 1);
      }
      bVar24 = uVar11 <= uVar16 && (uint)(uVar18 <= uVar17) <= uVar11 - uVar16 || bVar24;
    }
    uVar4 = CONCAT44(uVar13,puVar15);
    cVar19 = (char)puVar21;
    uVar11 = 0;
    uVar16 = (uint)((uint)(puVar15 < &LAB_00989680) <= -uVar13);
    iVar14 = uVar8 + uVar16 + 7;
    if (-uVar13 < (uint)(puVar15 < &DAT_000f4240)) {
      uVar4 = ZEXT48(puVar15) * 10 + CONCAT44(uVar13 * 10,puVar21);
      iVar14 = uVar8 + uVar16 + 6;
      if (bVar24) {
        uVar4 = CONCAT44((int)(ZEXT48(puVar15) * 10 >> 0x20) + uVar13 * 10,
                         (int)(ZEXT48(puVar15) * 10));
      }
      bVar24 = false;
      goto LAB_016d1914;
    }
    bVar24 = (bool)(bVar24 ^ 1);
    uVar11 = uVar16;
  }
  cVar19 = (char)puVar21;
  uVar16 = uVar11;
LAB_016d1914:
  lVar3 = (ulonglong)
          ((uint)((int)(uVar4 >> 0x20) * 0x68db8bb + (int)((uVar4 & 0xffffffff) * 0x68db8bb >> 0x20)
                 ) >> 8) * 0xffffd8f0 + uVar4;
  uVar4 = lVar3 * 0x147b & 0x3ffffff03ffffff;
  lVar3 = lVar3 + CONCAT44((uint)(uVar4 >> 0x33) * 0xff9c,((uint)uVar4 >> 0x13) * 0xff9c);
  lVar5 = lVar3 * 0x67;
  lVar3 = lVar3 + CONCAT44(((uint)((ulonglong)lVar5 >> 0x2a) & 0xf000f) * 0xf6,
                           ((uint)lVar5 >> 10 & 0xf000f) * 0xf6);
  uVar9 = (uint)lVar3;
  uVar13 = uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
           uVar9 >> 0x18;
  uVar9 = (uint)((ulonglong)lVar3 >> 0x20);
  uVar8 = uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
          uVar9 >> 0x18;
  *(int *)((int)puVar6 + uVar16) = uVar8 + 0x30303030;
  ((int *)((int)puVar6 + uVar16))[1] = uVar13 + 0x30303030 + (uint)(0xcfcfcfcf < uVar8);
  iVar10 = 8;
  if (uVar11 != 0) {
    iVar10 = 9;
  }
  *(char *)((int)puVar6 + iVar10) = cVar19 + '0';
  uVar8 = LZCOUNT(uVar8 << 1 | 1) | 0x20;
  uVar11 = uVar13 << 1 | (uVar9 & 0xff) >> 7;
  if (uVar11 != 0) {
    uVar8 = LZCOUNT(uVar11);
  }
  uVar11 = 0x46 - uVar8 >> 3;
  if (bVar24) {
    uVar11 = 9;
  }
  iVar10 = uVar11 + uVar16;
  uVar11 = iVar10 - 1;
  if (0x12 < iVar14 + 6U) {
    *(undefined1 *)puVar6 = *(undefined1 *)((int)puVar6 + 1);
    *(undefined1 *)((int)puVar6 + 1) = 0x2e;
    puVar7 = (undefined4 *)((int)puVar6 + uVar11);
    if (1 < uVar11) {
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    uVar2 = *(ushort *)(&DAT_0041a866 + iVar14 * 8);
    *puVar7 = *(undefined4 *)(&DAT_0041a860 + iVar14 * 8);
    return (undefined1 *)((int)puVar7 + (uint)uVar2);
  }
  if (iVar10 + -2 <= iVar14) {
    FUN_016dd52c(puVar6,(undefined1 *)((int)puVar6 + 1),uVar11);
    FUN_016dd606((undefined1 *)((int)puVar6 + uVar11),0x30,(iVar14 + 3) - uVar11);
    *(undefined1 *)((int)puVar6 + iVar14 + 1) = 0x2e;
    return (undefined1 *)((int)puVar6 + iVar14 + 3);
  }
  if (iVar14 < 0) {
    puVar15 = (undefined1 *)((int)puVar6 + (1 - iVar14));
    FUN_016dd52c(puVar15,(undefined1 *)((int)puVar6 + 1),uVar11);
    FUN_016dd606(puVar6,0x30,1 - iVar14);
    *(undefined1 *)((int)puVar6 + 1) = 0x2e;
    return puVar15 + uVar11;
  }
  FUN_016dd52c(puVar6,(undefined1 *)((int)puVar6 + 1),iVar14 + 1);
  *(undefined1 *)((int)puVar6 + iVar14 + 1) = 0x2e;
  return (undefined1 *)((int)puVar6 + iVar10);
}

