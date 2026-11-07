// FUN_012b97ec @ 012b97ec size=60 calls_out=1 calls_in=2
// strings: 

void FUN_012b97ec(int param_1,int param_2,int param_3)

{
  if (param_3 == param_2) {
    return;
  }
  param_1 = param_1 + param_2 * 0x14;
  for (param_3 = param_3 - param_2; param_3 != 0; param_3 = param_3 + -1) {
    FUN_012b9828(param_1);
    param_1 = param_1 + 0x14;
  }
  return;
}

