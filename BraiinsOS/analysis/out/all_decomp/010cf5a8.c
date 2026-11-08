// FUN_010cf5a8 @ 010cf5a8 size=48 calls_out=1 calls_in=0
// strings: 

void FUN_010cf5a8(int param_1)

{
  if (*(int *)(param_1 + 4) == 2) {
    FUN_010d1fe4(param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x010cf5d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined4 **)(param_1 + 0x24))();
  return;
}

