// FUN_01b4a64c @ 01b4a64c size=968 calls_out=10 calls_in=4
// strings: aws_lc_0_39_0_HMAC_Init_ex | /aws-lc/crypto/fipsmodule/hmac/hmac.c | impl == NULL | /aws-lc/crypto/fipsmodule/hmac/hmac.c | /aws-lc/crypto/fipsmodule/hmac/hmac.c | aws_lc_0_39_0_HMAC_Init_ex

void FUN_01b4a64c(int *param_1,int param_2,uint param_3,int param_4,int param_5)

{
  char *pcVar1;
  uint uVar2;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 *puVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  int local_15c;
  uint local_154;
  uint local_150 [36];
  uint local_c0 [37];
  uint local_2c;
  
  local_2c = DAT_01d53560;
  if (param_5 != 0) {
    uVar3 = 0x144;
    pcVar1 = "impl == NULL";
    goto LAB_01b4a6b0;
  }
  if (param_1 == (int *)0x0) {
    uVar15 = 0x146;
    uVar4 = 0x43;
    uVar3 = 0xe;
LAB_01b4a6dc:
    FUN_01b053d4(uVar3,0,uVar4,"/aws-lc/crypto/fipsmodule/hmac/hmac.c",uVar15);
    uVar2 = extraout_r1;
  }
  else {
    if ((param_4 != 0) && (uVar2 = FUN_01b3b6a4(param_4,param_2,&PTR_01d3b2b0,0), (uVar2 & 4) != 0))
    {
      uVar15 = 0x14a;
      uVar4 = 0x6a;
      uVar3 = 0x1c;
      goto LAB_01b4a6dc;
    }
    iVar8 = (int)(char)param_1[0x12e];
    uVar2 = iVar8 - 3U & 0xff;
    if (uVar2 < 2) {
      iVar8 = 1;
      *(undefined1 *)(param_1 + 0x12e) = 1;
    }
    uVar5 = iVar8 - 1U & 0xff;
    bVar13 = uVar5 == 1;
    if (uVar5 < 2) {
      bVar13 = param_2 == 0;
    }
    if ((bVar13) && ((param_4 == 0 || (*param_1 == param_4)))) {
      if (iVar8 == 2) {
        FUN_01b26974(param_1 + 2,param_1 + 0x66,400);
        uVar2 = extraout_r1_00;
      }
      *(undefined1 *)(param_1 + 0x12e) = 1;
LAB_01b4a7b4:
      uVar3 = 1;
      goto LAB_01b4a6e4;
    }
    uVar14 = FUN_01b1fe74(param_1,param_4);
    uVar2 = (uint)((ulonglong)uVar14 >> 0x20);
    local_15c = (int)uVar14;
    if (local_15c != 0) {
      puVar12 = (undefined4 *)param_1[1];
      uVar2 = FUN_01b3b828(*puVar12);
      if ((uVar2 & 7) != 0) {
        uVar3 = 0x16f;
        pcVar1 = "block_size % 8 == 0";
LAB_01b4a6b0:
                    /* WARNING: Subroutine does not return */
        FUN_01be3310(pcVar1,"/aws-lc/crypto/fipsmodule/hmac/hmac.c",uVar3,
                     "aws_lc_0_39_0_HMAC_Init_ex");
      }
      if (0x90 < uVar2) {
        uVar3 = 0x170;
        pcVar1 = "block_size <= EVP_MAX_MD_BLOCK_SIZE";
        goto LAB_01b4a6b0;
      }
      puVar11 = local_c0;
      FUN_01bed93e(local_150,0,0x90);
      FUN_01bed93e(puVar11,0,0x90);
      if (uVar2 < param_3) {
        iVar8 = (*(code *)puVar12[2])(param_1 + 2);
        if (((iVar8 != 0) &&
            (iVar8 = (*(code *)puVar12[3])(param_1 + 2,param_2,param_3), iVar8 != 0)) &&
           (iVar8 = (*(code *)puVar12[4])(puVar11,param_1 + 2), iVar8 != 0)) goto LAB_01b4a8ec;
LAB_01b4a880:
        local_15c = 0;
      }
      else {
        FUN_01b26974(puVar11,param_2,param_3);
LAB_01b4a8ec:
        puVar6 = local_150;
        puVar9 = puVar11;
        for (uVar5 = 0; uVar2 >> 3 != uVar5; uVar5 = uVar5 + 1) {
          uVar7 = *puVar9;
          uVar10 = puVar9[1];
          puVar9 = puVar9 + 2;
          *puVar6 = uVar7 ^ 0x36363636;
          puVar6[1] = uVar10 ^ 0x36363636;
          puVar6 = puVar6 + 2;
        }
        iVar8 = (*(code *)puVar12[2])(param_1 + 0x66);
        if (iVar8 == 0) goto LAB_01b4a880;
        iVar8 = (*(code *)puVar12[3])(param_1 + 0x66,local_150,uVar2);
        if (iVar8 == 0) goto LAB_01b4a880;
        puVar6 = local_150;
        for (local_154 = 0; uVar5 != local_154; local_154 = local_154 + 1) {
          uVar7 = *puVar11;
          uVar10 = puVar11[1];
          puVar11 = puVar11 + 2;
          *puVar6 = uVar7 ^ 0x5c5c5c5c;
          puVar6[1] = uVar10 ^ 0x5c5c5c5c;
          puVar6 = puVar6 + 2;
        }
        iVar8 = (*(code *)puVar12[2])(param_1 + 0xca);
        if ((iVar8 == 0) ||
           (iVar8 = (*(code *)puVar12[3])(param_1 + 0xca,local_150,uVar2), iVar8 == 0))
        goto LAB_01b4a880;
        FUN_01b26974(param_1 + 2,param_1 + 0x66,400);
        *(undefined1 *)(param_1 + 0x12e) = 1;
      }
      FUN_01b6b174(local_150,0x90);
      FUN_01b6b174(local_c0,0x90);
      uVar2 = extraout_r1_01;
      if (local_15c == 1) goto LAB_01b4a7b4;
      FUN_01b4a5d4(param_1);
      uVar2 = extraout_r1_02;
    }
  }
  uVar3 = 0;
LAB_01b4a6e4:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar3,uVar2,local_2c ^ DAT_01d53560,0);
  }
  return;
}

