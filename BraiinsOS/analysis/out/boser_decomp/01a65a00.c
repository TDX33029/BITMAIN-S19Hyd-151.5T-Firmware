// FUN_01a65a00 @ 01a65a00 size=244 calls_out=6 calls_in=2
// strings: path wasn't matched so endpoint shouldn't exist

void FUN_01a65a00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *local_f8;
  int local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_0070d58c(&local_f8,*(int *)(param_1 + 0x20) + 8,param_2,param_3);
  if (local_f8 == (undefined4 *)0x0) {
    FUN_01a65c90(&local_30,param_1,param_2,param_3,param_4);
    if (local_30 != -0x7fffffff) {
      local_c0 = local_30;
      uStack_bc = uStack_2c;
      uStack_b8 = uStack_28;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc("path wasn\'t matched so endpoint shouldn\'t exist",0x2f,&local_c0,&DAT_01d2cce8,
                   &DAT_01d2ccb8);
    }
  }
  else {
    FUN_0070bb70(&local_c0,param_1,*local_f8,param_4);
    if (local_c0 != 4) {
      FUN_01a65b58(&local_c0);
    }
    if (local_f4 == 0) {
      FUN_0134aee0(uStack_f0,uStack_ec,4,0x10);
      return;
    }
  }
  return;
}

