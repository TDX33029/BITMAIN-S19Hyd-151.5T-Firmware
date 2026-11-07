// FUN_01b417e8 @ 01b417e8 size=260 calls_out=6 calls_in=0
// strings: 

undefined8 FUN_01b417e8(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_1ec [76];
  undefined1 auStack_1a0 [76];
  undefined1 auStack_154 [76];
  undefined1 auStack_108 [76];
  undefined1 auStack_bc [76];
  undefined1 auStack_70 [76];
  int local_24;
  
  local_24 = DAT_01d53560;
  FUN_01bed93e(auStack_1ec,0,0xe4,0);
  FUN_01b1c420(auStack_108,param_3);
  FUN_01b1c420(auStack_bc,param_3 + 0x44);
  FUN_01b1c420(auStack_70,param_3 + 0x88);
  uVar1 = FUN_01b41384();
  FUN_01b3e0b8(uVar1,auStack_1ec,auStack_1a0,auStack_154,auStack_108,auStack_bc,auStack_70,param_4);
  FUN_01b25880(param_2,auStack_1ec);
  FUN_01b25880(param_2 + 0x44,auStack_1a0);
  FUN_01b25880(param_2 + 0x88,auStack_154);
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

