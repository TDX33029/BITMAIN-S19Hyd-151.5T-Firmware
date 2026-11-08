// FUN_0072cffc @ 0072cffc size=48 calls_out=1 calls_in=0
// strings: 

void FUN_0072cffc(int param_1)

{
  if (*(int *)(param_1 + 4) == 2) {
    FUN_00f2d10c(param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0072d028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined4 **)(param_1 + 0x24))();
  return;
}

