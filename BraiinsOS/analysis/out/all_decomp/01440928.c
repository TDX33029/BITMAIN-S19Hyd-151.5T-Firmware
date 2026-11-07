// FUN_01440928 @ 01440928 size=92 calls_out=1 calls_in=0
// strings: 

void FUN_01440928(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xb8);
  if ((uVar1 & 1) != 0) {
    (**(code **)(*(int *)(param_1 + 0xb0) + 0xc))(*(undefined4 *)(param_1 + 0xb4));
  }
  if ((uVar1 & 8) != 0) {
    (**(code **)(*(int *)(param_1 + 0xa8) + 0xc))(*(undefined4 *)(param_1 + 0xac));
  }
  if (*(int *)(param_1 + 8) == 5 && *(int *)(param_1 + 0xc) == 0) {
    return;
  }
  FUN_0143e960((int *)(param_1 + 8));
  return;
}

