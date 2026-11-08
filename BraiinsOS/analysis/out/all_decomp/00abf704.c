// FUN_00abf704 @ 00abf704 size=48 calls_out=1 calls_in=0
// strings: 

void FUN_00abf704(int param_1)

{
  if (*(int *)(param_1 + 4) == 2) {
    FUN_00a954c0(param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00abf730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined4 **)(param_1 + 0x24))();
  return;
}

