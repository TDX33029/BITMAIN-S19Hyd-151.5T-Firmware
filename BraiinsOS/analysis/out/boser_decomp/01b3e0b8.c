// FUN_01b3e0b8 @ 01b3e0b8 size=1036 calls_out=6 calls_in=3
// strings: aws_lc_0_39_0_ec_nistp_scalar_mul | /aws-lc/crypto/fipsmodule/ec/ec_nistp.c | SCALAR_MUL_TABLE_MAX_NUM_FELEM_LIMBS >= SCALAR_MUL_TABLE_NUM_POINTS * ctx->felem_num_limbs * 3

undefined8
FUN_01b3e0b8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,uint *param_8)

{
  ushort uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  short *psVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 auStack_1154 [74];
  short asStack_110a [107];
  undefined1 auStack_1034 [16];
  int *local_1024;
  undefined1 auStack_f50 [228];
  undefined1 auStack_e6c [3648];
  int local_2c;
  
  local_2c = DAT_01d53560;
  local_1024 = param_1;
  if (0x390 < (uint)(*param_1 * 0x30)) {
                    /* WARNING: Subroutine does not return */
    FUN_01be3310("SCALAR_MUL_TABLE_MAX_NUM_FELEM_LIMBS >= SCALAR_MUL_TABLE_NUM_POINTS * ctx->felem_num_limbs * 3"
                 ,"/aws-lc/crypto/fipsmodule/ec/ec_nistp.c",0x1ac,
                 "aws_lc_0_39_0_ec_nistp_scalar_mul");
  }
  FUN_01b28374(param_1,auStack_e6c,param_5,param_6,param_7);
  psVar5 = asStack_110a + 1;
  iVar6 = param_1[1];
  FUN_01b24330(psVar5,param_8,iVar6);
  iVar2 = *param_1;
  puVar8 = auStack_1034 + iVar2 * 4;
  puVar10 = auStack_1034 + iVar2 * 8;
  puVar3 = auStack_f50 + iVar2 * 4;
  puVar4 = auStack_f50 + iVar2 * 8;
  uVar7 = (iVar6 + 4U) / 5;
  FUN_01b25730(iVar2,auStack_1034,auStack_e6c,(int)asStack_110a[uVar7] >> 1,1);
  for (iVar2 = uVar7 - 2; -1 < iVar2; iVar2 = iVar2 + -1) {
    iVar6 = 5;
    do {
      (*(code *)param_1[9])(auStack_1034,puVar8,puVar10,auStack_1034,puVar8,puVar10);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    uVar1 = psVar5[iVar2];
    FUN_01b25730(*param_1,auStack_f50,auStack_e6c,
                 (int)((((int)psVar5[iVar2] ^ (int)psVar5[iVar2] >> 0x1f) + (uint)(uVar1 >> 0xf)) *
                      0x10000) >> 0x11,1);
    (*(code *)param_1[6])(auStack_1154,puVar3);
    FUN_01b0d75c(puVar3,*param_1,uVar1 >> 0xf,puVar3,auStack_1154);
    (*(code *)param_1[10])
              (auStack_1034,puVar8,puVar10,auStack_1034,puVar8,puVar10,0,auStack_f50,puVar3,puVar4);
  }
  iVar2 = *param_1;
  puVar9 = auStack_e6c + iVar2 * 4;
  (*(code *)param_1[6])(puVar9,puVar9);
  (*(code *)param_1[10])
            (auStack_f50,puVar3,puVar4,auStack_1034,puVar8,puVar10,0,auStack_e6c,puVar9,
             auStack_e6c + iVar2 * 8);
  uVar7 = *param_8;
  FUN_01b0d75c(param_2,*param_1,uVar7 & 1,auStack_f50,auStack_1034);
  FUN_01b0d75c(param_3,*param_1,uVar7 & 1,puVar3,puVar8);
  FUN_01b0d75c(param_4,*param_1,uVar7 & 1,puVar4,puVar10);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

