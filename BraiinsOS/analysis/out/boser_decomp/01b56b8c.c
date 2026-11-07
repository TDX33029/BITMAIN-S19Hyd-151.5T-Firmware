// FUN_01b56b8c @ 01b56b8c size=864 calls_out=17 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/rsa/padding.c | aws_lc_0_39_0_RSA_padding_add_PKCS1_PSS_mgf1 | /aws-lc/crypto/fipsmodule/rsa/padding.c | emLen >= 1 | /aws-lc/crypto/fipsmodule/rsa/padding.c | /aws-lc/crypto/fipsmodule/rsa/padding.c

bool FUN_01b56b8c(int param_1,byte *param_2,undefined4 param_3,int param_4,int param_5,uint param_6)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  byte *pbVar7;
  byte *pbVar6;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined1 auStack_44 [24];
  int local_2c;
  
  local_2c = DAT_01d53560;
  if (param_5 == 0) {
    param_5 = param_4;
  }
  uVar2 = FUN_01b3b6b4(param_4);
  iVar3 = FUN_01b2e300(*(undefined4 *)(param_1 + 4));
  if (iVar3 == 0) {
    iVar3 = FUN_01b2b8d0(*(undefined4 *)(param_1 + 4));
    uVar12 = iVar3 - 1U & 7;
    uVar4 = FUN_01b565f4(param_1);
    pbVar10 = param_2;
    if (uVar12 == 0) {
      if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01be3310("emLen >= 1","/aws-lc/crypto/fipsmodule/rsa/padding.c",0x125,
                     "aws_lc_0_39_0_RSA_padding_add_PKCS1_PSS_mgf1");
      }
      pbVar10 = param_2 + 1;
      *param_2 = 0;
      uVar4 = uVar4 - 1;
    }
    bVar1 = false;
    if (uVar4 < uVar2 + 2) {
      pbVar11 = (byte *)0x0;
      FUN_01b053d4(4,0,0x72,"/aws-lc/crypto/fipsmodule/rsa/padding.c",299);
      goto LAB_01b56c38;
    }
    if (param_6 == 0xffffffff) {
      param_6 = uVar2;
    }
    else if (param_6 == 0xfffffffe) {
      param_6 = (-2 - uVar2) + uVar4;
    }
    else if ((int)param_6 < 0) {
      uVar14 = 0x139;
      uVar5 = 0x8a;
      goto LAB_01b56c24;
    }
    if ((uVar4 - uVar2) - 2 < param_6) {
      uVar14 = 0x140;
      uVar5 = 0x72;
      goto LAB_01b56c24;
    }
    if (param_6 == 0) {
      pbVar11 = (byte *)0x0;
LAB_01b56d84:
      iVar8 = (uVar4 - uVar2) + -1;
      FUN_01b3b838(auStack_44);
      iVar3 = FUN_01b4aa54(auStack_44,param_4,0);
      if ((((iVar3 == 0) || (iVar3 = FUN_01b3bc2c(auStack_44,&DAT_0053ab40,8), iVar3 == 0)) ||
          (iVar3 = FUN_01b3bc2c(auStack_44,param_3,uVar2), iVar3 == 0)) ||
         (iVar3 = FUN_01b3bc2c(auStack_44,pbVar11,param_6), iVar3 == 0)) {
        bVar13 = false;
      }
      else {
        iVar3 = FUN_01b3bc6c(auStack_44,pbVar10 + iVar8,0);
        bVar13 = iVar3 != 0;
      }
      FUN_01b3b854(auStack_44);
      if ((bVar13 != false) &&
         (iVar3 = FUN_01b5558c(pbVar10,iVar8,pbVar10 + iVar8,uVar2,param_5), iVar3 != 0)) {
        iVar3 = ((uVar4 - uVar2) + -2) - param_6;
        pbVar9 = pbVar10 + iVar3;
        pbVar10[iVar3] = pbVar10[iVar3] ^ 1;
        if (param_6 != 0) {
          pbVar7 = pbVar11;
          do {
            pbVar9 = pbVar9 + 1;
            pbVar6 = pbVar7 + 1;
            *pbVar9 = *pbVar7 ^ *pbVar9;
            pbVar7 = pbVar6;
          } while (pbVar11 + param_6 != pbVar6);
        }
        if (uVar12 != 0) {
          *pbVar10 = *pbVar10 & (byte)(0xff >> (8 - uVar12 & 0xff));
        }
        pbVar10[uVar4 - 1] = 0xbc;
        bVar1 = bVar13;
      }
      goto LAB_01b56c38;
    }
    pbVar11 = (byte *)FUN_01b6ad8c(param_6);
    if (pbVar11 != (byte *)0x0) {
      iVar3 = FUN_01b52ea0(pbVar11,param_6);
      if (iVar3 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_01be32a0();
      }
      goto LAB_01b56d84;
    }
  }
  else {
    uVar14 = 0x11e;
    uVar5 = 0x78;
LAB_01b56c24:
    FUN_01b053d4(4,0,uVar5,"/aws-lc/crypto/fipsmodule/rsa/padding.c",uVar14);
  }
  pbVar11 = (byte *)0x0;
  bVar1 = false;
LAB_01b56c38:
  FUN_01b6b1c4(pbVar11);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return bVar1;
}

