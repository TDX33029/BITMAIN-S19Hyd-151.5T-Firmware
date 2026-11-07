// FUN_012fc0a4 @ 012fc0a4 size=1860 calls_out=1 calls_in=6
// strings: 

int FUN_012fc0a4(uint param_1,undefined *param_2,uint param_3,uint param_4,int param_5)

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
  uint uVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined2 *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  bool bVar19;
  byte in_Q;
  undefined8 uVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  
  if ((param_1 == 0 && param_3 == 0) && (param_2 == (undefined *)0x0 && param_4 == 0)) {
    iVar9 = 0x26;
    *(undefined1 *)(param_5 + 0x26) = 0x30;
  }
  else {
    if (param_4 == 0 &&
        (param_3 != 0 ||
        param_3 < (&UNK_002386f2 < param_2 ||
                  param_2 + -0x2386f2 < (undefined *)(uint)(0x6fc0ffff < param_1))) <= param_4) {
      iVar9 = 0x27;
    }
    else {
      uVar16 = (uint)((ulonglong)param_3 * 0x1e626a6d);
      lVar2 = (ulonglong)param_4 * 0x1e626a6d + ((ulonglong)param_3 * 0x1e626a6d >> 0x20);
      uVar10 = (uint)((ulonglong)lVar2 >> 0x20);
      lVar4 = (ulonglong)param_3 * 0xd30baf9a;
      uVar5 = (uint)((ulonglong)lVar4 >> 0x20);
      uVar17 = (uint)(lVar2 + lVar4);
      lVar3 = ZEXT48(param_2) * 0x1e626a6d + ((ulonglong)param_1 * 0x1e626a6d >> 0x20);
      uVar6 = (uint)((ulonglong)lVar3 >> 0x20);
      uVar13 = (uint)((ulonglong)param_1 * 0xd30baf9a >> 0x20);
      lVar2 = (ulonglong)param_4 * 0xd30baf9a +
              (ulonglong)
              CONCAT14(CARRY4(uVar10,uVar5) ||
                       CARRY4(uVar10 + uVar5,(uint)CARRY4((uint)lVar4,(uint)lVar2)),
                       (int)((ulonglong)(lVar2 + lVar4) >> 0x20));
      uVar10 = (uint)lVar2;
      bVar18 = CARRY4((uint)((ulonglong)param_1 * 0xd30baf9a),(uint)lVar3);
      lVar3 = ZEXT48(param_2) * 0xd30baf9a +
              (ulonglong)
              CONCAT14(CARRY4(uVar6,uVar13) || CARRY4(uVar6 + uVar13,(uint)bVar18),
                       uVar6 + uVar13 + (uint)bVar18);
      uVar5 = (uint)((ulonglong)lVar3 >> 0x20);
      lVar4 = lVar3 + CONCAT44(uVar17,uVar16);
      bVar18 = CARRY4(uVar17,uVar5) || CARRY4(uVar17 + uVar5,(uint)CARRY4(uVar16,(uint)lVar3));
      uVar17 = (uint)((ulonglong)lVar4 >> 0x20);
      uVar6 = uVar10 + bVar18;
      uVar5 = (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4(uVar10,(uint)bVar18);
      lVar2 = ZEXT48(param_2) * 0xb1137856 + ((ulonglong)param_1 * 0xb1137856 >> 0x20);
      uVar10 = (uint)((ulonglong)lVar2 >> 0x20);
      lVar3 = (ulonglong)param_1 * 0x39a5652f;
      uVar16 = (uint)((ulonglong)lVar3 >> 0x20);
      uVar13 = (uint)(lVar2 + lVar3);
      lVar2 = ZEXT48(param_2) * 0x39a5652f +
              (ulonglong)
              CONCAT14(CARRY4(uVar10,uVar16) ||
                       CARRY4(uVar10 + uVar16,(uint)CARRY4((uint)lVar3,(uint)lVar2)),
                       (int)((ulonglong)(lVar2 + lVar3) >> 0x20));
      uVar10 = (uint)lVar2;
      bVar18 = CARRY4(uVar13,uVar17) ||
               CARRY4(uVar13 + uVar17,
                      (uint)CARRY4((uint)((ulonglong)param_1 * 0xb1137856),(uint)lVar4));
      uVar14 = uVar10 + bVar18;
      uVar13 = (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4(uVar10,(uint)bVar18);
      lVar2 = (ulonglong)param_4 * 0xb1137856 + ((ulonglong)param_3 * 0xb1137856 >> 0x20);
      uVar16 = (uint)((ulonglong)lVar2 >> 0x20);
      lVar3 = (ulonglong)param_3 * 0x39a5652f;
      uVar10 = (uint)((ulonglong)lVar3 >> 0x20);
      uVar17 = (uint)(lVar2 + lVar3);
      lVar2 = (ulonglong)param_4 * 0x39a5652f +
              (ulonglong)
              CONCAT14(CARRY4(uVar16,uVar10) ||
                       CARRY4(uVar16 + uVar10,(uint)CARRY4((uint)lVar3,(uint)lVar2)),
                       (int)((ulonglong)(lVar2 + lVar3) >> 0x20));
      uVar10 = (uint)lVar2;
      uVar16 = uVar5 + uVar13 + (uint)CARRY4(uVar6,uVar14);
      uVar5 = (uint)(CARRY4(uVar5,uVar13) || CARRY4(uVar5 + uVar13,(uint)CARRY4(uVar6,uVar14)));
      bVar18 = CARRY4((uint)((ulonglong)param_3 * 0xb1137856),uVar6 + uVar14);
      bVar19 = CARRY4(uVar17,uVar16) || CARRY4(uVar17 + uVar16,(uint)bVar18);
      uVar6 = uVar10 + uVar5 + (uint)bVar19;
      uVar13 = (int)((ulonglong)lVar2 >> 0x20) +
               (uint)(CARRY4(uVar10,uVar5) || CARRY4(uVar10 + uVar5,(uint)bVar19));
      uVar17 = uVar17 + uVar16 + (uint)bVar18 >> 0x13 | uVar6 * 0x2000;
      puVar7 = (undefined *)(uVar13 * 0x2000 | uVar6 >> 0x13);
      uVar5 = (uint)((ulonglong)uVar17 * 0x903f0000);
      iVar9 = uVar5 + param_1;
      param_2 = param_2 + (uint)CARRY4(uVar5,param_1) +
                          uVar17 * -0x2386f3 +
                          (int)puVar7 * -0x6fc10000 + (int)((ulonglong)uVar17 * 0x903f0000 >> 0x20);
      uVar20 = FUN_01bf0ff0(iVar9,param_2,10000,0);
      FUN_01bf0ff0((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),10000,0);
      uVar5 = (uint)(extraout_r2 * 0x147b) >> 0x13;
      *(undefined2 *)(param_5 + 0x1f) = *(undefined2 *)(&DAT_00534998 + uVar5 * 2);
      uVar21 = FUN_01bf0ff0(iVar9,param_2,100000000,0);
      FUN_01bf0ff0((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),10000,0);
      uVar6 = (uint)((short)((extraout_r2_00 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)(param_5 + 0x1b) = *(undefined2 *)(&DAT_00534998 + uVar6 * 2);
      uVar16 = iVar9 + (int)uVar20 * -10000;
      uVar10 = (uint)((short)((uVar16 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)(param_5 + 0x23) = *(undefined2 *)(&DAT_00534998 + uVar10 * 2);
      *(undefined2 *)(param_5 + 0x21) =
           *(undefined2 *)(&DAT_00534998 + (extraout_r2 + uVar5 * -100 & 0xffff) * 2);
      *(undefined2 *)(param_5 + 0x1d) =
           *(undefined2 *)(&DAT_00534998 + (extraout_r2_00 + uVar6 * -100 & 0xffff) * 2);
      *(undefined2 *)(param_5 + 0x25) =
           *(undefined2 *)(&DAT_00534998 + (uVar16 + uVar10 * -100 & 0xffff) * 2);
      uVar6 = FUN_01bf0ff0(iVar9,param_2,0xd4a51000,0xe8);
      uVar6 = uVar6 + (uint)((ulonglong)uVar6 * 0x1a36e2f >> 0x26) * -10000;
      uVar5 = (uint)((short)((uVar6 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)(param_5 + 0x17) = *(undefined2 *)(&DAT_00534998 + uVar5 * 2);
      *(undefined2 *)(param_5 + 0x19) =
           *(undefined2 *)(&DAT_00534998 + (uVar6 + uVar5 * -100 & 0xffff) * 2);
      if (uVar13 >> 0x13 == 0 &&
          (uint)(&UNK_002386f2 < puVar7 ||
                puVar7 + -0x2386f2 < (undefined *)(uint)(0x6fc0ffff < uVar17)) <= uVar13 >> 0x13) {
        iVar9 = 0x17;
        param_1 = uVar17;
        param_2 = puVar7;
      }
      else {
        uVar13 = uVar13 >> 0x13;
        lVar2 = ZEXT48(puVar7) * 0xb1137856 + ((ulonglong)uVar17 * 0xb1137856 >> 0x20);
        uVar5 = (uint)((ulonglong)lVar2 >> 0x20);
        lVar3 = (ulonglong)uVar17 * 0x39a5652f;
        uVar6 = (uint)((ulonglong)lVar3 >> 0x20);
        uVar15 = (uint)(lVar2 + lVar3);
        lVar2 = ZEXT48(puVar7) * 0x39a5652f +
                (ulonglong)
                CONCAT14(CARRY4(uVar5,uVar6) ||
                         CARRY4(uVar5 + uVar6,(uint)CARRY4((uint)lVar3,(uint)lVar2)),
                         (int)((ulonglong)(lVar2 + lVar3) >> 0x20));
        uVar10 = (uint)lVar2;
        lVar3 = ZEXT48(puVar7) * 0x1e626a6d + ((ulonglong)uVar17 * 0x1e626a6d >> 0x20);
        uVar16 = (uint)((ulonglong)lVar3 >> 0x20);
        uVar5 = (uint)((ulonglong)uVar17 * 0xd30baf9a >> 0x20);
        bVar18 = CARRY4((uint)((ulonglong)uVar17 * 0xd30baf9a),(uint)lVar3);
        uVar6 = (uint)((ulonglong)uVar13 * 0x1e626a6d);
        lVar3 = ZEXT48(puVar7) * 0xd30baf9a +
                (ulonglong)
                CONCAT14(CARRY4(uVar16,uVar5) || CARRY4(uVar16 + uVar5,(uint)bVar18),
                         uVar16 + uVar5 + (uint)bVar18);
        uVar14 = (uint)((ulonglong)lVar3 >> 0x20);
        lVar4 = (ulonglong)uVar13 * 0xd30baf9a + ((ulonglong)uVar13 * 0x1e626a6d >> 0x20);
        uVar5 = (uint)lVar4;
        uVar16 = (uint)((ulonglong)lVar4 >> 0x20);
        lVar4 = lVar3 + CONCAT44(uVar5,uVar6);
        bVar18 = CARRY4(uVar5,uVar14) || CARRY4(uVar5 + uVar14,(uint)CARRY4(uVar6,(uint)lVar3));
        uVar6 = (uint)((ulonglong)lVar4 >> 0x20);
        uVar5 = (uint)CARRY4(uVar16,(uint)bVar18);
        bVar19 = CARRY4(uVar15,uVar6) ||
                 CARRY4(uVar15 + uVar6,
                        (uint)CARRY4((uint)((ulonglong)uVar17 * 0xb1137856),(uint)lVar4));
        uVar6 = uVar10 + bVar19;
        uVar14 = (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4(uVar10,(uint)bVar19);
        bVar18 = (((byte)(bVar18 << 2 | in_Q) & 0x1f) >> 2 & 1) != 0;
        lVar2 = (ulonglong)uVar13 * 0x39a5652f + ((ulonglong)uVar13 * 0xb1137856 >> 0x20);
        uVar8 = (uint)lVar2;
        uVar15 = (uint)((ulonglong)lVar2 >> 0x20);
        bVar19 = CARRY4(uVar6,uVar16) || CARRY4(uVar6 + uVar16,(uint)bVar18);
        uVar10 = uVar5 + uVar14 + (uint)bVar19;
        uVar5 = (uint)(CARRY4(uVar5,uVar14) || CARRY4(uVar5 + uVar14,(uint)bVar19));
        bVar18 = CARRY4((uint)((ulonglong)uVar13 * 0xb1137856),uVar6 + uVar16 + (uint)bVar18);
        bVar19 = CARRY4(uVar8,uVar10) || CARRY4(uVar8 + uVar10,(uint)bVar18);
        uVar6 = (uint)(CARRY4(uVar15,uVar5) || CARRY4(uVar15 + uVar5,(uint)bVar19));
        param_1 = uVar8 + uVar10 + (uint)bVar18 >> 0x13 | (uVar15 + uVar5 + (uint)bVar19) * 0x2000;
        param_2 = (undefined *)(uVar6 * 0x2000);
        uVar5 = (uint)((ulonglong)param_1 * 0x903f0000);
        iVar9 = uVar5 + uVar17;
        puVar7 = puVar7 + (uint)CARRY4(uVar5,uVar17) +
                          param_1 * -0x2386f3 +
                          uVar6 * -0x20000000 + (int)((ulonglong)param_1 * 0x903f0000 >> 0x20);
        uVar20 = FUN_01bf0ff0(iVar9,puVar7,10000,0);
        FUN_01bf0ff0((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),10000,0);
        uVar5 = (uint)(extraout_r2_01 * 0x147b) >> 0x13;
        *(undefined2 *)(param_5 + 0xf) = *(undefined2 *)(&DAT_00534998 + uVar5 * 2);
        uVar21 = FUN_01bf0ff0(iVar9,puVar7,100000000,0);
        FUN_01bf0ff0((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),10000,0);
        uVar6 = (uint)((short)((extraout_r2_02 & 0xffff) >> 2) * 0x147b) >> 0x11;
        *(undefined2 *)(param_5 + 0xb) = *(undefined2 *)(&DAT_00534998 + uVar6 * 2);
        uVar16 = iVar9 + (int)uVar20 * -10000;
        uVar10 = (uint)((short)((uVar16 & 0xffff) >> 2) * 0x147b) >> 0x11;
        *(undefined2 *)(param_5 + 0x13) = *(undefined2 *)(&DAT_00534998 + uVar10 * 2);
        *(undefined2 *)(param_5 + 0x11) =
             *(undefined2 *)(&DAT_00534998 + (extraout_r2_01 + uVar5 * -100 & 0xffff) * 2);
        uVar13 = FUN_01bf0ff0(iVar9,puVar7,0xd4a51000,0xe8);
        uVar13 = uVar13 + (uint)((ulonglong)uVar13 * 0x1a36e2f >> 0x26) * -10000;
        uVar5 = (uint)((short)((uVar13 & 0xffff) >> 2) * 0x147b) >> 0x11;
        *(undefined2 *)(param_5 + 7) = *(undefined2 *)(&DAT_00534998 + uVar5 * 2);
        iVar9 = 7;
        *(undefined2 *)(param_5 + 9) =
             *(undefined2 *)(&DAT_00534998 + (uVar13 + uVar5 * -100 & 0xffff) * 2);
        *(undefined2 *)(param_5 + 0x15) =
             *(undefined2 *)(&DAT_00534998 + (uVar16 + uVar10 * -100 & 0xffff) * 2);
        *(undefined2 *)(param_5 + 0xd) =
             *(undefined2 *)(&DAT_00534998 + (extraout_r2_02 + uVar6 * -100 & 0xffff) * 2);
      }
    }
    uVar22 = CONCAT44(param_2,param_1);
    if (param_2 != (undefined *)0x0 || param_2 < (undefined *)(uint)(999 < param_1)) {
      do {
        iVar12 = (int)(uVar22 >> 0x20);
        uVar10 = (uint)uVar22;
        uVar22 = FUN_01bf0ff0(uVar10,iVar12,10000,0);
        uVar6 = uVar10 + (int)uVar22 * -10000;
        uVar5 = (uint)((short)((uVar6 & 0xffff) >> 2) * 0x147b) >> 0x11;
        uVar1 = *(undefined2 *)(&DAT_00534998 + uVar5 * 2);
        puVar11 = (undefined2 *)(param_5 + -2 + iVar9);
        *puVar11 = *(undefined2 *)(&DAT_00534998 + (uVar6 + uVar5 * -100 & 0xffff) * 2);
        iVar9 = iVar9 + -4;
        puVar11[-1] = uVar1;
      } while ((uint)(uVar10 < 10000000) <= (uint)-iVar12);
    }
    uVar5 = (uint)uVar22;
    if ((uint)(uVar5 < 10) <= (uint)-(int)(uVar22 >> 0x20)) {
      iVar9 = iVar9 + -2;
      uVar6 = (uint)((short)((uVar5 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)(param_5 + iVar9) =
           *(undefined2 *)(&DAT_00534998 + (uVar5 + uVar6 * -100 & 0xffff) * 2);
      uVar22 = (ulonglong)uVar6;
    }
    if (uVar22 != 0) {
      iVar9 = iVar9 + -1;
      *(undefined1 *)(param_5 + iVar9) = (&DAT_00534999)[(int)uVar22 * 2];
    }
  }
  return iVar9;
}

