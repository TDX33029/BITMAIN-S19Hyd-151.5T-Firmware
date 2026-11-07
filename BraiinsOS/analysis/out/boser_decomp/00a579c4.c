// FUN_00a579c4 @ 00a579c4 size=64 calls_out=0 calls_in=2
// strings: 

void FUN_00a579c4(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x2f0);
  if ((uVar1 & 1) != 0) {
    (**(code **)(*(int *)(param_1 + 0x2e8) + 0xc))(*(undefined4 *)(param_1 + 0x2ec));
  }
  if ((uVar1 & 8) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a57a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x2e0) + 0xc))(*(undefined4 *)(param_1 + 0x2e4));
  return;
}

