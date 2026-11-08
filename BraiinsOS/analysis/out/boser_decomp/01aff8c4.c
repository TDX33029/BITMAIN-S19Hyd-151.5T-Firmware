// FUN_01aff8c4 @ 01aff8c4 size=136 calls_out=2 calls_in=0
// strings: /aws-lc/crypto/cipher_extra/e_chacha20poly1305.c

undefined4 FUN_01aff8c4(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  if (param_4 == 0) {
    param_4 = 0x10;
  }
  else if (0x10 < param_4) {
    FUN_01b053d4(0x1e,0,0x75,"/aws-lc/crypto/cipher_extra/e_chacha20poly1305.c",0x4e);
    return 0;
  }
  if (param_3 == 0x20) {
    FUN_01aff580(param_1 + 8);
    *(char *)(param_1 + 0x241) = (char)param_4;
    return 1;
  }
  return 0;
}

