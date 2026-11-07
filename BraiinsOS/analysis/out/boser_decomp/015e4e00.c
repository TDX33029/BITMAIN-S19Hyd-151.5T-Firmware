// FUN_015e4e00 @ 015e4e00 size=32 calls_out=0 calls_in=0
// strings: 

void FUN_015e4e00(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  if (param_4 <= *(uint *)(param_1 + 0x1c) &&
      (uint)(*(uint *)(param_1 + 0x18) <= param_3) <= param_4 - *(uint *)(param_1 + 0x1c)) {
    *(uint *)(param_1 + 0x18) = param_3;
    *(uint *)(param_1 + 0x1c) = param_4;
  }
  return;
}

