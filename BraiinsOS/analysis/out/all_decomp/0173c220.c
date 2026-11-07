// FUN_0173c220 @ 0173c220 size=300 calls_out=6 calls_in=0
// strings: ec_paramgen_curve | ec_param_enc | named_curve | /aws-lc/crypto/fipsmodule/evp/p_ec.c

/* WARNING: Removing unreachable block (ram,0x0173c1c4) */

ulonglong FUN_0173c220(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = FUN_016dd818(param_2,"ec_paramgen_curve");
  if (iVar1 == 0) {
    iVar1 = FUN_0172c6b4(param_3);
    if (((iVar1 != 0) || (iVar1 = FUN_0177bad8(param_3), iVar1 != 0)) ||
       (iVar1 = FUN_0177bc40(param_3), iVar1 != 0)) {
      uVar3 = FUN_0173c154(param_1,iVar1);
      return uVar3;
    }
    FUN_016e9cd0(6,0,0x6d,"/aws-lc/crypto/fipsmodule/evp/p_ec.c",0xbd);
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_016dd818(param_2,"ec_param_enc");
    if ((iVar1 == 0) && (iVar1 = FUN_016dd818(param_3,"named_curve"), iVar1 == 0)) {
      return 1;
    }
    uVar2 = 0xfffffffe;
  }
  return (ulonglong)uVar2;
}

