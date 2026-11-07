// FUN_01725f7c @ 01725f7c size=1152 calls_out=2 calls_in=2
// strings: fe_mul_impl | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(in1[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))

void FUN_01725f7c(int param_1,uint *param_2)

{
  if (((((0xd333332 < *param_2) || (0x6999999 < param_2[1])) || (0xd333332 < param_2[2])) ||
      ((((0x6999999 < param_2[3] || (0xd333332 < param_2[4])) ||
        ((0x6999999 < param_2[5] || ((0xd333332 < param_2[6] || (0x6999999 < param_2[7])))))) ||
       (0xd333332 < param_2[8])))) ||
     ((((((0x6999999 < param_2[9] ||
          (FUN_01705480(param_1,param_2,param_2 + 0x1e), 0xd333332 < param_2[10])) ||
         (0x6999999 < param_2[0xb])) || ((0xd333332 < param_2[0xc] || (0x6999999 < param_2[0xd]))))
       || ((0xd333332 < param_2[0xe] || ((0x6999999 < param_2[0xf] || (0xd333332 < param_2[0x10]))))
          )) || (((((0x6999999 < param_2[0x11] ||
                    (((((0xd333332 < param_2[0x12] || (0x6999999 < param_2[0x13])) ||
                       (FUN_01705480(param_1 + 0x28,param_2 + 10,param_2 + 0x14),
                       0xd333332 < param_2[0x14])) ||
                      ((0x6999999 < param_2[0x15] || (0xd333332 < param_2[0x16])))) ||
                     (0x6999999 < param_2[0x17])))) ||
                   (((0xd333332 < param_2[0x18] || (0x6999999 < param_2[0x19])) ||
                    ((0xd333332 < param_2[0x1a] ||
                     (((0x6999999 < param_2[0x1b] || (0xd333332 < param_2[0x1c])) ||
                      (0x6999999 < param_2[0x1d])))))))) ||
                  (((FUN_01705480(param_1 + 0x50,param_2 + 0x14,param_2 + 0x1e),
                    0xd333332 < *param_2 || (0x6999999 < param_2[1])) || (0xd333332 < param_2[2]))))
                 || ((((0x6999999 < param_2[3] || (0xd333332 < param_2[4])) ||
                      ((0x6999999 < param_2[5] ||
                       (((0xd333332 < param_2[6] || (0x6999999 < param_2[7])) ||
                        (0xd333332 < param_2[8])))))) || (0x6999999 < param_2[9])))))))) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("constant_time_declassify_int(in1[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))"
                 ,"/aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c",0xca,"fe_mul_impl");
  }
  FUN_01705480(param_1 + 0x78,param_2,param_2 + 10);
  return;
}

