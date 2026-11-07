// FUN_01725a64 @ 01725a64 size=396 calls_out=5 calls_in=1
// strings: fe_mul_impl | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(in1[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))

void FUN_01725a64(int param_1,int param_2)

{
  FUN_01706e70(param_1,param_2 + 0x28,param_2);
  FUN_01706a0c(param_1 + 0x28,param_2 + 0x28,param_2);
  FUN_016dd52c(param_1 + 0x50,param_2 + 0x50,0x28);
  if ((((((0xd333332 < *(uint *)(param_2 + 0x78)) || (0x6999999 < *(uint *)(param_2 + 0x7c))) ||
        (0xd333332 < *(uint *)(param_2 + 0x80))) ||
       ((0x6999999 < *(uint *)(param_2 + 0x84) || (0xd333332 < *(uint *)(param_2 + 0x88))))) ||
      ((0x6999999 < *(uint *)(param_2 + 0x8c) ||
       ((0xd333332 < *(uint *)(param_2 + 0x90) || (0x6999999 < *(uint *)(param_2 + 0x94))))))) ||
     ((0xd333332 < *(uint *)(param_2 + 0x98) || (0x6999999 < *(uint *)(param_2 + 0x9c))))) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("constant_time_declassify_int(in1[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))"
                 ,"/aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c",0xca,"fe_mul_impl");
  }
  FUN_01705480(param_1 + 0x78,param_2 + 0x78,&DAT_0044c37c);
  return;
}

