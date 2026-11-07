// FUN_0170d3f8 @ 0170d3f8 size=1104 calls_out=6 calls_in=2
// strings: fe_mul_impl | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(in1[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))

undefined8 FUN_0170d3f8(uint *param_1,int param_2,int param_3)

{
  undefined1 auStack_9c [40];
  undefined1 auStack_74 [40];
  undefined1 auStack_4c [40];
  int local_24;
  
  local_24 = DAT_018ddaf8;
  FUN_01706e70(param_1,param_2 + 0x28,param_2,0);
  FUN_01706a0c(param_1 + 10,param_2 + 0x28,param_2);
  if ((((((((0xd333332 < *param_1) || (0x6999999 < param_1[1])) || (0xd333332 < param_1[2])) ||
         (((0x6999999 < param_1[3] || (0xd333332 < param_1[4])) ||
          ((0x6999999 < param_1[5] || ((0xd333332 < param_1[6] || (0x6999999 < param_1[7])))))))) ||
        (0xd333332 < param_1[8])) ||
       (((0x6999999 < param_1[9] ||
         (FUN_01705480(auStack_74,param_1,param_3), 0xd333332 < param_1[10])) ||
        (0x6999999 < param_1[0xb])))) ||
      (((0xd333332 < param_1[0xc] || (0x6999999 < param_1[0xd])) ||
       ((0xd333332 < param_1[0xe] || ((0x6999999 < param_1[0xf] || (0xd333332 < param_1[0x10])))))))
      ) || (((0x6999999 < param_1[0x11] ||
             (((((0xd333332 < param_1[0x12] || (0x6999999 < param_1[0x13])) ||
                (FUN_01705480(auStack_9c,param_1 + 10,param_3 + 0x28),
                0xd333332 < *(uint *)(param_3 + 0x50))) ||
               ((0x6999999 < *(uint *)(param_3 + 0x54) || (0xd333332 < *(uint *)(param_3 + 0x58)))))
              || ((0x6999999 < *(uint *)(param_3 + 0x5c) ||
                  ((0xd333332 < *(uint *)(param_3 + 0x60) || (0x6999999 < *(uint *)(param_3 + 100)))
                  )))))) ||
            ((0xd333332 < *(uint *)(param_3 + 0x68) ||
             (((0x6999999 < *(uint *)(param_3 + 0x6c) || (0xd333332 < *(uint *)(param_3 + 0x70))) ||
              (0x6999999 < *(uint *)(param_3 + 0x74))))))))) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("constant_time_declassify_int(in1[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))"
                 ,"/aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c",0xca,"fe_mul_impl");
  }
  FUN_01705480(auStack_4c,param_3 + 0x50,param_2 + 0x78);
  FUN_01706e70(param_1 + 0x1e,param_2 + 0x50);
  FUN_01706a0c(param_1,auStack_74,auStack_9c);
  FUN_01706e70(param_1 + 10,auStack_74,auStack_9c);
  FUN_017075c0(auStack_74,param_1 + 0x1e);
  FUN_01706e70(param_1 + 0x14,auStack_74,auStack_4c);
  FUN_01706a0c(param_1 + 0x1e,auStack_74,auStack_4c);
  if (local_24 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

