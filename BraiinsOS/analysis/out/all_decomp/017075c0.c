// FUN_017075c0 @ 017075c0 size=516 calls_out=1 calls_in=7
// strings: fe_carry | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(h->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x2333333u : 0x4666666u)) | fe_carry | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(f->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))

/* WARNING: Removing unreachable block (ram,0x01707784) */

undefined8 FUN_017075c0(uint *param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

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
  
  uVar2 = *param_2;
  if ((((((0xd333332 < uVar2) || (0x6999999 < param_2[1])) || (0xd333332 < param_2[2])) ||
       ((0x6999999 < param_2[3] || (0xd333332 < param_2[4])))) ||
      ((uVar6 = param_2[5], 0x6999999 < uVar6 ||
       ((uVar5 = param_2[6], 0xd333332 < uVar5 || (uVar4 = param_2[7], 0x6999999 < uVar4)))))) ||
     ((uVar3 = param_2[8], 0xd333332 < uVar3 || (uVar1 = param_2[9], 0x6999999 < uVar1)))) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("constant_time_declassify_int(f->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))"
                 ,"/aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c",0xc2,"fe_carry",param_4);
  }
  uVar9 = param_2[1] + (uVar2 >> 0x1a);
  uVar10 = param_2[2] + (uVar9 >> 0x19);
  uVar8 = param_2[3] + (uVar10 >> 0x1a);
  uVar7 = param_2[4] + (uVar8 >> 0x19);
  param_1[3] = uVar8 & 0x1ffffff;
  uVar6 = uVar6 + (uVar7 >> 0x1a);
  param_1[4] = uVar7 & 0x3ffffff;
  uVar5 = uVar5 + (uVar6 >> 0x19);
  param_1[5] = uVar6 & 0x1ffffff;
  uVar4 = uVar4 + (uVar5 >> 0x1a);
  param_1[6] = uVar5 & 0x3ffffff;
  uVar3 = uVar3 + (uVar4 >> 0x19);
  param_1[7] = uVar4 & 0x1ffffff;
  uVar1 = uVar1 + (uVar3 >> 0x1a);
  param_1[9] = uVar1 & 0x1ffffff;
  param_1[8] = uVar3 & 0x3ffffff;
  uVar2 = (uVar1 >> 0x19) * 0x13 + (uVar2 & 0x3ffffff);
  *param_1 = uVar2 & 0x3ffffff;
  uVar2 = (uVar9 & 0x1ffffff) + (uVar2 >> 0x1a);
  param_1[1] = uVar2 & 0x1ffffff;
  param_1[2] = (uVar10 & 0x3ffffff) + (uVar2 >> 0x19);
  return 0;
}

