// FUN_013e68f0 @ 013e68f0 size=68 calls_out=3 calls_in=3
// strings: 

void FUN_013e68f0(int param_1)

{
  FUN_013e6998();
  FUN_00756350(param_1 + 0xc);
  FUN_00756350(param_1 + 0x18);
  FUN_00756350(param_1 + 0x24);
  FUN_00756350(param_1 + 0x30);
  if (*(int *)(param_1 + 0x3c) == -0x80000000) {
    return;
  }
  FUN_013d1214((int *)(param_1 + 0x3c));
  return;
}

