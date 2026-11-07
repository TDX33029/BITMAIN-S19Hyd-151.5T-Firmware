// FUN_01b6527c @ 01b6527c size=752 calls_out=14 calls_in=1
// strings: 

undefined8 FUN_01b6527c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_16a0 [1024];
  undefined1 auStack_12a0 [636];
  int local_1024;
  undefined1 auStack_ea0 [512];
  undefined1 auStack_ca0 [512];
  undefined1 auStack_aa0 [192];
  undefined1 auStack_9e0 [192];
  undefined1 auStack_920 [128];
  undefined1 auStack_8a0 [64];
  undefined1 auStack_860 [448];
  undefined1 auStack_6a0 [512];
  undefined1 auStack_4a0 [512];
  undefined1 auStack_2a0 [32];
  undefined1 local_280;
  undefined1 auStack_260 [32];
  undefined1 local_240;
  undefined1 auStack_220 [32];
  undefined1 local_200;
  undefined1 auStack_1e0 [32];
  undefined1 local_1c0;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  undefined1 local_40;
  int local_2c;
  
  local_2c = DAT_01d53560;
  local_1024 = param_1;
  FUN_01b269d8(auStack_60,param_3,0x20,0);
  local_40 = 2;
  FUN_01b5b204(auStack_60,0x21,auStack_a0);
  FUN_01b62484(auStack_16a0,auStack_a0,0);
  FUN_01b269d8(auStack_2a0,auStack_80,0x20);
  FUN_01b269d8(auStack_260,auStack_80,0x20);
  FUN_01b269d8(auStack_220,auStack_80,0x20);
  FUN_01b269d8(auStack_1e0,auStack_80,0x20);
  local_200 = 2;
  local_280 = 0;
  local_240 = 1;
  local_1c0 = 3;
  FUN_01b628dc(auStack_2a0,auStack_260,auStack_220,auStack_1e0,0x21,auStack_aa0,auStack_9e0,
               auStack_920,auStack_860,0xc0);
  FUN_01b1e34c(auStack_ea0,auStack_aa0);
  FUN_01b1e34c(auStack_ca0,auStack_9e0);
  FUN_01b1e34c(auStack_6a0,auStack_920);
  FUN_01b1e34c(auStack_4a0,auStack_860);
  FUN_01b6b174(auStack_aa0,0x300);
  FUN_01b6b174(auStack_2a0,0x100);
  FUN_01b29338(auStack_ea0);
  FUN_01b29338(auStack_6a0);
  FUN_01b295a4(auStack_2a0,auStack_ea0);
  FUN_01b1e1c8(auStack_aa0,auStack_16a0,auStack_ea0,auStack_2a0);
  FUN_01b1e1c8(auStack_8a0,auStack_12a0,auStack_ea0,auStack_2a0);
  FUN_01b1e0b8(auStack_aa0);
  FUN_01b1e0b8(auStack_8a0);
  FUN_01b1e118(auStack_aa0,auStack_6a0);
  FUN_01b1e118(auStack_8a0,auStack_4a0);
  FUN_01b28a10(auStack_aa0);
  FUN_01b28a10(auStack_ea0);
  FUN_01b1e160(param_2,auStack_ea0);
  FUN_01b1e160(param_1,auStack_aa0);
  FUN_01b269d8(param_1 + 0x300,auStack_a0,0x20);
  FUN_01b6b174(auStack_a0,0x40);
  FUN_01b6b174(auStack_60,0x21);
  FUN_01b6b174(auStack_16a0,0x800);
  FUN_01b6b174(auStack_6a0,0x400);
  FUN_01b6b174(auStack_ea0,0x400);
  FUN_01b6b174(auStack_2a0,0x200);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

