// FUN_014457bc @ 014457bc size=52 calls_out=0 calls_in=0
// strings: 

void FUN_014457bc(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x014457ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x10))(*param_1 + (*(int *)(param_1[1] + 8) - 1U & 0xfffffff8) + 8);
  return;
}

