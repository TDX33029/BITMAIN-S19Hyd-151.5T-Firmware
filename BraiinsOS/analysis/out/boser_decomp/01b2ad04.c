// FUN_01b2ad04 @ 01b2ad04 size=1012 calls_out=11 calls_in=1
// strings: aws_lc_0_39_0_AES_ecb_encrypt | /aws-lc/crypto/fipsmodule/aes/mode_wrappers.c | in && out && key | aws_lc_0_39_0_AES_ecb_encrypt | /aws-lc/crypto/fipsmodule/aes/mode_wrappers.c | (AES_ENCRYPT == enc) || (AES_DECRYPT == enc)

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x01b7a67c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1 (*) [16]
FUN_01b2ad04(undefined1 (*param_1) [16],int param_2,undefined8 *param_3,uint param_4)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char *pcVar4;
  undefined1 (*pauVar5) [16];
  undefined8 *puVar6;
  undefined8 *extraout_r1;
  undefined8 *extraout_r1_00;
  undefined4 uVar7;
  undefined1 (*pauVar8) [16];
  int iVar9;
  int iVar10;
  undefined4 extraout_s2;
  undefined4 extraout_s2_00;
  undefined8 uVar11;
  undefined4 extraout_s3;
  undefined4 extraout_s3_00;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined1 auStack_21c [32];
  undefined1 auStack_1fc [452];
  
  if (param_1 == (undefined1 (*) [16])0x0 || (param_2 == 0 || param_3 == (undefined8 *)0x0)) {
    uVar7 = 0x50;
    pcVar4 = "in && out && key";
  }
  else {
    if (param_4 < 2) {
      if (param_4 != 1) {
        uVar16 = FUN_01b0c6d4();
        iVar10 = DAT_01d53560;
        puVar6 = (undefined8 *)((ulonglong)uVar16 >> 0x20);
        if ((int)uVar16 != 0) {
          uVar16 = *param_3;
          uVar11 = param_3[1];
          auVar14 = *param_1;
          uVar12 = param_3[2];
          uVar13 = param_3[3];
          pauVar5 = (undefined1 (*) [16])(param_3 + 4);
          iVar10 = *(int *)(param_3 + 0x1e) + -2;
          do {
            auVar2._8_8_ = uVar11;
            auVar2._0_8_ = uVar16;
            auVar14 = AESInvShiftRows(auVar14 ^ auVar2);
            auVar14 = AESInvSubBytes(auVar14);
            auVar15 = AESInvMixColumns(auVar14);
            uVar16 = *(undefined8 *)*pauVar5;
            uVar11 = *(undefined8 *)(*pauVar5 + 8);
            auVar2 = *pauVar5;
            pauVar8 = pauVar5 + 1;
            iVar9 = iVar10 + -2;
            auVar14._8_8_ = uVar13;
            auVar14._0_8_ = uVar12;
            auVar14 = AESInvShiftRows(auVar15 ^ auVar14);
            auVar14 = AESInvSubBytes(auVar14);
            auVar14 = AESInvMixColumns(auVar14);
            uVar12 = *(undefined8 *)*pauVar8;
            uVar13 = *(undefined8 *)(pauVar5[1] + 8);
            pauVar5 = pauVar5 + 2;
            bVar1 = 1 < iVar10;
            iVar10 = iVar9;
          } while (iVar9 != 0 && bVar1);
          auVar14 = AESInvShiftRows(auVar14 ^ auVar2);
          auVar14 = AESInvSubBytes(auVar14);
          auVar14 = AESInvMixColumns(auVar14);
          auVar2 = *pauVar5;
          auVar14 = AESInvShiftRows(auVar14 ^ *pauVar8);
          auVar14 = AESInvSubBytes(auVar14);
          *puVar6 = SUB168(auVar14 ^ auVar2,0);
          puVar6[1] = SUB168(auVar14 ^ auVar2,8);
          return param_1;
        }
        if ((DAT_01d532f0 & 1) != 0) {
          uVar16 = *(undefined8 *)*param_1;
          FUN_01b7a2c0((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),
                       (int)*(undefined8 *)(*param_1 + 8));
          pauVar5 = (undefined1 (*) [16])FUN_01b7a4f0();
          *extraout_r1_00 = uVar16;
          extraout_r1_00[1] = CONCAT44(extraout_s3_00,extraout_s2_00);
          return pauVar5;
        }
        FUN_01b28f5c(auStack_1fc,param_3,&PTR_01d3b2b0,0);
        FUN_01b29c94(auStack_21c,param_1,1);
        FUN_01b29750(auStack_1fc,*(undefined4 *)(param_3 + 0x1e),auStack_21c);
        FUN_01b29978(puVar6,1,auStack_21c);
        if (iVar10 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
          FUN_01be31f4();
        }
        return (undefined1 (*) [16])0x0;
      }
      uVar16 = FUN_01b0c6d4();
      iVar10 = DAT_01d53560;
      puVar6 = (undefined8 *)((ulonglong)uVar16 >> 0x20);
      if ((int)uVar16 != 0) {
        uVar16 = *param_3;
        uVar11 = param_3[1];
        auVar14 = *param_1;
        uVar12 = param_3[2];
        uVar13 = param_3[3];
        pauVar5 = (undefined1 (*) [16])(param_3 + 4);
        iVar10 = *(int *)(param_3 + 0x1e) + -2;
        do {
          auVar15._8_8_ = uVar11;
          auVar15._0_8_ = uVar16;
          auVar14 = AESInvShiftRows(auVar14 ^ auVar15);
          auVar14 = AESSubBytes(auVar14);
          auVar14 = AESMixColumns(auVar14);
          uVar16 = *(undefined8 *)*pauVar5;
          uVar11 = *(undefined8 *)(*pauVar5 + 8);
          auVar2 = *pauVar5;
          pauVar8 = pauVar5 + 1;
          iVar9 = iVar10 + -2;
          auVar3._8_8_ = uVar13;
          auVar3._0_8_ = uVar12;
          auVar14 = AESInvShiftRows(auVar14 ^ auVar3);
          auVar14 = AESSubBytes(auVar14);
          auVar14 = AESMixColumns(auVar14);
          uVar12 = *(undefined8 *)*pauVar8;
          uVar13 = *(undefined8 *)(pauVar5[1] + 8);
          pauVar5 = pauVar5 + 2;
          bVar1 = 1 < iVar10;
          iVar10 = iVar9;
        } while (iVar9 != 0 && bVar1);
        auVar14 = AESInvShiftRows(auVar14 ^ auVar2);
        auVar14 = AESSubBytes(auVar14);
        auVar14 = AESMixColumns(auVar14);
        auVar2 = *pauVar5;
        auVar14 = AESInvShiftRows(auVar14 ^ *pauVar8);
        auVar14 = AESSubBytes(auVar14);
        *puVar6 = SUB168(auVar14 ^ auVar2,0);
        puVar6[1] = SUB168(auVar14 ^ auVar2,8);
        return param_1;
      }
      if ((DAT_01d532f0 & 1) != 0) {
        uVar16 = *(undefined8 *)*param_1;
        FUN_01b7a2c0((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)*(undefined8 *)(*param_1 + 8)
                    );
        pauVar5 = (undefined1 (*) [16])FUN_01b7a2e0();
        *extraout_r1 = uVar16;
        extraout_r1[1] = CONCAT44(extraout_s3,extraout_s2);
        return pauVar5;
      }
      FUN_01b28f5c(auStack_1fc,param_3,&PTR_01d3b2b0,0);
      FUN_01b29c94(auStack_21c,param_1,1);
      FUN_01b0ce50(auStack_1fc,*(undefined4 *)(param_3 + 0x1e),auStack_21c);
      FUN_01b29978(puVar6,1,auStack_21c);
      if (iVar10 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
        FUN_01be31f4();
      }
      return (undefined1 (*) [16])0x0;
    }
    uVar7 = 0x51;
    pcVar4 = "(AES_ENCRYPT == enc) || (AES_DECRYPT == enc)";
  }
                    /* WARNING: Subroutine does not return */
  FUN_01be3310(pcVar4,"/aws-lc/crypto/fipsmodule/aes/mode_wrappers.c",uVar7,
               "aws_lc_0_39_0_AES_ecb_encrypt");
}

