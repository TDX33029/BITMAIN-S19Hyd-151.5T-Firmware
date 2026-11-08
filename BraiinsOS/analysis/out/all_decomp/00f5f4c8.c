// FUN_00f5f4c8 @ 00f5f4c8 size=28 calls_out=0 calls_in=5
// strings: 

bool FUN_00f5f4c8(int *param_1)

{
  DataMemoryBarrier(0xb);
  return *(int *)(*param_1 + 0x10) == 1;
}

