// FUN_015e3d90 @ 015e3d90 size=32 calls_out=0 calls_in=0
// strings: 

void FUN_015e3d90(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  if (param_4 <= *(uint *)(param_1 + 0xc) &&
      (uint)(*(uint *)(param_1 + 8) <= param_3) <= param_4 - *(uint *)(param_1 + 0xc)) {
    *(uint *)(param_1 + 8) = param_3;
    *(uint *)(param_1 + 0xc) = param_4;
  }
  return;
}

