// FUN_01b59578 @ 01b59578 size=192 calls_out=5 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c

undefined4 FUN_01b59578(undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((int)param_2 < 0x800) || ((param_2 & 0x7f) != 0)) {
    uVar3 = 0;
    FUN_01b053d4(4,0,0x68,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x4d3);
  }
  else {
    iVar1 = FUN_01b2adb8();
    uVar3 = 0;
    if ((iVar1 != 0) && (iVar2 = FUN_01b2b4cc(iVar1,0x10001), iVar2 != 0)) {
      uVar3 = FUN_01b58d8c(param_1,param_2,iVar1,param_3,1);
    }
    FUN_01b1f904(iVar1);
  }
  return uVar3;
}

