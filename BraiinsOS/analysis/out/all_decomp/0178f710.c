// FUN_0178f710 @ 0178f710 size=232 calls_out=5 calls_in=1
// strings: 

undefined8 FUN_0178f710(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined1 auStack_2c [32];
  int local_c;
  
  local_c = DAT_018ddaf8;
  FUN_01791c40(*param_1,auStack_2c);
  if (param_3 != 0) {
    FUN_016dd1aa(param_2,auStack_2c,param_3);
  }
  FUN_01791aa0(*param_1,auStack_2c,0x20);
  FUN_0178ed4c(auStack_2c,0x20);
  if (local_c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

