// FUN_01b62ad4 @ 01b62ad4 size=392 calls_out=5 calls_in=4
// strings: 

undefined8
FUN_01b62ad4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
            undefined1 param_9)

{
  undefined1 auStack_340 [128];
  undefined1 auStack_2c0 [128];
  undefined1 auStack_240 [128];
  undefined1 auStack_1c0 [128];
  undefined1 auStack_140 [32];
  undefined1 local_120;
  undefined1 auStack_100 [32];
  undefined1 local_e0;
  undefined1 auStack_c0 [32];
  undefined1 local_a0;
  undefined1 auStack_80 [32];
  undefined1 local_60;
  int local_2c;
  
  local_2c = DAT_01d53560;
  FUN_01b269d8(auStack_140,param_5,0x20,0);
  FUN_01b269d8(auStack_100,param_5,0x20);
  FUN_01b269d8(auStack_c0,param_5,0x20);
  FUN_01b269d8(auStack_80,param_5,0x20);
  local_120 = param_6;
  local_e0 = param_7;
  local_a0 = param_8;
  local_60 = param_9;
  FUN_01b628dc(auStack_140,auStack_100,auStack_c0,auStack_80,0x21,auStack_340,auStack_2c0,
               auStack_240,auStack_1c0,0x80);
  FUN_01b1e2d0(param_1,auStack_340);
  FUN_01b1e2d0(param_2,auStack_2c0);
  FUN_01b1e2d0(param_3,auStack_240);
  FUN_01b1e2d0(param_4,auStack_1c0);
  FUN_01b6b174(auStack_340,0x200);
  FUN_01b6b174(auStack_140,0x100);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

