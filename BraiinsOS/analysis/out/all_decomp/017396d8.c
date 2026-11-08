// FUN_017396d8 @ 017396d8 size=292 calls_out=6 calls_in=0
// strings: 

undefined8
FUN_017396d8(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

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
  FUN_016dd606(auStack_1f4,0,0xe4,0);
  FUN_017015e8(auStack_110,param_4);
  FUN_017015e8(auStack_c4,param_4 + 0x44);
  FUN_017015e8(auStack_78,param_4 + 0x88);
  uVar1 = FUN_017327e0();
  FUN_0173879c(uVar1,auStack_1f4,auStack_1a8,auStack_15c,param_3,auStack_110,auStack_c4,auStack_78,
               param_5);
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

