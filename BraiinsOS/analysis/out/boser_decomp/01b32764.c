// FUN_01b32764 @ 01b32764 size=184 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_01b32764(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_60 [68];
  int local_1c;
  
  local_1c = DAT_01d53560;
  FUN_01b3265c(auStack_60,*(undefined4 *)(param_1 + 0x11c),param_4,*(undefined4 *)(param_1 + 0x11c),
               param_1 + 0x104);
  FUN_01b2bd00(param_1,param_2,param_3,auStack_60);
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

