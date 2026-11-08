// FUN_01735e20 @ 01735e20 size=1056 calls_out=7 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/ec/p521.c

undefined8 FUN_01735e20(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined1 auStack_4a0 [76];
  undefined1 auStack_454 [76];
  undefined1 auStack_408 [76];
  undefined1 auStack_3bc [76];
  undefined1 auStack_370 [76];
  undefined1 auStack_324 [76];
  undefined1 auStack_2d8 [76];
  undefined1 auStack_28c [76];
  undefined1 auStack_240 [76];
  undefined1 auStack_1f4 [76];
  undefined1 auStack_1a8 [76];
  undefined1 auStack_15c [76];
  undefined1 auStack_110 [76];
  undefined1 auStack_c4 [76];
  undefined1 auStack_78 [68];
  undefined4 local_34;
  int local_2c;
  undefined4 local_20;
  
  local_34 = param_1;
  iVar1 = FUN_017345b8();
  if (iVar1 != 0) {
    local_20 = 0x15a;
    FUN_016e9cd0(0xf,0,0x77,"/aws-lc/crypto/fipsmodule/ec/p521.c");
    return 0;
  }
  iVar1 = 3;
  local_2c = DAT_018ddaf8;
  FUN_017015e8(auStack_4a0,param_2 + 0x88,&PTR_018bc3f4,0);
  FUN_016ffb08(auStack_408,auStack_4a0);
  FUN_016fe7a8(auStack_3bc,auStack_408,auStack_4a0);
  FUN_016ffb08(auStack_408,auStack_3bc);
  FUN_016ffb08(auStack_408,auStack_408);
  FUN_016fe7a8(auStack_370,auStack_408,auStack_3bc);
  FUN_016ffb08(auStack_408,auStack_370);
  do {
    FUN_016ffb08(auStack_408,auStack_408);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 7;
  FUN_016fe7a8(auStack_324,auStack_408,auStack_370);
  FUN_016ffb08(auStack_408,auStack_324);
  do {
    FUN_016ffb08(auStack_408,auStack_408);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0xf;
  FUN_016fe7a8(auStack_2d8,auStack_408,auStack_324);
  FUN_016ffb08(auStack_408,auStack_2d8);
  do {
    FUN_016ffb08(auStack_408,auStack_408);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x1f;
  FUN_016fe7a8(auStack_28c,auStack_408,auStack_2d8);
  FUN_016ffb08(auStack_408,auStack_28c);
  do {
    FUN_016ffb08(auStack_408,auStack_408);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x3f;
  FUN_016fe7a8(auStack_240,auStack_408,auStack_28c);
  FUN_016ffb08(auStack_408,auStack_240);
  do {
    FUN_016ffb08(auStack_408,auStack_408);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x7f;
  FUN_016fe7a8(auStack_1f4,auStack_408,auStack_240);
  FUN_016ffb08(auStack_408,auStack_1f4);
  do {
    FUN_016ffb08(auStack_408,auStack_408);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0xff;
  FUN_016fe7a8(auStack_1a8,auStack_408,auStack_1f4);
  FUN_016ffb08(auStack_408,auStack_1a8);
  do {
    FUN_016ffb08(auStack_408,auStack_408);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 3;
  FUN_016fe7a8(auStack_15c,auStack_408,auStack_1a8);
  FUN_016ffb08(auStack_408,auStack_15c);
  do {
    FUN_016ffb08(auStack_408,auStack_408);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_016fe7a8(auStack_110,auStack_408,auStack_370);
  FUN_016ffb08(auStack_408,auStack_110);
  FUN_016ffb08(auStack_408,auStack_408);
  FUN_016fe7a8(auStack_c4,auStack_408,auStack_3bc);
  FUN_016ffb08(auStack_408,auStack_c4);
  FUN_016fe7a8(auStack_78,auStack_408,auStack_4a0);
  FUN_016ffb08(auStack_408,auStack_78);
  FUN_016ffb08(auStack_408,auStack_408);
  FUN_016fe7a8(auStack_454,auStack_408,auStack_4a0);
  FUN_016ffb08(auStack_454,auStack_454);
  if (param_3 != 0) {
    FUN_017015e8(auStack_78,param_2);
    FUN_016fe7a8(auStack_78,auStack_78,auStack_454);
    *(undefined2 *)(param_3 + 0x42) = 0;
    FUN_01700d60(param_3,auStack_78);
  }
  if (param_4 != 0) {
    FUN_017015e8(auStack_78,param_2 + 0x44);
    FUN_016ffb08(auStack_454,auStack_454);
    FUN_016fe7a8(auStack_78,auStack_78,auStack_4a0);
    FUN_016fe7a8(auStack_78,auStack_78,auStack_454);
    *(undefined2 *)(param_4 + 0x42) = 0;
    FUN_01700d60(param_4,auStack_78);
  }
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 1;
}

