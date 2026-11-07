// FUN_01b3ecc0 @ 01b3ecc0 size=160 calls_out=2 calls_in=4
// strings: 

undefined8 FUN_01b3ecc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_50 [68];
  int local_c;
  
  local_c = DAT_01d53560;
  FUN_01b30d7c(param_2,param_3,param_4,*(undefined4 *)(param_1 + 0x118),auStack_50,
               *(undefined4 *)(param_1 + 0x11c));
  if (local_c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

