// FUN_01705480 @ 01705480 size=2048 calls_out=1 calls_in=14
// strings: fe_mul_impl | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(in2[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u)) | fe_mul_impl | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(out[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x2333333u : 0x4666666u))

/* WARNING: Removing unreachable block (ram,0x01705c60) */

undefined8 FUN_01705480(uint *param_1,uint *param_2,uint *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
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
  uint uVar38;
  uint uVar39;
  
  uVar21 = *param_3;
  if ((((((0xd333332 < uVar21) || (uVar8 = param_3[1], 0x6999999 < uVar8)) ||
        (uVar9 = param_3[2], 0xd333332 < uVar9)) ||
       ((uVar10 = param_3[3], 0x6999999 < uVar10 || (uVar11 = param_3[4], 0xd333332 < uVar11)))) ||
      ((uVar12 = param_3[5], 0x6999999 < uVar12 ||
       ((uVar13 = param_3[6], 0xd333332 < uVar13 || (uVar14 = param_3[7], 0x6999999 < uVar14))))))
     || ((uVar15 = param_3[8], 0xd333332 < uVar15 || (uVar16 = param_3[9], 0x6999999 < uVar16)))) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("constant_time_declassify_int(in2[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))"
                 ,"/aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c",0xcb,"fe_mul_impl");
  }
  uVar18 = param_2[1];
  uVar30 = *param_2;
  uVar35 = param_2[2];
  uVar19 = param_2[6];
  uVar36 = param_2[7];
  uVar37 = uVar11 * 0x13;
  uVar38 = param_2[5];
  uVar17 = param_2[9];
  uVar28 = param_2[8];
  uVar22 = param_2[3];
  uVar39 = param_2[4];
  uVar23 = uVar12 * 0x26;
  uVar3 = uVar13 * 0x13;
  uVar24 = uVar14 * 0x26;
  uVar31 = uVar16 * 0x26;
  uVar32 = uVar14 * 0x13;
  uVar25 = uVar16 * 0x13;
  uVar33 = uVar15 * 0x13;
  uVar6 = uVar8 << 1;
  uVar7 = uVar10 << 1;
  uVar1 = (ulonglong)uVar18 * (ulonglong)uVar31 +
          (ulonglong)uVar35 * (ulonglong)uVar33 +
          (ulonglong)uVar22 * (ulonglong)uVar24 +
          (ulonglong)uVar39 * (ulonglong)uVar3 +
          (ulonglong)uVar38 * (ulonglong)uVar23 +
          (ulonglong)uVar19 * (ulonglong)uVar37 +
          (ulonglong)uVar36 * (ulonglong)(uVar10 * 0x26) +
          (ulonglong)uVar30 * (ulonglong)uVar21 +
          (ulonglong)(uVar8 * 0x26) * (ulonglong)uVar17 +
          (ulonglong)uVar28 * (ulonglong)(uVar9 * 0x13);
  uVar20 = (uint)uVar1 & 0x3ffffff;
  lVar2 = (uVar1 >> 0x1a) +
          (ulonglong)uVar35 * (ulonglong)uVar25 +
          (ulonglong)uVar22 * (ulonglong)uVar33 +
          (ulonglong)uVar39 * (ulonglong)uVar32 +
          (ulonglong)uVar38 * (ulonglong)uVar3 +
          (ulonglong)uVar19 * (ulonglong)(uVar12 * 0x13) +
          (ulonglong)uVar36 * (ulonglong)uVar37 +
          (ulonglong)(uVar10 * 0x13) * (ulonglong)uVar28 +
          (ulonglong)(uVar9 * 0x13) * (ulonglong)uVar17 +
          (ulonglong)uVar21 * (ulonglong)uVar18 + (ulonglong)uVar30 * (ulonglong)uVar8;
  uVar26 = (uint)lVar2;
  uVar29 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar27 = uVar26 >> 0x19 | uVar29 * 0x80;
  lVar2 = (ulonglong)uVar6 * (ulonglong)uVar18 +
          (ulonglong)uVar22 * (ulonglong)uVar31 +
          (ulonglong)uVar39 * (ulonglong)uVar33 +
          (ulonglong)uVar38 * (ulonglong)uVar24 +
          (ulonglong)uVar19 * (ulonglong)uVar3 +
          (ulonglong)uVar36 * (ulonglong)uVar23 +
          (ulonglong)uVar28 * (ulonglong)uVar37 +
          (ulonglong)(uVar10 * 0x26) * (ulonglong)uVar17 +
          (ulonglong)uVar21 * (ulonglong)uVar35 + (ulonglong)uVar30 * (ulonglong)uVar9;
  uVar4 = (uint)lVar2;
  uVar5 = uVar4 + uVar27;
  uVar34 = (int)((ulonglong)lVar2 >> 0x20) + (uVar29 >> 0x19) + (uint)CARRY4(uVar4,uVar27);
  uVar4 = uVar5 >> 0x1a | uVar34 * 0x40;
  lVar2 = (ulonglong)uVar39 * (ulonglong)uVar25 +
          (ulonglong)uVar38 * (ulonglong)uVar33 +
          (ulonglong)uVar19 * (ulonglong)uVar32 +
          (ulonglong)uVar36 * (ulonglong)uVar3 +
          (ulonglong)(uVar12 * 0x13) * (ulonglong)uVar28 +
          (ulonglong)uVar37 * (ulonglong)uVar17 +
          (ulonglong)uVar30 * (ulonglong)uVar10 +
          (ulonglong)uVar21 * (ulonglong)uVar22 +
          (ulonglong)uVar8 * (ulonglong)uVar35 + (ulonglong)uVar9 * (ulonglong)uVar18;
  uVar27 = (uint)lVar2;
  uVar29 = uVar27 + uVar4;
  param_1[3] = uVar29 & 0x1ffffff;
  uVar27 = (int)((ulonglong)lVar2 >> 0x20) + (uVar34 >> 0x1a) + (uint)CARRY4(uVar27,uVar4);
  uVar29 = uVar29 >> 0x19 | uVar27 * 0x80;
  lVar2 = (ulonglong)uVar7 * (ulonglong)uVar18 +
          (ulonglong)uVar6 * (ulonglong)uVar22 +
          (ulonglong)uVar38 * (ulonglong)uVar31 +
          (ulonglong)uVar19 * (ulonglong)uVar33 +
          (ulonglong)uVar36 * (ulonglong)uVar24 +
          (ulonglong)uVar28 * (ulonglong)uVar3 +
          (ulonglong)uVar23 * (ulonglong)uVar17 +
          (ulonglong)uVar21 * (ulonglong)uVar39 +
          (ulonglong)uVar9 * (ulonglong)uVar35 + (ulonglong)uVar30 * (ulonglong)uVar11;
  uVar4 = (uint)lVar2;
  uVar23 = uVar4 + uVar29;
  uVar27 = (int)((ulonglong)lVar2 >> 0x20) + (uVar27 >> 0x19) + (uint)CARRY4(uVar4,uVar29);
  param_1[4] = uVar23 & 0x3ffffff;
  uVar4 = uVar23 >> 0x1a | uVar27 * 0x40;
  lVar2 = (ulonglong)uVar19 * (ulonglong)uVar25 +
          (ulonglong)uVar36 * (ulonglong)uVar33 +
          (ulonglong)uVar32 * (ulonglong)uVar28 +
          (ulonglong)uVar3 * (ulonglong)uVar17 +
          (ulonglong)uVar30 * (ulonglong)uVar12 +
          (ulonglong)uVar11 * (ulonglong)uVar18 +
          (ulonglong)uVar10 * (ulonglong)uVar35 +
          (ulonglong)uVar21 * (ulonglong)uVar38 +
          (ulonglong)uVar8 * (ulonglong)uVar39 + (ulonglong)uVar9 * (ulonglong)uVar22;
  uVar3 = (uint)lVar2;
  uVar23 = uVar3 + uVar4;
  param_1[5] = uVar23 & 0x1ffffff;
  uVar27 = (int)((ulonglong)lVar2 >> 0x20) + (uVar27 >> 0x1a) + (uint)CARRY4(uVar3,uVar4);
  uVar23 = uVar23 >> 0x19 | uVar27 * 0x80;
  lVar2 = (ulonglong)(uVar12 << 1) * (ulonglong)uVar18 +
          (ulonglong)uVar7 * (ulonglong)uVar22 +
          (ulonglong)uVar6 * (ulonglong)uVar38 +
          (ulonglong)uVar36 * (ulonglong)uVar31 +
          (ulonglong)uVar28 * (ulonglong)uVar33 +
          (ulonglong)uVar24 * (ulonglong)uVar17 +
          (ulonglong)uVar30 * (ulonglong)uVar13 +
          (ulonglong)uVar21 * (ulonglong)uVar19 +
          (ulonglong)uVar9 * (ulonglong)uVar39 + (ulonglong)uVar11 * (ulonglong)uVar35;
  uVar3 = (uint)lVar2;
  uVar4 = uVar3 + uVar23;
  uVar27 = (int)((ulonglong)lVar2 >> 0x20) + (uVar27 >> 0x19) + (uint)CARRY4(uVar3,uVar23);
  param_1[6] = uVar4 & 0x3ffffff;
  uVar3 = uVar4 >> 0x1a | uVar27 * 0x40;
  lVar2 = (ulonglong)uVar25 * (ulonglong)uVar28 +
          (ulonglong)uVar33 * (ulonglong)uVar17 +
          (ulonglong)uVar30 * (ulonglong)uVar14 +
          (ulonglong)uVar13 * (ulonglong)uVar18 +
          (ulonglong)uVar12 * (ulonglong)uVar35 +
          (ulonglong)uVar11 * (ulonglong)uVar22 +
          (ulonglong)uVar10 * (ulonglong)uVar39 +
          (ulonglong)uVar21 * (ulonglong)uVar36 +
          (ulonglong)uVar8 * (ulonglong)uVar19 + (ulonglong)uVar9 * (ulonglong)uVar38;
  uVar4 = (uint)lVar2;
  uVar23 = uVar4 + uVar3;
  uVar4 = (int)((ulonglong)lVar2 >> 0x20) + (uVar27 >> 0x1a) + (uint)CARRY4(uVar4,uVar3);
  param_1[7] = uVar23 & 0x1ffffff;
  uVar3 = uVar23 >> 0x19 | uVar4 * 0x80;
  lVar2 = (ulonglong)(uVar14 << 1) * (ulonglong)uVar18 +
          (ulonglong)(uVar12 << 1) * (ulonglong)uVar22 +
          (ulonglong)uVar7 * (ulonglong)uVar38 +
          (ulonglong)uVar6 * (ulonglong)uVar36 +
          (ulonglong)uVar31 * (ulonglong)uVar17 +
          (ulonglong)uVar30 * (ulonglong)uVar15 +
          (ulonglong)uVar13 * (ulonglong)uVar35 +
          (ulonglong)uVar21 * (ulonglong)uVar28 +
          (ulonglong)uVar9 * (ulonglong)uVar19 + (ulonglong)uVar11 * (ulonglong)uVar39;
  uVar6 = (uint)lVar2;
  uVar7 = uVar6 + uVar3;
  uVar6 = (int)((ulonglong)lVar2 >> 0x20) + (uVar4 >> 0x19) + (uint)CARRY4(uVar6,uVar3);
  lVar2 = (ulonglong)uVar16 * (ulonglong)uVar30 +
          (ulonglong)uVar15 * (ulonglong)uVar18 +
          (ulonglong)uVar14 * (ulonglong)uVar35 +
          (ulonglong)uVar13 * (ulonglong)uVar22 +
          (ulonglong)uVar12 * (ulonglong)uVar39 +
          (ulonglong)uVar11 * (ulonglong)uVar38 +
          (ulonglong)uVar10 * (ulonglong)uVar19 +
          (ulonglong)uVar21 * (ulonglong)uVar17 +
          (ulonglong)uVar8 * (ulonglong)uVar28 + (ulonglong)uVar9 * (ulonglong)uVar36;
  uVar21 = (uint)lVar2;
  uVar9 = uVar7 >> 0x1a | uVar6 * 0x40;
  uVar8 = uVar21 + uVar9;
  param_1[8] = uVar7 & 0x3ffffff;
  uVar21 = (int)((ulonglong)lVar2 >> 0x20) + (uVar6 >> 0x1a) + (uint)CARRY4(uVar21,uVar9);
  uVar9 = uVar8 >> 0x19 | uVar21 * 0x80;
  param_1[9] = uVar8 & 0x1ffffff;
  uVar8 = uVar9 * 0x13 + uVar20;
  *param_1 = uVar8 & 0x3ffffff;
  uVar21 = (uVar26 & 0x1ffffff) +
           (uVar8 >> 0x1a |
           ((uVar21 >> 0x19) * 3 + ((uVar21 >> 0x19) << 3 | (uVar21 & 0x1ffffff) >> 0x16) * 2 +
            (uint)CARRY4(uVar9 * 8,uVar9) * 2 + (uint)CARRY4(uVar9 * 9,uVar9 * 9) +
            (uint)CARRY4(uVar9 * 0x12,uVar9) + (uint)CARRY4(uVar9 * 0x13,uVar20)) * 0x40);
  param_1[1] = uVar21 & 0x1ffffff;
  param_1[2] = (uVar5 & 0x3ffffff) + (uVar21 >> 0x19);
  return 0;
}

