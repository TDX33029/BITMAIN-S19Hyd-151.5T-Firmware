// FUN_0172d888 @ 0172d888 size=2200 calls_out=4 calls_in=3
// strings: aws_lc_0_39_0_ec_nistp_scalar_mul | /aws-lc/crypto/fipsmodule/ec/ec_nistp.c | SCALAR_MUL_TABLE_MAX_NUM_FELEM_LIMBS >= SCALAR_MUL_TABLE_NUM_POINTS * ctx->felem_num_limbs * 3

undefined8
FUN_0172d888(int *param_1,uint *param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,uint *param_8)

{
  uint uVar1;
  short sVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint *puVar8;
  uint *puVar9;
  byte *pbVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  byte *pbVar15;
  int iVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  byte *pbVar20;
  byte *pbVar21;
  uint uVar22;
  byte *pbVar23;
  int iVar24;
  uint uVar25;
  uint *puVar26;
  undefined1 *puVar27;
  bool bVar28;
  short *local_1174;
  int local_1170;
  uint uStack_1158;
  undefined1 local_1154 [74];
  short sStack_110a;
  undefined1 auStack_1108 [208];
  undefined4 uStack_1038;
  undefined1 local_1034 [16];
  int *local_1024;
  undefined4 uStack_f54;
  uint local_f50 [56];
  byte abStack_e6d [3649];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  local_1024 = param_1;
  if (0x390 < (uint)(*param_1 * 0x30)) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("SCALAR_MUL_TABLE_MAX_NUM_FELEM_LIMBS >= SCALAR_MUL_TABLE_NUM_POINTS * ctx->felem_num_limbs * 3"
                 ,"/aws-lc/crypto/fipsmodule/ec/ec_nistp.c",0x1ac,
                 "aws_lc_0_39_0_ec_nistp_scalar_mul");
  }
  pbVar20 = abStack_e6d + 1;
  FUN_0170bd5c(param_1,pbVar20,param_5,param_6,param_7);
  iVar17 = param_1[1];
  FUN_01707a74(auStack_1108,param_8,iVar17);
  iVar19 = *param_1;
  iVar16 = iVar19 * 4;
  uVar1 = (iVar17 + 4U) / 5;
  iVar24 = iVar19 * 0xc;
  iVar17 = iVar19 * 8;
  puVar18 = local_1034 + iVar16;
  puVar27 = local_1034 + iVar17;
  puVar14 = local_f50 + iVar19 * 2;
  puVar13 = local_f50 + iVar19;
  if (iVar24 != 0) {
    pbVar21 = pbVar20 + iVar24;
    uVar22 = 1;
    pbVar23 = abStack_e6d + iVar24;
    sVar2 = *(short *)(local_1154 + uVar1 * 2 + 0x4a);
    do {
      uVar5 = (int)sVar2 >> 1 ^ uVar22;
      uVar25 = uVar22 - 1 ^ (int)sVar2 >> 1;
      bVar4 = (char)((byte)(uVar25 - 1 >> 0x18) & ~(byte)(uVar25 >> 0x18)) >> 7;
      bVar3 = (char)((byte)(uVar5 - 1 >> 0x18) & ~(byte)(uVar5 >> 0x18)) >> 7;
      pbVar10 = (byte *)((int)&uStack_1038 + 3);
      pbVar7 = pbVar21 + iVar19 * -0xc;
      pbVar15 = pbVar23;
      do {
        pbVar6 = pbVar7 + 1;
        pbVar10 = pbVar10 + 1;
        pbVar15 = pbVar15 + 1;
        *pbVar10 = (*pbVar10 & ~bVar4 | *pbVar7 & bVar4) & ~bVar3 | *pbVar15 & bVar3;
        pbVar7 = pbVar6;
      } while (pbVar6 != pbVar21);
      uVar22 = uVar22 + 2;
      pbVar23 = pbVar23 + iVar19 * 0x18;
      pbVar21 = pbVar21 + iVar19 * 0x18;
    } while (uVar22 != 0x11);
  }
  if ((int)(uVar1 - 2) < 0) {
    iVar24 = iVar16;
  }
  else {
    local_1174 = (short *)(local_1154 + uVar1 * 2 + 0x4a);
    local_1170 = uVar1 - 2;
    do {
      iVar19 = 5;
      do {
        (*(code *)param_1[9])(local_1034,puVar18,puVar27,local_1034,puVar18,puVar27);
        iVar19 = iVar19 + -1;
      } while (iVar19 != 0);
      iVar24 = *param_1;
      local_1174 = local_1174 + -1;
      uVar22 = (int)*local_1174 >> 0x1f;
      uVar1 = -uVar22;
      iVar19 = iVar24 * 0xc;
      if (iVar19 != 0) {
        uVar5 = 1;
        pbVar23 = abStack_e6d + iVar19;
        pbVar21 = pbVar20 + iVar19;
        uVar22 = (int)((((int)*local_1174 ^ uVar22) + uVar1) * 0x10000) >> 0x11;
        do {
          uVar11 = uVar22 ^ uVar5;
          uVar25 = uVar5 - 1 ^ uVar22;
          bVar4 = (char)((byte)(uVar25 - 1 >> 0x18) & ~(byte)(uVar25 >> 0x18)) >> 7;
          bVar3 = (char)((byte)(uVar11 - 1 >> 0x18) & ~(byte)(uVar11 >> 0x18)) >> 7;
          pbVar10 = (byte *)((int)&uStack_f54 + 3);
          pbVar7 = pbVar21 + iVar24 * -0xc;
          pbVar15 = pbVar23;
          do {
            pbVar6 = pbVar7 + 1;
            pbVar10 = pbVar10 + 1;
            pbVar15 = pbVar15 + 1;
            *pbVar10 = (*pbVar10 & ~bVar4 | *pbVar7 & bVar4) & ~bVar3 | *pbVar15 & bVar3;
            pbVar7 = pbVar6;
          } while (pbVar6 != pbVar21);
          uVar5 = uVar5 + 2;
          pbVar23 = pbVar23 + iVar24 * 0x18;
          pbVar21 = pbVar21 + iVar24 * 0x18;
        } while (uVar5 != 0x11);
      }
      (*(code *)param_1[6])(local_1154,puVar13);
      iVar19 = *param_1;
      if (iVar19 != 0) {
        uVar1 = (int)(uVar1 - 1 & ~uVar1) >> 0x1f;
        puVar8 = &uStack_1158;
        puVar9 = puVar13;
        do {
          puVar8 = puVar8 + 1;
          puVar26 = puVar9 + 1;
          *puVar9 = *puVar8 & ~uVar1 | *puVar9 & uVar1;
          puVar9 = puVar26;
        } while (puVar26 != puVar13 + iVar19);
      }
      (*(code *)param_1[10])
                (local_1034,puVar18,puVar27,local_1034,puVar18,puVar27,0,local_f50,puVar13,puVar14);
      bVar28 = local_1170 != 0;
      local_1170 = local_1170 + -1;
    } while (bVar28);
    iVar19 = *param_1;
    iVar24 = iVar19 << 2;
  }
  pbVar21 = pbVar20 + iVar24;
  (*(code *)param_1[6])(pbVar21,pbVar21);
  (*(code *)param_1[10])
            (local_f50,puVar13,puVar14,local_1034,puVar18,puVar27,0,pbVar20,pbVar21,
             pbVar20 + iVar19 * 8);
  iVar19 = *param_1;
  if (iVar19 != 0) {
    puVar26 = &uStack_f54;
    uVar1 = (int)((*param_8 & 1) - 1 & ~(*param_8 & 1)) >> 0x1f;
    puVar8 = &uStack_1038;
    uVar22 = ~uVar1;
    puVar9 = param_2;
    do {
      puVar26 = puVar26 + 1;
      puVar8 = puVar8 + 1;
      puVar12 = puVar9 + 1;
      *puVar9 = *puVar26 & uVar1 | *puVar8 & uVar22;
      puVar9 = puVar12;
    } while (param_2 + iVar19 != puVar12);
    iVar19 = *param_1;
    if (iVar19 != 0) {
      puVar26 = (uint *)(auStack_1108 + iVar16 + 0xd0);
      puVar8 = (uint *)(param_3 + -4);
      puVar9 = puVar13;
      do {
        puVar12 = puVar9 + 1;
        puVar26 = puVar26 + 1;
        puVar8 = puVar8 + 1;
        *puVar8 = *puVar26 & uVar22 | *puVar9 & uVar1;
        puVar9 = puVar12;
      } while (puVar13 + iVar19 != puVar12);
      iVar16 = *param_1;
      if (iVar16 != 0) {
        puVar8 = (uint *)(auStack_1108 + iVar17 + 0xd0);
        puVar9 = (uint *)(param_4 + -4);
        puVar13 = puVar14;
        do {
          puVar26 = puVar13 + 1;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
          *puVar9 = *puVar8 & uVar22 | *puVar13 & uVar1;
          puVar13 = puVar26;
        } while (puVar14 + iVar16 != puVar26);
      }
    }
  }
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

