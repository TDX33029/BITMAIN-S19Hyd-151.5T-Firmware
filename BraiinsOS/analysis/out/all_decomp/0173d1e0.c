// FUN_0173d1e0 @ 0173d1e0 size=260 calls_out=5 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_hmac.c | /aws-lc/crypto/fipsmodule/evp/p_hmac.c

undefined8 FUN_0173d1e0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_2 == 0) {
    FUN_016e9cd0(0xe,0,0x43,"/aws-lc/crypto/fipsmodule/evp/p_hmac.c",0x71);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x14);
    if (iVar2 == 0) {
      FUN_016e9cd0(6,0,0x7e,"/aws-lc/crypto/fipsmodule/evp/p_hmac.c",0x75);
    }
    else {
      puVar1 = (undefined4 *)FUN_0173cfb8();
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = FUN_0173d144(puVar1,iVar2 + 0x4c8);
        if ((iVar2 != 0) && (iVar2 = FUN_0173aef0(param_2,0x357,puVar1), iVar2 != 0)) {
          return 1;
        }
        FUN_0177aafc(*puVar1);
        FUN_0177aafc(puVar1);
      }
    }
  }
  return 0;
}

