// FUN_01b4170c @ 01b4170c size=208 calls_out=5 calls_in=0
// strings: 

undefined8 FUN_01b4170c(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_100 [76];
  undefined1 auStack_b4 [76];
  undefined1 auStack_68 [76];
  int local_1c;
  
  local_1c = DAT_01d53560;
  FUN_01bed93e(auStack_100,0,0xe4,0);
  uVar1 = FUN_01b41384();
  FUN_01b3e4e0(uVar1,auStack_100,auStack_b4,auStack_68,param_3);
  FUN_01b25880(param_2,auStack_100);
  FUN_01b25880(param_2 + 0x44,auStack_b4);
  FUN_01b25880(param_2 + 0x88,auStack_68);
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

