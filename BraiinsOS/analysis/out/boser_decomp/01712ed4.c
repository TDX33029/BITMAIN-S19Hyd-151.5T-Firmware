// FUN_01712ed4 @ 01712ed4 size=64 calls_out=0 calls_in=4
// strings: 

void FUN_01712ed4(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xb0);
  if ((uVar1 & 1) != 0) {
    (**(code **)(*(int *)(param_1 + 0xa8) + 0xc))(*(undefined4 *)(param_1 + 0xac));
  }
  if ((uVar1 & 8) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01712f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0xa0) + 0xc))(*(undefined4 *)(param_1 + 0xa4));
  return;
}

