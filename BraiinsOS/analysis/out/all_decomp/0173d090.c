// FUN_0173d090 @ 0173d090 size=176 calls_out=2 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_hmac.c

uint FUN_0173d090(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 1) {
    **(undefined4 **)(param_1 + 0x14) = param_4;
    uVar1 = 1;
  }
  else {
    if (param_2 == 0x1016) {
      if (param_3 < 0x8000) {
        iVar2 = FUN_0173cfd0(*(undefined4 **)(param_1 + 0x14) + 0x132,param_4);
        return (uint)(iVar2 != 0);
      }
    }
    else {
      FUN_016e9cd0(6,0,0x65,"/aws-lc/crypto/fipsmodule/evp/p_hmac.c",0x51);
    }
    uVar1 = 0xfffffffe;
  }
  return uVar1;
}

