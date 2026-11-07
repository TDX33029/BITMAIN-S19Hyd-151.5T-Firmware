// FUN_017240e8 @ 017240e8 size=776 calls_out=6 calls_in=1
// strings: fe_mul_impl | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(in1[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))

undefined8 FUN_017240e8(int param_1,uint *param_2)

{
  undefined1 auStack_bc [40];
  undefined1 auStack_94 [40];
  undefined1 auStack_6c [40];
  char local_44 [32];
  int local_24;
  
  local_24 = DAT_018ddaf8;
  FUN_016dd52c(auStack_6c,param_2 + 0x14,0x28,0);
  FUN_01710e00(auStack_bc,auStack_6c);
  if (((((((0xd333332 < *param_2) || (0x6999999 < param_2[1])) || (0xd333332 < param_2[2])) ||
        ((0x6999999 < param_2[3] || (0xd333332 < param_2[4])))) ||
       (((0x6999999 < param_2[5] || ((0xd333332 < param_2[6] || (0x6999999 < param_2[7])))) ||
        (0xd333332 < param_2[8])))) ||
      ((((0x6999999 < param_2[9] ||
         (FUN_01705480(auStack_94,param_2,auStack_bc), 0xd333332 < param_2[10])) ||
        (0x6999999 < param_2[0xb])) ||
       (((0xd333332 < param_2[0xc] || (0x6999999 < param_2[0xd])) ||
        ((0xd333332 < param_2[0xe] || ((0x6999999 < param_2[0xf] || (0xd333332 < param_2[0x10]))))))
       )))) || ((0x6999999 < param_2[0x11] ||
                ((0xd333332 < param_2[0x12] || (0x6999999 < param_2[0x13])))))) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("constant_time_declassify_int(in1[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))"
                 ,"/aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c",0xca,"fe_mul_impl");
  }
  FUN_01705480(auStack_6c,param_2 + 10,auStack_bc);
  FUN_01706384(param_1,auStack_6c);
  FUN_01706384(local_44,auStack_94);
  *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + 0x1f) ^ local_44[0] << 7;
  if (local_24 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

