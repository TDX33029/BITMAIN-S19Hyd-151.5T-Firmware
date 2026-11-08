// FUN_01b4fc7c @ 01b4fc7c size=212 calls_out=2 calls_in=3
// strings: /aws-lc/crypto/fipsmodule/cipher/e_aes.c | /aws-lc/crypto/fipsmodule/cipher/e_aes.c

undefined4 FUN_01b4fc7c(int param_1,uint *param_2,undefined4 param_3,int param_4,uint param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((param_4 * 8 & 0xffffffbfU) == 0x80 || param_4 * 8 == 0x100) {
    if (param_5 == 0) {
      param_5 = 0x10;
    }
    else if (0x10 < param_5) {
      uVar2 = 0x405;
      uVar1 = 0x74;
      goto LAB_01b4fcd4;
    }
    uVar1 = FUN_01b4fa58(param_1,param_1 + 0xf8,0,param_3,param_4);
    *(undefined4 *)(param_1 + 0x208) = uVar1;
    uVar1 = 1;
    *param_2 = param_5;
  }
  else {
    uVar2 = 0x3fc;
    uVar1 = 0x66;
LAB_01b4fcd4:
    FUN_01b053d4(0x1e,0,uVar1,"/aws-lc/crypto/fipsmodule/cipher/e_aes.c",uVar2);
    uVar1 = 0;
  }
  return uVar1;
}

