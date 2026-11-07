// FUN_01706a0c @ 01706a0c size=1088 calls_out=1 calls_in=9
// strings: fe_sub | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(f->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x2333333u : 0x4666666u)) | fe_sub | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(h->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))

undefined8 FUN_01706a0c(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
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
  
  uVar17 = *param_2;
  if ((((((0x4666666 < uVar17) || (uVar18 = param_2[1], 0x2333333 < uVar18)) ||
        (uVar16 = param_2[2], 0x4666666 < uVar16)) ||
       ((uVar15 = param_2[3], 0x2333333 < uVar15 || (uVar14 = param_2[4], 0x4666666 < uVar14)))) ||
      (uVar13 = param_2[5], 0x2333333 < uVar13)) ||
     (((uVar12 = param_2[6], 0x4666666 < uVar12 || (0x2333333 < param_2[7])) ||
      ((0x4666666 < param_2[8] || (uVar3 = param_2[9], 0x2333333 < uVar3)))))) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("constant_time_declassify_int(f->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x2333333u : 0x4666666u))"
                 ,"/aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c",0xbb,"fe_sub");
  }
  uVar4 = *param_3;
  if ((((0x4666666 < uVar4) || (uVar5 = param_3[1], 0x2333333 < uVar5)) ||
      (uVar6 = param_3[2], 0x4666666 < uVar6)) ||
     (((uVar7 = param_3[3], 0x2333333 < uVar7 || (uVar8 = param_3[4], 0x4666666 < uVar8)) ||
      ((uVar9 = param_3[5], 0x2333333 < uVar9 ||
       (((uVar10 = param_3[6], 0x4666666 < uVar10 || (0x2333333 < param_3[7])) ||
        ((0x4666666 < param_3[8] || (uVar2 = param_3[9], 0x2333333 < uVar2)))))))))) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("constant_time_declassify_int(g->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x2333333u : 0x4666666u))"
                 ,"/aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c",0xbc,"fe_sub");
  }
  uVar1 = (param_2[7] - param_3[7]) + 0x3fffffe;
  uVar11 = (param_2[8] - param_3[8]) + 0x7fffffe;
  param_1[7] = uVar1;
  uVar19 = (uVar18 - uVar5) + 0x3fffffe;
  param_1[8] = uVar11;
  uVar6 = (uVar16 - uVar6) + 0x7fffffe;
  param_1[2] = uVar6;
  uVar5 = (uVar15 - uVar7) + 0x3fffffe;
  param_1[3] = uVar5;
  uVar14 = (uVar14 - uVar8) + 0x7fffffe;
  param_1[4] = uVar14;
  uVar15 = (uVar13 - uVar9) + 0x3fffffe;
  param_1[5] = uVar15;
  uVar16 = (uVar12 - uVar10) + 0x7fffffe;
  param_1[6] = uVar16;
  uVar18 = (uVar3 - uVar2) + 0x3fffffe;
  param_1[9] = uVar18;
  uVar17 = (uVar17 - uVar4) + 0x7ffffda;
  *param_1 = uVar17;
  param_1[1] = uVar19;
  if ((((((0xd333332 < uVar17) || (0x6999999 < uVar19)) || (0xd333332 < uVar6)) ||
       ((0x6999999 < uVar5 || (0xd333332 < uVar14)))) || (0x6999999 < uVar15)) ||
     (((0xd333332 < uVar16 || (0x6999999 < uVar1)) || ((0xd333332 < uVar11 || (0x6999999 < uVar18)))
      ))) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("constant_time_declassify_int(h->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))"
                 ,"/aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c",0xbe,"fe_sub");
  }
  return 0;
}

