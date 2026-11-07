// FUN_01170a14 @ 01170a14 size=92 calls_out=2 calls_in=1
// strings: 

void FUN_01170a14(int param_1)

{
  int *piVar1;
  
  FUN_012840cc(param_1 + 0x20);
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
  piVar1 = (int *)(param_1 + 0x60);
  if (*piVar1 != -0x7fffffff) {
    if (*piVar1 == -0x80000000) {
      piVar1 = (int *)(param_1 + 100);
    }
    FUN_019bb7e0(*piVar1,piVar1[1]);
  }
  if (*(char *)(param_1 + 0x74) == '\x02') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01170a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x80) + 0x10))
            (param_1 + 0x8c,*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x88));
  return;
}

