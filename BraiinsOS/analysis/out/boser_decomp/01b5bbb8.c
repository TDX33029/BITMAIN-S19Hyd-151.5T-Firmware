// FUN_01b5bbb8 @ 01b5bbb8 size=256 calls_out=5 calls_in=6
// strings: 

undefined8
FUN_01b5bbb8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,undefined4 param_7,int param_8)

{
  undefined1 auStack_1b0 [388];
  int local_2c;
  
  local_2c = DAT_01d53560;
  FUN_01b5b5e4(auStack_1b0,param_2,0);
  FUN_01b5b638(auStack_1b0,param_3,param_4);
  if (param_6 != 0) {
    FUN_01b5b638(auStack_1b0,param_5,param_6);
  }
  if (param_8 != 0) {
    FUN_01b5b638(auStack_1b0,param_7,param_8);
  }
  FUN_01b5b9d0(param_1,auStack_1b0,param_2);
  FUN_01b6b174(auStack_1b0,0x180);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

