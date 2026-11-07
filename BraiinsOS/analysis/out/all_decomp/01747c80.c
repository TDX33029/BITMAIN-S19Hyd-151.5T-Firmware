// FUN_01747c80 @ 01747c80 size=276 calls_out=2 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/cipher/e_aes.c | /aws-lc/crypto/fipsmodule/cipher/e_aes.c

undefined8 FUN_01747c80(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  bool bVar4;
  bool bVar5;
  
  uVar1 = param_3 * 8;
  bVar4 = (uVar1 & 0xffffffbf) != 0x80;
  bVar5 = uVar1 != 0x100;
  if (bVar4 && bVar5) {
    uVar1 = 1;
  }
  *(undefined8 *)(param_1 + 0x218) = 0;
  if (!bVar4 || !bVar5) {
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0x228) = 1;
  if (bVar4 && bVar5) {
    FUN_016e9cd0(0x1e,0,0x66,"/aws-lc/crypto/fipsmodule/cipher/e_aes.c",0x3fc);
    return 0;
  }
  if (param_4 == 0) {
    uVar3 = 0x10;
  }
  else {
    if (0x10 < param_4) {
      FUN_016e9cd0(0x1e,uVar1,0x74,"/aws-lc/crypto/fipsmodule/cipher/e_aes.c",0x405);
      return 0;
    }
    uVar3 = (undefined1)param_4;
  }
  uVar2 = FUN_017474f4(param_1 + 8,param_1 + 0x100,0,param_2,param_3);
  *(undefined1 *)(param_1 + 0x241) = uVar3;
  *(undefined4 *)(param_1 + 0x210) = uVar2;
  return 1;
}

