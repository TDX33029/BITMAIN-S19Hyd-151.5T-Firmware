// FUN_01b5c708 @ 01b5c708 size=468 calls_out=7 calls_in=2
// strings: 

undefined8
FUN_01b5c708(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
            undefined2 param_9)

{
  undefined1 auStack_12c0 [668];
  undefined4 local_1024;
  undefined1 auStack_1000 [704];
  undefined1 auStack_d40 [704];
  undefined1 auStack_a80 [704];
  undefined1 auStack_7c0 [64];
  undefined2 local_780;
  undefined1 auStack_760 [64];
  undefined2 local_720;
  undefined1 auStack_700 [64];
  undefined2 local_6c0;
  undefined1 auStack_6a0 [64];
  undefined2 local_660;
  undefined1 auStack_630 [1540];
  int local_2c;
  
  local_2c = DAT_01d53560;
  local_1024 = param_1;
  FUN_01b269d8(auStack_7c0,param_5,0x40,0);
  FUN_01b269d8(auStack_760,param_5,0x40);
  FUN_01b269d8(auStack_700,param_5,0x40);
  FUN_01b269d8(auStack_6a0,param_5,0x40);
  local_780 = param_6;
  local_720 = param_7;
  local_6c0 = param_8;
  local_660 = param_9;
  FUN_01b5b5fc(auStack_630);
  FUN_01b5b678(auStack_630,auStack_7c0,auStack_760,auStack_700,auStack_6a0);
  FUN_01b5c1a4(auStack_12c0,auStack_1000,auStack_d40,auStack_a80,5,auStack_630);
  FUN_01b1d768(param_1,auStack_12c0);
  FUN_01b1d768(param_2,auStack_1000);
  FUN_01b1d768(param_3,auStack_d40);
  FUN_01b1d768(param_4,auStack_a80);
  FUN_01b6b174(auStack_12c0,0xb00);
  FUN_01b6b174(auStack_7c0,0x180);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

