// FUN_01746aa4 @ 01746aa4 size=700 calls_out=9 calls_in=3
// strings: /aws-lc/crypto/fipsmodule/cipher/e_aes.c | /aws-lc/crypto/fipsmodule/cipher/e_aes.c | /aws-lc/crypto/fipsmodule/cipher/e_aes.c

void FUN_01746aa4(int param_1,undefined4 param_2,int param_3,uint *param_4,uint param_5,
                 undefined4 param_6,int param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,uint param_11,undefined4 param_12,int param_13,uint param_14)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined8 uVar5;
  undefined1 auStack_1a0 [80];
  undefined1 auStack_150 [272];
  undefined1 auStack_40 [20];
  uint local_2c;
  
  local_2c = DAT_018ddaf8;
  if (CARRY4(param_11,param_14)) {
    FUN_016e9cd0(0x1e,0,0x75,"/aws-lc/crypto/fipsmodule/cipher/e_aes.c",0x42c);
    uVar4 = extraout_r1_02;
  }
  else if (param_5 < param_11 + param_14) {
    FUN_016e9cd0(0x1e,0,0x67,"/aws-lc/crypto/fipsmodule/cipher/e_aes.c",0x430);
    uVar4 = extraout_r1_01;
  }
  else if (param_7 == 0) {
    FUN_016e9cd0(0x1e,0,0x6f,"/aws-lc/crypto/fipsmodule/cipher/e_aes.c",0x434);
    uVar4 = extraout_r1_00;
  }
  else {
    FUN_016dd606(auStack_1a0,0,0x170);
    puVar3 = (undefined1 *)(param_1 + 0xf8);
    if ((puVar3 < auStack_40 && auStack_150 < puVar3) ||
       ((puVar3 < auStack_150 && (auStack_150 < (undefined1 *)(param_1 + 0x208U))))) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0,0x1746d5c);
      (*pcVar1)();
    }
    FUN_016dd1aa(auStack_150,puVar3,0x110);
    FUN_01742880(auStack_1a0,param_1,param_6,param_7);
    if (param_13 != 0) {
      uVar5 = FUN_017432e8(auStack_1a0,param_12,param_13);
      uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
      if ((int)uVar5 == 0) goto LAB_01746c60;
    }
    if (*(int *)(param_1 + 0x208) == 0) {
      uVar5 = FUN_017436cc(auStack_1a0,param_1,param_8,param_2,param_9);
    }
    else {
      uVar5 = FUN_017451d4(auStack_1a0,param_1,param_8,param_2,param_9,*(int *)(param_1 + 0x208));
    }
    uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if ((int)uVar5 != 0) {
      if (param_11 != 0) {
        if (*(int *)(param_1 + 0x208) == 0) {
          uVar5 = FUN_017436cc(auStack_1a0,param_1,param_10,param_3,param_11);
        }
        else {
          uVar5 = FUN_017451d4(auStack_1a0,param_1,param_10,param_3,param_11,
                               *(int *)(param_1 + 0x208));
        }
        uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
        if ((int)uVar5 == 0) goto LAB_01746c60;
      }
      FUN_0174676c(auStack_1a0,param_3 + param_11,param_14);
      uVar2 = 1;
      *param_4 = param_11 + param_14;
      uVar4 = extraout_r1;
      goto LAB_01746c64;
    }
  }
LAB_01746c60:
  uVar2 = 0;
LAB_01746c64:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar2,uVar4,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

