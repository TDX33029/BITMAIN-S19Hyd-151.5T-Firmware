// FUN_017232f0 @ 017232f0 size=128 calls_out=2 calls_in=4
// strings: /aws-lc/crypto/fipsmodule/cipher/aead.c

undefined4 FUN_017232f0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    FUN_016e9cd0(0x1e,0,0x7c,"/aws-lc/crypto/fipsmodule/cipher/aead.c",0x3b);
    *param_1 = 0;
    return 0;
  }
  uVar1 = FUN_01723218();
  return uVar1;
}

