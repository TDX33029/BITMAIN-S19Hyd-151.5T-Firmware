// FUN_01729ae0 @ 01729ae0 size=780 calls_out=7 calls_in=1
// strings: fe_mul_impl | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(in1[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))

undefined8 FUN_01729ae0(int param_1,undefined4 param_2)

{
  undefined1 auStack_15c [40];
  undefined1 auStack_134 [40];
  undefined1 auStack_10c [40];
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  undefined1 auStack_94 [80];
  char local_44 [32];
  int local_24;
  
  local_24 = DAT_018ddaf8;
  FUN_01726ef8(&local_e4,param_2,&PTR_018bc3f4,0);
  FUN_016dd52c(auStack_10c,auStack_94,0x28);
  FUN_01710e00(auStack_15c,auStack_10c);
  if (((((((0xd333332 < local_e4) || (0x6999999 < local_e0)) || (0xd333332 < local_dc)) ||
        ((0x6999999 < local_d8 || (0xd333332 < local_d4)))) ||
       (((0x6999999 < local_d0 || ((0xd333332 < local_cc || (0x6999999 < local_c8)))) ||
        (0xd333332 < local_c4)))) ||
      ((((0x6999999 < local_c0 ||
         (FUN_01705480(auStack_134,&local_e4,auStack_15c), 0xd333332 < local_bc)) ||
        (0x6999999 < local_b8)) ||
       (((0xd333332 < local_b4 || (0x6999999 < local_b0)) ||
        ((0xd333332 < local_ac || ((0x6999999 < local_a8 || (0xd333332 < local_a4)))))))))) ||
     ((0x6999999 < local_a0 || ((0xd333332 < local_9c || (0x6999999 < local_98)))))) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("constant_time_declassify_int(in1[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))"
                 ,"/aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c",0xca,"fe_mul_impl");
  }
  FUN_01705480(auStack_10c,&local_bc,auStack_15c);
  FUN_01706384(param_1,auStack_10c);
  FUN_01706384(local_44,auStack_134);
  *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + 0x1f) ^ local_44[0] << 7;
  if (local_24 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

