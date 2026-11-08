// FUN_01b4f50c @ 01b4f50c size=448 calls_out=3 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/cipher/e_aes.c | /aws-lc/crypto/fipsmodule/cipher/e_aes.c

undefined4
FUN_01b4f50c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,int param_6,int param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,
            undefined4 param_11,undefined4 param_12,undefined4 param_13)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  longlong lVar3;
  undefined4 uVar4;
  
  if (param_7 == 0xc) {
    lVar3 = FUN_01b27094(param_6 + 4);
    uVar1 = (uint)((ulonglong)lVar3 >> 0x20);
    if ((lVar3 != -1) &&
       (*(uint *)(param_1 + 0x21c) < uVar1 ||
        uVar1 - *(uint *)(param_1 + 0x21c) < (uint)(*(uint *)(param_1 + 0x218) <= (uint)lVar3))) {
      *(longlong *)(param_1 + 0x218) = lVar3 + 1;
      uVar2 = FUN_01b4f218(param_1 + 8,param_2,param_3,param_4,param_5,param_6,0xc,param_8,param_9,
                           param_10,param_11,param_12,param_13,*(undefined1 *)(param_1 + 0x241),
                           unaff_r11,unaff_lr);
      return uVar2;
    }
    uVar4 = 0x584;
    uVar2 = 0x7d;
  }
  else {
    uVar4 = 0x57c;
    uVar2 = 0x79;
  }
  FUN_01b053d4(0x1e,0,uVar2,"/aws-lc/crypto/fipsmodule/cipher/e_aes.c",uVar4);
  return 0;
}

