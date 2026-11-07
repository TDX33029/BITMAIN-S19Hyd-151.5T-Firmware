// FUN_01bd4000 @ 01bd4000 size=984 calls_out=9 calls_in=3
// strings: 

undefined4
FUN_01bd4000(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 auStack_22c [32];
  undefined1 auStack_20c [32];
  undefined1 auStack_1ec [32];
  undefined1 auStack_1cc [32];
  undefined1 auStack_1ac [32];
  undefined1 auStack_18c [32];
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
  int local_2c;
  
  local_2c = DAT_01d53560;
  uVar1 = FUN_01bd3abc(param_6,param_2,&PTR_01d3b2b0,0);
  uVar2 = FUN_01bd3abc(param_10);
  FUN_01bd20e4(auStack_1cc,param_6);
  if (param_7 == 0) {
    FUN_01bd20e4(auStack_4c,param_10);
    FUN_01bd0c38(auStack_1ac,param_4,auStack_4c);
    FUN_01bd35bc(auStack_16c,param_6,param_10);
    FUN_01bd20e4(auStack_16c,auStack_16c);
    FUN_01bd38b4(auStack_16c,auStack_16c,auStack_1cc);
    FUN_01bd38b4(auStack_16c,auStack_16c,auStack_4c);
    FUN_01bd0c38(auStack_18c,param_10,auStack_4c);
    FUN_01bd0c38(auStack_18c,auStack_18c,param_5);
  }
  else {
    FUN_01bd3b08(auStack_1ac,param_4);
    FUN_01bd35bc(auStack_16c,param_6,param_6);
    FUN_01bd3b08(auStack_18c,param_5);
  }
  FUN_01bd0c38(auStack_14c,param_8,auStack_1cc);
  FUN_01bd38b4(auStack_12c,auStack_14c,auStack_1ac);
  uVar3 = FUN_01bd3abc(auStack_12c);
  FUN_01bd0c38(auStack_1ec,auStack_12c,auStack_16c);
  FUN_01bd0c38(auStack_10c,param_6,auStack_1cc);
  FUN_01bd0c38(auStack_ec,param_9,auStack_10c);
  FUN_01bd38b4(auStack_cc,auStack_ec,auStack_18c);
  FUN_01bd35bc(auStack_cc,auStack_cc,auStack_cc);
  uVar4 = FUN_01bd3abc(auStack_cc);
  if (((int)((uVar3 | uVar4) - 1 & ~(uVar3 | uVar4)) >> 0x1f &
      ~((int)(uVar2 - 1 & ~uVar2 | uVar1 - 1 & ~uVar1) >> 0x1f)) == 0) {
    FUN_01bd35bc(auStack_ac,auStack_12c,auStack_12c);
    FUN_01bd20e4(auStack_ac,auStack_ac);
    FUN_01bd0c38(auStack_8c,auStack_12c,auStack_ac);
    FUN_01bd0c38(auStack_6c,auStack_1ac,auStack_ac);
    FUN_01bd20e4(auStack_22c,auStack_cc);
    FUN_01bd38b4(auStack_22c,auStack_22c,auStack_8c);
    FUN_01bd38b4(auStack_22c,auStack_22c,auStack_6c);
    FUN_01bd38b4(auStack_22c,auStack_22c,auStack_6c);
    FUN_01bd38b4(auStack_20c,auStack_6c,auStack_22c);
    FUN_01bd0c38(auStack_20c,auStack_20c,auStack_cc);
    FUN_01bd0c38(auStack_4c,auStack_18c,auStack_8c);
    FUN_01bd38b4(auStack_20c,auStack_20c,auStack_4c);
    FUN_01bd38b4(auStack_20c,auStack_20c,auStack_4c);
    FUN_01bd3b3c(auStack_22c,uVar1,param_8,auStack_22c);
    FUN_01bd3b3c(param_1,uVar2,param_4,auStack_22c);
    FUN_01bd3b3c(auStack_20c,uVar1,param_9,auStack_20c);
    FUN_01bd3b3c(param_2,uVar2,param_5,auStack_20c);
    FUN_01bd3b3c(auStack_1ec,uVar1,param_10);
    FUN_01bd3b3c(param_3,uVar2,param_6,auStack_1ec);
    if (local_2c == DAT_01d53560) {
      return 0;
    }
  }
  else if (local_2c == DAT_01d53560) {
    uVar5 = FUN_01bd3cb8(param_1,param_2,param_3,param_4);
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01be31f4();
}

