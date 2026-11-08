// FUN_01b5b8f0 @ 01b5b8f0 size=212 calls_out=5 calls_in=2
// strings: 

undefined8 FUN_01b5b8f0(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined1 auStack_e0 [128];
  undefined1 auStack_60 [32];
  undefined1 local_40;
  int local_1c;
  
  local_1c = DAT_01d53560;
  FUN_01b269d8(auStack_60,param_2,0x20,0);
  local_40 = param_3;
  FUN_01b5b7f8(auStack_60,0x21,auStack_e0,0x80);
  FUN_01b1e2d0(param_1,auStack_e0);
  FUN_01b6b174(auStack_e0,0x80);
  FUN_01b6b174(auStack_60,0x21);
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

