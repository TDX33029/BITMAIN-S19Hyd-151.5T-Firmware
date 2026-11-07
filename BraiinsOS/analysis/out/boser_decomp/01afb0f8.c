// FUN_01afb0f8 @ 01afb0f8 size=2804 calls_out=3 calls_in=9
// strings: 

char * FUN_01afb0f8(uint param_1,uint param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined2 *puVar12;
  char *pcVar13;
  char *pcVar14;
  undefined2 uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int *piVar23;
  undefined1 *puVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  bool bVar32;
  bool bVar33;
  byte in_Q;
  ulonglong uVar34;
  int local_34;
  uint local_2c;
  
  puVar7 = (undefined2 *)(param_3 + -((int)param_2 >> 0x1f));
  *param_3 = 0x2d;
  uVar16 = (param_2 & 0x7fffffff) >> 0x14;
  param_2 = param_2 & 0xfffff;
  if (uVar16 == 0) {
    if (param_1 == 0 && param_2 == 0) {
      *(undefined1 *)(puVar7 + 1) = 0x30;
      *puVar7 = 0x2e30;
      return (char *)((int)puVar7 + 3);
    }
    uVar16 = param_1 << 5;
    uVar22 = (uint)((ulonglong)uVar16 * 0xee382c42);
    uVar9 = param_2 << 5 | param_1 >> 0x1b;
    lVar3 = (ulonglong)uVar9 * 0xee382c42 + ((ulonglong)uVar16 * 0xee382c42 >> 0x20);
    uVar17 = (uint)((ulonglong)lVar3 >> 0x20);
    lVar2 = (ulonglong)uVar9 * 0xdd9ed7b5 + ((ulonglong)uVar16 * 0xdd9ed7b5 >> 0x20);
    uVar19 = (uint)((ulonglong)lVar2 >> 0x20);
    lVar4 = (ulonglong)uVar16 * 0xfcf62c1d;
    uVar21 = (uint)((ulonglong)lVar4 >> 0x20);
    uVar20 = (uint)((ulonglong)uVar16 * 0x46729e03 >> 0x20);
    bVar32 = CARRY4((uint)((ulonglong)uVar16 * 0x46729e03),(uint)lVar2);
    uVar16 = (uint)(lVar3 + lVar4);
    lVar2 = (ulonglong)uVar9 * 0x46729e03 +
            (ulonglong)
            CONCAT14(CARRY4(uVar19,uVar20) || CARRY4(uVar19 + uVar20,(uint)bVar32),
                     uVar19 + uVar20 + (uint)bVar32);
    uVar19 = (uint)((ulonglong)lVar2 >> 0x20);
    lVar3 = (ulonglong)uVar9 * 0xfcf62c1d +
            (ulonglong)
            CONCAT14(CARRY4(uVar17,uVar21) ||
                     CARRY4(uVar17 + uVar21,(uint)CARRY4((uint)lVar4,(uint)lVar3)),
                     (int)((ulonglong)(lVar3 + lVar4) >> 0x20));
    uVar17 = (uint)lVar3;
    lVar4 = lVar2 + CONCAT44(uVar16,uVar22);
    bVar32 = CARRY4(uVar19,uVar16) || CARRY4(uVar19 + uVar16,(uint)CARRY4((uint)lVar2,uVar22));
    uVar16 = (uint)((ulonglong)lVar4 >> 0x20);
    uVar9 = uVar17 + bVar32;
    uVar19 = (int)((ulonglong)lVar3 >> 0x20) + (uint)CARRY4(uVar17,(uint)bVar32);
    uVar22 = uVar9 * 0x4000000 | uVar16 >> 6;
    uVar20 = uVar16 * 0x4000000 | (uint)lVar4 >> 6;
    uVar21 = param_1 & 1 ^ 0x7b8e0b11;
    bVar32 = CARRY4(uVar22 + 0x3f3d8b07,(uint)CARRY4(uVar20,uVar21));
    bVar33 = 0xc0c274f8 < uVar22 || bVar32;
    uVar16 = uVar9 >> 6 | uVar19 * 0x4000000;
    lVar2 = (ulonglong)(uVar16 + bVar33) * 10;
    uVar25 = (uint)lVar2;
    lVar3 = (ulonglong)uVar22 * 10 + ((ulonglong)uVar20 * 10 >> 0x20);
    uVar9 = (uint)lVar3;
    uVar17 = (uint)((ulonglong)lVar3 >> 0x20);
    uVar19 = (int)((ulonglong)lVar2 >> 0x20) +
             ((uVar19 >> 6) + (uint)CARRY4(uVar16,(uint)bVar33)) * 10;
    bVar33 = 0x7fffffff < uVar9 ||
             CARRY4(uVar9 + 0x80000000,(uint)(0xfffffff9 < (uint)((ulonglong)uVar20 * 10)));
    uVar9 = uVar17 + bVar33;
    uVar16 = (uint)CARRY4(uVar17,(uint)bVar33);
    if (uVar20 == 0 && uVar22 == 0x40000000) {
      uVar9 = 2;
      uVar16 = 0;
    }
    uVar17 = uVar25 + uVar9;
    uVar16 = uVar19 + uVar16 + (uint)CARRY4(uVar25,uVar9);
    if ((0xc0c274f8 < uVar22 || bVar32) ||
        uVar22 < 0x3f3d8b08 && (uint)(uVar21 <= uVar20) <= uVar22 + 0xc0c274f9) {
      uVar17 = uVar25;
      uVar16 = uVar19;
    }
    iVar10 = -0x144;
    if (uVar16 < 0x38d7f && (uint)(0xa4c67fff < uVar17) <= uVar16 - 0x38d7e) {
      do {
        uVar6 = (ulonglong)uVar17;
        uVar17 = (uint)(uVar6 * 10);
        iVar10 = iVar10 + -1;
        uVar16 = (int)(uVar6 * 10 >> 0x20) + uVar16 * 10;
      } while ((int)(uVar16 - ((uVar17 < 0xa4c68000) + 0x38d7e)) < 0 !=
               (SBORROW4(uVar16,0x38d7e) != SBORROW4(uVar16 - 0x38d7e,(uint)(uVar17 < 0xa4c68000))))
      ;
    }
    uVar19 = (uint)((ulonglong)uVar17 * 0x19999999 >> 0x20);
    lVar3 = (ulonglong)uVar16 * 0x9999999a + ((ulonglong)uVar17 * 0x9999999a >> 0x20);
    uVar9 = (uint)((ulonglong)lVar3 >> 0x20);
    bVar32 = CARRY4((uint)((ulonglong)uVar17 * 0x19999999),(uint)lVar3);
    uVar6 = (ulonglong)uVar16 * 0x19999999 +
            (ulonglong)
            CONCAT14(CARRY4(uVar9,uVar19) || CARRY4(uVar9 + uVar19,(uint)bVar32),
                     uVar9 + uVar19 + (uint)bVar32);
    lVar3 = (uVar6 & 0xffffffff) * 0xfffffff6;
    uVar9 = (uint)lVar3;
    local_2c = uVar9 + uVar17;
    bVar32 = local_2c != 0 ||
             ((int)((ulonglong)lVar3 >> 0x20) - (int)uVar6) + (int)(uVar6 >> 0x20) * -10 + uVar16 +
             (uint)CARRY4(uVar9,uVar17) != 0;
  }
  else {
    iVar8 = uVar16 - 0x433;
    if (param_1 == 0 && param_2 == 0) {
      iVar10 = iVar8 * 0x4d105 + -0x20000 >> 0x14;
      uVar9 = (short)((0x12eU - iVar10 & 0xffff) >> 2) * 0x4925;
      uVar16 = uVar9 >> 0x11;
      iVar28 = uVar16 * 0x10;
      uVar29 = *(uint *)(&DAT_005347dc + iVar28);
      uVar26 = *(uint *)(&DAT_005347e0 + iVar28);
      iVar11 = ((0x12eU - iVar10) + (uVar16 * 8 - (uVar9 >> 0x11)) * -4 & 0xffff) * 8;
      uVar17 = *(uint *)(&DAT_005346f8 + iVar11);
      uVar30 = *(uint *)(&DAT_005347e4 + iVar28);
      uVar22 = *(uint *)(&DAT_005346fc + iVar11);
      lVar3 = (ulonglong)uVar17 * (ulonglong)*(uint *)(&DAT_005347d8 + iVar28);
      uVar16 = (uint)lVar3;
      uVar27 = (uint)((ulonglong)lVar3 >> 0x20);
      lVar3 = (ulonglong)uVar17 * (ulonglong)uVar29 + (ulonglong)uVar27;
      uVar19 = (uint)((ulonglong)lVar3 >> 0x20);
      lVar2 = (ulonglong)uVar22 * (ulonglong)*(uint *)(&DAT_005347d8 + iVar28);
      uVar9 = (uint)lVar2;
      uVar25 = (uint)((ulonglong)lVar2 >> 0x20);
      bVar32 = CARRY4(uVar9,(uint)lVar3);
      uVar20 = (uint)((ulonglong)uVar17 * (ulonglong)uVar26 >> 0x20);
      uVar31 = (uint)((ulonglong)uVar22 * (ulonglong)uVar26 >> 0x20);
      lVar3 = (ulonglong)uVar17 * (ulonglong)uVar30 + (ulonglong)uVar20;
      uVar21 = (uint)((ulonglong)lVar3 >> 0x20);
      lVar2 = (ulonglong)uVar22 * (ulonglong)uVar29 +
              (ulonglong)
              CONCAT14(CARRY4(uVar19,uVar25) || CARRY4(uVar19 + uVar25,(uint)bVar32),
                       uVar19 + uVar25 + (uint)bVar32);
      uVar25 = (uint)lVar2;
      bVar32 = CARRY4((uint)((ulonglong)uVar22 * (ulonglong)uVar26),(uint)lVar3);
      lVar3 = (ulonglong)uVar22 * (ulonglong)uVar30 +
              (ulonglong)
              CONCAT14(CARRY4(uVar21,uVar31) || CARRY4(uVar21 + uVar31,(uint)bVar32),
                       uVar21 + uVar31 + (uint)bVar32);
      uVar19 = (uint)((ulonglong)lVar3 >> 0x20);
      uVar9 = uVar27 + uVar9 + uVar17 * uVar29;
      lVar4 = lVar3 + CONCAT44(uVar9,uVar16);
      bVar32 = CARRY4(uVar9,uVar19) || CARRY4(uVar9 + uVar19,(uint)CARRY4(uVar16,(uint)lVar3));
      uVar19 = (uint)((ulonglong)lVar4 >> 0x20);
      uVar9 = uVar25 + bVar32;
      uVar16 = (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4(uVar25,(uint)bVar32);
      iVar8 = iVar8 + (iVar10 * 0xfcad95 + 0xfcad95U >> 0x10);
      if (-1 < (int)uVar16) {
        uVar16 = uVar16 * 2 | uVar9 >> 0x1f;
        uVar9 = uVar9 * 2 | uVar19 >> 0x1f;
        lVar4 = CONCAT44(uVar19 * 2 | (uint)lVar4 >> 0x1f,
                         (uint)lVar4 * 2 | uVar30 * uVar17 + uVar26 * uVar22 + uVar20 >> 0x1f);
      }
      local_34 = (int)((ulonglong)lVar4 >> 0x20);
      uVar20 = iVar8 + 7U & 0x3f;
      uVar17 = param_1 << uVar20;
      uVar19 = uVar20 - 0x20;
      if (-1 < (int)uVar19) {
        uVar17 = 0;
      }
      uVar22 = (uint)((ulonglong)uVar17 * (ulonglong)uVar9);
      uVar20 = param_1 >> (0x20 - uVar20 & 0xff) | (param_2 | 0x100000) << uVar20;
      if (-1 < (int)uVar19) {
        uVar20 = param_1 << (uVar19 & 0xff);
      }
      uVar19 = *(uint *)(&DAT_00534948 + (0x124U - iVar10 >> 5) * 4) >> (0x124U - iVar10 & 0x1f) & 1
      ;
      uVar21 = (uint)lVar4 - uVar19;
      lVar3 = (ulonglong)uVar17 * (ulonglong)uVar16 + ((ulonglong)uVar17 * (ulonglong)uVar9 >> 0x20)
      ;
      uVar25 = (uint)((ulonglong)lVar3 >> 0x20);
      lVar5 = (ulonglong)uVar20 * (ulonglong)uVar21;
      uVar27 = (uint)((ulonglong)lVar5 >> 0x20);
      uVar19 = local_34 - (uint)((uint)lVar4 < uVar19);
      lVar2 = (ulonglong)uVar17 * (ulonglong)uVar19 +
              ((ulonglong)uVar17 * (ulonglong)uVar21 >> 0x20);
      uVar21 = (uint)((ulonglong)lVar2 >> 0x20);
      lVar4 = (ulonglong)uVar20 * (ulonglong)uVar9;
      uVar26 = (uint)((ulonglong)lVar4 >> 0x20);
      bVar32 = CARRY4((uint)lVar5,(uint)lVar2);
      uVar17 = (uint)(lVar3 + lVar4);
      lVar2 = (ulonglong)uVar20 * (ulonglong)uVar19 +
              (ulonglong)
              CONCAT14(CARRY4(uVar21,uVar27) || CARRY4(uVar21 + uVar27,(uint)bVar32),
                       uVar21 + uVar27 + (uint)bVar32);
      uVar21 = (uint)((ulonglong)lVar2 >> 0x20);
      lVar3 = (ulonglong)uVar20 * (ulonglong)uVar16 +
              (ulonglong)
              CONCAT14(CARRY4(uVar25,uVar26) ||
                       CARRY4(uVar25 + uVar26,(uint)CARRY4((uint)lVar4,(uint)lVar3)),
                       (int)((ulonglong)(lVar3 + lVar4) >> 0x20));
      uVar19 = (uint)lVar3;
      lVar4 = lVar2 + CONCAT44(uVar17,uVar22);
      bVar33 = CARRY4(uVar21,uVar17) || CARRY4(uVar21 + uVar17,(uint)CARRY4((uint)lVar2,uVar22));
      uVar17 = (uint)((ulonglong)lVar4 >> 0x20);
      uVar21 = uVar19 + bVar33;
      uVar25 = uVar21 * 0x4000000 | uVar17 >> 6;
      uVar17 = uVar17 * 0x4000000 | (uint)lVar4 >> 6;
      uVar22 = -iVar8 & 0x3f;
      uVar9 = uVar9 >> uVar22 | uVar16 << (0x20 - uVar22 & 0xff);
      uVar20 = uVar22 - 0x20;
      if (-1 < (int)uVar20) {
        uVar9 = uVar16 >> (uVar20 & 0xff);
      }
      uVar16 = uVar16 >> uVar22;
      if (-1 < (int)uVar20) {
        uVar16 = 0;
      }
      uVar20 = uVar16 >> 1;
      uVar22 = (uint)((byte)uVar16 & 1) << 0x1f | uVar9 >> 1;
      bVar32 = CARRY4(uVar25,uVar16) || CARRY4(uVar25 + uVar16,(uint)CARRY4(uVar17,uVar9));
      uVar9 = (int)((ulonglong)lVar3 >> 0x20) +
              (uint)((((byte)(CARRY4(uVar19,(uint)bVar33) << 2 | in_Q) & 0x1f) >> 2 & 1) != 0);
      bVar33 = (((byte)(bVar32 << 2 | in_Q) & 0x1f) >> 2 & 1) != 0;
      uVar6 = (ulonglong)(uVar17 - uVar22) * 10;
      lVar3 = (ulonglong)uVar25 * 10 + ((ulonglong)uVar17 * 10 >> 0x20);
      uVar19 = (uint)lVar3;
      lVar2 = (ulonglong)(uVar25 - (uVar20 + (uVar22 > uVar17))) * 10 + (uVar6 >> 0x20);
      uVar26 = (uint)lVar2;
      uVar16 = uVar21 >> 6 | uVar9 * 0x4000000;
      iVar28 = uVar16 + bVar33;
      iVar8 = (uVar9 >> 6) + (uint)CARRY4(uVar16,(uint)bVar33);
      uVar16 = (int)((ulonglong)lVar3 >> 0x20) +
               (uint)(0x80000000 < uVar19 ||
                     uVar19 + 0x80000000 < (uint)((int)((ulonglong)uVar17 * 10) != 0));
      local_2c = (int)((ulonglong)lVar2 >> 0x20) + (uint)(uVar26 != 0 || uVar26 < ((int)uVar6 != 0))
      ;
      if (local_2c < uVar16) {
        local_2c = uVar16;
      }
      bVar32 = bVar32 || uVar25 <= uVar20 && (uint)(uVar22 <= uVar17) <= uVar25 - uVar20;
    }
    else {
      iVar10 = iVar8 * 0x4d105 >> 0x14;
      uVar9 = (short)((0x12eU - iVar10 & 0xffff) >> 2) * 0x4925;
      uVar16 = uVar9 >> 0x11;
      iVar28 = uVar16 * 0x10;
      uVar27 = *(uint *)(&DAT_005347e4 + iVar28);
      iVar11 = ((0x12eU - iVar10) + (uVar16 * 8 - (uVar9 >> 0x11)) * -4 & 0xffff) * 8;
      uVar17 = *(uint *)(&DAT_005346f8 + iVar11);
      uVar26 = *(uint *)(&DAT_005346fc + iVar11);
      lVar3 = (ulonglong)uVar17 * (ulonglong)*(uint *)(&DAT_005347d8 + iVar28);
      uVar16 = (uint)lVar3;
      uVar29 = (uint)((ulonglong)lVar3 >> 0x20);
      lVar3 = (ulonglong)uVar26 * (ulonglong)*(uint *)(&DAT_005347d8 + iVar28);
      uVar20 = (uint)lVar3;
      uVar22 = (uint)((ulonglong)lVar3 >> 0x20);
      uVar9 = *(uint *)(&DAT_005347dc + iVar28);
      uVar30 = *(uint *)(&DAT_005347e0 + iVar28);
      uVar25 = (uint)((ulonglong)uVar26 * (ulonglong)uVar30 >> 0x20);
      lVar3 = (ulonglong)uVar17 * (ulonglong)uVar9 + (ulonglong)uVar29;
      uVar19 = (uint)((ulonglong)lVar3 >> 0x20);
      bVar32 = CARRY4(uVar20,(uint)lVar3);
      uVar21 = (uint)((ulonglong)uVar17 * (ulonglong)uVar30 >> 0x20);
      lVar3 = (ulonglong)uVar26 * (ulonglong)uVar9 +
              (ulonglong)
              CONCAT14(CARRY4(uVar19,uVar22) || CARRY4(uVar19 + uVar22,(uint)bVar32),
                       uVar19 + uVar22 + (uint)bVar32);
      uVar19 = (uint)lVar3;
      lVar2 = (ulonglong)uVar17 * (ulonglong)uVar27 + (ulonglong)uVar21;
      uVar22 = (uint)((ulonglong)lVar2 >> 0x20);
      bVar32 = CARRY4((uint)((ulonglong)uVar26 * (ulonglong)uVar30),(uint)lVar2);
      lVar2 = (ulonglong)uVar26 * (ulonglong)uVar27 +
              (ulonglong)
              CONCAT14(CARRY4(uVar22,uVar25) || CARRY4(uVar22 + uVar25,(uint)bVar32),
                       uVar22 + uVar25 + (uint)bVar32);
      uVar22 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar9 = uVar29 + uVar20 + uVar17 * uVar9;
      lVar4 = lVar2 + CONCAT44(uVar9,uVar16);
      bVar32 = CARRY4(uVar9,uVar22) || CARRY4(uVar9 + uVar22,(uint)CARRY4(uVar16,(uint)lVar2));
      uVar20 = (uint)((ulonglong)lVar4 >> 0x20);
      uVar16 = uVar19 + bVar32;
      uVar9 = (int)((ulonglong)lVar3 >> 0x20) + (uint)CARRY4(uVar19,(uint)bVar32);
      iVar8 = iVar8 + (iVar10 * 0xfcad95 + 0xfcad95U >> 0x10);
      if (-1 < (int)uVar9) {
        uVar9 = uVar9 * 2 | uVar16 >> 0x1f;
        uVar16 = uVar16 * 2 | uVar20 >> 0x1f;
        lVar4 = CONCAT44(uVar20 * 2 | (uint)lVar4 >> 0x1f,
                         (uint)lVar4 * 2 | uVar27 * uVar17 + uVar30 * uVar26 + uVar21 >> 0x1f);
      }
      uVar20 = iVar8 + 7U & 0x3f;
      uVar19 = *(uint *)(&DAT_00534948 + (0x124U - iVar10 >> 5) * 4) >> (0x124U - iVar10 & 0x1f) & 1
      ;
      uVar17 = param_1 << uVar20;
      uVar22 = (uint)lVar4 - uVar19;
      uVar19 = (int)((ulonglong)lVar4 >> 0x20) - (uint)((uint)lVar4 < uVar19);
      uVar21 = uVar20 - 0x20;
      if (-1 < (int)uVar21) {
        uVar17 = 0;
      }
      uVar25 = (uint)((ulonglong)uVar17 * (ulonglong)uVar16);
      lVar3 = (ulonglong)uVar17 * (ulonglong)uVar9 + ((ulonglong)uVar17 * (ulonglong)uVar16 >> 0x20)
      ;
      uVar27 = (uint)((ulonglong)lVar3 >> 0x20);
      lVar2 = (ulonglong)uVar17 * (ulonglong)uVar19 +
              ((ulonglong)uVar17 * (ulonglong)uVar22 >> 0x20);
      uVar26 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar17 = param_1 >> (0x20 - uVar20 & 0xff) | (param_2 | 0x100000) << uVar20;
      if (-1 < (int)uVar21) {
        uVar17 = param_1 << (uVar21 & 0xff);
      }
      lVar4 = (ulonglong)uVar17 * (ulonglong)uVar22;
      uVar20 = (uint)((ulonglong)lVar4 >> 0x20);
      bVar32 = CARRY4((uint)lVar4,(uint)lVar2);
      lVar4 = (ulonglong)uVar17 * (ulonglong)uVar16;
      uVar22 = (uint)((ulonglong)lVar4 >> 0x20);
      lVar2 = (ulonglong)uVar17 * (ulonglong)uVar19 +
              (ulonglong)
              CONCAT14(CARRY4(uVar26,uVar20) || CARRY4(uVar26 + uVar20,(uint)bVar32),
                       uVar26 + uVar20 + (uint)bVar32);
      uVar19 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar20 = (uint)(lVar3 + lVar4);
      lVar3 = (ulonglong)uVar17 * (ulonglong)uVar9 +
              (ulonglong)
              CONCAT14(CARRY4(uVar27,uVar22) ||
                       CARRY4(uVar27 + uVar22,(uint)CARRY4((uint)lVar4,(uint)lVar3)),
                       (int)((ulonglong)(lVar3 + lVar4) >> 0x20));
      uVar26 = (uint)lVar3;
      lVar4 = lVar2 + CONCAT44(uVar20,uVar25);
      bVar33 = CARRY4(uVar19,uVar20) || CARRY4(uVar19 + uVar20,(uint)CARRY4((uint)lVar2,uVar25));
      uVar17 = (uint)((ulonglong)lVar4 >> 0x20);
      uVar25 = uVar26 + bVar33;
      uVar19 = uVar25 * 0x4000000 | uVar17 >> 6;
      uVar20 = uVar17 * 0x4000000 | (uint)lVar4 >> 6;
      uVar22 = -iVar8 & 0x3f;
      uVar21 = uVar22 - 0x20;
      uVar17 = uVar9 >> uVar22;
      if (-1 < (int)uVar21) {
        uVar17 = 0;
      }
      uVar16 = uVar16 >> uVar22 | uVar9 << (0x20 - uVar22 & 0xff);
      if (-1 < (int)uVar21) {
        uVar16 = uVar9 >> (uVar21 & 0xff);
      }
      uVar9 = uVar16 + (~param_1 & 1);
      uVar17 = uVar17 + CARRY4(uVar16,~param_1 & 1);
      bVar32 = CARRY4(uVar19,uVar17) || CARRY4(uVar19 + uVar17,(uint)CARRY4(uVar20,uVar9));
      uVar16 = (int)((ulonglong)lVar3 >> 0x20) +
               (uint)((((byte)(CARRY4(uVar26,(uint)bVar33) << 2 | in_Q) & 0x1f) >> 2 & 1) != 0);
      bVar33 = (((byte)(bVar32 << 2 | in_Q) & 0x1f) >> 2 & 1) != 0;
      uVar22 = uVar25 >> 6 | uVar16 * 0x4000000;
      iVar28 = uVar22 + bVar33;
      iVar8 = (uVar16 >> 6) + (uint)CARRY4(uVar22,(uint)bVar33);
      bVar32 = bVar32 || uVar19 <= uVar17 && (uint)(uVar9 <= uVar20) <= uVar19 - uVar17;
      lVar3 = (ulonglong)uVar19 * 10 + ((ulonglong)uVar20 * 10 >> 0x20);
      uVar16 = (uint)lVar3;
      local_2c = (int)((ulonglong)lVar3 >> 0x20) +
                 (uint)(0x7fffffff < uVar16 ||
                       CARRY4(uVar16 + 0x80000000,
                              (uint)(0xfffffff9 < (uint)((ulonglong)uVar20 * 10))));
      if (uVar20 == 0 && uVar19 == 0x40000000) {
        local_2c = 2;
      }
    }
    uVar6 = CONCAT44(iVar8,iVar28);
    bVar32 = (bool)(bVar32 ^ 1);
  }
  uVar22 = (uint)(uVar6 >> 0x20);
  uVar21 = (uint)uVar6;
  uVar34 = FUN_01bf0ff0(uVar21,uVar22,100000000,0);
  lVar3 = ((uVar34 & 0xffffffff) * 0x68db8bb >> 0x28) * 0xffffd8f0 + (uVar34 & 0xffffffff);
  uVar6 = lVar3 * 0x147b & 0x3ffffff03ffffff;
  lVar3 = lVar3 + CONCAT44((uint)(uVar6 >> 0x33) * 0xff9c,((uint)uVar6 >> 0x13) * 0xff9c);
  lVar2 = lVar3 * 0x67;
  lVar3 = lVar3 + CONCAT44(((uint)((ulonglong)lVar2 >> 0x2a) & 0xf000f) * 0xf6,
                           ((uint)lVar2 >> 10 & 0xf000f) * 0xf6);
  uVar16 = (uint)lVar3;
  uVar19 = uVar16 * 0x1000000 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
           uVar16 >> 0x18;
  lVar2 = (uVar34 & 0xffffffff) * 100000000;
  uVar16 = (uint)lVar2;
  uVar9 = (uint)((ulonglong)lVar3 >> 0x20);
  uVar17 = uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
           uVar9 >> 0x18;
  uVar20 = uVar21 - uVar16;
  iVar8 = uVar22 - ((int)(uVar34 >> 0x20) * 100000000 + (int)((ulonglong)lVar2 >> 0x20) +
                   (uint)(uVar21 < uVar16));
  uVar16 = (uint)(0x38d7d < uVar22 && (uint)(uVar21 < 0xa4c68000) <= 0x38d7e - uVar22);
  iVar10 = iVar10 + uVar16;
  iVar28 = iVar10 + 0xf;
  if (uVar20 == 0 && iVar8 == 0) {
    uVar20 = uVar19 << 1 | (uVar9 & 0xff) >> 7;
    iVar8 = 0x30303030;
    uVar9 = LZCOUNT(uVar17 << 1 | 1) | 0x20;
    if (uVar20 != 0) {
      uVar9 = LZCOUNT(uVar20);
    }
    uVar9 = 0x46 - uVar9 >> 3;
    iVar11 = 0x30303030;
  }
  else {
    lVar3 = (ulonglong)
            ((uint)(iVar8 * 0x68db8bb + (int)((ulonglong)uVar20 * 0x68db8bb >> 0x20)) >> 8) *
            0xffffd8f0 + CONCAT44(iVar8,uVar20);
    uVar6 = lVar3 * 0x147b & 0x3ffffff03ffffff;
    lVar3 = lVar3 + CONCAT44((uint)(uVar6 >> 0x33) * 0xff9c,((uint)uVar6 >> 0x13) * 0xff9c);
    lVar2 = lVar3 * 0x67;
    lVar3 = lVar3 + CONCAT44(((uint)((ulonglong)lVar2 >> 0x2a) & 0xf000f) * 0xf6,
                             ((uint)lVar2 >> 10 & 0xf000f) * 0xf6);
    uVar9 = (uint)lVar3;
    uVar9 = uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
            uVar9 >> 0x18;
    uVar20 = (uint)((ulonglong)lVar3 >> 0x20);
    uVar22 = uVar20 * 0x1000000 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
             uVar20 >> 0x18;
    uVar21 = uVar9 << 1 | (uVar20 & 0xff) >> 7;
    uVar20 = LZCOUNT(uVar22 << 1 | 1) | 0x20;
    if (uVar21 != 0) {
      uVar20 = LZCOUNT(uVar21);
    }
    iVar8 = uVar22 + 0x30303030;
    iVar11 = uVar9 + 0x30303030 + (uint)(0xcfcfcfcf < uVar22);
    uVar9 = (0x46 - uVar20 >> 3) + 8;
  }
  piVar23 = (int *)((int)puVar7 + uVar16);
  *piVar23 = uVar17 + 0x30303030;
  piVar23[3] = iVar11;
  piVar23[1] = uVar19 + 0x30303030 + (uint)(0xcfcfcfcf < uVar17);
  piVar23[2] = iVar8;
  *(char *)(piVar23 + 4) = (char)local_2c + '0';
  if (bVar32) {
    uVar9 = 0x11;
  }
  iVar8 = uVar9 + uVar16;
  uVar16 = iVar8 - 1;
  if (iVar10 + 0x14U < 0x15) {
    puVar18 = (undefined1 *)((int)puVar7 + 1);
    if (iVar28 < iVar8 + -2) {
      if (iVar10 == -0x10 || iVar28 < -1) {
        puVar24 = (undefined1 *)((int)puVar7 + (1 - iVar28));
        FUN_01bed864(puVar24,puVar18,uVar16);
        FUN_01bed93e(puVar7,0x30,1 - iVar28);
        *(undefined1 *)((int)puVar7 + 1) = 0x2e;
        return puVar24 + uVar16;
      }
      FUN_01bed864(puVar7,puVar18,iVar10 + 0x10);
      *(undefined1 *)((int)puVar7 + iVar10 + 0x10) = 0x2e;
    }
    else {
      FUN_01bed864(puVar7,puVar18,uVar16);
      iVar8 = iVar10 + 0x12;
      FUN_01bed93e((undefined1 *)((int)puVar7 + uVar16),0x30,iVar8 - uVar16);
      *(undefined1 *)((int)puVar7 + iVar10 + 0x10) = 0x2e;
    }
    pcVar14 = (char *)((int)puVar7 + iVar8);
  }
  else {
    iVar8 = iVar28;
    if (iVar28 < 0) {
      iVar8 = -iVar28;
    }
    uVar1 = *(undefined1 *)((int)puVar7 + 1);
    *(undefined1 *)((int)puVar7 + 1) = 0x2e;
    *(undefined1 *)puVar7 = uVar1;
    puVar7 = (undefined2 *)((int)puVar7 + uVar16);
    if (1 < uVar16) {
      puVar7 = (undefined2 *)((int)puVar7 + 1);
    }
    puVar12 = puVar7;
    if (9 < iVar8) {
      puVar12 = (undefined2 *)((int)puVar7 + 1);
    }
    pcVar13 = (char *)((int)puVar12 + 1);
    *pcVar13 = (char)((uint)(iVar8 * 0x147b) >> 0x13) + '0';
    if (99 < iVar8) {
      pcVar13 = (char *)(puVar12 + 1);
    }
    pcVar14 = pcVar13 + 2;
    *(undefined2 *)pcVar13 =
         *(undefined2 *)
          (&DAT_00534998 + iVar8 * 2 + (short)(ushort)((uint)(iVar8 * 0x147b) >> 0x13) * -200);
    uVar15 = 0x2d65;
    if (iVar10 != -0x10 && -2 < iVar28) {
      uVar15 = 0x2b65;
    }
    *puVar7 = uVar15;
  }
  return pcVar14;
}

