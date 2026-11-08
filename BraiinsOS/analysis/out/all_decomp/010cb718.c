// FUN_010cb718 @ 010cb718 size=52 calls_out=0 calls_in=0
// strings: 

void FUN_010cb718(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x010cb748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0xc))(*param_1 + (*(int *)(param_1[1] + 8) - 1U & 0xfffffff8) + 8);
  return;
}

