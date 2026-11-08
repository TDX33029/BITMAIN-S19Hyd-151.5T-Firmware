// FUN_01bd0a28 @ 01bd0a28 size=256 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_01bd0a28(int param_1,int param_2,int param_3)

{
  undefined1 auStack_144 [48];
  undefined1 auStack_114 [48];
  undefined1 auStack_e4 [48];
  undefined1 auStack_b4 [48];
  undefined1 auStack_84 [48];
  undefined1 auStack_54 [48];
  int local_24;
  
  local_24 = DAT_01d53560;
  FUN_01bcfd44(auStack_144,param_2,&PTR_01d3b2b0,0);
  FUN_01bcfd44(auStack_114,param_2 + 0x30);
  FUN_01bcfd44(auStack_e4,param_2 + 0x60);
  FUN_01bcfd44(auStack_b4,param_3);
  FUN_01bcfd44(auStack_84,param_3 + 0x30);
  FUN_01bcfd44(auStack_54,param_3 + 0x60);
  FUN_01bd0224(auStack_144,auStack_144,auStack_b4);
  FUN_01bcfd44(param_1,auStack_144);
  FUN_01bcfd44(param_1 + 0x30,auStack_114);
  FUN_01bcfd44(param_1 + 0x60,auStack_e4);
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

