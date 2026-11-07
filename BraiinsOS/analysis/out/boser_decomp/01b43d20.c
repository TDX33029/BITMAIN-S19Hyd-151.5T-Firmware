// FUN_01b43d20 @ 01b43d20 size=972 calls_out=7 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/ec/p384.c

void FUN_01b43d20(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 uVar3;
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
  
  local_2c = DAT_01d53560;
  iVar1 = FUN_01b42c7c();
  if (iVar1 == 0) {
    FUN_01b19bd0(auStack_23c,param_2 + 0x88);
    iVar1 = 5;
    FUN_01b13f10(auStack_1dc,auStack_23c);
    FUN_01b108b0(auStack_1dc,auStack_1dc,auStack_23c);
    FUN_01b13f10(auStack_1ac,auStack_1dc);
    FUN_01b108b0(auStack_1ac,auStack_1ac,auStack_23c);
    FUN_01b13f10(auStack_17c,auStack_1ac);
    FUN_01b13f10(auStack_17c,auStack_17c);
    FUN_01b13f10(auStack_17c,auStack_17c);
    FUN_01b108b0(auStack_17c,auStack_17c,auStack_1ac);
    FUN_01b13f10(auStack_14c,auStack_17c);
    do {
      FUN_01b13f10(auStack_14c,auStack_14c);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    FUN_01b108b0(auStack_14c,auStack_14c,auStack_17c);
    iVar1 = 0xe;
    FUN_01b13f10(auStack_11c,auStack_14c);
    FUN_01b13f10(auStack_11c,auStack_11c);
    FUN_01b13f10(auStack_11c,auStack_11c);
    FUN_01b108b0(auStack_11c,auStack_11c,auStack_1ac);
    FUN_01b13f10(auStack_ec,auStack_11c);
    do {
      FUN_01b13f10(auStack_ec,auStack_ec);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar1 = 0x1d;
    FUN_01b108b0(auStack_ec,auStack_ec,auStack_11c);
    FUN_01b13f10(auStack_bc,auStack_ec);
    do {
      FUN_01b13f10(auStack_bc,auStack_bc);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    FUN_01b108b0(auStack_bc,auStack_bc,auStack_ec);
    FUN_01b13f10(auStack_8c,auStack_bc);
    iVar1 = 0x3b;
    do {
      FUN_01b13f10(auStack_8c,auStack_8c);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    FUN_01b108b0(auStack_8c,auStack_8c,auStack_bc);
    FUN_01b13f10(auStack_5c,auStack_8c);
    iVar1 = 0x77;
    do {
      FUN_01b13f10(auStack_5c,auStack_5c);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar1 = 0xf;
    FUN_01b108b0(auStack_5c,auStack_5c,auStack_8c);
    do {
      FUN_01b13f10(auStack_5c,auStack_5c);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar1 = 0x1f;
    FUN_01b108b0(auStack_5c,auStack_5c,auStack_11c);
    do {
      FUN_01b13f10(auStack_5c,auStack_5c);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar1 = 0x5e;
    FUN_01b108b0(auStack_5c,auStack_5c,auStack_ec);
    FUN_01b13f10(auStack_5c,auStack_5c);
    FUN_01b13f10(auStack_5c,auStack_5c);
    FUN_01b108b0(auStack_5c,auStack_5c,auStack_1dc);
    do {
      FUN_01b13f10(auStack_5c,auStack_5c);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    FUN_01b108b0(auStack_5c,auStack_5c,auStack_ec);
    FUN_01b13f10(auStack_5c,auStack_5c);
    FUN_01b13f10(auStack_20c,auStack_5c);
    uVar3 = extraout_r1_00;
    if (param_3 != 0) {
      FUN_01b19bd0(auStack_5c,param_2);
      FUN_01b108b0(auStack_5c,auStack_5c,auStack_20c);
      FUN_01b19a24(param_3,auStack_5c);
      uVar3 = extraout_r1_01;
    }
    if (param_4 != 0) {
      FUN_01b19bd0(auStack_5c,param_2 + 0x44);
      FUN_01b13f10(auStack_20c,auStack_20c);
      FUN_01b108b0(auStack_5c,auStack_5c,auStack_23c);
      FUN_01b108b0(auStack_5c,auStack_5c,auStack_20c);
      FUN_01b19a24(param_4,auStack_5c);
      uVar3 = extraout_r1_02;
    }
    uVar2 = 1;
  }
  else {
    FUN_01b053d4(0xf,0,0x77,"/aws-lc/crypto/fipsmodule/ec/p384.c",0x149);
    uVar2 = 0;
    uVar3 = extraout_r1;
  }
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar2,uVar3,local_2c ^ DAT_01d53560,0);
  }
  return;
}

