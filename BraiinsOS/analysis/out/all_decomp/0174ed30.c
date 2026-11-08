// FUN_0174ed30 @ 0174ed30 size=956 calls_out=4 calls_in=3
// strings: /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c | aws_lc_0_39_0_RSA_add_pkcs1_prefix | /aws-lc/crypto/fipsmodule/rsa/rsa.c | digest_len == sig_prefix->hash_len

undefined8
FUN_0174ed30(undefined4 *param_1,uint *param_2,undefined4 *param_3,int param_4,undefined *param_5,
            uint param_6)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  if (param_4 == 0x72) {
    if (param_6 == 0x24) {
      uVar7 = 0;
      goto LAB_0174ee2c;
    }
    uVar7 = 0x2d8;
    goto LAB_0174ee68;
  }
  if (param_4 == 4) {
    if (param_6 == 0x10) {
      iVar5 = 0;
LAB_0174eebc:
      iVar6 = iVar5 * 0x1c;
      if ((byte)(&DAT_00428da0)[iVar6] != param_6) {
                    /* WARNING: Subroutine does not return */
        FUN_016d2c94("digest_len == sig_prefix->hash_len","/aws-lc/crypto/fipsmodule/rsa/rsa.c",
                     0x305,"aws_lc_0_39_0_RSA_add_pkcs1_prefix");
      }
      uVar4 = (uint)(byte)(&DAT_00428da1)[iVar6];
      puVar2 = (undefined *)FUN_0177a6c0(param_6 + uVar4);
      if (puVar2 == (undefined *)0x0) {
        return 0;
      }
      if (uVar4 != 0) {
        puVar3 = &UNK_00428da2 + iVar6;
        if (puVar2 < puVar3) {
          if (puVar3 < puVar2 + uVar4) goto LAB_0174efb4;
        }
        else if ((puVar3 < puVar2) && (puVar2 < puVar3 + uVar4)) goto LAB_0174efb4;
        if (iVar5 * -0x1c + 0x166U < uVar4) goto LAB_0174efb4;
        FUN_016dd1aa(puVar2);
      }
      if (param_6 != 0) {
        puVar3 = puVar2 + uVar4;
        if (puVar3 < param_5) {
          if (param_5 < puVar3 + param_6) {
LAB_0174efb4:
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0,0x174efb4);
            (*pcVar1)();
          }
        }
        else if ((puVar3 != param_5) && (puVar3 < param_5 + param_6)) goto LAB_0174efb4;
        FUN_016dd1aa(puVar3,param_5,param_6);
      }
      uVar7 = 1;
      param_5 = puVar2;
      param_6 = param_6 + uVar4;
LAB_0174ee2c:
      *param_1 = param_5;
      *param_2 = param_6;
      *param_3 = uVar7;
      return 1;
    }
  }
  else if (param_4 == 0x40) {
    if (param_6 == 0x14) {
      iVar5 = 1;
      goto LAB_0174eebc;
    }
  }
  else if (param_4 == 0x2a3) {
    if (param_6 == 0x1c) {
      iVar5 = 2;
      goto LAB_0174eebc;
    }
  }
  else if (param_4 == 0x2a0) {
    if (param_6 == 0x20) {
      iVar5 = 3;
      goto LAB_0174eebc;
    }
  }
  else if (param_4 == 0x2a1) {
    if (param_6 == 0x30) {
      iVar5 = 4;
      goto LAB_0174eebc;
    }
  }
  else if (param_4 == 0x2a2) {
    if (param_6 == 0x40) {
LAB_0174f078:
      if (param_4 == 0x2a2) {
        iVar5 = 5;
      }
      else {
LAB_0174eeac:
        if (param_4 == 0x3d2) {
          iVar5 = 6;
        }
        else {
LAB_0174efec:
          if (param_4 == 0x3c2) {
            iVar5 = 7;
          }
          else if (param_4 == 0x3c5) {
            iVar5 = 8;
          }
          else if (param_4 == 0x3c6) {
            iVar5 = 9;
          }
          else if (param_4 == 0x3c7) {
            iVar5 = 10;
          }
          else {
            iVar5 = 0xb;
          }
        }
      }
      goto LAB_0174eebc;
    }
  }
  else if (param_4 == 0x3d2) {
    if (param_6 == 0x1c) goto LAB_0174f078;
  }
  else if (param_4 == 0x3c2) {
    if (param_6 == 0x20) goto LAB_0174efec;
  }
  else if (param_4 == 0x3c5) {
    if (param_6 == 0x1c) goto LAB_0174eeac;
  }
  else if (param_4 == 0x3c6) {
    if (param_6 == 0x20) goto LAB_0174f078;
  }
  else if (param_4 == 0x3c7) {
    if (param_6 == 0x30) goto LAB_0174efec;
  }
  else {
    if (param_4 != 0x3c8) {
      FUN_016e9cd0(4,0,0x8e,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x2e9);
      return 0;
    }
    if (param_6 == 0x40) goto LAB_0174eeac;
  }
  uVar7 = 0x2e2;
LAB_0174ee68:
  FUN_016e9cd0(4,0,0x7d,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",uVar7);
  return 0;
}

