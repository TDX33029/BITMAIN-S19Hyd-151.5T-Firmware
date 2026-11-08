// FUN_01b3a5f8 @ 01b3a5f8 size=1176 calls_out=14 calls_in=1
// strings: fe_mul121666 | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(f->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u)) | fe_mul121666 | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(h->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x2333333u : 0x4666666u))

undefined8 FUN_01b3a5f8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  char *pcVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  uint local_25c;
  undefined1 auStack_254 [40];
  undefined1 auStack_22c [40];
  undefined1 auStack_204 [40];
  undefined1 auStack_1dc [40];
  uint local_1b4 [4];
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
  uint local_190;
  undefined1 auStack_18c [40];
  undefined1 auStack_164 [40];
  undefined1 auStack_13c [40];
  undefined1 auStack_114 [40];
  undefined1 auStack_ec [40];
  undefined1 auStack_c4 [40];
  uint local_9c [4];
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  undefined1 auStack_74 [40];
  byte local_4c [31];
  byte local_2d;
  int local_2c;
  
  local_2c = DAT_01d53560;
  FUN_01b26974(local_4c,param_2,0x20,0);
  local_4c[0] = local_4c[0] & 0xf8;
  local_2d = local_2d & 0x7f | 0x40;
  FUN_01b284d8(auStack_254,param_3);
  FUN_01b26570(auStack_22c);
  FUN_01b26554(auStack_204);
  FUN_01b2662c(auStack_1dc,auStack_254);
  FUN_01b26570(local_1b4);
  uVar10 = 0xfe;
  local_25c = 0;
  do {
    uVar11 = (int)(uint)local_4c[(int)uVar10 >> 3] >> (uVar10 & 7) & 1;
    FUN_01b0d56c(auStack_22c,auStack_1dc,local_25c ^ uVar11);
    FUN_01b0d56c(auStack_204,local_1b4,local_25c ^ uVar11);
    puVar6 = local_9c;
    FUN_01b21d60(auStack_c4,auStack_1dc,local_1b4);
    FUN_01b21d60(puVar6,auStack_22c,auStack_204);
    FUN_01b21f9c(auStack_13c,auStack_22c,auStack_204);
    FUN_01b21f9c(auStack_114,auStack_1dc,local_1b4);
    FUN_01b20ba0(local_1b4,auStack_c4,auStack_13c);
    FUN_01b20ba0(auStack_204,auStack_114,puVar6);
    FUN_01b20a84(auStack_18c,puVar6);
    FUN_01b20a84(auStack_164,auStack_13c);
    FUN_01b21f9c(auStack_ec,local_1b4,auStack_204);
    FUN_01b21d60(auStack_114,local_1b4,auStack_204);
    FUN_01b20ba0(auStack_22c,auStack_164,auStack_18c);
    FUN_01b21d60(puVar6,auStack_164,auStack_18c);
    FUN_01b20a84(auStack_204,auStack_114);
    uVar7 = 0;
    do {
      uVar8 = 0xd333332;
      if ((uVar7 & 1) != 0) {
        uVar8 = 0x6999999;
      }
      if (uVar8 < *puVar6) {
        uVar9 = 0x103;
        pcVar5 = 
        "constant_time_declassify_int(f->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))"
        ;
        goto LAB_01b3a7f4;
      }
      uVar7 = uVar7 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar7 != 10);
    uVar1 = (ulonglong)local_9c[1] * 0x1db42 + ((ulonglong)local_9c[0] * 0x1db42 >> 0x1a);
    uVar2 = (ulonglong)local_9c[2] * 0x1db42 + (uVar1 >> 0x19);
    uVar3 = (ulonglong)local_9c[3] * 0x1db42 + (uVar2 >> 0x1a);
    local_1b4[3] = (uint)uVar3 & 0x1ffffff;
    uVar3 = (ulonglong)local_8c * 0x1db42 + (uVar3 >> 0x19);
    local_1a4 = (uint)uVar3 & 0x3ffffff;
    uVar3 = (ulonglong)local_88 * 0x1db42 + (uVar3 >> 0x1a);
    local_1a0 = (uint)uVar3 & 0x1ffffff;
    uVar3 = (ulonglong)local_84 * 0x1db42 + (uVar3 >> 0x19);
    local_19c = (uint)uVar3 & 0x3ffffff;
    uVar3 = (ulonglong)local_80 * 0x1db42 + (uVar3 >> 0x1a);
    local_198 = (uint)uVar3 & 0x1ffffff;
    uVar3 = (ulonglong)local_7c * 0x1db42 + (uVar3 >> 0x19);
    local_194 = (uint)uVar3 & 0x3ffffff;
    lVar4 = (ulonglong)local_78 * 0x1db42 + (uVar3 >> 0x1a);
    uVar7 = (uint)lVar4;
    local_190 = uVar7 & 0x1ffffff;
    uVar12 = (uVar7 >> 0x19 | (int)((ulonglong)lVar4 >> 0x20) << 7) * 0x13 +
             ((uint)((ulonglong)local_9c[0] * 0x1db42) & 0x3ffffff);
    uVar8 = 0;
    uVar7 = ((uint)uVar1 & 0x1ffffff) + (uVar12 >> 0x1a);
    local_1b4[0] = uVar12 & 0x3ffffff;
    local_1b4[2] = ((uint)uVar2 & 0x3ffffff) + (uVar7 >> 0x19);
    local_1b4[1] = uVar7 & 0x1ffffff;
    puVar6 = local_1b4;
    do {
      uVar7 = 0x4666666;
      if ((uVar8 & 1) != 0) {
        uVar7 = 0x2333333;
      }
      if (uVar7 < *puVar6) {
        uVar9 = 0x105;
        pcVar5 = 
        "constant_time_declassify_int(h->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x2333333u : 0x4666666u))"
        ;
LAB_01b3a7f4:
                    /* WARNING: Subroutine does not return */
        FUN_01be3310(pcVar5,"/aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c",uVar9,
                     "fe_mul121666");
      }
      uVar8 = uVar8 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar8 != 10);
    FUN_01b20a84(auStack_1dc,auStack_ec);
    FUN_01b21f9c(auStack_c4,auStack_18c,local_1b4);
    FUN_01b20ba0(local_1b4,auStack_254,auStack_204);
    FUN_01b20ba0(auStack_204,local_9c,auStack_c4);
    bVar13 = uVar10 == 0;
    uVar10 = uVar10 - 1;
    local_25c = uVar11;
    if (bVar13) {
      FUN_01b0d56c(auStack_22c,auStack_1dc,uVar11);
      FUN_01b0d56c(auStack_204,local_1b4,uVar11);
      FUN_01b2662c(auStack_74,auStack_204);
      FUN_01b214c0(auStack_204,auStack_74);
      FUN_01b20ba0(auStack_22c,auStack_22c,auStack_204);
      FUN_01b21754(param_1,auStack_22c);
      if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
        FUN_01be31f4();
      }
      return 0;
    }
  } while( true );
}

