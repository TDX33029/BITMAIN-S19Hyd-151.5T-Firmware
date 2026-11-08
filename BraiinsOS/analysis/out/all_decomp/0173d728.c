// FUN_0173d728 @ 0173d728 size=1096 calls_out=14 calls_in=0
// strings: rsa_padding_mode | pkcs1 | rsa_pss_saltlen | digest | /aws-lc/crypto/fipsmodule/evp/p_rsa.c | rsa_keygen_bits

int FUN_0173d728(undefined4 param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  char *local_20;
  uint local_1c;
  
  local_1c = DAT_018ddaf8;
  if (param_3 == (char *)0x0) {
    uVar11 = FUN_016e9cd0(6,0,0x90,"/aws-lc/crypto/fipsmodule/evp/p_rsa.c",0x291);
    iVar1 = 0;
    goto LAB_0173d96c;
  }
  iVar1 = FUN_016dd818(param_2,"rsa_padding_mode",&PTR_018bc3f4,0);
  if (iVar1 == 0) {
    iVar1 = FUN_016dd818(param_3,"pkcs1");
    if (iVar1 == 0) {
      puVar4 = &DAT_00000001;
    }
    else {
      iVar1 = FUN_016dd818(param_3,&DAT_0059ade4);
      if (iVar1 == 0) {
        puVar4 = (undefined1 *)0x3;
      }
      else {
        iVar1 = FUN_016dd818(param_3,&DAT_005a12c4);
        if ((iVar1 == 0) || (iVar1 = FUN_016dd818(param_3,&DAT_0059bddc), iVar1 == 0)) {
          puVar4 = &DAT_00000004;
        }
        else {
          iVar1 = FUN_016dd818(param_3,&DAT_0059bdf4);
          if (iVar1 != 0) {
            uVar11 = FUN_016e9cd0(6,0,0x8f,"/aws-lc/crypto/fipsmodule/evp/p_rsa.c",0x2a4);
            goto LAB_0173da08;
          }
          puVar4 = &DAT_00000006;
        }
      }
    }
    uVar11 = ZEXT48(puVar4) << 0x20;
    uVar6 = local_1c ^ DAT_018ddaf8;
    if (uVar6 == 0) {
      iVar1 = FUN_0173d550(param_1);
      return iVar1;
    }
    goto LAB_0173db48;
  }
  iVar1 = FUN_016dd818(param_2,"rsa_pss_saltlen");
  if (iVar1 == 0) {
    uVar6 = FUN_016dd818(param_3,"digest");
    if ((uVar6 == 0) || (((*param_3 == '-' && (param_3[1] == '1')) && (param_3[2] == '\0')))) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar6 = FUN_016dd162(param_3,&local_20,10);
      uVar8 = uVar6 >> 0x1f;
      if (local_20 == param_3) {
        uVar8 = 1;
      }
      uVar5 = uVar6;
      if (uVar8 != 0) {
        uVar9 = 0x2b6;
        goto LAB_0173d9f4;
      }
    }
    uVar11 = CONCAT44(uVar5,uVar6);
    uVar6 = local_1c ^ DAT_018ddaf8;
    if (uVar6 == 0) {
      iVar1 = FUN_0173d59c(param_1,uVar5,0,0);
      return iVar1;
    }
    goto LAB_0173db48;
  }
  iVar1 = FUN_016dd818(param_2,"rsa_keygen_bits");
  if (iVar1 == 0) {
    iVar1 = FUN_016dd162(param_3,&local_20,10);
    if (local_20 == param_3 || iVar1 < 1) {
      uVar9 = 0x2c1;
LAB_0173d9f4:
      uVar11 = FUN_016e9cd0(6,0,0x7c,"/aws-lc/crypto/fipsmodule/evp/p_rsa.c",uVar9);
LAB_0173da08:
      iVar1 = -2;
    }
    else {
      uVar11 = FUN_0173d5e8(param_1);
      iVar1 = (int)uVar11;
    }
  }
  else {
    pcVar2 = (char *)FUN_016dd818(param_2,"rsa_keygen_pubexp");
    if (pcVar2 == (char *)0x0) {
      local_20 = pcVar2;
      uVar10 = FUN_016e0cb4(&local_20,param_3);
      uVar11 = uVar10 & 0xffffffff00000000;
      if ((int)uVar10 == 0) goto LAB_0173da08;
      uVar11 = FUN_0173d634(param_1,local_20);
      iVar1 = (int)uVar11;
      if (iVar1 < 1) {
        uVar11 = FUN_017046e0(local_20);
      }
    }
    else {
      uVar11 = FUN_016dd818(param_2,"rsa_mgf1_md");
      if ((int)uVar11 == 0) {
        uVar6 = local_1c ^ DAT_018ddaf8;
        uVar11 = uVar11 & 0xffffffff00000000;
        if (uVar6 == 0) {
          uVar9 = 0xf8;
          uVar7 = 0x1009;
LAB_0173db08:
          iVar1 = FUN_0173c030(param_1,uVar9,uVar7,param_3);
          return iVar1;
        }
        goto LAB_0173db48;
      }
      uVar11 = FUN_016dd818(param_2,"rsa_oaep_md");
      if ((int)uVar11 == 0) {
        uVar6 = local_1c ^ DAT_018ddaf8;
        uVar11 = uVar11 & 0xffffffff00000000;
        if (uVar6 == 0) {
          uVar9 = 0xc0;
          uVar7 = 0x1007;
          goto LAB_0173db08;
        }
        goto LAB_0173db48;
      }
      uVar11 = FUN_016dd818(param_2,"rsa_oaep_label");
      if ((char *)uVar11 != (char *)0x0) goto LAB_0173da08;
      local_20 = (char *)uVar11;
      uVar11 = FUN_0177b34c(param_3,&local_20);
      iVar3 = (int)uVar11;
      iVar1 = 0;
      uVar11 = uVar11 & 0xffffffff00000000;
      if (iVar3 != 0) {
        uVar11 = FUN_0173d67c(param_1,iVar3,local_20);
        iVar1 = (int)uVar11;
        if (iVar1 < 1) {
          uVar11 = FUN_0177aafc(iVar3);
        }
      }
    }
  }
LAB_0173d96c:
  uVar6 = local_1c ^ DAT_018ddaf8;
  if (uVar6 == 0) {
    return iVar1;
  }
LAB_0173db48:
                    /* WARNING: Subroutine does not return */
  FUN_016d2b78((int)uVar11,(int)(uVar11 >> 0x20),uVar6,0);
}

