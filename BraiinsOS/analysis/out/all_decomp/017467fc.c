// FUN_017467fc @ 017467fc size=544 calls_out=10 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/cipher/e_aes.c | /aws-lc/crypto/fipsmodule/cipher/e_aes.c | /aws-lc/crypto/fipsmodule/cipher/e_aes.c

void FUN_017467fc(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,int param_8,undefined4 param_9,
                 undefined4 param_10,int param_11)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined1 *puVar3;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_1b0 [80];
  undefined1 auStack_160 [272];
  undefined1 auStack_50 [20];
  undefined1 auStack_3c [16];
  uint local_2c;
  
  local_2c = DAT_018ddaf8;
  if (param_4 == 0) {
    FUN_016e9cd0(0x1e,0,0x6f,"/aws-lc/crypto/fipsmodule/cipher/e_aes.c",0x476);
    uVar4 = extraout_r1_00;
  }
  else if (param_8 == param_11) {
    FUN_016dd606(auStack_1b0,0,0x170);
    puVar3 = (undefined1 *)(param_1 + 0xf8);
    if ((puVar3 < auStack_50 && auStack_160 < puVar3) ||
       ((puVar3 < auStack_160 && (auStack_160 < (undefined1 *)(param_1 + 0x208U))))) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0,0x17469ec);
      (*pcVar1)();
    }
    FUN_016dd1aa(auStack_160,puVar3,0x110);
    FUN_01742880(auStack_1b0,param_1,param_3,param_4);
    uVar5 = FUN_017432e8(auStack_1b0,param_9,param_10);
    uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if ((int)uVar5 != 0) {
      if (*(int *)(param_1 + 0x208) == 0) {
        uVar5 = FUN_0174445c(auStack_1b0,param_1,param_5,param_2,param_6);
      }
      else {
        uVar5 = FUN_01745930(auStack_1b0,param_1,param_5,param_2,param_6,*(int *)(param_1 + 0x208));
      }
      uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
      if ((int)uVar5 != 0) {
        FUN_0174676c(auStack_1b0,auStack_3c,param_11);
        uVar5 = FUN_0177b0d8(auStack_3c,param_7,param_11);
        uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
        if ((int)uVar5 == 0) {
          uVar2 = 1;
          goto LAB_01746884;
        }
        uVar4 = 0x497;
        goto LAB_0174686c;
      }
    }
  }
  else {
    uVar4 = 0x47b;
LAB_0174686c:
    FUN_016e9cd0(0x1e,0,0x65,"/aws-lc/crypto/fipsmodule/cipher/e_aes.c",uVar4);
    uVar4 = extraout_r1;
  }
  uVar2 = 0;
LAB_01746884:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar2,uVar4,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

