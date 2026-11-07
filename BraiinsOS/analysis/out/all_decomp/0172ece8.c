// FUN_0172ece8 @ 0172ece8 size=160 calls_out=2 calls_in=8
// strings: 

undefined8 FUN_0172ece8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_50 [68];
  int local_c;
  
  local_c = DAT_018ddaf8;
  FUN_0171b584(param_2,param_3,param_4,*(undefined4 *)(param_1 + 0x118),auStack_50,
               *(undefined4 *)(param_1 + 0x11c));
  if (local_c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

