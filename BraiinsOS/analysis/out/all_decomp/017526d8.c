// FUN_017526d8 @ 017526d8 size=324 calls_out=7 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c | /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c

undefined4
FUN_017526d8(undefined4 param_1,uint *param_2,undefined4 param_3,uint param_4,undefined4 param_5,
            undefined4 param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_0175009c();
  if (param_4 < uVar1) {
    FUN_016e9cd0(4,0,0x87,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x13d);
    return 0;
  }
  iVar2 = FUN_0177a6c0();
  if (iVar2 != 0) {
    if (param_7 == 1) {
      iVar3 = FUN_0174e684(iVar2,uVar1,param_5,param_6);
    }
    else {
      if (param_7 != 3) {
        FUN_016e9cd0(4,0,0x8f,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x14e);
        goto LAB_01752794;
      }
      iVar3 = FUN_0174e9c0(iVar2,uVar1,param_5,param_6);
    }
    if ((0 < iVar3) && (iVar3 = FUN_01752668(param_1,param_3,iVar2,uVar1), iVar3 != 0)) {
      uVar4 = 1;
      *param_2 = uVar1;
      goto LAB_01752798;
    }
  }
LAB_01752794:
  uVar4 = 0;
LAB_01752798:
  FUN_0177aafc(iVar2);
  return uVar4;
}

