// FUN_018c2c70 @ 018c2c70 size=96 calls_out=2 calls_in=1
// strings: 

void FUN_018c2c70(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x3c);
  if (uVar1 <= param_2) {
    if (uVar1 == param_2) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    return;
  }
  if (*(uint *)(param_1 + 0x28) < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar1,*(uint *)(param_1 + 0x28),&DAT_01d229a0);
  }
  FUN_01bed864(*(int *)(param_1 + 0x24),*(int *)(param_1 + 0x24) + param_2,uVar1 - param_2);
  *(uint *)(param_1 + 0x3c) = uVar1 - param_2;
  return;
}

