// FUN_01710e00 @ 01710e00 size=3552 calls_out=5 calls_in=5
// strings: fe_mul_impl | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(in1[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))

undefined8 FUN_01710e00(undefined4 param_1,uint *param_2)

{
  int iVar1;
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
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  
  local_24 = DAT_018ddaf8;
  FUN_0170cbcc(&local_c4,param_2,&PTR_018bc3f4,0);
  FUN_01705c98(&local_9c,&local_c4);
  FUN_01705c98(&local_9c,&local_9c);
  if ((((((((*param_2 < 0xd333333) && (param_2[1] < 0x699999a)) && (param_2[2] < 0xd333333)) &&
         ((param_2[3] < 0x699999a && (param_2[4] < 0xd333333)))) &&
        ((param_2[5] < 0x699999a && ((param_2[6] < 0xd333333 && (param_2[7] < 0x699999a)))))) &&
       ((param_2[8] < 0xd333333 &&
        ((((param_2[9] < 0x699999a &&
           (FUN_01705480(&local_9c,param_2,&local_9c), local_c4 < 0xd333333)) &&
          (local_c0 < 0x699999a)) &&
         (((local_bc < 0xd333333 && (local_b8 < 0x699999a)) &&
          ((local_b4 < 0xd333333 && ((local_b0 < 0x699999a && (local_ac < 0xd333333)))))))))))) &&
      (local_a8 < 0x699999a)) && ((local_a4 < 0xd333333 && (local_a0 < 0x699999a)))) {
    FUN_01705480(&local_c4,&local_c4,&local_9c);
    FUN_01705c98(&local_74,&local_c4);
    if (((((local_9c < 0xd333333) &&
          (((local_98 < 0x699999a && (local_94 < 0xd333333)) && (local_90 < 0x699999a)))) &&
         (((local_8c < 0xd333333 && (local_88 < 0x699999a)) && (local_84 < 0xd333333)))) &&
        ((local_80 < 0x699999a && (local_7c < 0xd333333)))) && (local_78 < 0x699999a)) {
      iVar1 = 4;
      FUN_01705480(&local_9c,&local_9c,&local_74);
      FUN_01705c98(&local_74,&local_9c);
      do {
        FUN_01705c98(&local_74,&local_74);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      if (((((((local_74 < 0xd333333) && (local_70 < 0x699999a)) && (local_6c < 0xd333333)) &&
            ((local_68 < 0x699999a && (local_64 < 0xd333333)))) && (local_60 < 0x699999a)) &&
          ((local_5c < 0xd333333 && (local_58 < 0x699999a)))) &&
         ((local_54 < 0xd333333 && (local_50 < 0x699999a)))) {
        iVar1 = 9;
        FUN_01705480(&local_9c,&local_74,&local_9c);
        FUN_01705c98(&local_74,&local_9c);
        do {
          FUN_01705c98(&local_74,&local_74);
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        if ((((local_74 < 0xd333333) && (local_70 < 0x699999a)) && (local_6c < 0xd333333)) &&
           ((((local_68 < 0x699999a && (local_64 < 0xd333333)) &&
             (((local_60 < 0x699999a && ((local_5c < 0xd333333 && (local_58 < 0x699999a)))) &&
              (local_54 < 0xd333333)))) && (local_50 < 0x699999a)))) {
          iVar1 = 0x13;
          FUN_01705480(&local_74,&local_74,&local_9c);
          FUN_01705c98(&local_4c,&local_74);
          do {
            FUN_01705c98(&local_4c,&local_4c);
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
          if (((((local_4c < 0xd333333) && (local_48 < 0x699999a)) && (local_44 < 0xd333333)) &&
              (((local_40 < 0x699999a && (local_3c < 0xd333333)) &&
               ((local_38 < 0x699999a && ((local_34 < 0xd333333 && (local_30 < 0x699999a)))))))) &&
             ((local_2c < 0xd333333 && (local_28 < 0x699999a)))) {
            iVar1 = 9;
            FUN_01705480(&local_74,&local_4c,&local_74);
            FUN_01705c98(&local_74,&local_74);
            do {
              FUN_01705c98(&local_74,&local_74);
              iVar1 = iVar1 + -1;
            } while (iVar1 != 0);
            if ((((((local_74 < 0xd333333) && (local_70 < 0x699999a)) && (local_6c < 0xd333333)) &&
                 ((local_68 < 0x699999a && (local_64 < 0xd333333)))) &&
                ((local_60 < 0x699999a && ((local_5c < 0xd333333 && (local_58 < 0x699999a)))))) &&
               ((local_54 < 0xd333333 && (local_50 < 0x699999a)))) {
              iVar1 = 0x31;
              FUN_01705480(&local_9c,&local_74,&local_9c);
              FUN_01705c98(&local_74,&local_9c);
              do {
                FUN_01705c98(&local_74,&local_74);
                iVar1 = iVar1 + -1;
              } while (iVar1 != 0);
              if (((((local_74 < 0xd333333) && (local_70 < 0x699999a)) && (local_6c < 0xd333333)) &&
                  ((local_68 < 0x699999a && (local_64 < 0xd333333)))) &&
                 (((local_60 < 0x699999a && ((local_5c < 0xd333333 && (local_58 < 0x699999a)))) &&
                  ((local_54 < 0xd333333 && (local_50 < 0x699999a)))))) {
                iVar1 = 99;
                FUN_01705480(&local_74,&local_74,&local_9c);
                FUN_01705c98(&local_4c,&local_74);
                do {
                  FUN_01705c98(&local_4c,&local_4c);
                  iVar1 = iVar1 + -1;
                } while (iVar1 != 0);
                if ((((((local_4c < 0xd333333) && (local_48 < 0x699999a)) && (local_44 < 0xd333333))
                     && (((local_40 < 0x699999a && (local_3c < 0xd333333)) &&
                         ((local_38 < 0x699999a &&
                          ((local_34 < 0xd333333 && (local_30 < 0x699999a)))))))) &&
                    (local_2c < 0xd333333)) && (local_28 < 0x699999a)) {
                  iVar1 = 0x31;
                  FUN_01705480(&local_74,&local_4c,&local_74);
                  FUN_01705c98(&local_74,&local_74);
                  do {
                    FUN_01705c98(&local_74,&local_74);
                    iVar1 = iVar1 + -1;
                  } while (iVar1 != 0);
                  if ((((((local_74 < 0xd333333) && (local_70 < 0x699999a)) &&
                        (local_6c < 0xd333333)) &&
                       ((local_68 < 0x699999a && (local_64 < 0xd333333)))) &&
                      ((local_60 < 0x699999a && ((local_5c < 0xd333333 && (local_58 < 0x699999a)))))
                      ) && ((local_54 < 0xd333333 && (local_50 < 0x699999a)))) {
                    iVar1 = 4;
                    FUN_01705480(&local_9c,&local_74,&local_9c);
                    FUN_01705c98(&local_9c,&local_9c);
                    do {
                      FUN_01705c98(&local_9c,&local_9c);
                      iVar1 = iVar1 + -1;
                    } while (iVar1 != 0);
                    if ((((local_9c < 0xd333333) && (local_98 < 0x699999a)) &&
                        (local_94 < 0xd333333)) &&
                       ((((local_90 < 0x699999a && (local_8c < 0xd333333)) &&
                         (((local_88 < 0x699999a &&
                           ((local_84 < 0xd333333 && (local_80 < 0x699999a)))) &&
                          (local_7c < 0xd333333)))) && (local_78 < 0x699999a)))) {
                      FUN_01705480(param_1,&local_9c,&local_c4);
                      if (local_24 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
                        FUN_016d2b78();
                      }
                      return 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_016d2c94("constant_time_declassify_int(in1[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))"
               ,"/aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c",0xca,"fe_mul_impl");
}

