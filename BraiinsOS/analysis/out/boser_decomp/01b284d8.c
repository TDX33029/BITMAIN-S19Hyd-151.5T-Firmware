// FUN_01b284d8 @ 01b284d8 size=172 calls_out=3 calls_in=2
// strings: 

undefined8 FUN_01b284d8(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_34 [31];
  byte local_15;
  int local_14;
  
  local_14 = DAT_01d53560;
  local_15 = 0;
  FUN_01b26974(auStack_34,param_2,0x20);
  local_15 = local_15 & 0x7f;
  FUN_01b21b54(param_1,auStack_34);
  if (local_14 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

