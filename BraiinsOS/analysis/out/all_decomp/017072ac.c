// FUN_017072ac @ 017072ac size=764 calls_out=1 calls_in=3
// strings: fe_neg | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(f->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x2333333u : 0x4666666u)) | fe_neg | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(h->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))

undefined8 FUN_017072ac(int *param_1,uint *param_2)

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
  
  uVar8 = *param_2;
  if (((((((0x4666666 < uVar8) || (uVar7 = param_2[1], 0x2333333 < uVar7)) ||
         (uVar6 = param_2[2], 0x4666666 < uVar6)) ||
        ((uVar5 = param_2[3], 0x2333333 < uVar5 || (uVar4 = param_2[4], 0x4666666 < uVar4)))) ||
       ((uVar1 = param_2[5], 0x2333333 < uVar1 ||
        ((uVar2 = param_2[6], 0x4666666 < uVar2 || (uVar10 = param_2[7], 0x2333333 < uVar10)))))) ||
      (uVar9 = param_2[8], 0x4666666 < uVar9)) || (uVar3 = param_2[9], 0x2333333 < uVar3)) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("constant_time_declassify_int(f->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x2333333u : 0x4666666u))"
                 ,"/aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c",0x10a,"fe_neg");
  }
  *param_1 = 0x7ffffda - uVar8;
  param_1[1] = 0x3fffffe - uVar7;
  param_1[2] = 0x7fffffe - uVar6;
  param_1[3] = 0x3fffffe - uVar5;
  param_1[4] = 0x7fffffe - uVar4;
  param_1[5] = 0x3fffffe - uVar1;
  param_1[6] = 0x7fffffe - uVar2;
  param_1[8] = 0x7fffffe - uVar9;
  param_1[7] = 0x3fffffe - uVar10;
  param_1[9] = 0x3fffffe - uVar3;
  if (((((0xd333332 < uVar8 + 0x5333358) || (0x6999999 < uVar7 + 0x299999b)) ||
       (0xd333332 < uVar6 + 0x5333334)) ||
      (((0x6999999 < uVar5 + 0x299999b || (0xd333332 < uVar4 + 0x5333334)) ||
       ((0x6999999 < uVar1 + 0x299999b ||
        ((0xd333332 < uVar2 + 0x5333334 || (0x6999999 < uVar10 + 0x299999b)))))))) ||
     ((0xd333332 < uVar9 + 0x5333334 || (0x6999999 < uVar3 + 0x299999b)))) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("constant_time_declassify_int(h->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))"
                 ,"/aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c",0x10c,"fe_neg");
  }
  return 0;
}

