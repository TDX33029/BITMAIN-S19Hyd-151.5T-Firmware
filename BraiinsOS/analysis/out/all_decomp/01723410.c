// FUN_01723410 @ 01723410 size=444 calls_out=3 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/cipher/aead.c | /aws-lc/crypto/fipsmodule/cipher/aead.c | /aws-lc/crypto/fipsmodule/cipher/aead.c

void FUN_01723410(int *param_1,uint param_2,int *param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,uint param_7,uint param_8,undefined4 param_9,undefined4 param_10
                 )

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined8 uVar4;
  int local_20;
  uint local_1c;
  
  local_1c = DAT_018ddaf8;
  if (CARRY4((uint)*(byte *)(*param_1 + 2),param_8)) {
    FUN_016e9cd0(0x1e,0,0x75,"/aws-lc/crypto/fipsmodule/cipher/aead.c",0x77);
    uVar3 = extraout_r1_00;
  }
  else if (param_4 < param_8) {
    FUN_016e9cd0(0x1e,0,0x67,"/aws-lc/crypto/fipsmodule/cipher/aead.c",0x7c);
    uVar3 = extraout_r1_02;
  }
  else {
    if (param_2 < param_8 + param_7) {
      uVar1 = param_2;
      if (param_7 != param_2) {
        uVar1 = param_2 + param_4;
      }
      if (param_7 < uVar1) {
        FUN_016e9cd0(0x1e,0,0x73,"/aws-lc/crypto/fipsmodule/cipher/aead.c",0x81);
        uVar3 = extraout_r1_01;
        goto LAB_017234e8;
      }
    }
    uVar4 = (**(code **)(*param_1 + 0x1c))
                      (param_1,param_2,param_2 + param_8,&local_20,param_4 - param_8,param_5,param_6
                       ,param_7,param_8,0,0,param_9,param_10);
    uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar4 != 0) {
      uVar2 = 1;
      local_20 = param_8 + local_20;
      goto LAB_01723508;
    }
  }
LAB_017234e8:
  if (param_4 != 0) {
    FUN_016dd606(param_2,0,param_4);
    uVar3 = extraout_r1;
  }
  local_20 = 0;
  uVar2 = 0;
LAB_01723508:
  *param_3 = local_20;
  if ((local_1c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar2,uVar3,local_1c ^ DAT_018ddaf8,0);
  }
  return;
}

