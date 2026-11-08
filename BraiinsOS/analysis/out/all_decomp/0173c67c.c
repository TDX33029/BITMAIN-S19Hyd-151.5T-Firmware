// FUN_0173c67c @ 0173c67c size=928 calls_out=10 calls_in=0
// strings: EXTRACT_AND_EXPAND | EXTRACT_ONLY | EXPAND_ONLY | hexsalt | hexkey | hexinfo

ulonglong FUN_0173c67c(undefined4 param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  int local_20;
  int local_1c;
  
  local_1c = DAT_018ddaf8;
  iVar1 = FUN_016dd818(param_2,&DAT_0059c56c,&PTR_018bc3f4,0);
  if (iVar1 == 0) {
    iVar1 = FUN_016dd818(param_3,"EXTRACT_AND_EXPAND");
    uVar3 = 0;
    if (iVar1 != 0) {
      iVar1 = FUN_016dd818(param_3,"EXTRACT_ONLY");
      if (iVar1 == 0) {
        uVar3 = 1;
      }
      else {
        iVar1 = FUN_016dd818(param_3,"EXPAND_ONLY");
        uVar2 = 0;
        if (iVar1 != 0) goto LAB_0173c720;
        uVar3 = 2;
      }
    }
    if (local_1c == DAT_018ddaf8) {
      uVar4 = FUN_0173c420(param_1,uVar3,0,0);
      return uVar4;
    }
  }
  else {
    if (((*param_2 == 'm') && (param_2[1] == 'd')) && (param_2[2] == '\0')) {
      if (local_1c == DAT_018ddaf8) {
        uVar4 = FUN_0173c030(param_1,0x100,0x100f,param_3);
        return uVar4;
      }
      goto LAB_0173ca18;
    }
    iVar1 = FUN_016dd818(param_2,&DAT_005a1410);
    if (iVar1 == 0) {
      uVar3 = FUN_0177b1cc(param_3,0x7fff);
      if (local_1c == DAT_018ddaf8) {
        uVar4 = FUN_0173c51c(param_1,param_3,uVar3,0);
        return uVar4;
      }
      goto LAB_0173ca18;
    }
    iVar1 = FUN_016dd818(param_2,"hexsalt");
    if (iVar1 == 0) {
      local_20 = iVar1;
      iVar1 = FUN_0177b34c(param_3,&local_20);
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = FUN_0173c51c(param_1,iVar1,local_20);
        FUN_0177aafc(iVar1);
      }
    }
    else {
      iVar1 = FUN_016dd818(param_2,&DAT_005a16d0);
      if (iVar1 == 0) {
        uVar3 = FUN_0177b1cc(param_3,0x7fff);
        if (local_1c == DAT_018ddaf8) {
          uVar4 = FUN_0173c46c(param_1,param_3,uVar3,0);
          return uVar4;
        }
        goto LAB_0173ca18;
      }
      iVar1 = FUN_016dd818(param_2,"hexkey");
      if (iVar1 == 0) {
        local_20 = iVar1;
        iVar1 = FUN_0177b34c(param_3,&local_20);
        uVar2 = 0;
        if (iVar1 != 0) {
          uVar2 = FUN_0173c46c(param_1,iVar1,local_20);
          FUN_0177aafc(iVar1);
        }
      }
      else {
        iVar1 = FUN_016dd818(param_2,&DAT_005a3eec);
        if (iVar1 == 0) {
          uVar3 = FUN_0177b1cc(param_3,0x7fff);
          if (local_1c == DAT_018ddaf8) {
            uVar4 = FUN_0173c5cc(param_1,param_3,uVar3,0);
            return uVar4;
          }
          goto LAB_0173ca18;
        }
        iVar1 = FUN_016dd818(param_2,"hexinfo");
        if (iVar1 == 0) {
          local_20 = iVar1;
          iVar1 = FUN_0177b34c(param_3,&local_20);
          uVar2 = 0;
          if (iVar1 != 0) {
            uVar2 = FUN_0173c5cc(param_1,iVar1,local_20);
            FUN_0177aafc(iVar1);
          }
        }
        else {
          uVar2 = 0xfffffffe;
        }
      }
    }
LAB_0173c720:
    if (local_1c == DAT_018ddaf8) {
      return (ulonglong)uVar2;
    }
  }
LAB_0173ca18:
                    /* WARNING: Subroutine does not return */
  FUN_016d2b78();
}

