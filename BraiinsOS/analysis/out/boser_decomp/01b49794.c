// FUN_01b49794 @ 01b49794 size=308 calls_out=9 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/evp/digestsign.c

undefined4 FUN_01b49794(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_80;
  undefined1 auStack_7c [24];
  undefined1 auStack_64 [64];
  int local_24;
  
  local_24 = DAT_01d53560;
  iVar1 = FUN_01b256ac(*(undefined4 *)(param_1 + 0xc),1,&PTR_01d3b2b0,0);
  if ((iVar1 == 0) || (iVar1 = FUN_01b49618(param_1), iVar1 != 0)) {
    uVar2 = 0;
    FUN_01b053d4(6,0,0x7d,"/aws-lc/crypto/fipsmodule/evp/digestsign.c",0xc4);
  }
  else {
    FUN_01b3b838(auStack_7c);
    iVar1 = FUN_01b3ba10(auStack_7c,param_1);
    uVar2 = 0;
    if ((iVar1 != 0) && (iVar1 = FUN_01b3bc6c(auStack_7c,auStack_64,&local_80), iVar1 != 0)) {
      iVar1 = FUN_01b4850c(*(undefined4 *)(param_1 + 0xc),param_2,param_3,auStack_64,local_80);
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = 1;
      }
    }
    FUN_01b3b854(auStack_7c);
  }
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar2;
}

