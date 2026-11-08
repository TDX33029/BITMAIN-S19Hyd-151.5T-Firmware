// FUN_009908dc @ 009908dc size=44 calls_out=1 calls_in=0
// strings: 

void FUN_009908dc(int param_1)

{
  FUN_00e7c67c();
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00990900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 4) + 0xc))(*(undefined4 *)(param_1 + 8));
  return;
}

