// FUN_010c7664 @ 010c7664 size=136 calls_out=1 calls_in=1
// strings: 

void FUN_010c7664(char *param_1)

{
  int *piVar1;
  
  if (*param_1 == '\x04') {
    return;
  }
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
                    /* WARNING: Could not recover jumptable at 0x010c76e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x18) + 0x10))
            (param_1 + 0x24,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  return;
}

