// FUN_01825cf0 @ 01825cf0 size=684 calls_out=1 calls_in=4
// strings: !rustsecp256k1_v0_9_2_fe_is_zero(&ge->x)

void FUN_01825cf0(int param_1,uint *param_2,uint *param_3)

{
  code *pcVar1;
  uint uVar2;
  uint *extraout_r1;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint local_5c [7];
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  local_1c = DAT_018ddaf8;
  if ((local_5c < param_3 && param_3 < &local_1c) ||
     ((param_3 < local_5c && (local_5c < param_3 + 0x10)))) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0,0x1825f98);
    (*pcVar1)();
  }
  puVar10 = param_3;
  puVar13 = local_5c;
  do {
    uVar2 = puVar10[1];
    puVar11 = puVar10 + 4;
    uVar3 = puVar10[2];
    uVar4 = puVar10[3];
    *puVar13 = *puVar10;
    puVar13[1] = uVar2;
    puVar13[2] = uVar3;
    puVar13[3] = uVar4;
    puVar10 = puVar11;
    puVar13 = puVar13 + 4;
  } while (puVar11 != param_3 + 0x10);
  uVar5 = local_5c[0] & 0x3ffffff;
  uVar8 = (local_5c[1] & 0xfffff) << 6 | local_5c[0] >> 0x1a;
  *param_2 = uVar5;
  uVar2 = local_40 >> 10;
  uVar4 = (local_40 & 0x3ff) << 0x10 | local_5c[6] >> 0x10;
  param_2[9] = uVar2;
  uVar14 = (local_5c[6] & 0xffff) << 10 | local_5c[5] >> 0x16;
  uVar6 = (local_5c[4] & 0xfffffff) >> 2;
  param_2[5] = uVar6;
  uVar3 = (local_5c[5] & 0x3fffff) << 4 | local_5c[4] >> 0x1c;
  param_2[1] = uVar8;
  uVar12 = (local_5c[4] & 3) << 0x18 | local_5c[3] >> 8;
  param_2[8] = uVar4;
  uVar9 = (local_5c[3] & 0xff) << 0x12 | local_5c[2] >> 0xe;
  param_2[6] = uVar3;
  uVar7 = (local_5c[2] & 0x3fff) << 0xc | local_5c[1] >> 0x14;
  param_2[2] = uVar7;
  param_2[7] = uVar14;
  param_2[4] = uVar12;
  param_2[3] = uVar9;
  param_2[0xb] = (local_38 & 0xfffff) << 6 | local_3c >> 0x1a;
  param_2[10] = local_3c & 0x3ffffff;
  param_2[0xc] = (local_34 & 0x3fff) << 0xc | local_38 >> 0x14;
  param_2[0xd] = (local_30 & 0xff) << 0x12 | local_34 >> 0xe;
  param_2[0xe] = (local_2c & 3) << 0x18 | local_30 >> 8;
  param_2[0x10] = (local_28 & 0x3fffff) << 4 | local_2c >> 0x1c;
  param_2[0xf] = (local_2c & 0xfffffff) >> 2;
  param_2[0x11] = (local_24 & 0xffff) << 10 | local_28 >> 0x16;
  param_2[0x13] = local_20 >> 10;
  param_2[0x12] = (local_20 & 0x3ff) << 0x10 | local_24 >> 0x10;
  param_2[0x14] = 0;
  if (((((((((uVar5 == 0 && uVar2 == 0) && uVar6 == 0) && uVar8 == 0) && uVar7 == 0) && uVar9 == 0)
        && uVar12 == 0) && uVar3 == 0) && uVar14 == 0) && uVar4 == 0) {
    (**(code **)(param_1 + 0xa0))
              ("!rustsecp256k1_v0_9_2_fe_is_zero(&ge->x)",*(undefined4 *)(param_1 + 0xa4));
    param_2 = extraout_r1;
  }
  if ((local_1c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar4 != 0 ||
                 (uVar14 != 0 ||
                 (uVar3 != 0 ||
                 (uVar12 != 0 ||
                 (uVar9 != 0 ||
                 (uVar7 != 0 || (uVar8 != 0 || ((uVar5 != 0 || uVar2 != 0) || uVar6 != 0))))))),
                 param_2,local_1c ^ DAT_018ddaf8,0);
  }
  return;
}

