// FUN_01729830 @ 01729830 size=644 calls_out=8 calls_in=1
// strings: fe_mul_impl | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(in1[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))

undefined8 FUN_01729830(undefined4 param_1,uint *param_2)

{
  code *pcVar1;
  uint local_154;
  uint local_150;
  uint local_14c;
  uint local_148;
  uint local_144;
  uint local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  undefined1 auStack_12c [40];
  undefined1 auStack_104 [40];
  undefined1 auStack_dc [40];
  undefined1 auStack_b4 [40];
  undefined1 auStack_8c [80];
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint local_1c [2];
  
  local_1c[0] = DAT_018ddaf8;
  if ((param_2 < local_1c && &local_3c < param_2) ||
     ((param_2 < &local_3c && (&local_3c < param_2 + 8)))) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0,0x1729ab0);
    (*pcVar1)();
  }
  uStack_38 = param_2[1];
  uStack_34 = param_2[2];
  uStack_30 = param_2[3];
  local_2c = param_2[4];
  uStack_28 = param_2[5];
  uStack_24 = param_2[6];
  local_3c = *param_2 & 0xfffffff8;
  uStack_20 = param_2[7] & 0x7fffffff | 0x40000000;
  FUN_01726ef8(auStack_dc,&local_3c);
  FUN_01706e70(&local_154,auStack_8c);
  FUN_01706a0c(auStack_12c,auStack_8c,auStack_b4);
  FUN_01710e00(auStack_104,auStack_12c);
  if ((0xd333332 < local_154) ||
     ((((((0x6999999 < local_150 || (0xd333332 < local_14c)) || (0x6999999 < local_148)) ||
        ((0xd333332 < local_144 || (0x6999999 < local_140)))) ||
       ((0xd333332 < local_13c || ((0x6999999 < local_138 || (0xd333332 < local_134)))))) ||
      (0x6999999 < local_130)))) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("constant_time_declassify_int(in1[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))"
                 ,"/aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c",0xca,"fe_mul_impl");
  }
  FUN_01705480(auStack_104,&local_154,auStack_104);
  FUN_01706384(param_1,auStack_104);
  if (local_1c[0] != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

