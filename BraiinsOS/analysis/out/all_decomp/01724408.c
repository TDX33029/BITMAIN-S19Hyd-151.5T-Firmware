// FUN_01724408 @ 01724408 size=5688 calls_out=12 calls_in=1
// strings: fe_mul_impl | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(in1[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))

void FUN_01724408(uint *param_1,uint *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  uint *puVar4;
  int iVar5;
  undefined8 uVar6;
  uint local_18c;
  uint local_188;
  uint local_184;
  uint local_180;
  uint local_17c;
  uint local_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  undefined1 auStack_164 [40];
  uint local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  undefined1 auStack_ec [40];
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
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c [2];
  
  local_2c[0] = DAT_018ddaf8;
  if ((&local_4c < param_2 && param_2 < local_2c) ||
     ((param_2 < &local_4c && (&local_4c < param_2 + 8)))) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0,0x1725a60);
    (*pcVar1)();
  }
  local_4c = *param_2;
  uStack_48 = param_2[1];
  puVar4 = param_1 + 10;
  uStack_44 = param_2[2];
  uStack_40 = param_2[3];
  local_3c = param_2[4];
  uStack_38 = param_2[5];
  uStack_34 = param_2[6];
  uStack_30 = param_2[7] & 0x7fffffff;
  FUN_0170681c(puVar4,&local_4c);
  FUN_016dd606(param_1 + 0x14,0,0x28);
  param_1[0x14] = 1;
  FUN_01705c98(&local_13c,puVar4);
  if (((((local_13c < 0xd333333) && (local_138 < 0x699999a)) && (local_134 < 0xd333333)) &&
      ((local_130 < 0x699999a && (local_12c < 0xd333333)))) &&
     ((((local_128 < 0x699999a && ((local_124 < 0xd333333 && (local_120 < 0x699999a)))) &&
       (local_11c < 0xd333333)) && (local_118 < 0x699999a)))) {
    FUN_01705480(&local_114,&local_13c,&DAT_0044c3cc);
    FUN_01706a0c(auStack_164,&local_13c,param_1 + 0x14);
    FUN_017075c0(&local_18c,auStack_164);
    FUN_01706e70(auStack_164,&local_114,param_1 + 0x14);
    if (((((0xd333332 < local_18c) || (0x6999999 < local_188)) || (0xd333332 < local_184)) ||
        (((0x6999999 < local_180 || (0xd333332 < local_17c)) ||
         ((0x6999999 < local_178 || ((0xd333332 < local_174 || (0x6999999 < local_170)))))))) ||
       ((0xd333332 < local_16c || (0x6999999 < local_168)))) goto LAB_01725a3c;
    FUN_01705480(&local_13c,&local_18c,auStack_164);
    FUN_01705c98(&local_c4,&local_13c);
    FUN_01705c98(&local_9c,&local_c4);
    FUN_01705c98(&local_9c,&local_9c);
    if (((((((0xd333332 < local_13c) || (0x6999999 < local_138)) || (0xd333332 < local_134)) ||
          ((0x6999999 < local_130 || (0xd333332 < local_12c)))) ||
         ((0x6999999 < local_128 || ((0xd333332 < local_124 || (0x6999999 < local_120)))))) ||
        ((0xd333332 < local_11c ||
         (((((0x6999999 < local_118 ||
             (FUN_01705480(&local_9c,&local_13c,&local_9c), 0xd333332 < local_c4)) ||
            (0x6999999 < local_c0)) || ((0xd333332 < local_bc || (0x6999999 < local_b8)))) ||
          (0xd333332 < local_b4)))))) ||
       (((0x6999999 < local_b0 || (0xd333332 < local_ac)) ||
        ((0x6999999 < local_a8 || ((0xd333332 < local_a4 || (0x6999999 < local_a0))))))))
    goto LAB_01725a3c;
    FUN_01705480(&local_c4,&local_c4,&local_9c);
    FUN_01705c98(&local_c4,&local_c4);
    if (((0xd333332 < local_9c) ||
        (((0x6999999 < local_98 || (0xd333332 < local_94)) || (0x6999999 < local_90)))) ||
       ((((0xd333332 < local_8c || (0x6999999 < local_88)) ||
         ((0xd333332 < local_84 || ((0x6999999 < local_80 || (0xd333332 < local_7c)))))) ||
        (0x6999999 < local_78)))) goto LAB_01725a3c;
    iVar5 = 4;
    FUN_01705480(&local_c4,&local_9c,&local_c4);
    FUN_01705c98(&local_9c,&local_c4);
    do {
      FUN_01705c98(&local_9c,&local_9c);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if ((((0xd333332 < local_9c) || (0x6999999 < local_98)) || (0xd333332 < local_94)) ||
       (((((0x6999999 < local_90 || (0xd333332 < local_8c)) ||
          ((0x6999999 < local_88 || ((0xd333332 < local_84 || (0x6999999 < local_80)))))) ||
         (0xd333332 < local_7c)) || (0x6999999 < local_78)))) goto LAB_01725a3c;
    iVar5 = 9;
    FUN_01705480(&local_c4,&local_9c,&local_c4);
    FUN_01705c98(&local_9c,&local_c4);
    do {
      FUN_01705c98(&local_9c,&local_9c);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if ((((((0xd333332 < local_9c) || (0x6999999 < local_98)) || (0xd333332 < local_94)) ||
         ((0x6999999 < local_90 || (0xd333332 < local_8c)))) ||
        ((0x6999999 < local_88 || ((0xd333332 < local_84 || (0x6999999 < local_80)))))) ||
       ((0xd333332 < local_7c || (0x6999999 < local_78)))) goto LAB_01725a3c;
    iVar5 = 0x13;
    FUN_01705480(&local_9c,&local_9c,&local_c4);
    FUN_01705c98(&local_74,&local_9c);
    do {
      FUN_01705c98(&local_74,&local_74);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if ((((((0xd333332 < local_74) || (0x6999999 < local_70)) || (0xd333332 < local_6c)) ||
         ((0x6999999 < local_68 || (0xd333332 < local_64)))) ||
        (((0x6999999 < local_60 || ((0xd333332 < local_5c || (0x6999999 < local_58)))) ||
         (0xd333332 < local_54)))) || (0x6999999 < local_50)) goto LAB_01725a3c;
    iVar5 = 9;
    FUN_01705480(&local_9c,&local_74,&local_9c);
    FUN_01705c98(&local_9c,&local_9c);
    do {
      FUN_01705c98(&local_9c,&local_9c);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if ((((0xd333332 < local_9c) || (0x6999999 < local_98)) || (0xd333332 < local_94)) ||
       ((((0x6999999 < local_90 || (0xd333332 < local_8c)) ||
         ((0x6999999 < local_88 || ((0xd333332 < local_84 || (0x6999999 < local_80)))))) ||
        ((0xd333332 < local_7c || (0x6999999 < local_78)))))) goto LAB_01725a3c;
    iVar5 = 0x31;
    FUN_01705480(&local_c4,&local_9c,&local_c4);
    FUN_01705c98(&local_9c,&local_c4);
    do {
      FUN_01705c98(&local_9c,&local_9c);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if ((((((0xd333332 < local_9c) || (0x6999999 < local_98)) || (0xd333332 < local_94)) ||
         ((0x6999999 < local_90 || (0xd333332 < local_8c)))) ||
        ((0x6999999 < local_88 || ((0xd333332 < local_84 || (0x6999999 < local_80)))))) ||
       ((0xd333332 < local_7c || (0x6999999 < local_78)))) goto LAB_01725a3c;
    iVar5 = 99;
    FUN_01705480(&local_9c,&local_9c,&local_c4);
    FUN_01705c98(&local_74,&local_9c);
    do {
      FUN_01705c98(&local_74,&local_74);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (((((0xd333332 < local_74) || (0x6999999 < local_70)) || (0xd333332 < local_6c)) ||
        ((0x6999999 < local_68 || (0xd333332 < local_64)))) ||
       (((0x6999999 < local_60 || ((0xd333332 < local_5c || (0x6999999 < local_58)))) ||
        ((0xd333332 < local_54 || (0x6999999 < local_50)))))) goto LAB_01725a3c;
    iVar5 = 0x31;
    FUN_01705480(&local_9c,&local_74,&local_9c);
    FUN_01705c98(&local_9c,&local_9c);
    do {
      FUN_01705c98(&local_9c,&local_9c);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (((((0xd333332 < local_9c) || (0x6999999 < local_98)) || (0xd333332 < local_94)) ||
        (((0x6999999 < local_90 || (0xd333332 < local_8c)) ||
         ((0x6999999 < local_88 || ((0xd333332 < local_84 || (0x6999999 < local_80)))))))) ||
       ((0xd333332 < local_7c || (0x6999999 < local_78)))) goto LAB_01725a3c;
    FUN_01705480(&local_c4,&local_9c,&local_c4);
    FUN_01705c98(&local_c4,&local_c4);
    FUN_01705c98(&local_c4,&local_c4);
    if ((((((((((0xd333332 < local_c4) || (0x6999999 < local_c0)) || (0xd333332 < local_bc)) ||
             ((0x6999999 < local_b8 || (0xd333332 < local_b4)))) || (0x6999999 < local_b0)) ||
           ((0xd333332 < local_ac || (0x6999999 < local_a8)))) ||
          ((0xd333332 < local_a4 ||
           (((0x6999999 < local_a0 ||
             (FUN_01705480(param_1,&local_c4,&local_13c), 0xd333332 < *param_1)) ||
            (0x6999999 < param_1[1])))))) || ((0xd333332 < param_1[2] || (0x6999999 < param_1[3]))))
        || (0xd333332 < param_1[4])) ||
       (((0x6999999 < param_1[5] || (0xd333332 < param_1[6])) ||
        ((0x6999999 < param_1[7] || ((0xd333332 < param_1[8] || (0x6999999 < param_1[9]))))))))
    goto LAB_01725a3c;
    FUN_01705480(param_1,param_1,&local_18c);
    FUN_01705c98(&local_114,param_1);
    if (((0xd333332 < local_114) ||
        (((0x6999999 < local_110 || (0xd333332 < local_10c)) || (0x6999999 < local_108)))) ||
       (((0xd333332 < local_104 || (0x6999999 < local_100)) ||
        (((0xd333332 < local_fc || ((0x6999999 < local_f8 || (0xd333332 < local_f4)))) ||
         (0x6999999 < local_f0)))))) goto LAB_01725a3c;
    FUN_01705480(&local_114,&local_114,auStack_164);
    FUN_01706a0c(auStack_ec,&local_114,&local_18c);
    FUN_017075c0(&local_74,auStack_ec);
    FUN_01706384(&local_4c,&local_74);
    iVar5 = FUN_0177b0d8(&local_4c,&DAT_004286c4,0x20);
    if (iVar5 != 0) {
      FUN_01706e70(auStack_ec,&local_114,&local_18c);
      FUN_017075c0(&local_74,auStack_ec);
      FUN_01706384(&local_4c,&local_74);
      uVar6 = FUN_0177b0d8(&local_4c,&DAT_004286c4,0x20);
      uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if ((int)uVar6 != 0) {
        uVar2 = 0;
        goto LAB_0172578c;
      }
      if ((((((0xd333332 < *param_1) || (0x6999999 < param_1[1])) || (0xd333332 < param_1[2])) ||
           ((0x6999999 < param_1[3] || (0xd333332 < param_1[4])))) ||
          ((0x6999999 < param_1[5] || ((0xd333332 < param_1[6] || (0x6999999 < param_1[7])))))) ||
         ((0xd333332 < param_1[8] || (0x6999999 < param_1[9])))) goto LAB_01725a3c;
      FUN_01705480(param_1,param_1,&DAT_0044c3a4);
    }
    FUN_01706384(&local_4c,param_1);
    if ((local_4c & 1) != (uint)(*(byte *)((int)param_2 + 0x1f) >> 7)) {
      FUN_017072ac(&local_74,param_1);
      FUN_017075c0(param_1,&local_74);
    }
    if ((((((*param_1 < 0xd333333) && (param_1[1] < 0x699999a)) && (param_1[2] < 0xd333333)) &&
         (((param_1[3] < 0x699999a && (param_1[4] < 0xd333333)) &&
          ((param_1[5] < 0x699999a && ((param_1[6] < 0xd333333 && (param_1[7] < 0x699999a)))))))) &&
        (param_1[8] < 0xd333333)) && (param_1[9] < 0x699999a)) {
      FUN_01705480(param_1 + 0x1e,param_1,puVar4);
      uVar2 = 1;
      uVar3 = extraout_r1;
LAB_0172578c:
      if ((local_2c[0] ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_016d2b78(uVar2,uVar3,local_2c[0] ^ DAT_018ddaf8,0);
      }
      return;
    }
  }
LAB_01725a3c:
                    /* WARNING: Subroutine does not return */
  FUN_016d2c94("constant_time_declassify_int(in1[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))"
               ,"/aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c",0xca,"fe_mul_impl");
}

