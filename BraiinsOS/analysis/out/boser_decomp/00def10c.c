// FUN_00def10c @ 00def10c size=64 calls_out=1 calls_in=1
// strings: 

void FUN_00def10c(undefined4 *param_1)

{
  FUN_019bb7e0(*param_1,param_1[1]);
  FUN_019bb7e0(param_1[3],param_1[4]);
  if (param_1[6] != -0x80000000) {
    FUN_019bb7e0(param_1[6],param_1[7]);
  }
                    /* WARNING: Could not recover jumptable at 0x00def148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[9] + 0x10))(param_1 + 0xc,param_1[10],param_1[0xb]);
  return;
}

