// FUN_01726408 @ 01726408 size=1376 calls_out=6 calls_in=1
// strings: fe_mul_impl | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(in1[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))

undefined8 FUN_01726408(uint *param_1,int param_2,int param_3)

{
  undefined1 auStack_cc [40];
  undefined1 auStack_a4 [40];
  undefined1 auStack_7c [40];
  undefined1 auStack_54 [40];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  FUN_01706e70(param_1,param_2 + 0x28,param_2,0);
  FUN_01706a0c(param_1 + 10,param_2 + 0x28,param_2);
  if (((((0xd333332 < *param_1) || (0x6999999 < param_1[1])) || (0xd333332 < param_1[2])) ||
      ((((0x6999999 < param_1[3] || (0xd333332 < param_1[4])) ||
        ((0x6999999 < param_1[5] || ((0xd333332 < param_1[6] || (0x6999999 < param_1[7])))))) ||
       (0xd333332 < param_1[8])))) ||
     ((((((0x6999999 < param_1[9] ||
          (FUN_01705480(auStack_7c,param_1,param_3), 0xd333332 < param_1[10])) ||
         (0x6999999 < param_1[0xb])) || ((0xd333332 < param_1[0xc] || (0x6999999 < param_1[0xd]))))
       || ((0xd333332 < param_1[0xe] || ((0x6999999 < param_1[0xf] || (0xd333332 < param_1[0x10]))))
          )) || (((((0x6999999 < param_1[0x11] ||
                    (((((0xd333332 < param_1[0x12] || (0x6999999 < param_1[0x13])) ||
                       (FUN_01705480(auStack_a4,param_1 + 10,param_3 + 0x28),
                       0xd333332 < *(uint *)(param_3 + 0x78))) ||
                      ((0x6999999 < *(uint *)(param_3 + 0x7c) ||
                       (0xd333332 < *(uint *)(param_3 + 0x80))))) ||
                     (0x6999999 < *(uint *)(param_3 + 0x84))))) ||
                   (((0xd333332 < *(uint *)(param_3 + 0x88) ||
                     (0x6999999 < *(uint *)(param_3 + 0x8c))) ||
                    ((0xd333332 < *(uint *)(param_3 + 0x90) ||
                     (((0x6999999 < *(uint *)(param_3 + 0x94) ||
                       (0xd333332 < *(uint *)(param_3 + 0x98))) ||
                      (0x6999999 < *(uint *)(param_3 + 0x9c))))))))) ||
                  (((FUN_01705480(auStack_54,param_3 + 0x78,param_2 + 0x78),
                    0xd333332 < *(uint *)(param_2 + 0x50) || (0x6999999 < *(uint *)(param_2 + 0x54))
                    ) || (0xd333332 < *(uint *)(param_2 + 0x58))))) ||
                 ((((0x6999999 < *(uint *)(param_2 + 0x5c) ||
                    (0xd333332 < *(uint *)(param_2 + 0x60))) ||
                   ((0x6999999 < *(uint *)(param_2 + 100) ||
                    (((0xd333332 < *(uint *)(param_2 + 0x68) ||
                      (0x6999999 < *(uint *)(param_2 + 0x6c))) ||
                     (0xd333332 < *(uint *)(param_2 + 0x70))))))) ||
                  (0x6999999 < *(uint *)(param_2 + 0x74))))))))) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("constant_time_declassify_int(in1[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))"
                 ,"/aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c",0xca,"fe_mul_impl");
  }
  FUN_01705480(auStack_cc,param_2 + 0x50,param_3 + 0x50);
  FUN_01706e70(param_1 + 0x1e,auStack_cc);
  FUN_01706a0c(param_1,auStack_7c,auStack_a4);
  FUN_01706e70(param_1 + 10,auStack_7c,auStack_a4);
  FUN_017075c0(auStack_7c,param_1 + 0x1e);
  FUN_01706e70(param_1 + 0x14,auStack_7c,auStack_54);
  FUN_01706a0c(param_1 + 0x1e,auStack_7c,auStack_54);
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

