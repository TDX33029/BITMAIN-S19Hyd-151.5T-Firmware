// FUN_01b48fec @ 01b48fec size=168 calls_out=3 calls_in=1
// strings: 

void FUN_01b48fec(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_1c [8];
  int local_14;
  
  local_14 = DAT_01d53560;
  FUN_01afd61c(auStack_1c,param_2,param_3,0);
  FUN_01b48030(param_1,0x3c9,0x100,0x1010,0,auStack_1c);
  if (local_14 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return;
}

