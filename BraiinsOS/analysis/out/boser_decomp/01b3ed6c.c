// FUN_01b3ed6c @ 01b3ed6c size=160 calls_out=2 calls_in=5
// strings: 

undefined8 FUN_01b3ed6c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_50 [68];
  int local_c;
  
  local_c = DAT_01d53560;
  FUN_01b3134c(param_2,param_3,param_4,*(undefined4 *)(param_1 + 0x118),auStack_50,
               *(undefined4 *)(param_1 + 0x11c));
  if (local_c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

