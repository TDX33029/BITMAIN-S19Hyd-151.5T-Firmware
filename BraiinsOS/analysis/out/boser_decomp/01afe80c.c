// FUN_01afe80c @ 01afe80c size=224 calls_out=3 calls_in=0
// strings: /aws-lc/crypto/cipher_extra/e_aesgcmsiv.c | /aws-lc/crypto/cipher_extra/e_aesgcmsiv.c

undefined4 FUN_01afe80c(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (((param_3 + -0x10) * 8 & 0xffffff7fU) == 0) {
    if ((param_4 & 0xffffffef) == 0) {
      FUN_01afe7f0(param_1 + 8,0x100);
      FUN_01b4fa58(param_1 + 8,0,param_1 + 0x100,param_2,param_3);
      *(byte *)(param_1 + 0x104) = *(byte *)(param_1 + 0x104) & 0xfe | param_3 == 0x20;
      *(undefined1 *)(param_1 + 0x241) = 0x10;
      return 1;
    }
    uVar2 = 0x23c;
    uVar1 = 0x74;
  }
  else {
    uVar2 = 0x234;
    uVar1 = 0x66;
  }
  FUN_01b053d4(0x1e,0,uVar1,"/aws-lc/crypto/cipher_extra/e_aesgcmsiv.c",uVar2);
  return 0;
}

