// FUN_01b2233c @ 01b2233c size=408 calls_out=1 calls_in=8
// strings: fe_carry | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(f->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u)) | fe_carry | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(h->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x2333333u : 0x4666666u))

undefined8 FUN_01b2233c(uint *param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar2 = 0;
  while( true ) {
    if ((uVar2 & 1) == 0) {
      uVar4 = 0xd333332;
    }
    else {
      uVar4 = 0x6999999;
    }
    if (uVar4 < param_2[uVar2]) break;
    uVar2 = uVar2 + 1;
    if (uVar2 == 10) {
      uVar4 = *param_2;
      uVar5 = param_2[1] + (uVar4 >> 0x1a);
      uVar8 = param_2[5];
      uVar11 = param_2[2] + (uVar5 >> 0x19);
      uVar7 = param_2[6];
      uVar6 = param_2[7];
      uVar10 = param_2[3] + (uVar11 >> 0x1a);
      uVar12 = param_2[8];
      uVar2 = param_2[9];
      uVar9 = param_2[4] + (uVar10 >> 0x19);
      param_1[3] = uVar10 & 0x1ffffff;
      uVar8 = uVar8 + (uVar9 >> 0x1a);
      param_1[4] = uVar9 & 0x3ffffff;
      uVar7 = uVar7 + (uVar8 >> 0x19);
      param_1[5] = uVar8 & 0x1ffffff;
      uVar6 = uVar6 + (uVar7 >> 0x1a);
      param_1[6] = uVar7 & 0x3ffffff;
      uVar12 = uVar12 + (uVar6 >> 0x19);
      param_1[7] = uVar6 & 0x1ffffff;
      uVar2 = uVar2 + (uVar12 >> 0x1a);
      param_1[8] = uVar12 & 0x3ffffff;
      param_1[9] = uVar2 & 0x1ffffff;
      uVar2 = (uVar2 >> 0x19) * 0x13 + (uVar4 & 0x3ffffff);
      uVar4 = (uVar5 & 0x1ffffff) + (uVar2 >> 0x1a);
      *param_1 = uVar2 & 0x3ffffff;
      param_1[2] = (uVar11 & 0x3ffffff) + (uVar4 >> 0x19);
      param_1[1] = uVar4 & 0x1ffffff;
      uVar2 = 0;
      while( true ) {
        if ((uVar2 & 1) == 0) {
          uVar4 = 0x4666666;
        }
        else {
          uVar4 = 0x2333333;
        }
        if (uVar4 < param_1[uVar2]) break;
        uVar2 = uVar2 + 1;
        if (uVar2 == 10) {
          return 0;
        }
      }
      uVar3 = 0xc4;
      pcVar1 = 
      "constant_time_declassify_int(h->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x2333333u : 0x4666666u))"
      ;
LAB_01b2239c:
                    /* WARNING: Subroutine does not return */
      FUN_01be3310(pcVar1,"/aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c",uVar3,"fe_carry",
                   param_4);
    }
  }
  uVar3 = 0xc2;
  pcVar1 = 
  "constant_time_declassify_int(f->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))"
  ;
  goto LAB_01b2239c;
}

