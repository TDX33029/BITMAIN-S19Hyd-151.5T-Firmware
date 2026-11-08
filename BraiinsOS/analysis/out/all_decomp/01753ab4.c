// FUN_01753ab4 @ 01753ab4 size=236 calls_out=5 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c

undefined4 FUN_01753ab4(undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((int)param_2 < 0x800) || ((param_2 & 0x7f) != 0)) {
    FUN_016e9cd0(4,0,0x68,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x4d3);
    return 0;
  }
  iVar1 = FUN_017141d0();
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_01714a30(iVar1,0x10001);
    if (iVar2 != 0) {
      uVar3 = FUN_01753108(param_1,param_2,iVar1,param_3,1);
    }
  }
  FUN_017046e0(iVar1);
  return uVar3;
}

