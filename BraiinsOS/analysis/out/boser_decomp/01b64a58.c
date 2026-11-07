// FUN_01b64a58 @ 01b64a58 size=924 calls_out=19 calls_in=2
// strings: 

undefined8 FUN_01b64a58(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined1 auStack_2060 [60];
  int local_2024;
  undefined1 auStack_1c60 [1024];
  undefined1 auStack_1860 [192];
  undefined1 auStack_17a0 [192];
  undefined1 auStack_16e0 [128];
  undefined1 auStack_1660 [64];
  undefined1 auStack_1620 [448];
  undefined1 auStack_1460 [512];
  undefined1 auStack_1260 [512];
  undefined1 auStack_1060 [60];
  int local_1024;
  undefined1 auStack_c60 [512];
  undefined1 auStack_a60 [512];
  undefined1 auStack_860 [32];
  undefined1 local_840;
  undefined1 auStack_820 [32];
  undefined1 local_800;
  undefined1 auStack_7e0 [32];
  undefined1 local_7c0;
  undefined1 auStack_7a0 [32];
  undefined1 local_780;
  undefined1 auStack_660 [512];
  undefined1 auStack_460 [512];
  undefined1 auStack_260 [512];
  undefined1 auStack_60 [52];
  int local_2c;
  
  local_2c = DAT_01d53560;
  local_2024 = param_1;
  local_1024 = param_1;
  FUN_01b1e194(auStack_1060,param_3,&PTR_01d3b2b0,0);
  FUN_01b269d8(auStack_60,param_3 + 0x300,0x20);
  FUN_01b1dfe0(auStack_460,param_2);
  FUN_01b62484(auStack_2060,auStack_60,1);
  FUN_01b269d8(auStack_860,param_4,0x20);
  FUN_01b269d8(auStack_820,param_4,0x20);
  FUN_01b269d8(auStack_7e0,param_4,0x20);
  FUN_01b269d8(auStack_7a0,param_4,0x20);
  local_840 = 0;
  local_800 = 1;
  local_7c0 = 2;
  local_780 = 3;
  FUN_01b628dc(auStack_860,auStack_820,auStack_7e0,auStack_7a0,0x21,auStack_1860,auStack_17a0,
               auStack_16e0,auStack_1620,0xc0);
  FUN_01b1e34c(auStack_c60,auStack_1860);
  FUN_01b1e34c(auStack_a60,auStack_17a0);
  FUN_01b1e2d0(auStack_1460,auStack_16e0);
  FUN_01b1e2d0(auStack_1260,auStack_1620);
  FUN_01b6b174(auStack_1860,0x300);
  FUN_01b6b174(auStack_860,0x100);
  FUN_01b5b8f0(auStack_660,param_4,4);
  FUN_01b29338(auStack_c60);
  FUN_01b295a4(auStack_860,auStack_c60);
  FUN_01b1e1c8(auStack_1860,auStack_2060,auStack_c60,auStack_860);
  FUN_01b1e1c8(auStack_1660,auStack_1c60,auStack_c60,auStack_860);
  FUN_01b1e1c8(auStack_260,auStack_1060,auStack_c60,auStack_860);
  FUN_01b293d8(auStack_1860);
  FUN_01b293d8(auStack_1660);
  FUN_01b293d8(auStack_260);
  FUN_01b1e118(auStack_1860,auStack_1460);
  FUN_01b1e118(auStack_1660,auStack_1260);
  FUN_01b1e118(auStack_260,auStack_660);
  FUN_01b1e118(auStack_260,auStack_460);
  FUN_01b28a10(auStack_1860);
  FUN_01b2898c(auStack_260);
  FUN_01b1dca8(param_1,auStack_1860);
  FUN_01b1dca8(param_1 + 0x140,auStack_1660);
  FUN_01b1db90(param_1 + 0x280,auStack_260);
  FUN_01b6b174(auStack_60,0x20);
  FUN_01b6b174(auStack_c60,0x400);
  FUN_01b6b174(auStack_860,0x200);
  FUN_01b6b174(auStack_1860,0x400);
  FUN_01b6b174(auStack_260,0x200);
  FUN_01b6b174(auStack_2060,0x800);
  FUN_01b6b174(auStack_460,0x200);
  FUN_01b6b174(auStack_1460,0x400);
  FUN_01b6b174(auStack_660,0x200);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

