// FUN_01b3ab18 @ 01b3ab18 size=252 calls_out=8 calls_in=1
// strings: 

undefined8 FUN_01b3ab18(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_154 [40];
  undefined1 auStack_12c [40];
  undefined1 auStack_104 [40];
  undefined1 auStack_dc [40];
  undefined1 auStack_b4 [40];
  undefined1 auStack_8c [80];
  byte local_3c [31];
  byte local_1d;
  int local_1c;
  
  local_1c = DAT_01d53560;
  FUN_01b26974(local_3c,param_2,0x20,0);
  local_3c[0] = local_3c[0] & 0xf8;
  local_1d = local_1d & 0x7f | 0x40;
  FUN_01b39010(auStack_dc,local_3c);
  FUN_01b21f9c(auStack_154,auStack_8c,auStack_b4);
  FUN_01b21d60(auStack_12c,auStack_8c,auStack_b4);
  FUN_01b214c0(auStack_104,auStack_12c);
  FUN_01b20ba0(auStack_104,auStack_154,auStack_104);
  FUN_01b21754(param_1,auStack_104);
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

