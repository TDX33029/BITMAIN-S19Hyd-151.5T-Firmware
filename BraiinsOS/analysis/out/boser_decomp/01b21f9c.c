// FUN_01b21f9c @ 01b21f9c size=476 calls_out=1 calls_in=9
// strings: fe_add | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(f->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x2333333u : 0x4666666u)) | fe_add | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(g->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x2333333u : 0x4666666u))

undefined8 FUN_01b21f9c(int *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
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
      uVar3 = 0xb2;
      pcVar1 = 
      "constant_time_declassify_int(f->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x2333333u : 0x4666666u))"
      ;
      goto LAB_01b21ffc;
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
      iVar5 = param_3[1];
      iVar19 = param_2[1];
      iVar18 = param_2[2];
      iVar6 = param_3[2];
      iVar17 = param_2[3];
      iVar7 = param_3[3];
      iVar16 = param_2[4];
      iVar8 = param_3[4];
      iVar15 = param_2[5];
      iVar9 = param_3[5];
      iVar13 = param_2[6];
      iVar10 = param_3[6];
      iVar22 = param_2[7];
      iVar11 = param_3[7];
      iVar20 = param_3[9];
      iVar4 = *param_3;
      iVar12 = param_2[9];
      iVar2 = *param_2;
      param_1[8] = param_2[8] + param_3[8];
      *param_1 = iVar2 + iVar4;
      param_1[1] = iVar19 + iVar5;
      uVar21 = 0;
      param_1[2] = iVar18 + iVar6;
      param_1[3] = iVar17 + iVar7;
      param_1[4] = iVar16 + iVar8;
      param_1[5] = iVar15 + iVar9;
      param_1[6] = iVar13 + iVar10;
      param_1[7] = iVar22 + iVar11;
      param_1[9] = iVar12 + iVar20;
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
      uVar3 = 0xb5;
      pcVar1 = 
      "constant_time_declassify_int(h->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))"
      ;
LAB_01b21ffc:
                    /* WARNING: Subroutine does not return */
      FUN_01be3310(pcVar1,"/aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c",uVar3,"fe_add",
                   param_4);
    }
  }
  uVar3 = 0xb3;
  pcVar1 = 
  "constant_time_declassify_int(g->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x2333333u : 0x4666666u))"
  ;
  goto LAB_01b21ffc;
}

