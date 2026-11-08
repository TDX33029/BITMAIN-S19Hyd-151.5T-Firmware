// FUN_01b4a0e0 @ 01b4a0e0 size=1056 calls_out=13 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_rsa.c | rsa_padding_mode | pkcs1 | /aws-lc/crypto/fipsmodule/evp/p_rsa.c | rsa_pss_saltlen | digest

ulonglong FUN_01b4a0e0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  int local_20;
  int local_1c;
  
  local_1c = DAT_01d53560;
  if (param_3 == 0) {
    FUN_01b053d4(6,0,0x90,"/aws-lc/crypto/fipsmodule/evp/p_rsa.c",0x291);
    uVar4 = 0;
    goto LAB_01b4a144;
  }
  iVar1 = FUN_01bedb50(param_2,"rsa_padding_mode",param_3,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01bedb50(param_3,"pkcs1");
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    else {
      iVar1 = FUN_01bedb50(param_3,&DAT_0059c267);
      if (iVar1 == 0) {
        uVar3 = 3;
      }
      else {
        iVar1 = FUN_01bedb50(param_3,&DAT_005b138a);
        if ((iVar1 == 0) || (iVar1 = FUN_01bedb50(param_3,&DAT_00577624), iVar1 == 0)) {
          uVar3 = 4;
        }
        else {
          iVar1 = FUN_01bedb50(param_3,&DAT_0059f6a9);
          if (iVar1 != 0) {
            uVar7 = 0x2a4;
            uVar3 = 0x8f;
            goto LAB_01b4a234;
          }
          uVar3 = 6;
        }
      }
    }
    if (local_1c == DAT_01d53560) {
      uVar6 = FUN_01b49f08(param_1,uVar3,0,0);
      return uVar6;
    }
    goto LAB_01b4a270;
  }
  iVar1 = FUN_01bedb50(param_2,"rsa_pss_saltlen");
  if (iVar1 == 0) {
    iVar1 = FUN_01bedb50(param_3,"digest");
    if ((iVar1 == 0) || (iVar1 = FUN_01bedb50(param_3,&DAT_0058df13), iVar1 == 0)) {
      iVar1 = -1;
    }
    else {
      iVar1 = FUN_01bed49a(param_3,&local_20,10);
      if (local_20 == param_3 || iVar1 < 0) {
        uVar7 = 0x2b6;
        goto LAB_01b4a318;
      }
    }
    if (local_1c == DAT_01d53560) {
      uVar6 = FUN_01b49f54(param_1,iVar1,0,0);
      return uVar6;
    }
    goto LAB_01b4a270;
  }
  iVar1 = FUN_01bedb50(param_2,"rsa_keygen_bits");
  if (iVar1 == 0) {
    iVar2 = FUN_01bed49a(param_3,&local_20,10);
    bVar5 = local_20 == param_3;
    iVar1 = local_20 - param_3;
    if (!bVar5) {
      iVar1 = iVar2;
    }
    if ((bVar5 || iVar2 == 0) || iVar1 < 0 != (bVar5 && SBORROW4(local_20,param_3))) {
      uVar7 = 0x2c1;
LAB_01b4a318:
      uVar3 = 0x7c;
LAB_01b4a234:
      FUN_01b053d4(6,0,uVar3,"/aws-lc/crypto/fipsmodule/evp/p_rsa.c",uVar7);
LAB_01b4a240:
      uVar4 = 0xfffffffe;
    }
    else {
      uVar4 = FUN_01b49fa0(param_1,iVar2);
    }
  }
  else {
    iVar1 = FUN_01bedb50(param_2,"rsa_keygen_pubexp");
    if (iVar1 == 0) {
      local_20 = iVar1;
      iVar1 = FUN_01afc508(&local_20,param_3);
      if (iVar1 == 0) goto LAB_01b4a240;
      uVar4 = FUN_01b49fec(param_1,local_20);
      if ((int)uVar4 < 1) {
        FUN_01b1f904(local_20);
      }
    }
    else {
      iVar1 = FUN_01bedb50(param_2,"rsa_mgf1_md");
      if (iVar1 == 0) {
        if (local_1c == DAT_01d53560) {
          uVar3 = 0xf8;
          uVar7 = 0x1009;
LAB_01b48bc8:
          if ((param_3 == 0) || (iVar1 = FUN_01b01d80(), iVar1 == 0)) {
            local_20 = 0x263;
            FUN_01b053d4(6,0,0x6f,"/aws-lc/crypto/fipsmodule/evp/evp_ctx.c");
            uVar4 = 0;
          }
          else {
            local_20 = 0;
            local_1c = iVar1;
            uVar4 = FUN_01b48030(param_1,0xffffffff,uVar3,uVar7);
          }
          return (ulonglong)uVar4;
        }
        goto LAB_01b4a270;
      }
      iVar1 = FUN_01bedb50(param_2,"rsa_oaep_md");
      if (iVar1 == 0) {
        if (local_1c == DAT_01d53560) {
          uVar3 = 0xc0;
          uVar7 = 0x1007;
          goto LAB_01b48bc8;
        }
        goto LAB_01b4a270;
      }
      iVar1 = FUN_01bedb50(param_2,"rsa_oaep_label");
      if (iVar1 != 0) goto LAB_01b4a240;
      local_20 = iVar1;
      iVar1 = FUN_01b6b8b8(param_3,&local_20);
      uVar4 = 0;
      if ((iVar1 != 0) && (uVar4 = FUN_01b4a034(param_1,iVar1,local_20), (int)uVar4 < 1)) {
        FUN_01b6b1c4(iVar1);
      }
    }
  }
LAB_01b4a144:
  if (local_1c == DAT_01d53560) {
    return (ulonglong)uVar4;
  }
LAB_01b4a270:
                    /* WARNING: Subroutine does not return */
  FUN_01be31f4();
}

