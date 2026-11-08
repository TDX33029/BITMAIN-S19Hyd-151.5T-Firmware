// FUN_010ca53c @ 010ca53c size=128 calls_out=1 calls_in=2
// strings: 

void FUN_010ca53c(char *param_1)

{
  int *piVar1;
  
  if (*param_1 == '\x02') {
    piVar1 = *(int **)(param_1 + 4);
    (**(code **)(*piVar1 + 0x10))(piVar1 + 3,piVar1[1],piVar1[2]);
    thunk_FUN_016d3fb4(piVar1);
  }
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(*(int *)(param_1 + 8) + 0x10))
              (param_1 + 0x14,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x010ca5b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x18) + 0x10))
            (param_1 + 0x24,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  return;
}

