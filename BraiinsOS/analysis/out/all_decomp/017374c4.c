// FUN_017374c4 @ 017374c4 size=428 calls_out=6 calls_in=5
// strings: /aws-lc/crypto/fipsmodule/ec/ec_key.c | /aws-lc/crypto/fipsmodule/ec/ec_key.c | /aws-lc/crypto/fipsmodule/ec/ec_key.c | /aws-lc/crypto/fipsmodule/ec/ec_key.c | /aws-lc/crypto/fipsmodule/ec/ec_key.c

void FUN_017374c4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  undefined8 uVar3;
  undefined1 auStack_e0 [204];
  uint local_14;
  
  local_14 = DAT_018ddaf8;
  if (((param_1 == (int *)0x0) || (*param_1 == 0)) || (param_1[1] == 0)) {
    FUN_016e9cd0(0xf,0,0x43,"/aws-lc/crypto/fipsmodule/ec/ec_key.c",0x11e);
    iVar1 = extraout_r1;
  }
  else {
    iVar1 = FUN_01736c10();
    if (iVar1 == 0) {
      iVar1 = FUN_01736c9c(*param_1,param_1[1]);
      if (iVar1 == 0) {
        FUN_016e9cd0(0xf,0,0x78,"/aws-lc/crypto/fipsmodule/ec/ec_key.c",0x129);
        iVar1 = extraout_r1_01;
      }
      else {
        if (param_1[2] == 0) {
LAB_01737574:
          uVar2 = 1;
          goto LAB_017375a0;
        }
        iVar1 = FUN_01736458(*param_1,auStack_e0,param_1[2] + 0x14);
        if (iVar1 == 0) {
          FUN_016e9cd0(0xf,0,0xf,"/aws-lc/crypto/fipsmodule/ec/ec_key.c",0x107);
          iVar1 = extraout_r1_02;
        }
        else {
          uVar3 = FUN_01736790(*param_1,auStack_e0,param_1[1] + 4);
          iVar1 = (int)((ulonglong)uVar3 >> 0x20);
          if ((int)uVar3 != 0) goto LAB_01737574;
          FUN_016e9cd0(0xf,0,0x71,"/aws-lc/crypto/fipsmodule/ec/ec_key.c",0x114);
          iVar1 = extraout_r1_03;
        }
      }
    }
    else {
      FUN_016e9cd0(0xf,0,0x77,"/aws-lc/crypto/fipsmodule/ec/ec_key.c",0x123);
      iVar1 = extraout_r1_00;
    }
  }
  uVar2 = 0;
LAB_017375a0:
  if ((local_14 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar2,iVar1,local_14 ^ DAT_018ddaf8,0);
  }
  return;
}

