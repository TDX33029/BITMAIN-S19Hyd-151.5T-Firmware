// FUN_01b46b10 @ 01b46b10 size=1136 calls_out=12 calls_in=0
// strings: aws_lc_0_39_0_ec_GFp_mont_mul_public_batch | /aws-lc/crypto/fipsmodule/ec/wnaf.c | wNAF_len <= OPENSSL_ARRAY_SIZE(g_wNAF)

undefined4
FUN_01b46b10(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,uint param_6)

{
  bool bVar1;
  uint uVar2;
  undefined1 **ppuVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined1 *local_22d4;
  undefined1 *local_22d0;
  undefined1 *local_22cc;
  undefined1 *local_22c8;
  undefined1 *local_22c4;
  undefined1 auStack_22c0 [204];
  undefined1 auStack_21f4 [464];
  int local_2024;
  undefined1 auStack_1bc0 [1632];
  undefined1 auStack_1560 [1340];
  int local_1024;
  char acStack_240 [532];
  int local_2c;
  
  local_2c = DAT_01d53560;
  local_2024 = param_1;
  local_1024 = param_1;
  uVar2 = FUN_01b3d268();
  if (param_6 < 4) {
    local_22d0 = auStack_1560;
    local_22cc = (undefined1 *)0x0;
    local_22c8 = auStack_21f4;
    puVar8 = (undefined1 *)0x0;
    ppuVar3 = &local_22c4;
  }
  else {
    local_22c4 = (undefined1 *)FUN_01b6b0fc(param_6,0x211);
    local_22d0 = (undefined1 *)FUN_01b6b0fc(param_6,0x660);
    local_22cc = local_22d0;
    if (local_22d0 == (undefined1 *)0x0 || local_22c4 == (undefined1 *)0x0) {
      uVar6 = 0;
      goto LAB_01b46d78;
    }
    ppuVar3 = &local_22c8;
    puVar8 = local_22c4;
  }
  *ppuVar3 = puVar8;
  uVar4 = uVar2 + 1;
  if (0x211 < uVar2 + 1) {
                    /* WARNING: Subroutine does not return */
    FUN_01be3310("wNAF_len <= OPENSSL_ARRAY_SIZE(g_wNAF)","/aws-lc/crypto/fipsmodule/ec/wnaf.c",0x99
                 ,"aws_lc_0_39_0_ec_GFp_mont_mul_public_batch");
  }
  if (param_3 != 0) {
    FUN_01b460c8(acStack_240,param_3,uVar2,4);
    FUN_01b42508(param_1,auStack_1bc0,param_1 + 8);
  }
  puVar5 = local_22c8 + param_6 * 0x211;
  local_22d4 = local_22d0;
  for (puVar8 = local_22c8; puVar8 != puVar5; puVar8 = puVar8 + 0x211) {
    FUN_01b460c8(puVar8,param_5,uVar2,4);
    FUN_01b42508(param_1,local_22d4,param_4);
    param_5 = param_5 + 0x44;
    param_4 = param_4 + 0xcc;
    local_22d4 = local_22d4 + 0x660;
  }
  bVar1 = true;
  for (; uVar2 < uVar4; uVar2 = uVar2 - 1) {
    if (!bVar1) {
      FUN_01b3ee18(param_1,param_2,param_2);
    }
    if ((param_3 != 0) && (acStack_240[uVar2] != '\0')) {
      FUN_01b42c18(param_1,auStack_22c0,auStack_1bc0);
      if (bVar1) {
        FUN_01b424bc(param_2,auStack_22c0);
      }
      else {
        FUN_01b3f8c0(param_1,param_2,param_2,auStack_22c0);
      }
      bVar1 = false;
    }
    pcVar7 = local_22c8 + uVar2;
    for (puVar8 = local_22d0; puVar8 != local_22d0 + param_6 * 0x660; puVar8 = puVar8 + 0x660) {
      if (*pcVar7 != '\0') {
        FUN_01b42c18(param_1,auStack_22c0,puVar8);
        if (bVar1) {
          FUN_01b424bc(param_2,auStack_22c0);
        }
        else {
          FUN_01b3f8c0(param_1,param_2,param_2,auStack_22c0);
        }
        bVar1 = false;
      }
      pcVar7 = pcVar7 + 0x211;
    }
  }
  if (bVar1) {
    FUN_01b425e0(param_1,param_2);
  }
  uVar6 = 1;
LAB_01b46d78:
  FUN_01b6b1c4(local_22c4);
  FUN_01b6b1c4(local_22cc);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar6;
}

