// FUN_01b469f8 @ 01b469f8 size=268 calls_out=6 calls_in=0
// strings: 

undefined8
FUN_01b469f8(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_1f4 [76];
  undefined1 auStack_1a8 [76];
  undefined1 auStack_15c [76];
  undefined1 auStack_110 [76];
  undefined1 auStack_c4 [76];
  undefined1 auStack_78 [76];
  int local_2c;
  
  local_2c = DAT_01d53560;
  FUN_01bed93e(auStack_1f4,0,0xe4,0);
  FUN_01b1c420(auStack_110,param_4);
  FUN_01b1c420(auStack_c4,param_4 + 0x44);
  FUN_01b1c420(auStack_78,param_4 + 0x88);
  uVar1 = FUN_01b41384();
  FUN_01b4639c(uVar1,auStack_1f4,auStack_1a8,auStack_15c,param_3,auStack_110,auStack_c4,auStack_78,
               param_5);
  FUN_01b25880(param_2,auStack_1f4);
  FUN_01b25880(param_2 + 0x44,auStack_1a8);
  FUN_01b25880(param_2 + 0x88,auStack_15c);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

