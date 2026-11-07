// FUN_017f100c @ 017f100c size=80 calls_out=2 calls_in=0
// strings: 

void FUN_017f100c(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xc);
  while (piVar1 != (int *)0x0) {
    piVar1 = (int *)*piVar1;
    thunk_FUN_01be4678();
  }
  FUN_01428000(*(undefined4 *)(param_1 + 0x14));
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x017f1054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x24) + 0xc))(*(undefined4 *)(param_1 + 0x28));
  return;
}

