// FUN_01b37e2c @ 01b37e2c size=368 calls_out=2 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/cipher/aead.c | /aws-lc/crypto/fipsmodule/cipher/aead.c

undefined4
FUN_01b37e2c(int *param_1,uint param_2,uint param_3,undefined4 *param_4,int param_5,
            undefined4 param_6,undefined4 param_7,uint param_8,int param_9,undefined4 param_10,
            int param_11,undefined4 param_12,undefined4 param_13)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_2 < param_9 + param_8) {
    uVar2 = param_2;
    if (param_8 != param_2) {
      uVar2 = param_2 + param_9;
    }
    if (uVar2 <= param_8) goto LAB_01b37e7c;
LAB_01b37edc:
    uVar4 = 0xa1;
    uVar3 = 0x73;
  }
  else {
LAB_01b37e7c:
    if (((param_3 < param_2 + param_9) && (param_2 < param_3 + param_5)) ||
       ((param_3 < param_9 + param_8 && (param_8 < param_3 + param_5)))) goto LAB_01b37edc;
    if (param_11 == 0 || *(int *)(*param_1 + 8) != 0) {
      iVar1 = (**(code **)(*param_1 + 0x1c))
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_10,param_11,param_12,param_13);
      if (iVar1 != 0) {
        return 1;
      }
      goto LAB_01b37efc;
    }
    uVar4 = 0xa6;
    uVar3 = 0x70;
  }
  FUN_01b053d4(0x1e,0,uVar3,"/aws-lc/crypto/fipsmodule/cipher/aead.c",uVar4);
LAB_01b37efc:
  FUN_01b257dc(param_2,0,param_9);
  FUN_01b257dc(param_3,0,param_5);
  *param_4 = 0;
  return 0;
}

