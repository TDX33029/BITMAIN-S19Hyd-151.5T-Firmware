// FUN_0171ccec @ 0171ccec size=192 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_0171ccec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_60 [68];
  int local_1c;
  
  local_1c = DAT_018ddaf8;
  FUN_0171cba8(auStack_60,*(undefined4 *)(param_1 + 0x11c),param_4,*(undefined4 *)(param_1 + 0x11c),
               param_1 + 0x104);
  FUN_0171554c(param_1,param_2,param_3,auStack_60);
  if (local_1c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

