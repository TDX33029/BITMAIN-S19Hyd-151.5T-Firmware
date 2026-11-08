// FUN_01bd0658 @ 01bd0658 size=220 calls_out=6 calls_in=1
// strings: 

undefined8 FUN_01bd0658(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_150;
  undefined4 local_14c [3];
  undefined1 auStack_140 [48];
  undefined1 auStack_110 [144];
  undefined1 auStack_80 [100];
  int local_1c;
  
  local_1c = DAT_01d53560;
  FUN_01bcffec(&local_150,local_14c,param_2,0);
  FUN_01bcfe90(auStack_140,param_3,local_14c[0]);
  FUN_01bd05b0(auStack_80,auStack_110);
  FUN_01bcfc14(auStack_110,auStack_80,local_150);
  FUN_01bd0224(param_1,param_1,auStack_140);
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

