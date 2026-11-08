// FUN_01732b84 @ 01732b84 size=232 calls_out=5 calls_in=0
// strings: 

undefined8 FUN_01732b84(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_100 [76];
  undefined1 auStack_b4 [76];
  undefined1 auStack_68 [76];
  int local_1c;
  
  local_1c = DAT_018ddaf8;
  FUN_016dd606(auStack_100,0,0xe4,0);
  uVar1 = FUN_017327e0();
  FUN_0172e138(uVar1,auStack_100,auStack_b4,auStack_68,param_3);
  *(undefined2 *)(param_2 + 0x42) = 0;
  FUN_01700d60(param_2,auStack_100);
  *(undefined2 *)(param_2 + 0x86) = 0;
  FUN_01700d60(param_2 + 0x44,auStack_b4);
  *(undefined2 *)(param_2 + 0xca) = 0;
  FUN_01700d60(param_2 + 0x88,auStack_68);
  if (local_1c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

