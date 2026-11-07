// FUN_01705c98 @ 01705c98 size=1748 calls_out=1 calls_in=3
// strings: fe_sq_tt | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(f->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u)) | fe_sq_tt | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(h->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x2333333u : 0x4666666u))

/* WARNING: Removing unreachable block (ram,0x0170634c) */

undefined8 FUN_01705c98(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  
  uVar22 = *param_2;
  if ((((((0xd333332 < uVar22) || (uVar13 = param_2[1], 0x6999999 < uVar13)) ||
        (uVar32 = param_2[2], 0xd333332 < uVar32)) ||
       ((uVar14 = param_2[3], 0x6999999 < uVar14 || (uVar15 = param_2[4], 0xd333332 < uVar15)))) ||
      ((uVar16 = param_2[5], 0x6999999 < uVar16 ||
       ((uVar17 = param_2[6], 0xd333332 < uVar17 || (uVar18 = param_2[7], 0x6999999 < uVar18))))))
     || ((uVar19 = param_2[8], 0xd333332 < uVar19 || (uVar28 = param_2[9], 0x6999999 < uVar28)))) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("constant_time_declassify_int(f->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))"
                 ,"/aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c",0xef,"fe_sq_tt");
  }
  uVar20 = uVar19 * 0x13;
  uVar37 = uVar17 * 0x13;
  uVar34 = uVar28 * 0x26;
  uVar29 = uVar18 * 0x26;
  uVar10 = uVar19 * 0x26;
  uVar31 = (uint)CARRY4(uVar20,uVar20);
  uVar11 = uVar18 * 2;
  uVar12 = uVar16 * 2;
  uVar1 = uVar14 << 1;
  uVar2 = uVar15 << 1;
  lVar4 = (ulonglong)uVar22 * (ulonglong)uVar2 +
          (ulonglong)uVar32 * (ulonglong)uVar32 +
          (ulonglong)uVar29 * (ulonglong)uVar18 + (ulonglong)uVar13 * (ulonglong)(uVar14 << 2);
  uVar23 = (uint)lVar4;
  uVar3 = uVar17 << 1;
  lVar5 = (ulonglong)(uVar16 * 0x26) * (ulonglong)uVar16 + (ulonglong)uVar22 * (ulonglong)uVar22;
  uVar24 = (uint)lVar5;
  lVar8 = (ulonglong)uVar15 * (ulonglong)(uVar17 * 0x26);
  uVar30 = (uint)lVar8;
  uVar25 = uVar24 + uVar30;
  lVar9 = (ulonglong)uVar16 * (ulonglong)(uVar17 * 0x26);
  lVar6 = (ulonglong)uVar22 * (ulonglong)(uVar32 << 1) +
          (ulonglong)uVar17 * (ulonglong)uVar37 + (ulonglong)(uVar13 << 1) * (ulonglong)uVar13;
  uVar21 = (uint)lVar6;
  uVar35 = (uint)((ulonglong)uVar32 * (ulonglong)uVar10);
  uVar36 = uVar25 + uVar35;
  lVar7 = (ulonglong)uVar14 * (ulonglong)uVar29 + (ulonglong)uVar13 * (ulonglong)uVar34;
  uVar26 = (uint)lVar7;
  uVar27 = uVar36 + uVar26 * 2;
  uVar24 = uVar32 * uVar31 + (int)((ulonglong)uVar32 * (ulonglong)uVar10 >> 0x20) +
           uVar15 * CARRY4(uVar37,uVar37) + (int)((ulonglong)lVar8 >> 0x20) +
           (int)((ulonglong)lVar5 >> 0x20) + (uint)CARRY4(uVar24,uVar30) +
           (uint)CARRY4(uVar25,uVar35) +
           (int)((ulonglong)lVar7 >> 0x20) * 2 + (uint)CARRY4(uVar26,uVar26) +
           (uint)CARRY4(uVar36,uVar26 * 2);
  lVar7 = (ulonglong)uVar22 * (ulonglong)(uVar13 << 1) +
          (ulonglong)uVar15 * (ulonglong)uVar29 + (ulonglong)uVar32 * (ulonglong)uVar34 +
          CONCAT44(uVar16 * CARRY4(uVar37,uVar37) + (int)((ulonglong)lVar9 >> 0x20),(int)lVar9);
  uVar36 = (uint)lVar7;
  uVar37 = uVar27 & 0x3ffffff;
  uVar27 = uVar27 >> 0x1a | uVar24 * 0x40;
  lVar5 = (ulonglong)uVar22 * (ulonglong)uVar1 +
          (ulonglong)(uVar32 << 1) * (ulonglong)uVar13 +
          (ulonglong)uVar17 * (ulonglong)uVar29 + (ulonglong)uVar15 * (ulonglong)uVar34;
  uVar30 = (uint)lVar5;
  uVar25 = (uint)((ulonglong)uVar14 * (ulonglong)uVar10);
  uVar26 = uVar36 + uVar25;
  uVar35 = uVar26 + uVar27;
  uVar33 = uVar14 * uVar31 + (int)((ulonglong)uVar14 * (ulonglong)uVar10 >> 0x20) +
           (int)((ulonglong)lVar7 >> 0x20) + (uint)CARRY4(uVar36,uVar25) + (uVar24 >> 0x1a) +
           (uint)CARRY4(uVar26,uVar27);
  uVar36 = uVar35 >> 0x19 | uVar33 * 0x80;
  uVar24 = (uint)((ulonglong)uVar15 * (ulonglong)uVar10);
  uVar25 = uVar21 + uVar24;
  lVar7 = (ulonglong)uVar16 * (ulonglong)uVar29 + (ulonglong)uVar14 * (ulonglong)uVar34;
  uVar29 = (uint)lVar7;
  uVar26 = uVar25 + uVar29 * 2;
  uVar27 = uVar26 + uVar36;
  uVar26 = uVar15 * uVar31 + (int)((ulonglong)uVar15 * (ulonglong)uVar10 >> 0x20) +
           (int)((ulonglong)lVar6 >> 0x20) + (uint)CARRY4(uVar21,uVar24) +
           (int)((ulonglong)lVar7 >> 0x20) * 2 + (uint)CARRY4(uVar29,uVar29) +
           (uint)CARRY4(uVar25,uVar29 * 2) + (uVar33 >> 0x19) + (uint)CARRY4(uVar26,uVar36);
  uVar29 = uVar27 >> 0x1a | uVar26 * 0x40;
  lVar6 = (ulonglong)uVar11 * (ulonglong)uVar22 +
          (ulonglong)uVar13 * (ulonglong)uVar3 +
          (ulonglong)uVar32 * (ulonglong)uVar12 +
          (ulonglong)uVar19 * (ulonglong)uVar34 + (ulonglong)uVar2 * (ulonglong)uVar14;
  uVar21 = (uint)lVar6;
  lVar7 = (ulonglong)uVar22 * (ulonglong)(uVar19 << 1) +
          (ulonglong)(uVar18 << 2) * (ulonglong)uVar13 +
          (ulonglong)uVar32 * (ulonglong)uVar3 +
          (ulonglong)uVar15 * (ulonglong)uVar15 +
          (ulonglong)uVar34 * (ulonglong)uVar28 + (ulonglong)(uVar16 << 2) * (ulonglong)uVar14;
  uVar33 = (uint)lVar7;
  lVar8 = (ulonglong)(uVar28 << 1) * (ulonglong)uVar22 +
          (ulonglong)(uVar19 << 1) * (ulonglong)uVar13 +
          (ulonglong)uVar11 * (ulonglong)uVar32 +
          (ulonglong)uVar15 * (ulonglong)uVar12 + (ulonglong)uVar3 * (ulonglong)uVar14;
  uVar15 = (uint)lVar8;
  uVar36 = (uint)((ulonglong)uVar12 * (ulonglong)uVar34);
  uVar28 = (uint)((ulonglong)uVar16 * (ulonglong)uVar10);
  uVar24 = uVar30 + uVar28;
  uVar25 = uVar24 + uVar29;
  uVar24 = uVar16 * uVar31 + (int)((ulonglong)uVar16 * (ulonglong)uVar10 >> 0x20) +
           (int)((ulonglong)lVar5 >> 0x20) + (uint)CARRY4(uVar30,uVar28) + (uVar26 >> 0x1a) +
           (uint)CARRY4(uVar24,uVar29);
  param_1[3] = uVar25 & 0x1ffffff;
  uVar26 = (uint)((ulonglong)uVar17 * (ulonglong)uVar10);
  uVar28 = uVar25 >> 0x19 | uVar24 * 0x80;
  uVar25 = uVar23 + uVar26;
  uVar30 = uVar25 + uVar36;
  uVar29 = uVar30 + uVar28;
  uVar24 = uVar34 * CARRY4(uVar16,uVar16) + (int)((ulonglong)uVar12 * (ulonglong)uVar34 >> 0x20) +
           uVar17 * uVar31 + (int)((ulonglong)uVar17 * (ulonglong)uVar10 >> 0x20) +
           (int)((ulonglong)lVar4 >> 0x20) + (uint)CARRY4(uVar23,uVar26) +
           (uint)CARRY4(uVar25,uVar36) + (uVar24 >> 0x19) + (uint)CARRY4(uVar30,uVar28);
  lVar4 = (ulonglong)uVar22 * (ulonglong)uVar12 +
          (ulonglong)uVar13 * (ulonglong)uVar2 +
          (ulonglong)uVar17 * (ulonglong)uVar34 + (ulonglong)uVar32 * (ulonglong)uVar1 +
          CONCAT44(uVar18 * uVar31 + (int)((ulonglong)uVar18 * (ulonglong)uVar10 >> 0x20),
                   (int)((ulonglong)uVar18 * (ulonglong)uVar10));
  uVar17 = (uint)lVar4;
  uVar31 = uVar29 >> 0x1a | uVar24 * 0x40;
  uVar28 = uVar17 + uVar31;
  param_1[4] = uVar29 & 0x3ffffff;
  uVar17 = (int)((ulonglong)lVar4 >> 0x20) + (uVar24 >> 0x1a) + (uint)CARRY4(uVar17,uVar31);
  lVar4 = (ulonglong)uVar22 * (ulonglong)uVar3 +
          (ulonglong)uVar13 * (ulonglong)(uVar16 << 2) +
          (ulonglong)uVar32 * (ulonglong)uVar2 +
          (ulonglong)uVar19 * (ulonglong)uVar20 + (ulonglong)uVar1 * (ulonglong)uVar14 +
          CONCAT44(uVar34 * CARRY4(uVar18,uVar18) +
                   (int)((ulonglong)uVar11 * (ulonglong)uVar34 >> 0x20),
                   (int)((ulonglong)uVar11 * (ulonglong)uVar34));
  uVar13 = (uint)lVar4;
  uVar22 = uVar28 >> 0x19 | uVar17 * 0x80;
  param_1[5] = uVar28 & 0x1ffffff;
  uVar14 = uVar13 + uVar22;
  uVar22 = (int)((ulonglong)lVar4 >> 0x20) + (uVar17 >> 0x19) + (uint)CARRY4(uVar13,uVar22);
  uVar13 = uVar14 >> 0x1a | uVar22 * 0x40;
  uVar32 = uVar21 + uVar13;
  param_1[6] = uVar14 & 0x3ffffff;
  uVar22 = (int)((ulonglong)lVar6 >> 0x20) + (uVar22 >> 0x1a) + (uint)CARRY4(uVar21,uVar13);
  uVar13 = uVar32 >> 0x19 | uVar22 * 0x80;
  param_1[7] = uVar32 & 0x1ffffff;
  uVar14 = uVar33 + uVar13;
  uVar32 = (int)((ulonglong)lVar7 >> 0x20) + (uVar22 >> 0x19) + (uint)CARRY4(uVar33,uVar13);
  uVar22 = uVar14 >> 0x1a | uVar32 * 0x40;
  param_1[8] = uVar14 & 0x3ffffff;
  uVar13 = uVar15 + uVar22;
  uVar22 = (int)((ulonglong)lVar8 >> 0x20) + (uVar32 >> 0x1a) + (uint)CARRY4(uVar15,uVar22);
  uVar32 = uVar13 >> 0x19 | uVar22 * 0x80;
  param_1[9] = uVar13 & 0x1ffffff;
  uVar13 = uVar32 * 0x13 + uVar37;
  *param_1 = uVar13 & 0x3ffffff;
  uVar22 = (uVar35 & 0x1ffffff) +
           (uVar13 >> 0x1a |
           ((uVar22 >> 0x19) * 3 + ((uVar22 >> 0x19) << 3 | (uVar22 & 0x1ffffff) >> 0x16) * 2 +
            (uint)CARRY4(uVar32 * 8,uVar32) * 2 + (uint)CARRY4(uVar32 * 9,uVar32 * 9) +
            (uint)CARRY4(uVar32 * 0x12,uVar32) + (uint)CARRY4(uVar32 * 0x13,uVar37)) * 0x40);
  param_1[1] = uVar22 & 0x1ffffff;
  param_1[2] = (uVar27 & 0x3ffffff) + (uVar22 >> 0x19);
  return 0;
}

