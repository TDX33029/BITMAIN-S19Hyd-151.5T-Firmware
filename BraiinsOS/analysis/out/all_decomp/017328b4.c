// FUN_017328b4 @ 017328b4 size=328 calls_out=5 calls_in=0
// strings: 

undefined8 FUN_017328b4(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 auStack_1f4 [76];
  undefined1 auStack_1a8 [76];
  undefined1 auStack_15c [76];
  undefined1 auStack_110 [76];
  undefined1 auStack_c4 [76];
  undefined1 auStack_78 [76];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  FUN_017015e8(auStack_1f4,param_3,&PTR_018bc3f4,0);
  FUN_017015e8(auStack_1a8,param_3 + 0x44);
  FUN_017015e8(auStack_15c,param_3 + 0x88);
  FUN_017015e8(auStack_110,param_4);
  FUN_017015e8(auStack_c4,param_4 + 0x44);
  FUN_017015e8(auStack_78,param_4 + 0x88);
  uVar1 = FUN_017327e0();
  FUN_0172d238(uVar1,auStack_1f4,auStack_1a8,auStack_15c,auStack_1f4,auStack_1a8,auStack_15c,0,
               auStack_110,auStack_c4,auStack_78);
  *(undefined2 *)(param_2 + 0x42) = 0;
  FUN_01700d60(param_2,auStack_1f4);
  *(undefined2 *)(param_2 + 0x86) = 0;
  FUN_01700d60(param_2 + 0x44,auStack_1a8);
  *(undefined2 *)(param_2 + 0xca) = 0;
  FUN_01700d60(param_2 + 0x88,auStack_15c);
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

