// FUN_0173dcc4 @ 0173dcc4 size=1480 calls_out=10 calls_in=4
// strings: /aws-lc/crypto/fipsmodule/hmac/hmac.c | /aws-lc/crypto/fipsmodule/hmac/hmac.c | aws_lc_0_39_0_HMAC_Init_ex | /aws-lc/crypto/fipsmodule/hmac/hmac.c | impl == NULL | aws_lc_0_39_0_HMAC_Init_ex

void FUN_0173dcc4(undefined4 *param_1,uint *param_2,uint param_3,undefined **param_4,int param_5)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined **ppuVar6;
  undefined **extraout_r1;
  uint *puVar7;
  undefined **extraout_r1_00;
  undefined **extraout_r1_01;
  undefined **extraout_r1_02;
  undefined **extraout_r1_03;
  undefined **extraout_r1_04;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint local_158;
  undefined **local_154;
  undefined *local_150;
  uint local_14c [33];
  uint auStack_c8 [39];
  uint local_2c;
  
  ppuVar6 = &PTR_018bc3f4;
  local_2c = DAT_018ddaf8;
  if (param_5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("impl == NULL","/aws-lc/crypto/fipsmodule/hmac/hmac.c",0x144,
                 "aws_lc_0_39_0_HMAC_Init_ex");
  }
  if (param_1 == (undefined4 *)0x0) {
    FUN_016e9cd0(0xe,0,0x43,"/aws-lc/crypto/fipsmodule/hmac/hmac.c",0x146);
    ppuVar6 = extraout_r1_02;
  }
  else {
    if (param_4 == (undefined **)0x0) {
      iVar8 = (int)*(char *)(param_1 + 0x12e);
      if ((iVar8 - 3U & 0xff) < 2) {
        *(undefined1 *)(param_1 + 0x12e) = 1;
        if (param_2 != (uint *)0x0) {
LAB_0173dea8:
          puVar11 = (undefined4 *)param_1[1];
          goto LAB_0173deb8;
        }
      }
      else {
        if (1 < (iVar8 - 1U & 0xff)) goto LAB_0173de38;
        if (param_2 != (uint *)0x0) goto LAB_0173dea8;
LAB_0173e0b4:
        if (iVar8 == 2) {
          puVar11 = param_1 + 2;
          if ((param_1 + 0x66 < puVar11) && (puVar11 < param_1 + 0xca)) goto LAB_0173e288;
          FUN_016dd1aa(puVar11,param_1 + 0x66,400);
          ppuVar6 = extraout_r1_01;
        }
      }
LAB_0173e114:
      *(undefined1 *)(param_1 + 0x12e) = 1;
LAB_0173e11c:
      uVar4 = 1;
      goto LAB_0173de3c;
    }
    local_154 = param_4;
    uVar3 = FUN_0172a880(param_4,&PTR_018bc3f4,0);
    if ((uVar3 & 4) != 0) {
      FUN_016e9cd0(0x1c,0,0x6a,"/aws-lc/crypto/fipsmodule/hmac/hmac.c",0x14a);
      ppuVar6 = extraout_r1_03;
      goto LAB_0173de38;
    }
    iVar8 = (int)*(char *)(param_1 + 0x12e);
    ppuVar6 = (undefined **)(iVar8 - 3U & 0xff);
    if (ppuVar6 < &SUB_00000002) {
      *(undefined1 *)(param_1 + 0x12e) = 1;
      if (param_2 == (uint *)0x0) {
        if (local_154 == (undefined **)*param_1) goto LAB_0173e114;
      }
      else {
LAB_0173e0f4:
        if (local_154 == (undefined **)*param_1) goto LAB_0173dea8;
      }
    }
    else {
      ppuVar6 = (undefined **)(iVar8 - 1U & 0xff);
      if (ppuVar6 < &SUB_00000002) {
        if (param_2 != (uint *)0x0) goto LAB_0173e0f4;
        ppuVar6 = (undefined **)*param_1;
        if (ppuVar6 == local_154) goto LAB_0173e0b4;
      }
      else if ((iVar8 != 0) && (local_154 == (undefined **)*param_1)) goto LAB_0173de38;
    }
    puVar11 = &DAT_018de920;
    FUN_01781ff4(&DAT_018de91c,FUN_0172ba80);
    if (local_154 != DAT_018de920) {
      if (DAT_018de93c == local_154) {
        puVar11 = &DAT_018de93c;
      }
      else if (local_154 == DAT_018de958) {
        puVar11 = &DAT_018de958;
      }
      else if (local_154 == DAT_018de974) {
        puVar11 = &DAT_018de974;
      }
      else if (DAT_018de990 == local_154) {
        puVar11 = &DAT_018de990;
      }
      else if (local_154 == DAT_018de9ac) {
        puVar11 = &DAT_018de9ac;
      }
      else if (local_154 == DAT_018de9c8) {
        puVar11 = &DAT_018de9c8;
      }
      else if (local_154 == DAT_018de9e4) {
        puVar11 = &DAT_018de9e4;
      }
      else if (local_154 == DAT_018dea00) {
        puVar11 = &DAT_018dea00;
      }
      else if (local_154 == DAT_018dea1c) {
        puVar11 = &DAT_018dea1c;
      }
      else if (local_154 == DAT_018dea38) {
        puVar11 = &DAT_018dea38;
      }
      else {
        if (local_154 != DAT_018dea54) {
          param_1[1] = 0;
          ppuVar6 = extraout_r1;
          goto LAB_0173de38;
        }
        puVar11 = &DAT_018dea54;
      }
    }
    *param_1 = local_154;
    param_1[1] = puVar11;
LAB_0173deb8:
    uVar3 = FUN_0172aa98(*puVar11);
    local_158 = uVar3 & 7;
    if (local_158 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2c94("block_size % 8 == 0","/aws-lc/crypto/fipsmodule/hmac/hmac.c",0x16f,
                   "aws_lc_0_39_0_HMAC_Init_ex");
    }
    if (0x90 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2c94("block_size <= EVP_MAX_MD_BLOCK_SIZE","/aws-lc/crypto/fipsmodule/hmac/hmac.c",
                   0x170,"aws_lc_0_39_0_HMAC_Init_ex");
    }
    local_154 = &local_150;
    FUN_016dd606(local_154,0,0x90);
    FUN_016dd606(auStack_c8 + 2,local_158,0x90);
    if (uVar3 < param_3) {
      iVar8 = (*(code *)puVar11[2])(param_1 + 2);
      if (((iVar8 != 0) && (iVar8 = (*(code *)puVar11[3])(param_1 + 2,param_2,param_3), iVar8 != 0))
         && (iVar8 = (*(code *)puVar11[4])(auStack_c8 + 2,param_1 + 2), iVar8 != 0))
      goto LAB_0173df48;
    }
    else {
      if (param_3 != 0) {
        if (((auStack_c8 + 2 < param_2) && (param_2 < (uint *)((int)(auStack_c8 + 2) + param_3))) ||
           ((param_2 < auStack_c8 + 2 && (auStack_c8 + 2 < (uint *)((int)param_2 + param_3)))))
        goto LAB_0173e288;
        FUN_016dd1aa(auStack_c8 + 2,param_2,param_3);
      }
LAB_0173df48:
      uVar1 = uVar3 >> 3;
      if (uVar1 != 0) {
        puVar7 = &local_158;
        puVar10 = auStack_c8;
        do {
          puVar9 = puVar10 + 2;
          puVar7[2] = *puVar9 ^ 0x36363636;
          puVar7[3] = puVar10[3] ^ 0x36363636;
          puVar7 = puVar7 + 2;
          puVar10 = puVar9;
        } while (puVar9 != auStack_c8 + uVar1 * 2);
      }
      puVar5 = param_1 + 0x66;
      iVar8 = (*(code *)puVar11[2])();
      if ((iVar8 != 0) && (iVar8 = (*(code *)puVar11[3])(puVar5,local_154,uVar3), iVar8 != 0)) {
        if (uVar1 != 0) {
          puVar7 = &local_158;
          puVar10 = auStack_c8;
          do {
            puVar9 = puVar10 + 2;
            puVar7[2] = *puVar9 ^ 0x5c5c5c5c;
            puVar7[3] = puVar10[3] ^ 0x5c5c5c5c;
            puVar7 = puVar7 + 2;
            puVar10 = puVar9;
          } while (auStack_c8 + uVar1 * 2 != puVar9);
        }
        iVar8 = (*(code *)puVar11[2])();
        ppuVar6 = local_154;
        if ((iVar8 != 0) &&
           (iVar8 = (*(code *)puVar11[3])(param_1 + 0xca,local_154,uVar3), iVar8 != 0)) {
          puVar11 = param_1 + 2;
          if (puVar11 < param_1 + 0xca && puVar5 < puVar11) {
LAB_0173e288:
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0,0x173e288);
            (*pcVar2)();
          }
          FUN_016dd1aa(puVar11,puVar5,400);
          *(undefined1 *)(param_1 + 0x12e) = 1;
          FUN_0177aaa0(ppuVar6,0x90);
          FUN_0177aaa0(auStack_c8 + 2,0x90);
          ppuVar6 = extraout_r1_04;
          goto LAB_0173e11c;
        }
      }
    }
    FUN_0177aaa0(local_154,0x90);
    FUN_0177aaa0(auStack_c8 + 2,0x90);
    FUN_0173dc48(param_1);
    ppuVar6 = extraout_r1_00;
  }
LAB_0173de38:
  uVar4 = 0;
LAB_0173de3c:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar4,ppuVar6,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

