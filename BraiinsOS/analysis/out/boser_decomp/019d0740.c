// FUN_019d0740 @ 019d0740 size=44 calls_out=0 calls_in=0
// strings: 

void FUN_019d0740(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x019d0768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x28))(*param_1 + (*(int *)(param_1[1] + 8) - 1U & 0xfffffff8) + 8);
  return;
}

