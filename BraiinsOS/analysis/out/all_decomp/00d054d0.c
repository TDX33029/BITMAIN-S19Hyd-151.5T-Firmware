// FUN_00d054d0 @ 00d054d0 size=76 calls_out=3 calls_in=6
// strings: 

void FUN_00d054d0(int param_1)

{
  FUN_00ad1f4c();
  if (*(int *)(param_1 + 0x598) == 2 && *(int *)(param_1 + 0x59c) == 0) {
    FUN_00c48cbc(param_1 + 0x5c8);
    return;
  }
  FUN_00c48cbc(param_1 + 0x848);
  FUN_00ad1edc((int *)(param_1 + 0x598));
  return;
}

