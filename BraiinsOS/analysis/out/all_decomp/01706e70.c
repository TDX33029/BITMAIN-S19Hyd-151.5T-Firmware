// FUN_01706e70 @ 01706e70 size=1048 calls_out=1 calls_in=9
// strings: fe_add | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(f->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x2333333u : 0x4666666u)) | fe_add | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(h->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))

undefined8 FUN_01706e70(uint *param_1,uint *param_2,uint *param_3)

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
  
  if ((((((0x4666666 < *param_2) || (uVar15 = param_2[1], 0x2333333 < uVar15)) ||
        (uVar14 = param_2[2], 0x4666666 < uVar14)) ||
       ((uVar13 = param_2[3], 0x2333333 < uVar13 || (uVar12 = param_2[4], 0x4666666 < uVar12)))) ||
      (uVar1 = param_2[5], 0x2333333 < uVar1)) ||
     (((uVar2 = param_2[6], 0x4666666 < uVar2 || (uVar19 = param_2[7], 0x2333333 < uVar19)) ||
      ((uVar3 = param_2[8], 0x4666666 < uVar3 || (uVar10 = param_2[9], 0x2333333 < uVar10)))))) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("constant_time_declassify_int(f->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x2333333u : 0x4666666u))"
                 ,"/aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c",0xb2,"fe_add");
  }
  if ((((0x4666666 < *param_3) || (uVar11 = param_3[1], 0x2333333 < uVar11)) ||
      (uVar6 = param_3[2], 0x4666666 < uVar6)) ||
     (((uVar7 = param_3[3], 0x2333333 < uVar7 || (uVar8 = param_3[4], 0x4666666 < uVar8)) ||
      ((uVar4 = param_3[5], 0x2333333 < uVar4 ||
       (((uVar9 = param_3[6], 0x4666666 < uVar9 || (uVar17 = param_3[7], 0x2333333 < uVar17)) ||
        ((uVar18 = param_3[8], 0x4666666 < uVar18 || (uVar5 = param_3[9], 0x2333333 < uVar5)))))))))
     ) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("constant_time_declassify_int(g->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x2333333u : 0x4666666u))"
                 ,"/aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c",0xb3,"fe_add");
  }
  uVar16 = *param_3 + *param_2;
  *param_1 = uVar16;
  uVar11 = uVar11 + uVar15;
  param_1[1] = uVar11;
  uVar6 = uVar6 + uVar14;
  param_1[2] = uVar6;
  uVar7 = uVar7 + uVar13;
  param_1[3] = uVar7;
  uVar8 = uVar8 + uVar12;
  param_1[4] = uVar8;
  uVar4 = uVar4 + uVar1;
  param_1[5] = uVar4;
  uVar9 = uVar9 + uVar2;
  param_1[6] = uVar9;
  uVar17 = uVar17 + uVar19;
  param_1[7] = uVar17;
  uVar18 = uVar18 + uVar3;
  param_1[8] = uVar18;
  uVar10 = uVar10 + uVar5;
  param_1[9] = uVar10;
  if ((((((0xd333332 < uVar16) || (0x6999999 < uVar11)) || (0xd333332 < uVar6)) ||
       ((0x6999999 < uVar7 || (0xd333332 < uVar8)))) || (0x6999999 < uVar4)) ||
     (((0xd333332 < uVar9 || (0x6999999 < uVar17)) || ((0xd333332 < uVar18 || (0x6999999 < uVar10)))
      ))) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("constant_time_declassify_int(h->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))"
                 ,"/aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c",0xb5,"fe_add");
  }
  return 0;
}

