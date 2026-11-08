// FUN_00832f1c @ 00832f1c size=72 calls_out=2 calls_in=0
// strings: 

void FUN_00832f1c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (1 < (uint)param_2[2]) {
    if ((uint)param_2[2] < 0x15) {
      FUN_008c4190();
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      *param_1 = *param_2;
      param_1[1] = uVar1;
      param_1[2] = uVar2;
      return;
    }
    FUN_008b97d0(param_2[1]);
  }
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}

