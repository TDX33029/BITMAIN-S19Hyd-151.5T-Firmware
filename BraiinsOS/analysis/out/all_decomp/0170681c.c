// FUN_0170681c @ 0170681c size=472 calls_out=1 calls_in=2
// strings: fe_frombytes_strict | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(h->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x2333333u : 0x4666666u)) | fe_frombytes_strict | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int((s[31] & 0x80) == 0)

undefined8 FUN_0170681c(uint *param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  bVar1 = *(byte *)((int)param_2 + 0x1f);
  if (*(char *)((int)param_2 + 0x1f) < '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("constant_time_declassify_int((s[31] & 0x80) == 0)",
                 "/aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c",0x8a,"fe_frombytes_strict"
                 ,param_4);
  }
  uVar11 = param_2[4];
  uVar9 = (uint)*(byte *)((int)param_2 + 5) * 0x4000 + (uint)*(byte *)((int)param_2 + 6) * 0x400000
          + (*param_2 >> 0x1a) + (uint)(byte)param_2[1] * 0x40;
  uVar13 = (uint)*(byte *)((int)param_2 + 0x15) * 0x8000 +
           (uint)*(byte *)((int)param_2 + 0x16) * 0x800000 + (uVar11 >> 0x19) +
           (uint)(byte)param_2[5] * 0x80;
  bVar2 = *(byte *)((int)param_2 + 0xe);
  uVar12 = (uint)(byte)param_2[2] * 0x2000 + (uint)*(byte *)((int)param_2 + 9) * 0x200000 +
           (uint)*(byte *)((int)param_2 + 7) * 0x20 + (uVar9 >> 0x19);
  uVar8 = (uint)(byte)param_2[6] * 0x2000 + (uint)*(byte *)((int)param_2 + 0x19) * 0x200000 +
          (uint)*(byte *)((int)param_2 + 0x17) * 0x20 + (uVar13 >> 0x1a);
  uVar10 = (uint)*(byte *)((int)param_2 + 0xb) * 0x800 + (uint)(byte)param_2[3] * 0x80000 +
           (uint)*(byte *)((int)param_2 + 10) * 8 + (uVar12 >> 0x1a);
  uVar7 = (uint)*(byte *)((int)param_2 + 0x1b) * 0x1000 + (uint)(byte)param_2[7] * 0x100000 +
          (uint)*(byte *)((int)param_2 + 0x1a) * 0x10 + (uVar8 >> 0x19);
  bVar3 = *(byte *)((int)param_2 + 0xf);
  bVar4 = *(byte *)((int)param_2 + 0x1e);
  bVar5 = *(byte *)((int)param_2 + 0xd);
  bVar6 = *(byte *)((int)param_2 + 0x1d);
  *param_1 = *param_2 & 0x3ffffff;
  param_1[1] = uVar9 & 0x1ffffff;
  uVar9 = (uint)bVar1 * 0x40000 + (uint)bVar4 * 0x400 + (uint)bVar6 * 4 + (uVar7 >> 0x1a);
  param_1[2] = uVar12 & 0x3ffffff;
  param_1[5] = uVar11 & 0x1ffffff;
  param_1[6] = uVar13 & 0x3ffffff;
  param_1[4] = (uint)bVar2 * 0x400 + (uint)bVar3 * 0x40000 + (uint)bVar5 * 4 + (uVar10 >> 0x19);
  param_1[3] = uVar10 & 0x1ffffff;
  param_1[7] = uVar8 & 0x1ffffff;
  param_1[8] = uVar7 & 0x3ffffff;
  param_1[9] = uVar9;
  if (0x2333333 < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("constant_time_declassify_int(h->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x2333333u : 0x4666666u))"
                 ,"/aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c",0x8c,
                 "fe_frombytes_strict",param_4);
  }
  return 0;
}

