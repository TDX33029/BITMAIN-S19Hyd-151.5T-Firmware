// FUN_01712d5c @ 01712d5c size=64 calls_out=0 calls_in=5
// strings: 

void FUN_01712d5c(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((uVar1 & 1) != 0) {
    (**(code **)(*(int *)(param_1 + 0x10) + 0xc))(*(undefined4 *)(param_1 + 0x14));
  }
  if ((uVar1 & 8) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01712d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 8) + 0xc))(*(undefined4 *)(param_1 + 0xc));
  return;
}

