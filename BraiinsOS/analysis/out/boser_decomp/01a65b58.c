// FUN_01a65b58 @ 01a65b58 size=136 calls_out=4 calls_in=2
// strings: 

void FUN_01a65b58(int *param_1)

{
  if (*param_1 == 3) {
    FUN_017ce5f0(param_1[1],param_1[2]);
    return;
  }
  FUN_00a28374(param_1);
  FUN_00a28374(param_1 + 3);
  FUN_00a28374(param_1 + 6);
  FUN_00a28374(param_1 + 9);
  FUN_00a28374(param_1 + 0xc);
  FUN_00a28374(param_1 + 0xf);
  FUN_00a28374(param_1 + 0x12);
  FUN_00a28374(param_1 + 0x15);
  FUN_00a28374(param_1 + 0x18);
  FUN_009436dc(param_1 + 0x1b);
  if ((uint)param_1[0x1e] < 2) {
    return;
  }
  FUN_012840cc(param_1 + 0x1f);
  return;
}

