// FUN_009baf3c @ 009baf3c size=32 calls_out=0 calls_in=1
// strings: 

void FUN_009baf3c(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009baf58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x20))(*param_1 + (*(int *)(param_1[1] + 8) - 1U & 0xfffffff8) + 8);
  return;
}

