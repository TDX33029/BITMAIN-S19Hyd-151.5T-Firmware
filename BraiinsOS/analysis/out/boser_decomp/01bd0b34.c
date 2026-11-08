// FUN_01bd0b34 @ 01bd0b34 size=180 calls_out=3 calls_in=2
// strings: 

undefined8 FUN_01bd0b34(int param_1)

{
  undefined1 auStack_c0 [48];
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [76];
  int local_14;
  
  local_14 = DAT_01d53560;
  FUN_01bd0740(auStack_c0);
  FUN_01bcfd44(param_1,auStack_c0);
  FUN_01bcfd44(param_1 + 0x30,auStack_90);
  FUN_01bcfd44(param_1 + 0x60,auStack_60);
  if (local_14 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

