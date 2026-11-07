// FUN_01b21b54 @ 01b21b54 size=492 calls_out=1 calls_in=1
// strings: fe_frombytes_strict | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int((s[31] & 0x80) == 0) | fe_frombytes_strict | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(h->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x2333333u : 0x4666666u))

undefined8 FUN_01b21b54(uint *param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char *pcVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  bVar1 = *(byte *)((int)param_2 + 0x1f);
  if (*(char *)((int)param_2 + 0x1f) < '\0') {
    uVar8 = 0x8a;
    pcVar7 = "constant_time_declassify_int((s[31] & 0x80) == 0)";
  }
  else {
    uVar14 = *param_2;
    bVar2 = *(byte *)((int)param_2 + 0xe);
    uVar12 = (uint)*(byte *)((int)param_2 + 5) * 0x4000 +
             (uint)*(byte *)((int)param_2 + 6) * 0x400000 + (uVar14 >> 0x1a) +
             (uint)(byte)param_2[1] * 0x40;
    uVar13 = param_2[4];
    uVar11 = (uint)(byte)param_2[2] * 0x2000 + (uint)*(byte *)((int)param_2 + 9) * 0x200000 +
             (uint)*(byte *)((int)param_2 + 7) * 0x20 + (uVar12 >> 0x19);
    bVar3 = *(byte *)((int)param_2 + 0xf);
    uVar16 = (uint)*(byte *)((int)param_2 + 0xb) * 0x800 + (uint)(byte)param_2[3] * 0x80000 +
             (uint)*(byte *)((int)param_2 + 10) * 8 + (uVar11 >> 0x1a);
    bVar4 = *(byte *)((int)param_2 + 0xd);
    uVar15 = (uint)*(byte *)((int)param_2 + 0x15) * 0x8000 +
             (uint)*(byte *)((int)param_2 + 0x16) * 0x800000 + (uVar13 >> 0x19) +
             (uint)(byte)param_2[5] * 0x80;
    uVar9 = (uint)(byte)param_2[6] * 0x2000 + (uint)*(byte *)((int)param_2 + 0x19) * 0x200000 +
            (uint)*(byte *)((int)param_2 + 0x17) * 0x20 + (uVar15 >> 0x1a);
    bVar5 = *(byte *)((int)param_2 + 0x1e);
    bVar6 = *(byte *)((int)param_2 + 0x1d);
    uVar10 = (uint)*(byte *)((int)param_2 + 0x1b) * 0x1000 + (uint)(byte)param_2[7] * 0x100000 +
             (uint)*(byte *)((int)param_2 + 0x1a) * 0x10 + (uVar9 >> 0x19);
    param_1[6] = uVar15 & 0x3ffffff;
    *param_1 = uVar14 & 0x3ffffff;
    param_1[1] = uVar12 & 0x1ffffff;
    param_1[2] = uVar11 & 0x3ffffff;
    param_1[3] = uVar16 & 0x1ffffff;
    param_1[4] = (uint)bVar2 * 0x400 + (uint)bVar3 * 0x40000 + (uint)bVar4 * 4 + (uVar16 >> 0x19);
    param_1[5] = uVar13 & 0x1ffffff;
    param_1[7] = uVar9 & 0x1ffffff;
    uVar9 = 0;
    param_1[8] = uVar10 & 0x3ffffff;
    param_1[9] = (uint)bVar1 * 0x40000 + (uint)bVar5 * 0x400 + (uint)bVar6 * 4 + (uVar10 >> 0x1a);
    while( true ) {
      if ((uVar9 & 1) == 0) {
        uVar10 = 0x4666666;
      }
      else {
        uVar10 = 0x2333333;
      }
      if (uVar10 < param_1[uVar9]) break;
      uVar9 = uVar9 + 1;
      if (uVar9 == 10) {
        return 0;
      }
    }
    uVar8 = 0x8c;
    pcVar7 = 
    "constant_time_declassify_int(h->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x2333333u : 0x4666666u))"
    ;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01be3310(pcVar7,"/aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c",uVar8,
               "fe_frombytes_strict",param_4);
}

