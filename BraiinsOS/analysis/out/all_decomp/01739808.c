// FUN_01739808 @ 01739808 size=1668 calls_out=11 calls_in=0
// strings: aws_lc_0_39_0_ec_GFp_mont_mul_public_batch | /aws-lc/crypto/fipsmodule/ec/wnaf.c | wNAF_len <= OPENSSL_ARRAY_SIZE(g_wNAF)

undefined4
FUN_01739808(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,uint param_6)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  char *pcVar6;
  undefined1 *puVar7;
  char *pcVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *local_22e0;
  undefined1 *local_22dc;
  undefined1 *local_22d8;
  undefined1 *local_22d0;
  uint local_22cc;
  undefined1 auStack_22c0 [204];
  undefined1 auStack_21f4 [464];
  int local_2024;
  undefined1 auStack_1bc0 [1428];
  undefined1 auStack_162c [204];
  undefined1 auStack_1560 [1340];
  int local_1024;
  char acStack_240 [532];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  local_2024 = param_1;
  local_1024 = param_1;
  uVar2 = FUN_0172c66c();
  if (param_6 < 4) {
    if (0x211 < uVar2 + 1) {
LAB_01739e68:
                    /* WARNING: Subroutine does not return */
      FUN_016d2c94("wNAF_len <= OPENSSL_ARRAY_SIZE(g_wNAF)","/aws-lc/crypto/fipsmodule/ec/wnaf.c",
                   0x99,"aws_lc_0_39_0_ec_GFp_mont_mul_public_batch");
    }
    if (param_3 == 0) {
      local_22d8 = auStack_1560;
      local_22d0 = auStack_21f4;
      local_22e0 = (undefined1 *)0x0;
      local_22dc = (undefined1 *)0x0;
    }
    else {
      local_22e0 = (undefined1 *)0x0;
      local_22d8 = auStack_1560;
      local_22d0 = auStack_21f4;
      local_22dc = (undefined1 *)0x0;
LAB_01739908:
      FUN_01738484(acStack_240,param_3,uVar2,4);
      FUN_01733d34(auStack_1bc0,param_1 + 8);
      FUN_0172ed94(param_1,auStack_22c0,param_1 + 8);
      puVar7 = auStack_1bc0;
      do {
        puVar5 = puVar7 + 0xcc;
        FUN_0172fc4c(param_1,puVar5,puVar7,auStack_22c0);
        puVar7 = puVar5;
      } while (puVar5 != auStack_162c);
    }
    if (param_6 != 0) goto LAB_01739988;
  }
  else {
    local_22dc = (undefined1 *)FUN_0177aa28(param_6,0x211);
    local_22e0 = (undefined1 *)FUN_0177aa28(param_6,0x660);
    if (local_22e0 == (undefined1 *)0x0 || local_22dc == (undefined1 *)0x0) {
      uVar4 = 0;
      goto LAB_01739cb0;
    }
    if (0x211 < uVar2 + 1) goto LAB_01739e68;
    local_22d8 = local_22e0;
    local_22d0 = local_22dc;
    if (param_3 != 0) goto LAB_01739908;
LAB_01739988:
    puVar5 = local_22d0;
    puVar7 = local_22d8;
    do {
      FUN_01738484(puVar5,param_5,uVar2,4);
      FUN_01733d34(puVar7,param_4);
      FUN_0172ed94(param_1,auStack_22c0,param_4);
      puVar9 = puVar7 + 0xcc;
      do {
        puVar10 = puVar9 + 0xcc;
        FUN_0172fc4c(param_1,puVar9,puVar9 + -0xcc,auStack_22c0);
        puVar9 = puVar10;
      } while (puVar10 != puVar7 + 0x660);
      puVar5 = puVar5 + 0x211;
      param_5 = param_5 + 0x44;
      param_4 = param_4 + 0xcc;
      puVar7 = puVar7 + 0x660;
    } while (puVar5 != local_22d0 + param_6 * 0x211);
  }
  local_22cc = uVar2 + 1;
  if (uVar2 < local_22cc) {
    bVar1 = true;
    pcVar8 = local_22d0 + param_6 * 0x211 + uVar2;
LAB_01739abc:
    if (param_3 != 0) {
      while( true ) {
        iVar3 = (int)acStack_240[uVar2];
        if (iVar3 == 0) break;
        if (iVar3 < 0) {
          FUN_01733d34(auStack_22c0,auStack_1bc0 + (-iVar3 >> 1) * 0xcc);
          FUN_0173459c(param_1,auStack_22c0);
        }
        else {
          FUN_01733d34(auStack_22c0,auStack_1bc0 + (iVar3 >> 1) * 0xcc);
        }
        if (bVar1) {
          FUN_01733d34(param_2,auStack_22c0);
        }
        else {
          FUN_0172fc4c(param_1,param_2,param_2,auStack_22c0);
        }
        if (param_6 != 0) {
          bVar1 = false;
          goto LAB_01739aec;
        }
        uVar2 = uVar2 - 1;
        if (local_22cc <= uVar2) goto LAB_01739cac;
        pcVar8 = pcVar8 + -1;
        FUN_0172ed94(param_1,param_2,param_2);
        bVar1 = false;
      }
    }
    if (param_6 != 0) {
LAB_01739aec:
      pcVar6 = local_22d0 + uVar2;
      puVar7 = local_22d8;
      do {
        iVar3 = (int)*pcVar6;
        if (iVar3 != 0) {
          if (iVar3 < 0) {
            FUN_01733d34(auStack_22c0,puVar7 + (-iVar3 >> 1) * 0xcc);
            FUN_0173459c(param_1,auStack_22c0);
          }
          else {
            FUN_01733d34(auStack_22c0,puVar7 + (iVar3 >> 1) * 0xcc);
          }
          if (bVar1) {
            FUN_01733d34(param_2,auStack_22c0);
          }
          else {
            FUN_0172fc4c(param_1,param_2,param_2,auStack_22c0);
          }
          bVar1 = false;
        }
        puVar7 = puVar7 + 0x660;
        pcVar6 = pcVar6 + 0x211;
      } while (pcVar6 != pcVar8);
    }
    uVar2 = uVar2 - 1;
    if (uVar2 < local_22cc) {
      pcVar8 = pcVar8 + -1;
      if (!bVar1) {
        FUN_0172ed94(param_1,param_2,param_2);
      }
      goto LAB_01739abc;
    }
    if (bVar1) goto LAB_01739e04;
  }
  else {
LAB_01739e04:
    FUN_01733e18(param_1,param_2);
  }
LAB_01739cac:
  uVar4 = 1;
LAB_01739cb0:
  FUN_0177aafc(local_22dc);
  FUN_0177aafc(local_22e0);
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar4;
}

