// FUN_01b4964c @ 01b4964c size=160 calls_out=4 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/evp/digestsign.c

undefined4 FUN_01b4964c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_01b256ac(*(undefined4 *)(param_1 + 0xc),0);
  if ((iVar1 == 0) && (iVar1 = FUN_01b49618(param_1), iVar1 == 0)) {
    FUN_01b053d4(6,0,0x7d,"/aws-lc/crypto/fipsmodule/evp/digestsign.c",0x81);
    return 0;
  }
  uVar2 = FUN_01b3bc2c(param_1,param_2,param_3);
  return uVar2;
}

