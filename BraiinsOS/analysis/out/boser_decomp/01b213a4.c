// FUN_01b213a4 @ 01b213a4 size=244 calls_out=2 calls_in=3
// strings: fe_sq_tt | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(f->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u)) | fe_sq_tt | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(h->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x2333333u : 0x4666666u))

undefined8 FUN_01b213a4(int param_1,int param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar2 = 0;
  while( true ) {
    if ((uVar2 & 1) == 0) {
      uVar4 = 0xd333332;
    }
    else {
      uVar4 = 0x6999999;
    }
    if (uVar4 < *(uint *)(param_2 + uVar2 * 4)) break;
    uVar2 = uVar2 + 1;
    if (uVar2 == 10) {
      FUN_01b0cff8(param_1);
      uVar2 = 0;
      while( true ) {
        if ((uVar2 & 1) == 0) {
          uVar4 = 0x4666666;
        }
        else {
          uVar4 = 0x2333333;
        }
        if (uVar4 < *(uint *)(param_1 + uVar2 * 4)) break;
        uVar2 = uVar2 + 1;
        if (uVar2 == 10) {
          return 0;
        }
      }
      uVar3 = 0xf1;
      pcVar1 = 
      "constant_time_declassify_int(h->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x2333333u : 0x4666666u))"
      ;
LAB_01b21408:
                    /* WARNING: Subroutine does not return */
      FUN_01be3310(pcVar1,"/aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c",uVar3,"fe_sq_tt")
      ;
    }
  }
  uVar3 = 0xef;
  pcVar1 = 
  "constant_time_declassify_int(f->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))"
  ;
  goto LAB_01b21408;
}

