// FUN_01b41cc8 @ 01b41cc8 size=172 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_01b41cc8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_58 [68];
  int local_14;
  
  local_14 = DAT_01d53560;
  FUN_01b30d7c(param_2,param_3,param_4,*(undefined4 *)(param_1 + 0xe8),auStack_58,
               *(undefined4 *)(param_1 + 0xec));
  FUN_01b6b174(auStack_58,0x44);
  if (local_14 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

