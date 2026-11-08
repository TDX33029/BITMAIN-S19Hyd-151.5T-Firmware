// FUN_01735a4c @ 01735a4c size=964 calls_out=7 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/ec/p384.c

void FUN_01735a4c(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar3;
  undefined4 extraout_r1_02;
  undefined1 auStack_23c [48];
  undefined1 auStack_20c [48];
  undefined1 auStack_1dc [48];
  undefined1 auStack_1ac [48];
  undefined1 auStack_17c [48];
  undefined1 auStack_14c [48];
  undefined1 auStack_11c [48];
  undefined1 auStack_ec [48];
  undefined1 auStack_bc [48];
  undefined1 auStack_8c [48];
  undefined1 auStack_5c [48];
  uint local_2c;
  
  local_2c = DAT_018ddaf8;
  iVar1 = FUN_017345b8();
  if (iVar1 == 0) {
    iVar1 = 5;
    FUN_016fe45c(auStack_23c,param_2 + 0x88);
    FUN_016f8d74(auStack_1dc,auStack_23c);
    FUN_016f5aec(auStack_1dc,auStack_1dc,auStack_23c);
    FUN_016f8d74(auStack_1ac,auStack_1dc);
    FUN_016f5aec(auStack_1ac,auStack_1ac,auStack_23c);
    FUN_016f8d74(auStack_17c,auStack_1ac);
    FUN_016f8d74(auStack_17c,auStack_17c);
    FUN_016f8d74(auStack_17c,auStack_17c);
    FUN_016f5aec(auStack_17c,auStack_17c,auStack_1ac);
    FUN_016f8d74(auStack_14c,auStack_17c);
    do {
      FUN_016f8d74(auStack_14c,auStack_14c);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    FUN_016f5aec(auStack_14c,auStack_14c,auStack_17c);
    iVar1 = 0xe;
    FUN_016f8d74(auStack_11c,auStack_14c);
    FUN_016f8d74(auStack_11c,auStack_11c);
    FUN_016f8d74(auStack_11c,auStack_11c);
    FUN_016f5aec(auStack_11c,auStack_11c,auStack_1ac);
    FUN_016f8d74(auStack_ec,auStack_11c);
    do {
      FUN_016f8d74(auStack_ec,auStack_ec);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar1 = 0x1d;
    FUN_016f5aec(auStack_ec,auStack_ec,auStack_11c);
    FUN_016f8d74(auStack_bc,auStack_ec);
    do {
      FUN_016f8d74(auStack_bc,auStack_bc);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar1 = 0x3b;
    FUN_016f5aec(auStack_bc,auStack_bc,auStack_ec);
    FUN_016f8d74(auStack_8c,auStack_bc);
    do {
      FUN_016f8d74(auStack_8c,auStack_8c);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar1 = 0x77;
    FUN_016f5aec(auStack_8c,auStack_8c,auStack_bc);
    FUN_016f8d74(auStack_5c,auStack_8c);
    do {
      FUN_016f8d74(auStack_5c,auStack_5c);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar1 = 0xf;
    FUN_016f5aec(auStack_5c,auStack_5c,auStack_8c);
    do {
      FUN_016f8d74(auStack_5c,auStack_5c);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar1 = 0x1f;
    FUN_016f5aec(auStack_5c,auStack_5c,auStack_11c);
    do {
      FUN_016f8d74(auStack_5c,auStack_5c);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar1 = 0x5e;
    FUN_016f5aec(auStack_5c,auStack_5c,auStack_ec);
    FUN_016f8d74(auStack_5c,auStack_5c);
    FUN_016f8d74(auStack_5c,auStack_5c);
    FUN_016f5aec(auStack_5c,auStack_5c,auStack_1dc);
    do {
      FUN_016f8d74(auStack_5c,auStack_5c);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    FUN_016f5aec(auStack_5c,auStack_5c,auStack_ec);
    FUN_016f8d74(auStack_5c,auStack_5c);
    FUN_016f8d74(auStack_20c,auStack_5c);
    uVar3 = extraout_r1;
    if (param_3 != 0) {
      FUN_016fe45c(auStack_5c,param_2);
      FUN_016f5aec(auStack_5c,auStack_5c,auStack_20c);
      FUN_016fe3e4(param_3,auStack_5c);
      uVar3 = extraout_r1_00;
    }
    if (param_4 != 0) {
      FUN_016fe45c(auStack_5c,param_2 + 0x44);
      FUN_016f8d74(auStack_20c,auStack_20c);
      FUN_016f5aec(auStack_5c,auStack_5c,auStack_23c);
      FUN_016f5aec(auStack_5c,auStack_5c,auStack_20c);
      FUN_016fe3e4(param_4,auStack_5c);
      uVar3 = extraout_r1_01;
    }
    uVar2 = 1;
  }
  else {
    FUN_016e9cd0(0xf,0,0x77,"/aws-lc/crypto/fipsmodule/ec/p384.c",0x149);
    uVar2 = 0;
    uVar3 = extraout_r1_02;
  }
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar2,uVar3,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

