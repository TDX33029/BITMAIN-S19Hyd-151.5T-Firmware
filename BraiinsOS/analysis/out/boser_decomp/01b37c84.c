// FUN_01b37c84 @ 01b37c84 size=400 calls_out=3 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/cipher/aead.c | /aws-lc/crypto/fipsmodule/cipher/aead.c | /aws-lc/crypto/fipsmodule/cipher/aead.c

void FUN_01b37c84(int *param_1,uint param_2,int *param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,uint param_7,uint param_8,undefined4 param_9,undefined4 param_10
                 )

{
  undefined4 extraout_r1;
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int local_28;
  uint local_24;
  
  local_24 = DAT_01d53560;
  if (CARRY4((uint)*(byte *)(*param_1 + 2),param_8)) {
    uVar5 = 0x77;
    uVar2 = 0x75;
LAB_01b37cf4:
    FUN_01b053d4(0x1e,0,uVar2,"/aws-lc/crypto/fipsmodule/cipher/aead.c",uVar5);
  }
  else {
    if (param_4 < param_8) {
      uVar5 = 0x7c;
      uVar2 = 0x67;
      goto LAB_01b37cf4;
    }
    if (param_2 < param_8 + param_7) {
      uVar1 = param_2;
      if (param_7 != param_2) {
        uVar1 = param_2 + param_4;
      }
      if (param_7 < uVar1) {
        uVar5 = 0x81;
        uVar2 = 0x73;
        goto LAB_01b37cf4;
      }
    }
    uVar4 = (**(code **)(*param_1 + 0x1c))
                      (param_1,param_2,param_2 + param_8,&local_28,param_4 - param_8,param_5,param_6
                       ,param_7,param_8,0,0,param_9,param_10);
    uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar4 != 0) {
      uVar5 = 1;
      iVar3 = param_8 + local_28;
      goto LAB_01b37dcc;
    }
  }
  iVar3 = 0;
  FUN_01b257dc(param_2,0,param_4);
  uVar5 = 0;
  uVar2 = extraout_r1;
LAB_01b37dcc:
  *param_3 = iVar3;
  if ((local_24 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar5,uVar2,local_24 ^ DAT_01d53560,0);
  }
  return;
}

