// FUN_00f202a4 @ 00f202a4 size=56 calls_out=1 calls_in=2
// strings: 

void FUN_00f202a4(undefined4 *param_1)

{
  if (param_1[2] != 0) {
    (**(code **)(param_1[2] + 0x10))(param_1 + 5,param_1[3],param_1[4]);
  }
  FUN_00f80320(*param_1,param_1[1]);
  return;
}

