// FUN_01b37fa4 @ 01b37fa4 size=236 calls_out=2 calls_in=3
// strings: /aws-lc/crypto/fipsmodule/cipher/aead.c | /aws-lc/crypto/fipsmodule/cipher/aead.c

undefined4
FUN_01b37fa4(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10
            )

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_2 < param_6 + param_5) {
    uVar1 = param_2;
    if (param_5 != param_2) {
      uVar1 = param_2 + param_6;
    }
    if (uVar1 <= param_5) goto LAB_01b38018;
    uVar4 = 0xef;
    uVar3 = 0x73;
  }
  else {
LAB_01b38018:
    if (*(code **)(*param_1 + 0x20) != (code *)0x0) {
      iVar2 = (**(code **)(*param_1 + 0x20))
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_10);
      if (iVar2 != 0) {
        return 1;
      }
      goto LAB_01b38000;
    }
    uVar4 = 0xf4;
    uVar3 = 0x68;
  }
  FUN_01b053d4(0x1e,0,uVar3,"/aws-lc/crypto/fipsmodule/cipher/aead.c",uVar4);
LAB_01b38000:
  FUN_01b257dc(param_2,0,param_6);
  return 0;
}

