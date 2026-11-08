// FUN_0007f5ec @ 0007f5ec  size=128  callers=1
// program: bmminer


void FUN_0007f5ec(int param_1)

{
  uint local_c;
  
  for (local_c = 0; local_c < *(uint *)(param_1 + 0xc); local_c = local_c + 1) {
    FUN_0007e8e0(*(undefined4 *)(*(int *)(param_1 + 0x10) + local_c * 4));
  }
  FUN_0007d8e8(*(undefined4 *)(param_1 + 0x10));
  FUN_0007d8e8(param_1);
  return;
}

