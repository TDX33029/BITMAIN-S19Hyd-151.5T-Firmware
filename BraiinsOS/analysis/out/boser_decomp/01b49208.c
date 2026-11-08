// FUN_01b49208 @ 01b49208 size=1044 calls_out=12 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/evp_ctx.c | EXTRACT_AND_EXPAND | EXTRACT_ONLY | EXPAND_ONLY | hexsalt | hexkey

ulonglong FUN_01b49208(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  int local_20;
  int local_1c;
  
  local_1c = DAT_01d53560;
  iVar2 = FUN_01bedb50(param_2,&DAT_00579450,&PTR_01d3b2b0,0);
  if (iVar2 == 0) {
    iVar2 = FUN_01bedb50(param_3,"EXTRACT_AND_EXPAND");
    uVar3 = 0;
    if (iVar2 != 0) {
      iVar2 = FUN_01bedb50(param_3,"EXTRACT_ONLY");
      if (iVar2 == 0) {
        uVar3 = 1;
      }
      else {
        iVar2 = FUN_01bedb50(param_3,"EXPAND_ONLY");
        uVar1 = 0;
        if (iVar2 != 0) goto LAB_01b492ac;
        uVar3 = 2;
      }
    }
    if (local_1c == DAT_01d53560) {
      uVar4 = FUN_01b48fa0(param_1,uVar3,0,0);
      return uVar4;
    }
    goto LAB_01b49318;
  }
  iVar2 = FUN_01bedb50(param_2,&DAT_00584f96);
  if (iVar2 == 0) {
    if (local_1c == DAT_01d53560) {
      if ((param_3 == 0) || (iVar2 = FUN_01b01d80(), iVar2 == 0)) {
        local_20 = 0x263;
        FUN_01b053d4(6,0,0x6f,"/aws-lc/crypto/fipsmodule/evp/evp_ctx.c");
        uVar1 = 0;
      }
      else {
        local_20 = 0;
        local_1c = iVar2;
        uVar1 = FUN_01b48030(param_1,0xffffffff,0x100,0x100f);
      }
      return (ulonglong)uVar1;
    }
    goto LAB_01b49318;
  }
  iVar2 = FUN_01bedb50(param_2,&DAT_005b1709);
  if (iVar2 == 0) {
    uVar3 = FUN_01b6b78c(param_3,0x7fff);
    if (local_1c == DAT_01d53560) {
      uVar4 = FUN_01b490a0(param_1,param_3,uVar3,0);
      return uVar4;
    }
    goto LAB_01b49318;
  }
  iVar2 = FUN_01bedb50(param_2,"hexsalt");
  if (iVar2 == 0) {
    local_20 = iVar2;
    iVar2 = FUN_01b6b8b8(param_3,&local_20);
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar1 = FUN_01b490a0(param_1,iVar2,local_20);
LAB_01b49424:
      FUN_01b6b1c4(iVar2);
    }
  }
  else {
    iVar2 = FUN_01bedb50(param_2,&DAT_0058bca4);
    if (iVar2 == 0) {
      uVar3 = FUN_01b6b78c(param_3,0x7fff);
      if (local_1c == DAT_01d53560) {
        uVar4 = FUN_01b48fec(param_1,param_3,uVar3,0);
        return uVar4;
      }
      goto LAB_01b49318;
    }
    iVar2 = FUN_01bedb50(param_2,"hexkey");
    if (iVar2 == 0) {
      local_20 = iVar2;
      iVar2 = FUN_01b6b8b8(param_3,&local_20);
      uVar1 = 0;
      if (iVar2 != 0) {
        uVar1 = FUN_01b48fec(param_1,iVar2,local_20);
        goto LAB_01b49424;
      }
    }
    else {
      iVar2 = FUN_01bedb50(param_2,&DAT_005ba793);
      if (iVar2 == 0) {
        uVar3 = FUN_01b6b78c(param_3,0x7fff);
        if (local_1c == DAT_01d53560) {
          uVar4 = FUN_01b49154(param_1,param_3,uVar3,0);
          return uVar4;
        }
        goto LAB_01b49318;
      }
      iVar2 = FUN_01bedb50(param_2,"hexinfo");
      if (iVar2 == 0) {
        local_20 = iVar2;
        iVar2 = FUN_01b6b8b8(param_3,&local_20);
        uVar1 = 0;
        if (iVar2 != 0) {
          uVar1 = FUN_01b49154(param_1,iVar2,local_20);
          goto LAB_01b49424;
        }
      }
      else {
        uVar1 = 0xfffffffe;
      }
    }
  }
LAB_01b492ac:
  if (local_1c == DAT_01d53560) {
    return (ulonglong)uVar1;
  }
LAB_01b49318:
                    /* WARNING: Subroutine does not return */
  FUN_01be31f4();
}

