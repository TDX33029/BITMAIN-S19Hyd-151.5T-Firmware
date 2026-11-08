// FUN_01b221ac @ 01b221ac size=360 calls_out=1 calls_in=3
// strings: fe_neg | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(f->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x2333333u : 0x4666666u)) | fe_neg | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(h->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))

undefined8 FUN_01b221ac(int *param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  uVar3 = 0;
  while( true ) {
    if ((uVar3 & 1) == 0) {
      uVar5 = 0x4666666;
    }
    else {
      uVar5 = 0x2333333;
    }
    if (uVar5 < (uint)param_2[uVar3]) break;
    uVar3 = uVar3 + 1;
    if (uVar3 == 10) {
      iVar11 = param_2[8];
      iVar9 = param_2[2];
      iVar7 = param_2[4];
      iVar13 = param_2[6];
      iVar10 = param_2[1];
      iVar8 = param_2[3];
      iVar6 = param_2[5];
      iVar12 = param_2[9];
      iVar2 = *param_2;
      param_1[7] = 0x3fffffe - param_2[7];
      param_1[8] = 0x7fffffe - iVar11;
      param_1[9] = 0x3fffffe - iVar12;
      *param_1 = 0x7ffffda - iVar2;
      param_1[1] = 0x3fffffe - iVar10;
      uVar3 = 0;
      param_1[2] = 0x7fffffe - iVar9;
      param_1[3] = 0x3fffffe - iVar8;
      param_1[4] = 0x7fffffe - iVar7;
      param_1[5] = 0x3fffffe - iVar6;
      param_1[6] = 0x7fffffe - iVar13;
      while( true ) {
        if ((uVar3 & 1) == 0) {
          uVar5 = 0xd333332;
        }
        else {
          uVar5 = 0x6999999;
        }
        if (uVar5 < (uint)param_1[uVar3]) break;
        uVar3 = uVar3 + 1;
        if (uVar3 == 10) {
          return 0;
        }
      }
      uVar4 = 0x10c;
      pcVar1 = 
      "constant_time_declassify_int(h->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))"
      ;
LAB_01b2220c:
                    /* WARNING: Subroutine does not return */
      FUN_01be3310(pcVar1,"/aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c",uVar4,"fe_neg");
    }
  }
  uVar4 = 0x10a;
  pcVar1 = 
  "constant_time_declassify_int(f->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x2333333u : 0x4666666u))"
  ;
  goto LAB_01b2220c;
}

