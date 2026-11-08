// FUN_017334ac @ 017334ac size=172 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_017334ac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_58 [68];
  int local_14;
  
  local_14 = DAT_018ddaf8;
  FUN_0171af10(param_2,param_3,param_4,*(undefined4 *)(param_1 + 0xe8),auStack_58,
               *(undefined4 *)(param_1 + 0xec));
  FUN_0177aaa0(auStack_58,0x44);
  if (local_14 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

