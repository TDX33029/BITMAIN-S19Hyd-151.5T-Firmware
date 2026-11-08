// FUN_01b4f648 @ 01b4f648 size=332 calls_out=2 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/cipher/e_aes.c | /aws-lc/crypto/fipsmodule/cipher/e_aes.c

undefined4
FUN_01b4f648(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,int param_6,int param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,
            undefined4 param_11,undefined4 param_12,undefined4 param_13)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  bool bVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  if (param_7 == 0xc) {
    uVar5 = FUN_01b27094(param_6 + 4);
    bVar4 = *(char *)(param_1 + 0x228) != '\0';
    if (bVar4) {
      *(undefined8 *)(param_1 + 0x220) = uVar5;
    }
    if (bVar4) {
      *(undefined1 *)(param_1 + 0x228) = 0;
    }
    uVar1 = (uint)uVar5 ^ *(uint *)(param_1 + 0x220);
    uVar2 = (uint)((ulonglong)uVar5 >> 0x20) ^ *(uint *)(param_1 + 0x224);
    if ((uVar2 != 0xffffffff || uVar1 != 0xffffffff) &&
       (*(uint *)(param_1 + 0x21c) < uVar2 ||
        uVar2 - *(uint *)(param_1 + 0x21c) < (uint)(*(uint *)(param_1 + 0x218) <= uVar1))) {
      *(uint *)(param_1 + 0x218) = uVar1 + 1;
      *(uint *)(param_1 + 0x21c) = uVar2 + (0xfffffffe < uVar1);
      uVar3 = FUN_01b4f218(param_1 + 8,param_2,param_3,param_4,param_5,param_6,0xc,param_8,param_9,
                           param_10,param_11,param_12,param_13,*(undefined1 *)(param_1 + 0x241),
                           unaff_r11,unaff_lr);
      return uVar3;
    }
    uVar6 = 0x5ef;
    uVar3 = 0x7d;
  }
  else {
    uVar6 = 0x5dc;
    uVar3 = 0x79;
  }
  FUN_01b053d4(0x1e,0,uVar3,"/aws-lc/crypto/fipsmodule/cipher/e_aes.c",uVar6);
  return 0;
}

