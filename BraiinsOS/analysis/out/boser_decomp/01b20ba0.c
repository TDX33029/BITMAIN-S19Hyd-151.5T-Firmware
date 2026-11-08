// FUN_01b20ba0 @ 01b20ba0 size=2000 calls_out=1 calls_in=13
// strings: fe_mul_impl | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(in1[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u)) | fe_mul_impl | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(in2[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))

undefined8 FUN_01b20ba0(uint *param_1,uint *param_2,uint *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  uint uVar40;
  
  uVar35 = 0;
  do {
    if ((uVar35 & 1) == 0) {
      uVar34 = 0xd333332;
    }
    else {
      uVar34 = 0x6999999;
    }
    if (uVar34 < param_2[uVar35]) {
      uVar5 = 0xca;
      pcVar4 = 
      "constant_time_declassify_int(in1[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))"
      ;
      goto LAB_01b20c04;
    }
    uVar35 = uVar35 + 1;
  } while (uVar35 != 10);
  uVar35 = 0;
  while( true ) {
    if ((uVar35 & 1) == 0) {
      uVar34 = 0xd333332;
    }
    else {
      uVar34 = 0x6999999;
    }
    if (uVar34 < param_3[uVar35]) break;
    uVar35 = uVar35 + 1;
    if (uVar35 == 10) {
      uVar10 = param_2[9];
      uVar11 = param_3[9];
      uVar12 = uVar11 * 0x26;
      uVar13 = param_3[8];
      uVar32 = uVar13 * 0x13;
      uVar14 = param_3[7];
      uVar24 = uVar14 * 0x26;
      uVar15 = param_3[6];
      uVar33 = uVar15 * 0x13;
      uVar16 = param_3[5];
      uVar17 = uVar16 * 0x26;
      uVar18 = param_3[4];
      uVar23 = uVar18 * 0x13;
      uVar19 = param_3[3];
      uVar20 = param_3[2];
      uVar21 = param_3[1];
      uVar22 = param_2[8];
      uVar36 = uVar11 * 0x13;
      uVar37 = uVar14 * 0x13;
      uVar25 = param_2[7];
      uVar26 = param_2[6];
      uVar27 = param_2[5];
      uVar6 = *param_3;
      uVar28 = param_2[4];
      uVar35 = uVar21 << 1;
      uVar29 = param_2[3];
      uVar34 = uVar19 << 1;
      uVar30 = param_2[2];
      uVar7 = *param_2;
      uVar31 = param_2[1];
      uVar1 = (ulonglong)uVar7 * (ulonglong)uVar6 +
              (ulonglong)uVar31 * (ulonglong)uVar12 +
              (ulonglong)uVar30 * (ulonglong)uVar32 +
              (ulonglong)uVar29 * (ulonglong)uVar24 +
              (ulonglong)uVar28 * (ulonglong)uVar33 +
              (ulonglong)uVar27 * (ulonglong)uVar17 +
              (ulonglong)uVar26 * (ulonglong)uVar23 +
              (ulonglong)uVar25 * (ulonglong)(uVar19 * 0x26) +
              (ulonglong)(uVar21 * 0x26) * (ulonglong)uVar10 +
              (ulonglong)uVar22 * (ulonglong)(uVar20 * 0x13);
      lVar2 = (ulonglong)uVar7 * (ulonglong)uVar21 +
              (ulonglong)uVar6 * (ulonglong)uVar31 +
              (ulonglong)uVar30 * (ulonglong)uVar36 +
              (ulonglong)uVar29 * (ulonglong)uVar32 +
              (ulonglong)uVar28 * (ulonglong)uVar37 +
              (ulonglong)uVar27 * (ulonglong)uVar33 +
              (ulonglong)uVar26 * (ulonglong)(uVar16 * 0x13) +
              (ulonglong)uVar25 * (ulonglong)uVar23 +
              (ulonglong)(uVar20 * 0x13) * (ulonglong)uVar10 +
              (ulonglong)uVar22 * (ulonglong)(uVar19 * 0x13) + (uVar1 >> 0x1a);
      uVar8 = (uint)lVar2;
      uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar40 = (uint)lVar3;
      lVar3 = (ulonglong)uVar7 * (ulonglong)uVar20 +
              (ulonglong)uVar35 * (ulonglong)uVar31 +
              (ulonglong)uVar6 * (ulonglong)uVar30 +
              (ulonglong)uVar29 * (ulonglong)uVar12 +
              (ulonglong)uVar28 * (ulonglong)uVar32 +
              (ulonglong)uVar27 * (ulonglong)uVar24 +
              (ulonglong)uVar26 * (ulonglong)uVar33 +
              (ulonglong)uVar25 * (ulonglong)uVar17 +
              (ulonglong)(uVar19 * 0x26) * (ulonglong)uVar10 + (ulonglong)uVar22 * (ulonglong)uVar23
              + CONCAT44(uVar9 >> 0x19,uVar8 >> 0x19 | uVar9 * 0x80);
      uVar9 = (uint)((ulonglong)lVar3 >> 0x20);
      lVar2 = (ulonglong)uVar7 * (ulonglong)uVar19 +
              (ulonglong)uVar20 * (ulonglong)uVar31 +
              (ulonglong)uVar21 * (ulonglong)uVar30 +
              (ulonglong)uVar6 * (ulonglong)uVar29 +
              (ulonglong)uVar28 * (ulonglong)uVar36 +
              (ulonglong)uVar27 * (ulonglong)uVar32 +
              (ulonglong)uVar26 * (ulonglong)uVar37 +
              (ulonglong)uVar25 * (ulonglong)uVar33 +
              (ulonglong)uVar23 * (ulonglong)uVar10 + (ulonglong)(uVar16 * 0x13) * (ulonglong)uVar22
      ;
      uVar38 = (uint)lVar2;
      uVar23 = uVar40 >> 0x1a | uVar9 * 0x40;
      uVar39 = uVar38 + uVar23;
      uVar23 = (int)((ulonglong)lVar2 >> 0x20) + (uVar9 >> 0x1a) + (uint)CARRY4(uVar38,uVar23);
      lVar2 = (ulonglong)uVar7 * (ulonglong)uVar18 +
              (ulonglong)uVar34 * (ulonglong)uVar31 +
              (ulonglong)uVar20 * (ulonglong)uVar30 +
              (ulonglong)uVar35 * (ulonglong)uVar29 +
              (ulonglong)uVar6 * (ulonglong)uVar28 +
              (ulonglong)uVar27 * (ulonglong)uVar12 +
              (ulonglong)uVar26 * (ulonglong)uVar32 +
              (ulonglong)uVar25 * (ulonglong)uVar24 +
              (ulonglong)uVar17 * (ulonglong)uVar10 + (ulonglong)uVar22 * (ulonglong)uVar33;
      uVar17 = (uint)lVar2;
      uVar9 = uVar39 >> 0x19 | uVar23 * 0x80;
      uVar38 = uVar17 + uVar9;
      uVar17 = (int)((ulonglong)lVar2 >> 0x20) + (uVar23 >> 0x19) + (uint)CARRY4(uVar17,uVar9);
      lVar2 = (ulonglong)uVar7 * (ulonglong)uVar16 +
              (ulonglong)uVar18 * (ulonglong)uVar31 +
              (ulonglong)uVar19 * (ulonglong)uVar30 +
              (ulonglong)uVar20 * (ulonglong)uVar29 +
              (ulonglong)uVar21 * (ulonglong)uVar28 +
              (ulonglong)uVar6 * (ulonglong)uVar27 +
              (ulonglong)uVar26 * (ulonglong)uVar36 +
              (ulonglong)uVar25 * (ulonglong)uVar32 +
              (ulonglong)uVar33 * (ulonglong)uVar10 + (ulonglong)uVar37 * (ulonglong)uVar22;
      uVar9 = (uint)lVar2;
      uVar33 = uVar38 >> 0x1a | uVar17 * 0x40;
      uVar23 = uVar9 + uVar33;
      uVar9 = (int)((ulonglong)lVar2 >> 0x20) + (uVar17 >> 0x1a) + (uint)CARRY4(uVar9,uVar33);
      lVar2 = (ulonglong)uVar7 * (ulonglong)uVar15 +
              (ulonglong)(uVar16 << 1) * (ulonglong)uVar31 +
              (ulonglong)uVar18 * (ulonglong)uVar30 +
              (ulonglong)uVar34 * (ulonglong)uVar29 +
              (ulonglong)uVar20 * (ulonglong)uVar28 +
              (ulonglong)uVar35 * (ulonglong)uVar27 +
              (ulonglong)uVar6 * (ulonglong)uVar26 +
              (ulonglong)uVar25 * (ulonglong)uVar12 +
              (ulonglong)uVar24 * (ulonglong)uVar10 + (ulonglong)uVar22 * (ulonglong)uVar32;
      uVar17 = (uint)lVar2;
      uVar33 = uVar23 >> 0x19 | uVar9 * 0x80;
      uVar24 = uVar17 + uVar33;
      uVar33 = (int)((ulonglong)lVar2 >> 0x20) + (uVar9 >> 0x19) + (uint)CARRY4(uVar17,uVar33);
      lVar2 = (ulonglong)uVar7 * (ulonglong)uVar14 +
              (ulonglong)uVar15 * (ulonglong)uVar31 +
              (ulonglong)uVar16 * (ulonglong)uVar30 +
              (ulonglong)uVar18 * (ulonglong)uVar29 +
              (ulonglong)uVar19 * (ulonglong)uVar28 +
              (ulonglong)uVar20 * (ulonglong)uVar27 +
              (ulonglong)uVar21 * (ulonglong)uVar26 +
              (ulonglong)uVar6 * (ulonglong)uVar25 +
              (ulonglong)uVar32 * (ulonglong)uVar10 + (ulonglong)uVar36 * (ulonglong)uVar22;
      uVar9 = (uint)lVar2;
      uVar32 = uVar24 >> 0x1a | uVar33 * 0x40;
      uVar17 = uVar9 + uVar32;
      uVar33 = (int)((ulonglong)lVar2 >> 0x20) + (uVar33 >> 0x1a) + (uint)CARRY4(uVar9,uVar32);
      param_1[3] = uVar39 & 0x1ffffff;
      param_1[5] = uVar23 & 0x1ffffff;
      param_1[4] = uVar38 & 0x3ffffff;
      lVar2 = (ulonglong)uVar7 * (ulonglong)uVar13 +
              (ulonglong)(uVar14 << 1) * (ulonglong)uVar31 +
              (ulonglong)uVar15 * (ulonglong)uVar30 +
              (ulonglong)(uVar16 << 1) * (ulonglong)uVar29 +
              (ulonglong)uVar18 * (ulonglong)uVar28 +
              (ulonglong)uVar34 * (ulonglong)uVar27 +
              (ulonglong)uVar20 * (ulonglong)uVar26 +
              (ulonglong)uVar35 * (ulonglong)uVar25 +
              (ulonglong)uVar12 * (ulonglong)uVar10 + (ulonglong)uVar6 * (ulonglong)uVar22;
      uVar35 = (uint)lVar2;
      uVar34 = uVar17 >> 0x19 | uVar33 * 0x80;
      uVar9 = uVar35 + uVar34;
      uVar23 = (int)((ulonglong)lVar2 >> 0x20) + (uVar33 >> 0x19) + (uint)CARRY4(uVar35,uVar34);
      lVar2 = (ulonglong)uVar11 * (ulonglong)uVar7 +
              (ulonglong)uVar13 * (ulonglong)uVar31 +
              (ulonglong)uVar14 * (ulonglong)uVar30 +
              (ulonglong)uVar15 * (ulonglong)uVar29 +
              (ulonglong)uVar16 * (ulonglong)uVar28 +
              (ulonglong)uVar18 * (ulonglong)uVar27 +
              (ulonglong)uVar19 * (ulonglong)uVar26 +
              (ulonglong)uVar20 * (ulonglong)uVar25 +
              (ulonglong)uVar6 * (ulonglong)uVar10 + (ulonglong)uVar21 * (ulonglong)uVar22;
      uVar35 = (uint)lVar2;
      uVar6 = uVar9 >> 0x1a | uVar23 * 0x40;
      uVar34 = uVar35 + uVar6;
      uVar35 = (int)((ulonglong)lVar2 >> 0x20) + (uVar23 >> 0x1a) + (uint)CARRY4(uVar35,uVar6);
      lVar2 = (ulonglong)(uVar34 >> 0x19 | uVar35 * 0x80) * 0x13 +
              (CONCAT44((uVar35 >> 0x19) * 0x13,(int)uVar1) & 0xffffffff03ffffff);
      uVar35 = (uint)lVar2;
      *param_1 = uVar35 & 0x3ffffff;
      uVar35 = (uVar8 & 0x1ffffff) + (uVar35 >> 0x1a | (int)((ulonglong)lVar2 >> 0x20) * 0x40);
      param_1[1] = uVar35 & 0x1ffffff;
      param_1[2] = (uVar40 & 0x3ffffff) + (uVar35 >> 0x19);
      param_1[6] = uVar24 & 0x3ffffff;
      param_1[7] = uVar17 & 0x1ffffff;
      uVar35 = 0;
      param_1[8] = uVar9 & 0x3ffffff;
      param_1[9] = uVar34 & 0x1ffffff;
      while( true ) {
        if ((uVar35 & 1) == 0) {
          uVar34 = 0x4666666;
        }
        else {
          uVar34 = 0x2333333;
        }
        if (uVar34 < param_1[uVar35]) break;
        uVar35 = uVar35 + 1;
        if (uVar35 == 10) {
          return 0;
        }
      }
      uVar5 = 0xcd;
      pcVar4 = 
      "constant_time_declassify_int(out[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x2333333u : 0x4666666u))"
      ;
LAB_01b20c04:
                    /* WARNING: Subroutine does not return */
      FUN_01be3310(pcVar4,"/aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c",uVar5,
                   "fe_mul_impl");
    }
  }
  uVar5 = 0xcb;
  pcVar4 = 
  "constant_time_declassify_int(in2[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))"
  ;
  goto LAB_01b20c04;
}

