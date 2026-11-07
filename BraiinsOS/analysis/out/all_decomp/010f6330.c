// FUN_010f6330 @ 010f6330 size=48 calls_out=1 calls_in=0
// strings: 

void FUN_010f6330(int param_1)

{
  if (*(int *)(param_1 + 4) == 2) {
    FUN_010e0740(param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x010f635c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined4 **)(param_1 + 0x24))();
  return;
}

