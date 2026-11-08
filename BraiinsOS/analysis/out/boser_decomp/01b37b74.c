// FUN_01b37b74 @ 01b37b74 size=132 calls_out=2 calls_in=6
// strings: /aws-lc/crypto/fipsmodule/cipher/aead.c

undefined4 FUN_01b37b74(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    FUN_01b053d4(0x1e,0,0x7c,"/aws-lc/crypto/fipsmodule/cipher/aead.c",0x3b);
    *param_1 = 0;
    return 0;
  }
  uVar1 = FUN_01b37ac4();
  return uVar1;
}

