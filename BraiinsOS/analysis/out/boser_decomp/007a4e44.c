// FUN_007a4e44 @ 007a4e44 size=56 calls_out=2 calls_in=8
// strings: 

void FUN_007a4e44(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x3c) < (int)(uint)(uVar1 == 0)) {
    FUN_013cb19c();
    return;
  }
  *(uint *)(param_1 + 0x38) = uVar1 - 0x100;
  *(uint *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - (uint)(uVar1 < 0x100);
  FUN_007a4e7c();
  return;
}

