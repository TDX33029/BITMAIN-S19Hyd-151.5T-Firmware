// FUN_01b48da0 @ 01b48da0 size=388 calls_out=6 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_ec.c | ec_paramgen_curve | /aws-lc/crypto/fipsmodule/evp/p_ec.c | ec_param_enc | named_curve

/* WARNING: Removing unreachable block (ram,0x01b48d2c) */

ulonglong FUN_01b48da0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = FUN_01bedb50(param_2,"ec_paramgen_curve");
  if (iVar1 == 0) {
    iVar1 = FUN_01b3d2a8(param_3);
    if (((iVar1 != 0) || (iVar1 = FUN_01b6bfc4(param_3), iVar1 != 0)) ||
       (iVar1 = FUN_01b6c100(param_3), iVar1 != 0)) {
      uVar3 = FUN_01b48cd8(param_1,iVar1);
      return uVar3;
    }
    FUN_01b053d4(6,0,0x6d,"/aws-lc/crypto/fipsmodule/evp/p_ec.c",0xbd);
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_01bedb50(param_2,"ec_param_enc");
    if ((iVar1 == 0) && (iVar1 = FUN_01bedb50(param_3,"named_curve"), iVar1 == 0)) {
      return 1;
    }
    uVar2 = 0xfffffffe;
  }
  return (ulonglong)uVar2;
}

