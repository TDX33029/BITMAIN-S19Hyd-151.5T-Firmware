// FUN_01b437ec @ 01b437ec size=880 calls_out=7 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/ec/p256.c

void FUN_01b437ec(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 uVar3;
  undefined1 auStack_16c [32];
  undefined1 auStack_14c [32];
  undefined1 auStack_12c [32];
  undefined1 auStack_10c [32];
  undefined1 auStack_ec [32];
  undefined1 auStack_cc [32];
  undefined1 auStack_ac [32];
  undefined1 auStack_8c [32];
  undefined1 auStack_6c [32];
  undefined1 auStack_4c [32];
  uint local_2c;
  
  local_2c = DAT_01d53560;
  iVar1 = FUN_01b42c7c();
  if (iVar1 == 0) {
    FUN_01b2835c(auStack_16c,param_2 + 0x88);
    FUN_01b0ec74(auStack_12c,auStack_16c);
    FUN_01b0d7c8(auStack_12c,auStack_12c,auStack_16c);
    FUN_01b0ec74(auStack_10c,auStack_12c);
    FUN_01b0d7c8(auStack_10c,auStack_10c,auStack_16c);
    FUN_01b0ec74(auStack_ec,auStack_10c);
    FUN_01b0ec74(auStack_ec,auStack_ec);
    FUN_01b0ec74(auStack_ec,auStack_ec);
    FUN_01b0d7c8(auStack_ec,auStack_ec,auStack_10c);
    FUN_01b0ec74(auStack_cc,auStack_ec);
    iVar1 = 5;
    do {
      FUN_01b0ec74(auStack_cc,auStack_cc);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    FUN_01b0d7c8(auStack_cc,auStack_cc,auStack_ec);
    FUN_01b0ec74(auStack_ac,auStack_cc);
    FUN_01b0ec74(auStack_ac,auStack_ac);
    FUN_01b0ec74(auStack_ac,auStack_ac);
    FUN_01b0d7c8(auStack_ac,auStack_ac,auStack_10c);
    FUN_01b0ec74(auStack_8c,auStack_ac);
    iVar1 = 0xe;
    do {
      FUN_01b0ec74(auStack_8c,auStack_8c);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    FUN_01b0d7c8(auStack_8c,auStack_8c,auStack_ac);
    FUN_01b0ec74(auStack_6c,auStack_8c);
    FUN_01b0ec74(auStack_6c,auStack_6c);
    FUN_01b0d7c8(auStack_6c,auStack_6c,auStack_12c);
    FUN_01b0ec74(auStack_4c,auStack_6c);
    iVar1 = 0x1f;
    do {
      FUN_01b0ec74(auStack_4c,auStack_4c);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    FUN_01b0d7c8(auStack_4c,auStack_4c,auStack_16c);
    iVar1 = 0x80;
    do {
      FUN_01b0ec74(auStack_4c,auStack_4c);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    FUN_01b0d7c8(auStack_4c,auStack_4c,auStack_6c);
    iVar1 = 0x20;
    do {
      FUN_01b0ec74(auStack_4c,auStack_4c);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar1 = 0x1e;
    FUN_01b0d7c8(auStack_4c,auStack_4c,auStack_6c);
    do {
      FUN_01b0ec74(auStack_4c,auStack_4c);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    FUN_01b0d7c8(auStack_4c,auStack_4c,auStack_8c);
    FUN_01b0ec74(auStack_4c,auStack_4c);
    FUN_01b0ec74(auStack_14c,auStack_4c);
    uVar3 = extraout_r1_00;
    if (param_3 != 0) {
      FUN_01b2835c(auStack_4c,param_2);
      FUN_01b0d7c8(auStack_4c,auStack_4c,auStack_14c);
      FUN_01b28344(param_3,auStack_4c);
      uVar3 = extraout_r1_01;
    }
    if (param_4 != 0) {
      FUN_01b2835c(auStack_4c,param_2 + 0x44);
      FUN_01b0ec74(auStack_14c,auStack_14c);
      FUN_01b0d7c8(auStack_4c,auStack_4c,auStack_16c);
      FUN_01b0d7c8(auStack_4c,auStack_4c,auStack_14c);
      FUN_01b28344(param_4,auStack_4c);
      uVar3 = extraout_r1_02;
    }
    uVar2 = 1;
  }
  else {
    FUN_01b053d4(0xf,0,0x77,"/aws-lc/crypto/fipsmodule/ec/p256.c",0xbe);
    uVar2 = 0;
    uVar3 = extraout_r1;
  }
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar2,uVar3,local_2c ^ DAT_01d53560,0);
  }
  return;
}

