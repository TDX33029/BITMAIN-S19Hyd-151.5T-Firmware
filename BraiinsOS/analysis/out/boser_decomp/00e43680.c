// FUN_00e43680 @ 00e43680 size=48 calls_out=3 calls_in=1
// strings: 

void FUN_00e43680(int param_1)

{
  bool bVar1;
  
  FUN_0142e6dc();
  bVar1 = *(uint *)(param_1 + 0x40) < 2;
  if ((uint)-*(int *)(param_1 + 0x44) < (uint)bVar1) {
    FUN_00a210b0((uint *)(param_1 + 0x40),-(*(int *)(param_1 + 0x44) + (uint)!bVar1));
  }
  FUN_0178e884(*(undefined4 *)(param_1 + 0x78));
  return;
}

