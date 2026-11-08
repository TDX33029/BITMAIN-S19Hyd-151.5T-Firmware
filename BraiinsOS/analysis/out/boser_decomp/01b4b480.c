// FUN_01b4b480 @ 01b4b480 size=676 calls_out=12 calls_in=3
// strings: /aws-lc/crypto/fipsmodule/hkdf/hkdf.c | /aws-lc/crypto/fipsmodule/hkdf/hkdf.c | /aws-lc/crypto/fipsmodule/hkdf/hkdf.c

undefined4
FUN_01b4b480(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  undefined4 uVar10;
  char local_535;
  uint local_534;
  undefined1 auStack_530 [1220];
  undefined1 auStack_6c [64];
  int local_2c;
  
  local_2c = DAT_01d53560;
  uVar1 = FUN_01b3b6a4(param_3,param_2,&PTR_01d3b2b0,0);
  if ((uVar1 & 4) == 0) {
    uVar1 = FUN_01b3b6b4(param_3);
    uVar2 = FUN_01bf1250(uVar1 + param_2 + -1,uVar1);
    if (0xff < uVar2 || CARRY4(uVar1,param_2)) {
      uVar10 = 0x70;
      uVar5 = 100;
      goto LAB_01b4b4f8;
    }
    FUN_01b4a564(auStack_530);
    iVar3 = FUN_01b4a64c(auStack_530,param_4,param_5,param_3,0);
    if (iVar3 == 0) {
LAB_01b4b608:
      bVar8 = false;
    }
    else {
      iVar3 = 0;
      local_534 = 0;
      for (uVar9 = 0; uVar9 != uVar2; uVar9 = uVar9 + 1) {
        local_535 = (char)uVar9 + '\x01';
        if ((uVar9 != 0) &&
           ((iVar4 = FUN_01b4a64c(auStack_530,0,0,0,0), iVar4 == 0 ||
            (iVar4 = FUN_01b4af50(auStack_530,auStack_6c,uVar1), iVar4 == 0)))) goto LAB_01b4b608;
        local_534 = 0;
        iVar4 = FUN_01b4af50(auStack_530,param_6,param_7);
        if ((iVar4 == 0) ||
           (((iVar4 = FUN_01b4af50(auStack_530,&local_535,1), iVar4 == 0 ||
             (iVar4 = FUN_01b4afcc(auStack_530,auStack_6c,&local_534), iVar4 == 0)) ||
            (local_534 != uVar1)))) goto LAB_01b4b608;
        uVar6 = param_2 - iVar3;
        uVar7 = uVar6;
        if (uVar1 <= uVar6) {
          uVar7 = uVar1;
        }
        if (uVar1 > uVar6) {
          local_534 = uVar7;
        }
        FUN_01b26974(param_1 + iVar3,auStack_6c);
        iVar3 = iVar3 + uVar7;
      }
      bVar8 = true;
    }
    FUN_01b6b174(auStack_6c,0x40);
    FUN_01b4a5d4(auStack_530);
    uVar5 = 1;
    if (bVar8) goto LAB_01b4b504;
    FUN_01b053d4(0x1f,0,0x1c,"/aws-lc/crypto/fipsmodule/hkdf/hkdf.c",0x9e);
    FUN_01b6b174(param_1,param_2);
  }
  else {
    uVar10 = 0x62;
    uVar5 = 0x65;
LAB_01b4b4f8:
    FUN_01b053d4(0x1f,0,uVar5,"/aws-lc/crypto/fipsmodule/hkdf/hkdf.c",uVar10);
  }
  uVar5 = 0;
LAB_01b4b504:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar5;
}

