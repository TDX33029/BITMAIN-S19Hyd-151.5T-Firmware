// FUN_01bd0740 @ 01bd0740 size=632 calls_out=8 calls_in=1
// strings: 

undefined8 FUN_01bd0740(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_9a0 [4];
  undefined4 local_99c [7];
  undefined1 auStack_980 [48];
  undefined1 auStack_950 [48];
  undefined1 auStack_920 [48];
  undefined1 auStack_8f0 [144];
  undefined1 auStack_860 [144];
  undefined1 auStack_7d0 [144];
  undefined1 auStack_740 [144];
  undefined1 auStack_6b0 [144];
  undefined1 auStack_620 [144];
  undefined1 auStack_590 [144];
  undefined1 auStack_500 [144];
  undefined1 auStack_470 [144];
  undefined1 auStack_3e0 [144];
  undefined1 auStack_350 [144];
  undefined1 auStack_2c0 [144];
  undefined1 auStack_230 [144];
  undefined1 auStack_1a0 [144];
  undefined1 auStack_110 [176];
  ushort local_60 [23];
  byte local_31;
  int local_2c;
  
  local_2c = DAT_01d53560;
  FUN_01bcfaf8(local_60,0x31,param_2,0xc);
  FUN_01bcfd44(auStack_980,param_3);
  FUN_01bcfd44(auStack_950,param_4);
  FUN_01bcfd44(auStack_920,&DAT_00564274);
  FUN_01bd003c(auStack_8f0,auStack_980);
  FUN_01bd0224(auStack_860,auStack_8f0,auStack_980);
  FUN_01bd003c(auStack_7d0,auStack_8f0);
  FUN_01bd003c(auStack_6b0,auStack_860);
  FUN_01bd003c(auStack_590,auStack_7d0);
  FUN_01bd003c(auStack_350,auStack_6b0);
  FUN_01bd0224(auStack_740,auStack_7d0,auStack_980);
  FUN_01bd0224(auStack_620,auStack_6b0,auStack_980);
  FUN_01bd0224(auStack_500,auStack_590,auStack_980);
  FUN_01bd0224(auStack_2c0,auStack_350,auStack_980);
  FUN_01bd003c(auStack_230,auStack_620);
  FUN_01bd003c(auStack_470,auStack_740);
  FUN_01bd0224(auStack_1a0,auStack_230,auStack_980);
  FUN_01bd0224(auStack_3e0,auStack_470,auStack_980);
  FUN_01bd003c(auStack_110,auStack_590);
  FUN_01bcffec(auStack_9a0,local_99c,local_31 >> 3);
  FUN_01bcfe90(param_1,auStack_980,local_99c[0]);
  iVar1 = 0x17c;
  while( true ) {
    FUN_01bd003c(param_1,param_1);
    FUN_01bd003c(param_1,param_1);
    FUN_01bd003c(param_1,param_1);
    FUN_01bd003c(param_1,param_1);
    FUN_01bd003c(param_1,param_1);
    if (iVar1 + -5 == 0) break;
    FUN_01bd0658(param_1,*(ushort *)((int)local_60 + (iVar1 - 6U >> 3)) >> (iVar1 - 6U & 7) & 0x3f,
                 auStack_980);
    iVar1 = iVar1 + -5;
  }
  FUN_01bd0658(param_1,((byte)local_60[0] & 0x1f) << 1,auStack_980);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

