// FUN_00fab440 @ 00fab440 size=1888 calls_out=1 calls_in=7
// strings: 

int FUN_00fab440(uint param_1,undefined *param_2,uint param_3,uint param_4,int param_5)

{
  undefined2 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int extraout_r2;
  uint extraout_r2_00;
  int extraout_r2_01;
  uint extraout_r2_02;
  undefined *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined2 *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  bool bVar20;
  byte in_Q;
  undefined8 uVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  
  if ((param_1 == 0 && param_3 == 0) && (param_2 == (undefined *)0x0 && param_4 == 0)) {
    *(undefined1 *)(param_5 + 0x26) = 0x30;
    return 0x26;
  }
  if (param_4 == 0 &&
      (param_3 != 0 ||
      param_3 < (&UNK_002386f2 < param_2 ||
                param_2 + -0x2386f2 < (undefined *)(uint)(0x6fc0ffff < param_1))) <= param_4) {
    iVar9 = 0x27;
    if (param_2 == (undefined *)0x0 && (undefined *)(uint)(999 < param_1) <= param_2)
    goto LAB_00fab7e4;
  }
  else {
    uVar17 = (uint)((ulonglong)param_3 * 0x1e626a6d);
    lVar2 = (ulonglong)param_4 * 0x1e626a6d + ((ulonglong)param_3 * 0x1e626a6d >> 0x20);
    uVar11 = (uint)((ulonglong)lVar2 >> 0x20);
    lVar4 = (ulonglong)param_3 * 0xd30baf9a;
    uVar5 = (uint)((ulonglong)lVar4 >> 0x20);
    uVar18 = (uint)(lVar2 + lVar4);
    lVar3 = ZEXT48(param_2) * 0x1e626a6d + ((ulonglong)param_1 * 0x1e626a6d >> 0x20);
    uVar10 = (uint)((ulonglong)lVar3 >> 0x20);
    uVar14 = (uint)((ulonglong)param_1 * 0xd30baf9a >> 0x20);
    lVar2 = (ulonglong)param_4 * 0xd30baf9a +
            (ulonglong)
            CONCAT14(CARRY4(uVar11,uVar5) ||
                     CARRY4(uVar11 + uVar5,(uint)CARRY4((uint)lVar4,(uint)lVar2)),
                     (int)((ulonglong)(lVar2 + lVar4) >> 0x20));
    uVar11 = (uint)lVar2;
    bVar19 = CARRY4((uint)((ulonglong)param_1 * 0xd30baf9a),(uint)lVar3);
    lVar3 = ZEXT48(param_2) * 0xd30baf9a +
            (ulonglong)
            CONCAT14(CARRY4(uVar10,uVar14) || CARRY4(uVar10 + uVar14,(uint)bVar19),
                     uVar10 + uVar14 + (uint)bVar19);
    uVar5 = (uint)((ulonglong)lVar3 >> 0x20);
    lVar4 = lVar3 + CONCAT44(uVar18,uVar17);
    bVar19 = CARRY4(uVar18,uVar5) || CARRY4(uVar18 + uVar5,(uint)CARRY4(uVar17,(uint)lVar3));
    uVar18 = (uint)((ulonglong)lVar4 >> 0x20);
    uVar10 = uVar11 + bVar19;
    uVar5 = (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4(uVar11,(uint)bVar19);
    lVar2 = ZEXT48(param_2) * 0xb1137856 + ((ulonglong)param_1 * 0xb1137856 >> 0x20);
    uVar11 = (uint)((ulonglong)lVar2 >> 0x20);
    lVar3 = (ulonglong)param_1 * 0x39a5652f;
    uVar17 = (uint)((ulonglong)lVar3 >> 0x20);
    uVar14 = (uint)(lVar2 + lVar3);
    lVar2 = ZEXT48(param_2) * 0x39a5652f +
            (ulonglong)
            CONCAT14(CARRY4(uVar11,uVar17) ||
                     CARRY4(uVar11 + uVar17,(uint)CARRY4((uint)lVar3,(uint)lVar2)),
                     (int)((ulonglong)(lVar2 + lVar3) >> 0x20));
    uVar11 = (uint)lVar2;
    bVar19 = CARRY4(uVar14,uVar18) ||
             CARRY4(uVar14 + uVar18,
                    (uint)CARRY4((uint)((ulonglong)param_1 * 0xb1137856),(uint)lVar4));
    uVar15 = uVar11 + bVar19;
    uVar14 = (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4(uVar11,(uint)bVar19);
    lVar2 = (ulonglong)param_4 * 0xb1137856 + ((ulonglong)param_3 * 0xb1137856 >> 0x20);
    uVar17 = (uint)((ulonglong)lVar2 >> 0x20);
    lVar3 = (ulonglong)param_3 * 0x39a5652f;
    uVar11 = (uint)((ulonglong)lVar3 >> 0x20);
    uVar18 = (uint)(lVar2 + lVar3);
    lVar2 = (ulonglong)param_4 * 0x39a5652f +
            (ulonglong)
            CONCAT14(CARRY4(uVar17,uVar11) ||
                     CARRY4(uVar17 + uVar11,(uint)CARRY4((uint)lVar3,(uint)lVar2)),
                     (int)((ulonglong)(lVar2 + lVar3) >> 0x20));
    uVar11 = (uint)lVar2;
    uVar17 = uVar5 + uVar14 + (uint)CARRY4(uVar10,uVar15);
    uVar5 = (uint)(CARRY4(uVar5,uVar14) || CARRY4(uVar5 + uVar14,(uint)CARRY4(uVar10,uVar15)));
    bVar19 = CARRY4((uint)((ulonglong)param_3 * 0xb1137856),uVar10 + uVar15);
    bVar20 = CARRY4(uVar18,uVar17) || CARRY4(uVar18 + uVar17,(uint)bVar19);
    uVar10 = uVar11 + uVar5 + (uint)bVar20;
    uVar14 = (int)((ulonglong)lVar2 >> 0x20) +
             (uint)(CARRY4(uVar11,uVar5) || CARRY4(uVar11 + uVar5,(uint)bVar20));
    uVar18 = uVar18 + uVar17 + (uint)bVar19 >> 0x13 | uVar10 * 0x2000;
    puVar6 = (undefined *)(uVar14 * 0x2000 | uVar10 >> 0x13);
    uVar5 = (uint)((ulonglong)uVar18 * 0x903f0000);
    iVar9 = uVar5 + param_1;
    param_2 = param_2 + (uint)CARRY4(uVar5,param_1) +
                        uVar18 * -0x2386f3 +
                        (int)puVar6 * -0x6fc10000 + (int)((ulonglong)uVar18 * 0x903f0000 >> 0x20);
    uVar21 = FUN_01846088(iVar9,param_2,10000,0);
    FUN_01846088((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),10000,0);
    uVar5 = (uint)(extraout_r2 * 0x147b) >> 0x13;
    *(undefined2 *)(param_5 + 0x1f) = *(undefined2 *)(&DAT_0040f4ca + uVar5 * 2);
    uVar22 = FUN_01846088(iVar9,param_2,100000000,0);
    FUN_01846088((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),10000,0);
    uVar10 = (uint)((short)((extraout_r2_00 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)(param_5 + 0x1b) = *(undefined2 *)(&DAT_0040f4ca + uVar10 * 2);
    uVar17 = iVar9 + (int)uVar21 * -10000;
    uVar11 = (uint)((short)((uVar17 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)(param_5 + 0x23) = *(undefined2 *)(&DAT_0040f4ca + uVar11 * 2);
    *(undefined2 *)(param_5 + 0x21) =
         *(undefined2 *)(&DAT_0040f4ca + (extraout_r2 + uVar5 * -100 & 0xffff) * 2);
    *(undefined2 *)(param_5 + 0x1d) =
         *(undefined2 *)(&DAT_0040f4ca + (extraout_r2_00 + uVar10 * -100 & 0xffff) * 2);
    *(undefined2 *)(param_5 + 0x25) =
         *(undefined2 *)(&DAT_0040f4ca + (uVar17 + uVar11 * -100 & 0xffff) * 2);
    uVar10 = FUN_01846088(iVar9,param_2,0xd4a51000,0xe8);
    uVar10 = uVar10 + (uint)((ulonglong)uVar10 * 0x1a36e2f >> 0x26) * -10000;
    uVar5 = (uint)((short)((uVar10 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)(param_5 + 0x17) = *(undefined2 *)(&DAT_0040f4ca + uVar5 * 2);
    *(undefined2 *)(param_5 + 0x19) =
         *(undefined2 *)(&DAT_0040f4ca + (uVar10 + uVar5 * -100 & 0xffff) * 2);
    if (uVar14 >> 0x13 == 0 &&
        (uint)(&UNK_002386f2 < puVar6 ||
              puVar6 + -0x2386f2 < (undefined *)(uint)(0x6fc0ffff < uVar18)) <= uVar14 >> 0x13) {
      iVar9 = 0x17;
      param_1 = uVar18;
      param_2 = puVar6;
      if (puVar6 == (undefined *)0x0 && (undefined *)(uint)(999 < uVar18) <= puVar6) {
LAB_00fab7e4:
        uVar23 = CONCAT44(param_2,param_1);
        goto LAB_00fabb2c;
      }
    }
    else {
      uVar14 = uVar14 >> 0x13;
      lVar2 = ZEXT48(puVar6) * 0xb1137856 + ((ulonglong)uVar18 * 0xb1137856 >> 0x20);
      uVar5 = (uint)((ulonglong)lVar2 >> 0x20);
      lVar3 = (ulonglong)uVar18 * 0x39a5652f;
      uVar10 = (uint)((ulonglong)lVar3 >> 0x20);
      uVar16 = (uint)(lVar2 + lVar3);
      lVar2 = ZEXT48(puVar6) * 0x39a5652f +
              (ulonglong)
              CONCAT14(CARRY4(uVar5,uVar10) ||
                       CARRY4(uVar5 + uVar10,(uint)CARRY4((uint)lVar3,(uint)lVar2)),
                       (int)((ulonglong)(lVar2 + lVar3) >> 0x20));
      uVar11 = (uint)lVar2;
      lVar3 = ZEXT48(puVar6) * 0x1e626a6d + ((ulonglong)uVar18 * 0x1e626a6d >> 0x20);
      uVar17 = (uint)((ulonglong)lVar3 >> 0x20);
      uVar5 = (uint)((ulonglong)uVar18 * 0xd30baf9a >> 0x20);
      bVar19 = CARRY4((uint)((ulonglong)uVar18 * 0xd30baf9a),(uint)lVar3);
      uVar10 = (uint)((ulonglong)uVar14 * 0x1e626a6d);
      lVar3 = ZEXT48(puVar6) * 0xd30baf9a +
              (ulonglong)
              CONCAT14(CARRY4(uVar17,uVar5) || CARRY4(uVar17 + uVar5,(uint)bVar19),
                       uVar17 + uVar5 + (uint)bVar19);
      uVar15 = (uint)((ulonglong)lVar3 >> 0x20);
      lVar4 = (ulonglong)uVar14 * 0xd30baf9a + ((ulonglong)uVar14 * 0x1e626a6d >> 0x20);
      uVar5 = (uint)lVar4;
      uVar17 = (uint)((ulonglong)lVar4 >> 0x20);
      lVar4 = lVar3 + CONCAT44(uVar5,uVar10);
      bVar19 = CARRY4(uVar5,uVar15) || CARRY4(uVar5 + uVar15,(uint)CARRY4(uVar10,(uint)lVar3));
      uVar10 = (uint)((ulonglong)lVar4 >> 0x20);
      uVar5 = (uint)CARRY4(uVar17,(uint)bVar19);
      bVar20 = CARRY4(uVar16,uVar10) ||
               CARRY4(uVar16 + uVar10,
                      (uint)CARRY4((uint)((ulonglong)uVar18 * 0xb1137856),(uint)lVar4));
      uVar10 = uVar11 + bVar20;
      uVar15 = (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4(uVar11,(uint)bVar20);
      bVar19 = (((byte)(bVar19 << 2 | in_Q) & 0x1f) >> 2 & 1) != 0;
      lVar2 = (ulonglong)uVar14 * 0x39a5652f + ((ulonglong)uVar14 * 0xb1137856 >> 0x20);
      uVar8 = (uint)lVar2;
      uVar16 = (uint)((ulonglong)lVar2 >> 0x20);
      bVar20 = CARRY4(uVar10,uVar17) || CARRY4(uVar10 + uVar17,(uint)bVar19);
      uVar11 = uVar5 + uVar15 + (uint)bVar20;
      uVar5 = (uint)(CARRY4(uVar5,uVar15) || CARRY4(uVar5 + uVar15,(uint)bVar20));
      bVar19 = CARRY4((uint)((ulonglong)uVar14 * 0xb1137856),uVar10 + uVar17 + (uint)bVar19);
      bVar20 = CARRY4(uVar8,uVar11) || CARRY4(uVar8 + uVar11,(uint)bVar19);
      uVar14 = (uint)(CARRY4(uVar16,uVar5) || CARRY4(uVar16 + uVar5,(uint)bVar20));
      param_1 = uVar8 + uVar11 + (uint)bVar19 >> 0x13 | (uVar16 + uVar5 + (uint)bVar20) * 0x2000;
      param_2 = (undefined *)(uVar14 * 0x2000);
      uVar5 = (uint)((ulonglong)param_1 * 0x903f0000);
      iVar9 = uVar5 + uVar18;
      puVar6 = puVar6 + (uint)CARRY4(uVar5,uVar18) +
                        param_1 * -0x2386f3 +
                        uVar14 * -0x20000000 + (int)((ulonglong)param_1 * 0x903f0000 >> 0x20);
      uVar21 = FUN_01846088(iVar9,puVar6,10000,0);
      FUN_01846088((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),10000,0);
      uVar5 = (uint)(extraout_r2_01 * 0x147b) >> 0x13;
      *(undefined2 *)(param_5 + 0xf) = *(undefined2 *)(&DAT_0040f4ca + uVar5 * 2);
      uVar22 = FUN_01846088(iVar9,puVar6,100000000,0);
      FUN_01846088((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),10000,0);
      uVar10 = (uint)((short)((extraout_r2_02 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)(param_5 + 0xb) = *(undefined2 *)(&DAT_0040f4ca + uVar10 * 2);
      uVar18 = iVar9 + (int)uVar21 * -10000;
      uVar11 = (uint)((short)((uVar18 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)(param_5 + 0x13) = *(undefined2 *)(&DAT_0040f4ca + uVar11 * 2);
      *(undefined2 *)(param_5 + 0x11) =
           *(undefined2 *)(&DAT_0040f4ca + (extraout_r2_01 + uVar5 * -100 & 0xffff) * 2);
      uVar17 = FUN_01846088(iVar9,puVar6,0xd4a51000,0xe8);
      uVar17 = uVar17 + (uint)((ulonglong)uVar17 * 0x1a36e2f >> 0x26) * -10000;
      uVar5 = (uint)((short)((uVar17 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)(param_5 + 7) = *(undefined2 *)(&DAT_0040f4ca + uVar5 * 2);
      iVar9 = 7;
      *(undefined2 *)(param_5 + 9) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar17 + uVar5 * -100 & 0xffff) * 2);
      *(undefined2 *)(param_5 + 0x15) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar18 + uVar11 * -100 & 0xffff) * 2);
      *(undefined2 *)(param_5 + 0xd) =
           *(undefined2 *)(&DAT_0040f4ca + (extraout_r2_02 + uVar10 * -100 & 0xffff) * 2);
      if (uVar14 == 0 && (undefined *)(uint)(999 < param_1) <= param_2) goto LAB_00fab7e4;
    }
  }
  uVar23 = CONCAT44(param_2,param_1);
  do {
    iVar13 = (int)(uVar23 >> 0x20);
    puVar7 = (undefined1 *)uVar23;
    uVar23 = FUN_01846088(puVar7,iVar13,10000,0);
    uVar5 = (uint)((short)(((uint)(puVar7 + (int)uVar23 * -10000) & 0xffff) >> 2) * 0x147b) >> 0x11;
    uVar1 = *(undefined2 *)(&DAT_0040f4ca + uVar5 * 2);
    puVar12 = (undefined2 *)(param_5 + -2 + iVar9);
    *puVar12 = *(undefined2 *)
                (&DAT_0040f4ca + ((uint)(puVar7 + (int)uVar23 * -10000 + uVar5 * -100) & 0xffff) * 2
                );
    iVar9 = iVar9 + -4;
    puVar12[-1] = uVar1;
  } while ((uint)(puVar7 < &LAB_00989680) <= (uint)-iVar13);
LAB_00fabb2c:
  uVar5 = (uint)uVar23;
  if ((uint)(uVar5 < 10) <= (uint)-(int)(uVar23 >> 0x20)) {
    iVar9 = iVar9 + -2;
    uVar10 = (uint)((short)((uVar5 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)(param_5 + iVar9) =
         *(undefined2 *)(&DAT_0040f4ca + (uVar5 + uVar10 * -100 & 0xffff) * 2);
    uVar23 = (ulonglong)uVar10;
  }
  if (uVar23 != 0) {
    iVar9 = iVar9 + -1;
    *(undefined1 *)(param_5 + iVar9) = (&DAT_0040f4cb)[(int)uVar23 * 2];
  }
  return iVar9;
}

