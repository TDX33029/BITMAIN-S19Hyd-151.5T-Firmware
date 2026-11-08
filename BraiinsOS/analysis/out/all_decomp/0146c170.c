// FUN_0146c170 @ 0146c170 size=92 calls_out=1 calls_in=0
// strings: 

void FUN_0146c170(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x70);
  if ((uVar1 & 1) != 0) {
    (**(code **)(*(int *)(param_1 + 0x68) + 0xc))(*(undefined4 *)(param_1 + 0x6c));
  }
  if ((uVar1 & 8) != 0) {
    (**(code **)(*(int *)(param_1 + 0x60) + 0xc))(*(undefined4 *)(param_1 + 100));
  }
  if (*(int *)(param_1 + 8) == 4 && *(int *)(param_1 + 0xc) == 0) {
    return;
  }
  FUN_0146b2dc((int *)(param_1 + 8));
  return;
}

