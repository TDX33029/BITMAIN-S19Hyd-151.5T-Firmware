// FUN_01b410b0 @ 01b410b0 size=260 calls_out=6 calls_in=0
// strings: 

undefined8 FUN_01b410b0(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_144 [48];
  undefined1 auStack_114 [48];
  undefined1 auStack_e4 [48];
  undefined1 auStack_b4 [48];
  undefined1 auStack_84 [48];
  undefined1 auStack_54 [48];
  int local_24;
  
  local_24 = DAT_01d53560;
  FUN_01bed93e(auStack_144,0,0x90,0);
  FUN_01b19bd0(auStack_b4,param_3);
  FUN_01b19bd0(auStack_84,param_3 + 0x44);
  FUN_01b19bd0(auStack_54,param_3 + 0x88);
  uVar1 = FUN_01b40c4c();
  FUN_01b3e0b8(uVar1,auStack_144,auStack_114,auStack_e4,auStack_b4,auStack_84,auStack_54,param_4);
  FUN_01b19a24(param_2,auStack_144);
  FUN_01b19a24(param_2 + 0x44,auStack_114);
  FUN_01b19a24(param_2 + 0x88,auStack_e4);
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

