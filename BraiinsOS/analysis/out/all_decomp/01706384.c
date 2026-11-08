// FUN_01706384 @ 01706384 size=1164 calls_out=1 calls_in=6
// strings: fe_tobytes | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(f->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x2333333u : 0x4666666u))

undefined8 FUN_01706384(uint *param_1,uint *param_2)

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
  
  if ((((((0x4666666 < *param_2) || (0x2333333 < param_2[1])) || (0x4666666 < param_2[2])) ||
       ((0x2333333 < param_2[3] || (0x4666666 < param_2[4])))) ||
      ((0x2333333 < param_2[5] || ((0x4666666 < param_2[6] || (0x2333333 < param_2[7])))))) ||
     ((0x4666666 < param_2[8] || (0x2333333 < param_2[9])))) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("constant_time_declassify_int(f->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x2333333u : 0x4666666u))"
                 ,"/aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c",0x97,"fe_tobytes");
  }
  uVar8 = *param_2 + 0xfc000013;
  uVar11 = (param_2[1] - (-((int)uVar8 >> 0x1a) & 0xffU)) + 0xfe000001;
  uVar12 = (param_2[2] - (-((int)uVar11 >> 0x19) & 0xffU)) + 0xfc000001;
  uVar1 = (param_2[3] - (-((int)uVar12 >> 0x1a) & 0xffU)) + 0xfe000001;
  uVar7 = (param_2[4] - (-((int)uVar1 >> 0x19) & 0xffU)) + 0xfc000001;
  uVar5 = (param_2[5] - (-((int)uVar7 >> 0x1a) & 0xffU)) + 0xfe000001;
  uVar9 = (param_2[6] - (-((int)uVar5 >> 0x19) & 0xffU)) + 0xfc000001;
  uVar6 = (param_2[7] - (-((int)uVar9 >> 0x1a) & 0xffU)) + 0xfe000001;
  uVar13 = (param_2[8] - (-((int)uVar6 >> 0x19) & 0xffU)) + 0xfc000001;
  uVar4 = (param_2[9] - (-((int)uVar13 >> 0x1a) & 0xffU)) + 0xfe000001;
  if (uVar4 >> 0x19 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  uVar10 = uVar2 & 0x1ffffff;
  uVar3 = uVar2 & 0x3ffffff;
  uVar14 = (uVar8 & 0x3ffffff) + (uVar2 & 0x3ffffed);
  uVar8 = (uVar11 & 0x1ffffff) + uVar10 + (uVar14 >> 0x1a);
  uVar11 = (uVar12 & 0x3ffffff) + uVar3 + (uVar8 >> 0x19);
  uVar1 = (uVar1 & 0x1ffffff) + uVar10 + (uVar11 >> 0x1a);
  uVar8 = uVar8 * 4 & 0x7fffffc;
  uVar2 = uVar11 * 8 & 0x1ffffff8;
  uVar12 = (uVar7 & 0x3ffffff) + uVar3 + (uVar1 >> 0x19);
  uVar11 = uVar14 & 0x3ffffff;
  uVar7 = (uVar5 & 0x1ffffff) + uVar10 + (uVar12 >> 0x1a);
  uVar15 = (uVar9 & 0x3ffffff) + uVar3 + (uVar7 >> 0x19);
  uVar9 = (uVar1 * 0x20 & 0x3fffffe0) + (uVar2 >> 0x18);
  uVar2 = uVar2 + (uVar8 >> 0x18);
  uVar5 = (uVar6 & 0x1ffffff) + uVar10 + (uVar15 >> 0x1a);
  uVar8 = uVar8 + (uVar11 >> 0x18);
  uVar1 = (uVar13 & 0x3ffffff) + uVar3 + (uVar5 >> 0x19);
  uVar13 = uVar5 * 8 & 0xffffff8;
  uVar5 = (uVar1 * 0x10 & 0x3ffffff0) + (uVar13 >> 0x18);
  uVar6 = uVar7 & 0x1ffffff;
  uVar15 = uVar15 & 0x3ffffff;
  param_1[7] = (((uVar4 & 0x1ffffff) + uVar10 + (uVar1 >> 0x1a)) * 0x40 & 0x7fffffc0) +
               (uVar5 >> 0x18);
  uVar13 = uVar13 + (uVar15 >> 0x17);
  uVar1 = (uVar6 >> 0x18) + uVar15 * 2;
  *param_1 = uVar14 & 0xff | (uVar11 >> 8 & 0xff) << 8 | (uVar11 >> 0x10 & 0xff) << 0x10 |
             uVar8 * 0x1000000;
  param_1[1] = uVar8 >> 8 & 0xff | (uVar8 >> 0x10 & 0xff) << 8 | (uVar2 & 0xff) << 0x10 |
               (uVar2 >> 8) << 0x18;
  param_1[4] = uVar7 & 0xff | (uVar6 >> 8 & 0xff) << 8 | (uVar6 >> 0x10 & 0xff) << 0x10 |
               uVar1 * 0x1000000;
  param_1[5] = uVar1 >> 8 & 0xff | (uVar1 >> 0x10 & 0xff) << 8 | (uVar13 & 0xff) << 0x10 |
               (uVar13 >> 8) << 0x18;
  param_1[6] = uVar13 >> 0x10 & 0xff | (uVar5 & 0xff) << 8 | (uVar5 >> 8 & 0xff) << 0x10 |
               (uVar5 >> 0x10) << 0x18;
  param_1[3] = (uVar9 >> 0x18) + uVar12 * 0x40;
  param_1[2] = uVar2 >> 0x10 & 0xff | (uVar9 & 0xff) << 8 | (uVar9 >> 8 & 0xff) << 0x10 |
               (uVar9 >> 0x10) << 0x18;
  return 0;
}

