// FUN_01b4f218 @ 01b4f218 size=592 calls_out=9 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/cipher/e_aes.c | /aws-lc/crypto/fipsmodule/cipher/e_aes.c | /aws-lc/crypto/fipsmodule/cipher/e_aes.c

void FUN_01b4f218(int param_1,undefined4 param_2,int param_3,uint *param_4,uint param_5,
                 undefined4 param_6,int param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,uint param_11,undefined4 param_12,int param_13,uint param_14)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_1a0 [80];
  undefined1 auStack_150 [292];
  uint local_2c;
  
  local_2c = DAT_01d53560;
  if (CARRY4(param_11,param_14)) {
    uVar3 = 0x42c;
    uVar1 = 0x75;
LAB_01b4f2b8:
    FUN_01b053d4(0x1e,0,uVar1,"/aws-lc/crypto/fipsmodule/cipher/e_aes.c",uVar3);
    uVar1 = extraout_r1;
  }
  else {
    if (param_5 < param_11 + param_14) {
      uVar3 = 0x430;
      uVar1 = 0x67;
      goto LAB_01b4f2b8;
    }
    if (param_7 == 0) {
      uVar3 = 0x434;
      uVar1 = 0x6f;
      goto LAB_01b4f2b8;
    }
    FUN_01b257dc(auStack_1a0,0,0x170);
    FUN_01b26974(auStack_150,param_1 + 0xf8,0x110);
    FUN_01b4e0f4(auStack_1a0,param_1,param_6,param_7);
    if (param_13 == 0) {
LAB_01b4f340:
      if (*(int *)(param_1 + 0x208) == 0) {
        uVar2 = FUN_01b4e400(auStack_1a0,param_1,param_8,param_2,param_9);
      }
      else {
        uVar2 = FUN_01b4e994(auStack_1a0,param_1,param_8,param_2,param_9,*(int *)(param_1 + 0x208));
      }
      uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
      if ((int)uVar2 != 0) {
        if (param_11 != 0) {
          if (*(int *)(param_1 + 0x208) == 0) {
            uVar2 = FUN_01b4e400(auStack_1a0,param_1,param_10,param_3,param_11);
          }
          else {
            uVar2 = FUN_01b4e994(auStack_1a0,param_1,param_10,param_3,param_11,
                                 *(int *)(param_1 + 0x208));
          }
          uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
          if ((int)uVar2 == 0) goto LAB_01b4f2c4;
        }
        FUN_01b4ef70(auStack_1a0,param_3 + param_11,param_14);
        uVar3 = 1;
        *param_4 = param_11 + param_14;
        uVar1 = extraout_r1_00;
        goto LAB_01b4f3d4;
      }
    }
    else {
      uVar2 = FUN_01b4e2b0(auStack_1a0,param_12,param_13);
      uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
      if ((int)uVar2 != 0) goto LAB_01b4f340;
    }
  }
LAB_01b4f2c4:
  uVar3 = 0;
LAB_01b4f3d4:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar3,uVar1,local_2c ^ DAT_01d53560,0);
  }
  return;
}

