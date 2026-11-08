// FUN_01b21d60 @ 01b21d60 size=520 calls_out=1 calls_in=9
// strings: fe_sub | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(f->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x2333333u : 0x4666666u)) | fe_sub | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(g->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x2333333u : 0x4666666u))

undefined8 FUN_01b21d60(int *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  
  uVar21 = 0;
  do {
    if ((uVar21 & 1) == 0) {
      uVar14 = 0x4666666;
    }
    else {
      uVar14 = 0x2333333;
    }
    if (uVar14 < (uint)param_2[uVar21]) {
      uVar2 = 0xbb;
      pcVar1 = 
      "constant_time_declassify_int(f->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x2333333u : 0x4666666u))"
      ;
      goto LAB_01b21dc0;
    }
    uVar21 = uVar21 + 1;
  } while (uVar21 != 10);
  uVar21 = 0;
  while( true ) {
    if ((uVar21 & 1) == 0) {
      uVar14 = 0x4666666;
    }
    else {
      uVar14 = 0x2333333;
    }
    if (uVar14 < (uint)param_3[uVar21]) break;
    uVar21 = uVar21 + 1;
    if (uVar21 == 10) {
      iVar4 = param_3[1];
      iVar20 = param_2[1];
      iVar19 = param_2[2];
      iVar5 = param_3[2];
      iVar18 = param_2[3];
      iVar6 = param_3[3];
      iVar17 = param_2[4];
      iVar7 = param_3[4];
      iVar16 = param_2[5];
      iVar8 = param_3[5];
      iVar15 = param_2[6];
      iVar9 = param_3[6];
      iVar13 = param_2[7];
      iVar10 = param_3[7];
      iVar22 = param_2[8];
      iVar11 = param_3[8];
      iVar3 = *param_3;
      iVar12 = *param_2;
      param_1[9] = (param_2[9] - param_3[9]) + 0x3fffffe;
      uVar21 = 0;
      param_1[2] = (iVar19 - iVar5) + 0x7fffffe;
      *param_1 = (iVar12 - iVar3) + 0x7ffffda;
      param_1[1] = (iVar20 - iVar4) + 0x3fffffe;
      param_1[3] = (iVar18 - iVar6) + 0x3fffffe;
      param_1[4] = (iVar17 - iVar7) + 0x7fffffe;
      param_1[5] = (iVar16 - iVar8) + 0x3fffffe;
      param_1[6] = (iVar15 - iVar9) + 0x7fffffe;
      param_1[7] = (iVar13 - iVar10) + 0x3fffffe;
      param_1[8] = (iVar22 - iVar11) + 0x7fffffe;
      while( true ) {
        if ((uVar21 & 1) == 0) {
          uVar14 = 0xd333332;
        }
        else {
          uVar14 = 0x6999999;
        }
        if (uVar14 < (uint)param_1[uVar21]) break;
        uVar21 = uVar21 + 1;
        if (uVar21 == 10) {
          return 0;
        }
      }
      uVar2 = 0xbe;
      pcVar1 = 
      "constant_time_declassify_int(h->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))"
      ;
LAB_01b21dc0:
                    /* WARNING: Subroutine does not return */
      FUN_01be3310(pcVar1,"/aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c",uVar2,"fe_sub",
                   param_4);
    }
  }
  uVar2 = 0xbc;
  pcVar1 = 
  "constant_time_declassify_int(g->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x2333333u : 0x4666666u))"
  ;
  goto LAB_01b21dc0;
}

