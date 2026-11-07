// FUN_01bc98b4 @ 01bc98b4 size=168 calls_out=3 calls_in=2
// strings: 

undefined8 FUN_01bc98b4(undefined4 param_1)

{
  undefined1 auStack_34 [31];
  byte local_15;
  int local_14;
  
  local_14 = DAT_01d53560;
  local_15 = 0;
  FUN_01bc9860(auStack_34);
  local_15 = local_15 & 0x7f;
  FUN_01bc8a44(param_1,auStack_34);
  if (local_14 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

