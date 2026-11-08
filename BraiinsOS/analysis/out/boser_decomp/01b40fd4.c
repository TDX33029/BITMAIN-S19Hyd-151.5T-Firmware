// FUN_01b40fd4 @ 01b40fd4 size=208 calls_out=5 calls_in=0
// strings: 

undefined8 FUN_01b40fd4(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_ac [48];
  undefined1 auStack_7c [48];
  undefined1 auStack_4c [48];
  int local_1c;
  
  local_1c = DAT_01d53560;
  FUN_01bed93e(auStack_ac,0,0x90,0);
  uVar1 = FUN_01b40c4c();
  FUN_01b3e4e0(uVar1,auStack_ac,auStack_7c,auStack_4c,param_3);
  FUN_01b19a24(param_2,auStack_ac);
  FUN_01b19a24(param_2 + 0x44,auStack_7c);
  FUN_01b19a24(param_2 + 0x88,auStack_4c);
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

