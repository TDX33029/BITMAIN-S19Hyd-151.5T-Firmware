// FUN_01732c78 @ 01732c78 size=288 calls_out=6 calls_in=0
// strings: 

undefined8 FUN_01732c78(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_1ec [76];
  undefined1 auStack_1a0 [76];
  undefined1 auStack_154 [76];
  undefined1 auStack_108 [76];
  undefined1 auStack_bc [76];
  undefined1 auStack_70 [76];
  int local_24;
  
  local_24 = DAT_018ddaf8;
  FUN_016dd606(auStack_1ec,0,0xe4);
  FUN_017015e8(auStack_108,param_3);
  FUN_017015e8(auStack_bc,param_3 + 0x44);
  FUN_017015e8(auStack_70,param_3 + 0x88);
  uVar1 = FUN_017327e0();
  FUN_0172d888(uVar1,auStack_1ec,auStack_1a0,auStack_154,auStack_108,auStack_bc,auStack_70,param_4);
  *(undefined2 *)(param_2 + 0x42) = 0;
  FUN_01700d60(param_2,auStack_1ec);
  *(undefined2 *)(param_2 + 0x86) = 0;
  FUN_01700d60(param_2 + 0x44,auStack_1a0);
  *(undefined2 *)(param_2 + 0xca) = 0;
  FUN_01700d60(param_2 + 0x88,auStack_154);
  if (local_24 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

