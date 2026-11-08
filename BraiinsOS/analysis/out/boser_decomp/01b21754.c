// FUN_01b21754 @ 01b21754 size=992 calls_out=3 calls_in=6
// strings: fe_tobytes | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(f->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x2333333u : 0x4666666u))

undefined8 FUN_01b21754(undefined1 *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint local_30;
  int local_2c;
  
  uVar1 = 0;
  local_2c = DAT_01d53560;
  while( true ) {
    if ((uVar1 & 1) == 0) {
      uVar4 = 0x4666666;
    }
    else {
      uVar4 = 0x2333333;
    }
    if (uVar4 < (uint)param_2[uVar1]) break;
    uVar1 = uVar1 + 1;
    if (uVar1 == 10) {
      iVar7 = *param_2;
      uVar16 = (param_2[1] - (-((int)(iVar7 + 0xfc000013U) >> 0x1a) & 0xffU)) + 0xfe000001;
      uVar18 = (param_2[2] - (-((int)uVar16 >> 0x19) & 0xffU)) + 0xfc000001;
      uVar14 = (param_2[3] - (-((int)uVar18 >> 0x1a) & 0xffU)) + 0xfe000001;
      uVar1 = (param_2[4] - (-((int)uVar14 >> 0x19) & 0xffU)) + 0xfc000001;
      uVar12 = (param_2[5] - (-((int)uVar1 >> 0x1a) & 0xffU)) + 0xfe000001;
      uVar4 = (param_2[6] - (-((int)uVar12 >> 0x19) & 0xffU)) + 0xfc000001;
      uVar10 = (param_2[7] - (-((int)uVar4 >> 0x1a) & 0xffU)) + 0xfe000001;
      uVar5 = (param_2[8] - (-((int)uVar10 >> 0x19) & 0xffU)) + 0xfc000001;
      uVar6 = (param_2[9] - (-((int)uVar5 >> 0x1a) & 0xffU)) + 0xfe000001;
      FUN_01b0cfb8(&local_30,-((int)uVar6 >> 0x19) & 0xff,0,0xffffffff);
      uVar8 = (iVar7 + 0xfc000013U & 0x3ffffff) + (local_30 & 0x3ffffed);
      uVar2 = uVar8 & 0x3ffffff;
      uVar3 = local_30 & 0x1ffffff;
      local_30 = local_30 & 0x3ffffff;
      uVar16 = uVar3 + (uVar8 >> 0x1a) + (uVar16 & 0x1ffffff);
      uVar18 = local_30 + (uVar16 >> 0x19) + (uVar18 & 0x3ffffff);
      uVar16 = uVar16 * 4 & 0x7fffffc;
      uVar14 = uVar3 + (uVar18 >> 0x1a) + (uVar14 & 0x1ffffff);
      uVar18 = uVar18 * 8 & 0x1ffffff8;
      iVar9 = uVar16 + ((uVar8 & 0x3ffffff) >> 0x18);
      uVar1 = local_30 + (uVar14 >> 0x19) + (uVar1 & 0x3ffffff);
      uVar14 = uVar14 * 0x20 & 0x3fffffe0;
      iVar17 = uVar18 + (uVar16 >> 0x18);
      iVar19 = uVar14 + (uVar18 >> 0x18);
      uVar8 = uVar3 + (uVar1 >> 0x1a) + (uVar12 & 0x1ffffff);
      iVar15 = (uVar14 >> 0x18) + uVar1 * 0x40;
      uVar1 = uVar8 & 0x1ffffff;
      param_1[3] = (char)iVar9;
      uVar4 = local_30 + (uVar8 >> 0x19) + (uVar4 & 0x3ffffff);
      param_1[6] = (char)iVar17;
      param_1[9] = (char)iVar19;
      uVar12 = uVar4 & 0x3ffffff;
      uVar4 = uVar3 + (uVar4 >> 0x1a) + (uVar10 & 0x1ffffff);
      param_1[0xc] = (char)iVar15;
      iVar13 = uVar12 * 2 - ((int)(uVar8 * 0x80) >> 0x1f);
      param_1[0x10] = (char)uVar1;
      param_1[0x13] = (char)iVar13;
      uVar8 = uVar4 * 8 & 0xffffff8;
      uVar5 = local_30 + (uVar4 >> 0x19) + (uVar5 & 0x3ffffff);
      iVar20 = uVar8 + (uVar12 >> 0x17);
      param_1[0x16] = (char)iVar20;
      uVar4 = uVar5 * 0x10 & 0x3ffffff0;
      iVar11 = uVar4 + (uVar8 >> 0x18);
      *param_1 = (char)uVar2;
      param_1[1] = (char)(uVar2 >> 8);
      iVar7 = ((uVar3 + (uVar5 >> 0x1a) + (uVar6 & 0x1ffffff)) * 0x40 & 0x7fffffc0) +
              (uVar4 >> 0x18);
      param_1[2] = (char)(uVar2 >> 0x10);
      param_1[4] = (char)((uint)iVar9 >> 8);
      param_1[5] = (char)((uint)iVar9 >> 0x10);
      param_1[7] = (char)((uint)iVar17 >> 8);
      param_1[8] = (char)((uint)iVar17 >> 0x10);
      param_1[10] = (char)((uint)iVar19 >> 8);
      param_1[0xb] = (char)((uint)iVar19 >> 0x10);
      param_1[0xd] = (char)((uint)iVar15 >> 8);
      param_1[0xe] = (char)((uint)iVar15 >> 0x10);
      param_1[0xf] = (char)((uint)iVar15 >> 0x18);
      param_1[0x11] = (char)(uVar1 >> 8);
      param_1[0x12] = (char)(uVar1 >> 0x10);
      param_1[0x14] = (char)((uint)iVar13 >> 8);
      param_1[0x15] = (char)((uint)iVar13 >> 0x10);
      param_1[0x17] = (char)((uint)iVar20 >> 8);
      param_1[0x18] = (char)((uint)iVar20 >> 0x10);
      param_1[0x1a] = (char)((uint)iVar11 >> 8);
      param_1[0x1d] = (char)((uint)iVar7 >> 8);
      param_1[0x1e] = (char)((uint)iVar7 >> 0x10);
      param_1[0x1c] = (char)iVar7;
      param_1[0x1f] = (char)((uint)iVar7 >> 0x18);
      param_1[0x19] = (char)iVar11;
      param_1[0x1b] = (char)((uint)iVar11 >> 0x10);
      if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
        FUN_01be31f4();
      }
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01be3310("constant_time_declassify_int(f->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x2333333u : 0x4666666u))"
               ,"/aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c",0x97,"fe_tobytes");
}

